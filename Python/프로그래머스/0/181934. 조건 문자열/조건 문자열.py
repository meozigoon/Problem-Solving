def solution(ineq, eq, n, m):
    if ineq == '>':
        if eq == '=':
            if n >= m:
                return 1
        else:
            if n > m:
                return 1
    else:
        if eq == '=':
            if n <= m:
                return 1
        else:
            if n < m:
                return 1
    return 0