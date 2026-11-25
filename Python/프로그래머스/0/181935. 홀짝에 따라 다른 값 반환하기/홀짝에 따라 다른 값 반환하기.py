def solution(n):
    if n % 2:
        return ((n - 1) / 2 + 1) * ((n - 1) / 2 + 1)
    return n * (n / 2 + 1) * (n + 1) / 3