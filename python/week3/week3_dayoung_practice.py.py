
#1. 사용자로부터 나이와 운전 면허 소유 여부를 입력받아 운전자 보험 가입이 가능한지에 대해 출력하세요.

# 20세 이상 65세 이하의 운전면허 소지자만 운전자 보험 가입이 가능하다고 가정한다. 

age = int(input("나이를 입력하세요 : "))
drive = input("운전 면허를 취득하셧나요?(y/n)")

if age >= 20 and age <= 65 and drive == "y" :
	print("운전자 보험 가입이 가능합니다.")
else : 
        print("운전자 보험 가입이 불가합니다.")

print("\n")

#2. 교수님이 학점을 입력하고 있습니다. 교수님은 절대평가 방식으로 학점을 주십니다. 점수를 입력받아 90점 이상에게는 A, 80점 이상에게는 B, 70점 이상에게는 C, 60점 이상에게는 D, 60점 미만에게는 F를 출력하는 프로그램을 작성하세요

score = float(input("점수를 입력하세요 : "))

if  score >= 90 : 
	print("당신의 학점은 A입니다.")
elif score < 90 and score >= 80 : 
	print("당신의 학점은 B입니다.")
elif score < 80 and score >= 70 : 
	print("당신의 학점은 C입니다.")
elif score < 70 and score >= 60 : 
	print("당신의 학점은 D입니다.")
else : 
	print("당신의 학점은 F입니다.")
	
print("\n")

#3. 아우쓱 카페에 왔습니다! 사용자로부터 현재 소지금과 원하는 메뉴를 입력받아 가능할 경우 메뉴를 내어주고 안될 경우 안된다고 안내해주세요.

menu = int(input("<메뉴>\n1. 아메리카노 - 3000 \n2. 카페라떼 - 4000 \n3. 카페모카 - 4100 \n4. 콜드브루 - 4500\n\n어떤 메뉴를 고르시겠어요?: "))
money = int(input("현재 얼마나 현금을 소지하고 계신가요?: "))

if menu == 1 :
        if money < 3000 :
                print("잔액이 부족합니다.")
        else :
                print("주문하신 아메리카노 나왔습니다.")
if menu == 2 :
        if money < 4000 :
                print("잔액이 부족합니다.")
        else :
                print("주문하신 카페라떼 나왔습니다.")	
if menu == 3 :
        if money < 4100 :
                print("잔액이 부족합니다.")
        else :
                print("주문하신 카페모카 나왔습니다.")
if menu == 4 :
        if money < 4500 :
                print("잔액이 부족합니다.")
        else :
                print("주문하신 콜드브루 나왔습니다.")




	
	

        
