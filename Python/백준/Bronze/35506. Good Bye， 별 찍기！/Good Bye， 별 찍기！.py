n = int(input())
for i in range(1, 2 * n + 1):
    print(" " * (2 * n - i) + "*" + i * " ", end = '')
    if i <= n:
        print(" " * (n -  i) + "* " + " " * (i - 1) * 2 + "*" + " " * (n -  i))
    else:
        print(" " * (i - n - 1) + "* " + " " * (2 * n - i) * 2 + "*" + " " * (i - n - 1))