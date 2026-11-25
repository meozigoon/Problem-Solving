def solution(start_num, end_num):
    answer = []
    i = start_num
    while i >= end_num:
        answer.append(i)
        i -= 1
    return answer