////
////  BOJ_1654.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 10..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  랜선 자르기
////
//
#include <iostream>
#include <vector>

using namespace std;
long long binarySearch(long long left, long long right, long long toFind);

vector<long long> lans;

int main(void) {
    long long num, toFind, max, lan;
    max = -1;
    
    scanf("%lld %lld", &num, &toFind);
    for(int i = 0; i < num; i++) {
        scanf("%lld", &lan);
        lans.push_back(lan);
        if(max < lan) {
            max = lan;
        }
    }
    
    printf("%lld", binarySearch(1, max, toFind));
    
    return 0;
}

long long binarySearch(long long left, long long right, long long toFind) {
    if(left > right)
        return right;
    
    long long mid = (left + right) / 2;
    int cnt = 0;
    for(int i = 0; i < lans.size(); i++) {
        cnt += lans[i] / mid;
    }
    
    if(cnt >= toFind) {
        return binarySearch(mid + 1, right, toFind);
    } else {
        return binarySearch(left, mid - 1, toFind);
    }
}
