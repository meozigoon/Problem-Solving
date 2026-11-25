def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

def solution(numer1, denom1, numer2, denom2):
    l = gcd(denom1, denom2) * denom1 * denom2
    numer1 *= l / denom1
    numer2 *= l / denom2
    num = numer1 + numer2
    g = gcd(l, num)
    answer = [num / g, l / g]
    return answer