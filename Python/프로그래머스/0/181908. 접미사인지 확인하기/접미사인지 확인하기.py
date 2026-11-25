def solution(my_string, is_suffix):
    for i in range(len(my_string)):
        if is_suffix == my_string[i:]:
            return 1
    return 0