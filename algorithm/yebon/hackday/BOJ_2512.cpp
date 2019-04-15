////
////  BOJ_2512.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 10..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  예산
////
//
#include <iostream>
#include <vector>

using namespace std;
int binarySearch(int left, int right);

long long amount;
vector<int> moneys;

int main(void) {
    int num, max, money;
    max = -1;
    
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &money);
        moneys.push_back(money);
        if(max < money) {
            max = money;
        }
    }
    scanf("%lld", &amount);
    
    printf("%d", binarySearch(1, max));
    
    return 0;
}

int binarySearch(int left, int right) {
    if(left > right)
        return right;
    
    int mid = (left + right) / 2;
    int temp = 0;
    for(int i = 0; i < moneys.size(); i++) {
        if(moneys[i] < mid) {
            temp += moneys[i];
        } else {
            temp += mid;
        }
    }
    
    if(temp <= amount) {
        return binarySearch(mid + 1, right);
    } else {
        return binarySearch(left, mid - 1);
    }
}
