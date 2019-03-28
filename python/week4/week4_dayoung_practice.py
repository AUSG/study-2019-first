

#1. 사용자로부터 숫자를 입력받아 while문을 통해 그 숫자의 구구단을 출력하는 프로그램을 작성하세요.

num = int(input("입력 : "))
num2 = 0

while num2 < 9 :
    print(str(num) + " * " + str(num2+1) + " = " + str((num2+1) * num))
    num2 = num2 + 1
else :
    print("\n")



#아우쓱 카페에 왔습니다! 사용자로부터 현재 소지금과 원하는 메뉴를 입력받아 가능할 경우 메뉴를 내어주고 안될 경우 안된다고 안내해주세요.(단, 사용자가 종료 메뉴를 입력하기 전까지 음료를 계속 주문받아야 합니다.)



print("<메뉴>\n1. 아메리카노 - 3000\n2. 카페라떼 - 4000\n3. 카페모카 - 4100\n4. 콜드브루 - 4500\n5. 주문완료!")
menu = 1

while menu != 5 :
        menu = int(input("어떤 메뉴를 고르시겠어요?: "))
        if menu == 1 : 
                money = int(input("현재 얼마나 현금을 소지하고 계신가요?: "))
                if money < 3000 : 
                        print("잔액이 부족합니다.")
                else : 
                        print("주문하신 아메리카노 나왔습니다.")
        elif menu == 2 :
                money = int(input("현재 얼마나 현금을 소지하고 계신가요?: "))
                if money < 4000 : 
                        print("잔액이 부족합니다.")
                else : 
                        print("주문하신 카페라떼 나왔습니다.")
        elif menu == 3 :
                money = int(input("현재 얼마나 현금을 소지하고 계신가요?: "))
                if money < 4100 : 
                        print("잔액이 부족합니다.")
                else : 
                        print("주문하신 카페모카 나왔습니다.")
        elif menu == 4 :
                money = int(input("현재 얼마나 현금을 소지하고 계신가요?: "))
                if money < 4500 : 
                        print("잔액이 부족합니다.")
                else : 
                        print("주문하신 콜드브루 나왔습니다.")
else : 
        print("안녕히 가세요~\n")
#원래 이렇게 하나씩 적는게 맞는건가요,,,?



#3. (삼각형 만들기) 아래와 같은 삼각형을 while문을 통해 출력하세요.

tri = 0

while tri < 5 :
        tri += 1
        print("*"* tri)

#저번주에..." "넣었던게 뭔지 기억이 안나다ㅜㅡㅜ


#4. (삼각형 만들기) 아래와 같은 삼각형을 while문을 통해 출력하세요

tri2 = 0

while tri2 < 5 :
        print((" " * (4 - tri2)) + ("*"* tri2))
        tri2 += 1


        
        
        











        
        
