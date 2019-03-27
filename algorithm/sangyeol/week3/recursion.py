# n=7일 때 (0,1,2,3), (0,1,2,4) ~ (3,4,5,6)

# Recursion 구현


def pick(n, picked, to_pick):
    # picked list 원소 개수가 to_pick과 일치할 때 print
    if to_pick == 0:
        return print(picked)

    # 처음 picked는 비어있는 리스트이기 때문에 samllest 초기화
    if len(picked) == 0:
        min = 0
    # loop에 들어갈 smallest 값 정의
    else:
        min = picked[-1] + 1
    # 배열을 채우고 n까지 append, recursive, pop
    for var in range(min, n):
        picked.append(var)
        pick(n, picked, to_pick-1)
        picked.pop()


result = list()
pick(7, result, 4)
