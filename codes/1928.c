#define MAXN 1005
#define MAXT 1005
#define MAXPQSIZE 200001
#define INF 1000000000

typedef struct {
    int node, cost, time;
} State;

typedef struct {
    State heap[MAXPQSIZE];
    int size;
} PriorityQueue;

void swap(State* a, State* b) {
    State tmp = *a;
    *a = *b;
    *b = tmp;
}

void push(PriorityQueue* pq, State s) {
    if (pq->size + 1 >= MAXPQSIZE) return;
    pq->heap[++pq->size] = s;
    int i = pq->size;
    while (i > 1 && pq->heap[i].cost < pq->heap[i / 2].cost) {
        swap(&pq->heap[i], &pq->heap[i / 2]);
        i /= 2;
    }
}

State pop(PriorityQueue* pq) {
    State top = pq->heap[1];
    pq->heap[1] = pq->heap[pq->size--];
    int i = 1;
    while (1) {
        int smallest = i;
        if (2 * i <= pq->size && pq->heap[2 * i].cost < pq->heap[smallest].cost) smallest = 2 * i;
        if (2 * i + 1 <= pq->size && pq->heap[2 * i + 1].cost < pq->heap[smallest].cost) smallest = 2 * i + 1;
        if (smallest == i) break;
        swap(&pq->heap[i], &pq->heap[smallest]);
        i = smallest;
    }
    return top;
}

int minCost(int maxTime, int** edges, int edgesSize, int* edgesColSize, int* passingFees, int passingFeesSize) {
    int n = passingFeesSize;

    typedef struct {
        int to, time;
    } Edge;

    Edge* graph[MAXN];
    int degree[MAXN] = {0};

    for (int i = 0; i < n; i++) {
        graph[i] = malloc(sizeof(Edge) * edgesSize * 2);
    }

    for (int i = 0; i < edgesSize; i++) {
        int u = edges[i][0], v = edges[i][1], t = edges[i][2];
        graph[u][degree[u]++] = (Edge){v, t};
        graph[v][degree[v]++] = (Edge){u, t};
    }

    int dp[MAXN][MAXT];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= maxTime; j++)
            dp[i][j] = INF;

    PriorityQueue pq = { .size = 0 };
    push(&pq, (State){0, passingFees[0], 0});
    dp[0][0] = passingFees[0];

    while (pq.size > 0) {
        State curr = pop(&pq);
        int u = curr.node, c = curr.cost, t = curr.time;

        if (u == n - 1) return c;

        for (int i = 0; i < degree[u]; i++) {
            int v = graph[u][i].to;
            int t2 = t + graph[u][i].time;
            if (t2 > maxTime) continue;
            int c2 = c + passingFees[v];
            if (c2 < dp[v][t2]) {
                dp[v][t2] = c2;
                push(&pq, (State){v, c2, t2});
            }
        }
    }

    return -1;
}
