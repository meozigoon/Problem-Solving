def solution(n):
    answer = []
    i = 1
    while i < n ** 0.5:
        if n % i == 0:
            answer.append(i)
            answer.append(n // i)
        i += 1
    if n ** 0.5 == int(n ** 0.5):
        answer.append(n ** 0.5)
    answer.sort()
    return answer