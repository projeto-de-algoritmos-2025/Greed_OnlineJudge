import heapq

class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        from collections import Counter
        # Conta quantas vezes cada tarefa aparece
        contagem = Counter(tasks)
        
        # Usa um heap max (simulado com negativos)
        heap = [-freq for freq in contagem.values()]
        heapq.heapify(heap)
        
        tempo = 0
        while heap:
            i = 0
            fila_temp = []
            
            # Executa até n+1 tarefas diferentes nesse ciclo
            while i <= n:
                if heap:
                    freq = heapq.heappop(heap)
                    # Decrementa a frequência (lembrando que é negativo)
                    if freq + 1 < 0:
                        fila_temp.append(freq + 1)
                tempo += 1
                if not heap and not fila_temp:
                    break
                i += 1
            
            # Reinsere tarefas ainda não finalizadas
            for item in fila_temp:
                heapq.heappush(heap, item)
        
        return tempo
