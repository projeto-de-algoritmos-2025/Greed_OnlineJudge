from bisect import bisect_right

class Solution:
    def jobScheduling(self, startTime: list[int], endTime: list[int], profit: list[int]) -> int:
        # Junta os dados e ordena os jobs por tempo de término
        jobs = sorted(zip(startTime, endTime, profit), key=lambda x: x[1])
        
        # Lista com tuplas (tempo de fim, lucro acumulado)
        dp = [(0, 0)]  # Começa no tempo 0 com lucro 0
        
        for s, e, p in jobs:
            # Busca o maior tempo de fim anterior ou igual ao tempo de início atual
            i = bisect_right(dp, (s, float('inf'))) - 1
            lucro = dp[i][1] + p
            # Atualiza o DP se esse lucro for melhor
            if lucro > dp[-1][1]:
                dp.append((e, lucro))
        
        return dp[-1][1]
