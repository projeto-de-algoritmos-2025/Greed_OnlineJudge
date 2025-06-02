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

### 🔗 [1710. Maximum Units on a Truck](https://leetcode.com/problems/maximum-units-on-a-truck/description/)
 Resumo: Dado diferentes tipos de caixas, cada tipo com uma quantidade de caixas e unidades por caixa, e uma capacidade máxima do caminhão, retorne o número máximo de unidades que o caminhão pode carregar.

- Nível de dificuldade: Fácil.

### 🧠 Algoritmo utilizado:

Greedy (ganancioso por densidade de unidades): Ordena os tipos de caixas pela maior quantidade de unidades por caixa e seleciona os tipos mais valiosos primeiro até preencher a capacidade do caminhão.

### 🔗 [1235. Maximum Profit in Job Scheduling](https://leetcode.com/problems/maximum-profit-in-job-scheduling/description/)
Resumo: Dado uma lista de trabalhos com início, fim e lucro, encontre o subconjunto de trabalhos não sobrepostos que gera o lucro máximo possível.

- Nível de dificuldade: Difícil.

### 🧠 Algoritmo utilizado:

Greedy + Programação Dinâmica com Busca Binária: Ordena os trabalhos por fim, e para cada trabalho, decide entre incluí-lo ou não. Usa busca binária para encontrar o último trabalho compatível (sem sobreposição) e programação dinâmica para memorizar os lucros acumulados.

---
## Screenshots
- Problema 621
<img width="734" alt="621" src="https://github.com/projeto-de-algoritmos-2025/Greed_OnlineJudge/blob/main/images/621.png?raw=true">

- Problema 621
<img width="734" alt="1235" src="https://github.com/projeto-de-algoritmos-2025/Greed_OnlineJudge/blob/main/images/1235.png?raw=true">

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
A apresentação da entrega pode ser visualizada [aqui]().
