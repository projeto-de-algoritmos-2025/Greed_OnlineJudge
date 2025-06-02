# Lista de Exercícios de um Juiz Online Sobre Algoritmos Ambiciosos 

**Número da Lista**: 3<br>
**Conteúdo da Disciplina**: Algoritmos Ambiciosos<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 21/1031584  |  Ana Letícia Melo Pereira |
| 20/0073184 |  Mateus Fidelis Marinho Maia |

## Sobre 
Para desenvolver o conteúdo abordado no tópico de Algoritmos Ambiciosos, a dupla selecionou alguns exercícios em um juiz online - o LeetCode -, sendo eles, dois de nível difícil, um de nível médio e um de nível fácil. Para obter mais informações sobre os enunciados propostos, basta clicar no link que aparece no título de cada um.

### 🔗 [621. Task Scheduler](https://leetcode.com/problems/task-scheduler/description/)
 Resumo: Dado um array de tarefas com possíveis repetições e um tempo de espera n, calcule o tempo mínimo necessário para executar todas as tarefas com pelo menos n unidades de tempo entre duas tarefas iguais.
- Nível de dificuldade: Médio.

### 🧠 Algoritmo utilizado:

  Greedy + Heap (ou Contagem e Matemática): Conta as tarefas mais frequentes e distribui os intervalos de forma otimizada. A ideia é preencher os espaços de forma eficiente com outras tarefas ou intervalos vazios.


### 🔗 [1235. Maximum Profit in Job Scheduling](https://leetcode.com/problems/maximum-profit-in-job-scheduling/description/)
Resumo: Dado uma lista de trabalhos com início, fim e lucro, encontre o subconjunto de trabalhos não sobrepostos que gera o lucro máximo possível.

- Nível de dificuldade: Difícil.

### 🧠 Algoritmo utilizado:

Greedy + Programação Dinâmica com Busca Binária: Ordena os trabalhos por fim, e para cada trabalho, decide entre incluí-lo ou não. Usa busca binária para encontrar o último trabalho compatível (sem sobreposição) e programação dinâmica para memorizar os lucros acumulados.


### 🔗 [1928. Minimum Cost to Reach Destination in Time](https://leetcode.com/problems/minimum-cost-to-reach-destination-in-time/)
**Resumo:** Dado um grafo onde cada aresta tem um tempo de travessia e cada nó possui um custo (pedágio), o objetivo é sair do nó `0` e chegar ao nó `n - 1` com o menor custo total possível, respeitando um tempo máximo (`maxTime`) para completar a jornada.

- **Nível de dificuldade:** Difícil.

### 🧠 Algoritmo utilizado:

**A\*** (Busca informada com prioridade por menor custo):  
A solução utiliza uma variação do algoritmo A\*, com prioridade baseada no menor custo total de pedágio. Embora não seja usada uma heurística adicional, a estrutura do A\* se mantém, funcionando na prática como uma versão do algoritmo de Dijkstra com restrição de tempo.

A abordagem mantém um registro do menor custo para se chegar a cada nó em cada tempo possível (`dp[nó][tempo]`) e evita explorar caminhos que já foram visitados com custo menor. Uma fila de prioridade é usada para processar os estados em ordem crescente de custo, garantindo que a primeira vez que o destino for alcançado será com o menor custo possível dentro do limite de tempo.


### 🔗 [1091. Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/)
**Resumo:** Dada uma matriz binária `n x n`, onde `0` representa uma célula livre e `1` uma célula bloqueada, o objetivo é encontrar o caminho mais curto (em número de passos) da célula superior esquerda `(0, 0)` até a inferior direita `(n - 1, n - 1)`, movendo-se em até 8 direções (incluindo diagonais). Caso não exista um caminho viável, retornar `-1`.

- **Nível de dificuldade:** Médio.

### 🧠 Algoritmo utilizado:

**A\*** (Busca informada com heurística):  
A abordagem utiliza o algoritmo A\*, que explora os caminhos em ordem de prioridade baseada no custo total estimado `f(n) = g(n) + h(n)`:
- `g(n)` é o custo real para chegar até a célula atual (número de passos).
- `h(n)` é a heurística estimando a distância restante até o destino.

A heurística escolhida é a **distância de Chebyshev** (`max(|dx|, |dy|)`), que é admissível e apropriada para movimentação em 8 direções com custo uniforme por movimento.

Além disso, é usada uma matriz `gScore[n][n]` para registrar o menor custo conhecido até cada célula, permitindo que o algoritmo revise caminhos já visitados se uma nova rota mais eficiente for encontrada — algo necessário para garantir a corretude do A\*.

O algoritmo termina quando a célula de destino `(n - 1, n - 1)` for alcançada com o menor número possível de passos, ou retorna `-1` se não houver caminho.

---
## Screenshots
- Problema 621
<img width="734" alt="621" src="https://github.com/projeto-de-algoritmos-2025/Greed_OnlineJudge/blob/main/images/621.png?raw=true">

- Problema 1235
<img width="734" alt="1235" src="https://github.com/projeto-de-algoritmos-2025/Greed_OnlineJudge/blob/main/images/1235.png?raw=true">

- Problema 1928
<img width="734" alt="1928" src="https://github.com/projeto-de-algoritmos-2025/Greed_OnlineJudge/blob/main/images/1928.png?raw=true">

- Problema 1091
<img width="734" alt="1091" src="https://github.com/projeto-de-algoritmos-2025/Greed_OnlineJudge/blob/main/images/1091.png?raw=true">

## Instalação 

Linguagens: C e Python
Pré-requisitos: Compilador GCC, Python 3.4 

## 1. Clone o repositório 

```bash
git clone https://github.com/projeto-de-algoritmos-2025/Grafos1-OnlineJudge.git
```

### 2. Compile o programa

Em C:
```bash
gcc -o nome_do_arquivo.c nome_do_executável  
./nome_do_executável
```

Em Python:
```bash
python arquivo.py
```

## Uso 
Para aplicar os casos de teste (in e out), basta acessar o link referente ao exercício no LeetCode e inserí-los no prompt de comando, também é possível gerar novos casos de teste, desde que cumpram os requisitos do exercício em questão.

## Outros 
A apresentação da entrega pode ser visualizada [aqui](https://unbbr.sharepoint.com/sites/TrabalhodePA412/_layouts/15/stream.aspx?id=%2Fsites%2FTrabalhodePA412%2FDocumentos%20Compartilhados%2FGeneral%2FRecordings%2FReunião%20em%20General-20250602_195334-Gravação%20de%20Reunião%2Emp4&nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJTdHJlYW1XZWJBcHAiLCJyZWZlcnJhbFZpZXciOiJTaGFyZURpYWxvZy1MaW5rIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXcifX0&ga=1&referrer=StreamWebApp%2EWeb&referrerScenario=AddressBarCopied%2Eview%2Eb8558749-f4b2-4f1f-a4e4-f1476eb36489).
