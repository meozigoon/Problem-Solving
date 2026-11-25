def solution(num_list):
    answer = num_list
    if num_list[-1] > num_list[-2]:
        answer.append(num_list[-1] - num_list[-2])
    else:
        answer.append(2 * num_list[-1])
    return answer