# 문제
# 수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.
# 1. 산술평균: N개의 수들의 합을 N으로 나눈 값
# 2. 중앙값: N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
# 3. 최빈값: N개의 수들 중 가장 많이 나타나는 값
# 4. 범위: N개의 수들 중 최댓값과 최솟값의 차이
# N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.

# 입력
# 첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.

# 출력
# 첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.
# 둘째 줄에는 중앙값을 출력한다.
# 셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.
# 넷째 줄에는 범위를 출력한다.


# 시간 초과 발생
# input_try = int(s())

# input_list = list()
# for i in range(input_try):
#     input_list.append(int(s()))

# input 대신 sys.stdin.readline 사용
import sys
s = sys.stdin.readline

number = int(s())
arr = []

for num in range(0, number):
    num = int(s())
    arr.append(num)


def average(list):
    # sum = 0

    # for num in range(0, number):
    #     sum += list[num]

    return round(sum(list)/number)


def mid(list):
    list.sort()

    mid = (number//2)

    return list[mid]


def frequency(list):
    freq = {}

    for num in list:
        if num not in freq:
            freq[num] = 1
        else:
            freq[num] += 1

    max_value = max(freq.values())
    max_value_array = []

    for key, value in freq.items():
        if value == max_value:
            max_value_array.append(key)

    max_value_array.sort()

    min_key = min(max_value_array)
    max_key = max(max_value_array)

    for num in max_value_array:
        if num > min_key or max_key == min_key:
            return num


def scope(list):
    return max(list) - min(list)


print(average(arr))
print(mid(arr))
print(frequency(arr))
print(scope(arr))
