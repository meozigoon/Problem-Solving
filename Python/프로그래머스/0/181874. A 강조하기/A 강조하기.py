def solution(myString):
    answer = ''
    for i in myString:
        if i == 'a' or i == 'A':
            answer += 'A'
        else:
            answer += i.lower()
    return answer