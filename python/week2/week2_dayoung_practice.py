#week2

#사용자로부터 화씨 온도를 입력받아 섭씨 온도로 바꿔 출력하는 프로그램을 작성하세요

far = input('화씨 온도를 입력하세요: ')
cel = (float(far)-32)*5/9
'''
print(far)
print(cel)
print(far+'의 섭씨 온도는'+"{0:.2f}".format(float(cel))+ '입니다.') #이건 반올림됨
'''
print(far + '의 섭씨 온도는 ' + str(int(cel*100)*0.01)+ '입니다.' )


#사용자로부터 공작과 사자의 마리 수를 입력받아 총 다리 개수를 출력하는 프로그램을 작성하세요.

peacock = input('공작은: ')
lion = input('사자는: ')

print('공작과 사자의 다리 개수는 총 ' +str(int(peacock)*2+int(lion)*4)+ '개 입니다.')


#사용자로부터 숫자를 입력받아 그 숫자의 구구단을 출력하는 프로그램을 작성하세요

num = input('입력 : ')

for c in range (1,10) :
    print(num + " * {0} = {1}" .format(c, int(num)*c))

'''
#1) print(num + " * 1 = " + str(int(num)*1)) 

#2) for c in range (1,10) :
    print(num + " * %d = " % c, int(num)*c)
'''    
