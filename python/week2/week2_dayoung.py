# week2

"""
이름
날짜
"""



#input된 값은 str / 정수는 int / 실수 float / 문자열 str

age = input()

print('저는 '+age+'살 입니다.')
print('저는 {0}살 입니다.'.format(age))


print('저는 \' 살입니다')



print('10년 뒤에 당신은'+str(int(age)+10)+'살입니다.')


age = input()

print("당신은 10년 뒤에"+str(int(age)+10)+"살 입니다.")
print("당신은 10년 뒤에"+str(float(age)+10)+"살 입니다.")
print("저는\" "+age+"살 입니다.")
print("저는 {0}살 입니다.".format(age))

string = "aaaa"
num = 3

#print(string+str(num))

print("___hello___", sep=' ')

print('This is the first line')
print('This is the second line')

print(r'This is the first line\nThis is the second line')
print('This is the first line\nThis is the second line')



#연습문제_출력은 문자열 숫자 가능! 같이는 불가
kor = input("국어 점수를 입력해주세요 : ")
eng = input("영어 점수를 입력해주세요 : ")
math = input("수학 점수를 입력해주세요 : ")

print('당신의 평균은 '+str((int(kor)+int(eng)+int(math))/3)+'입니다')

print((int(kor)+int(eng)+int(math))/3)








print(5&3)




