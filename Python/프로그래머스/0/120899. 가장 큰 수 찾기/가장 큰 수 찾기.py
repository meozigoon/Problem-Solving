def solution(array):
    maxn = 0
    maxi = 0
    for i in range(len(array)):
        if array[i] > maxn:
            maxn = array[i]
            maxi = i
    return [maxn, maxi]