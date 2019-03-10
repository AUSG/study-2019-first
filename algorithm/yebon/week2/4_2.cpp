////
////  4_2.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 6..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  이동평균 구하기
////
//
#include <iostream>
#include <vector>

using namespace std;

/*
내가 짠 코드 : N 개수가 정해진 것이 아니므로 
sum = nums[0] + nums[1] + nums[2] 처럼 구현하면 안됨.

int main(void) {
    int sum = 0;
    int N = 3;
    int M = 12;
    vector<int> nums{10, 20, 30, 40, 50, 60, 60, 50, 40, 30, 20, 10};
    
    sum = nums[0] + nums[1] + nums[2];
    printf("%.1lf \n", (float)sum/N);
    
    for(int i=N ; i<M; i++) {
        sum -= nums[i-N];
        sum += nums[i];
        printf("%.1lf \n", (float)sum/N);
    }
    
    return 0;
}
*/

// 수정코드
// 더 개선할 수 있음 책 참고
int main(void) {
    int sum = 0;
    int N = 3;
    int M = 12;
    vector<int> nums{10, 20, 30, 40, 50, 60, 60, 50, 40, 30, 20, 10};
    
    for(int i = 0; i < N; i++) {
        sum += nums[i];
    }
    for(int i = N-1 ; i < M; i++) {
        printf("%.1lf \n", (float)sum/N);
        if(i+1 == M)
            break;
        sum -= nums[i-N+1];
        sum += nums[i+1];
    }
    
    return 0;
}