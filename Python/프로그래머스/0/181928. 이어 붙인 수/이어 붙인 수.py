def solution(num_list):
    cnt0 = cnt1 = 0
    for i in num_list:
        if i % 2:
            cnt1 = cnt1 * 10 + i
        else:
            cnt0 = cnt0 * 10 + i
    return cnt1 + cnt0