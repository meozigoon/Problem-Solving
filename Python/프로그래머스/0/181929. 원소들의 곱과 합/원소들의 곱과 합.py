def solution(num_list):
    mul = 1
    for i in num_list:
        mul *= i
    if mul < sum(num_list) ** 2:
        return 1
    else:
        return 0