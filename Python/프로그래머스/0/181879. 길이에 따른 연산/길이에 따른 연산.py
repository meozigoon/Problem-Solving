def solution(num_list):
    answer = 0
    if len(num_list) >= 11:
        answer = sum(num_list)
    else:
        answer = 1
        for i in num_list:
            answer *= i
    return answer