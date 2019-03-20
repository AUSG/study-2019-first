
far = input("화씨를 입력하세요 :")
cel = (float(far) - 32)/1.8
# cel = 5.5555555(far = 42일 경우)
# cel * 100 = 555.555555...
# int(cel * 100) = 555
# int(cel * 100) / 100 = 5.55
print(far + "의 섭씨 온도는 " + str(int(cel*100)/100) + " 입니다.")
print("%s의 섭씨 온도는 %0.2f 입니다." % (far, cel))
print("%d의 섭씨 온도는 %0.2f 입니다." % (int(far), cel))


#화씨 온도를 섭씨 온도로 변환하기
'''
ftemp = float(input("화씨온도를 입력하세요: "));
ctemp = (ftemp-32)*5/9
print("섭씨온도 :", ctemp)
'''

# AUSG 동물원에 왔습니다! 사용자로부터 공작과 사자의 마리 수를 입력받아 총 다리 개수를 출력하는 프로그램을 작성하세요.

lion = input("사자는 :")
bird = input("공작은 :")
leg1 = int(lion)*4
leg2 = int(bird)*2
sum = leg1+leg2
print("공작과 사자의 다리 갯수는 총 "+str(sum)+" 입니다. ")



# 사용자로부터 숫자를 입력받아 그 숫자의 구구단을 출력하는 프로그램을 작성하세요.

num1 = int(input("숫자를 입력하시오 :"))
for i in range(1,10):
    print(num1, "*", i, "=", num1*i)

        
