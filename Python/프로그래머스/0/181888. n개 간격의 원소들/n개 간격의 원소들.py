def solution(num_list, n):
    answer = []
    i = 0
    while i < len(num_list):
        answer.append(num_list[i])
        i += n
    return answer