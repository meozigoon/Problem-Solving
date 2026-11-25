def solution(array):
    array.sort()
    return array[(len(array) - 1) // 2]