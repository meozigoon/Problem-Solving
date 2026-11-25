def solution(my_string):
    answer = []
    for i in my_string:
        if '0' <= i and i <= '9':
            answer.append(int(i))
    answer.sort()
    return answer