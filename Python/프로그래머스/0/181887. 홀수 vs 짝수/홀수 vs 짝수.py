def solution(num_list):
    sum1 = sum2 = 0
    for i in range(len(num_list)):
        if i % 2:
            sum1 += num_list[i]
        else:
            sum2 += num_list[i]
    return max(sum1, sum2)