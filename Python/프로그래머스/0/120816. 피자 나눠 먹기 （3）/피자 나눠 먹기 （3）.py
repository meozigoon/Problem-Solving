def solution(slice, n):
    if n % slice:
        return n // slice + 1
    else:
        return n // slice