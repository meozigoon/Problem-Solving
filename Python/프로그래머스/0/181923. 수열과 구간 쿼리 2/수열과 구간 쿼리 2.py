def solution(arr, queries):
    answer = []
    for s, e, k in queries:
        ch = True
        mi = 1000000
        for i in range(s, e + 1):
            if arr[i] > k:
                mi = min(mi, arr[i])
                ch = False
        if ch:
            answer.append(-1)
        else:
            answer.append(mi)
    return answer