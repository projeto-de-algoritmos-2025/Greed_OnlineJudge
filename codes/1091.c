#include <stdlib.h>
#include <math.h>

typedef struct {
    int x, y, g, f;
} Node;

int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void swap(Node* a, Node* b) {
    Node tmp = *a; *a = *b; *b = tmp;
}

void push(Node* heap, int* size, Node n) {
    heap[++(*size)] = n;
    int i = *size;
    while (i > 1 && heap[i].f < heap[i / 2].f) {
        swap(&heap[i], &heap[i / 2]);
        i /= 2;
    }
}

Node pop(Node* heap, int* size) {
    Node top = heap[1];
    heap[1] = heap[(*size)--];
    int i = 1;
    while (1) {
        int smallest = i;
        if (2*i <= *size && heap[2*i].f < heap[smallest].f) smallest = 2*i;
        if (2*i+1 <= *size && heap[2*i+1].f < heap[smallest].f) smallest = 2*i+1;
        if (smallest == i) break;
        swap(&heap[i], &heap[smallest]);
        i = smallest;
    }
    return top;
}

int abs_int(int x) {
    return x < 0 ? -x : x;
}

int max_int(int a, int b) {
    return a > b ? a : b;
}

int shortestPathBinaryMatrix(int** grid, int n, int* gridColSize) {
    if (grid[0][0] != 0 || grid[n-1][n-1] != 0)
        return -1;

    int gScore[105][105];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            gScore[i][j] = 1e9;

    Node heap[10005];
    int heapSize = 0;

    gScore[0][0] = 1;
    int h = max_int(abs_int(n - 1), abs_int(n - 1));
    push(heap, &heapSize, (Node){0, 0, 1, 1 + h});

    while (heapSize > 0) {
        Node curr = pop(heap, &heapSize);
        int x = curr.x, y = curr.y, g = curr.g;

        if (x == n - 1 && y == n - 1)
            return g;

        for (int d = 0; d < 8; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 0 && ny >= 0 && nx < n && ny < n && grid[nx][ny] == 0) {
                int ng = g + 1;
                if (ng < gScore[nx][ny]) {
                    gScore[nx][ny] = ng;
                    int h2 = max_int(abs_int(n - 1 - nx), abs_int(n - 1 - ny));
                    push(heap, &heapSize, (Node){nx, ny, ng, ng + h2});
                }
            }
        }
    }

    return -1;
}
