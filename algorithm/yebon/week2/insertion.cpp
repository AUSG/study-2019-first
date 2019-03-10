////
////  insertion.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 10..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  Insertion Sort
////  O(N^2)의 정렬 알고리즘 중에서는 삽입정렬이 제일 빠르다.
////
//
#include <iostream>
#include <vector>

using namespace std;
vector<int> nums{23, 15, 50, 37, 4, 90, 89, 34, 20, 95};

void insertionSort();
void printAll();

int main(void) {
    insertionSort();
    printAll();
    return 0;
}

// 내 소스
// void insertionSort() {
//     int tmp;
//     for(int i = 1; i < nums.size(); i++) {
//         for(int j = 0; j < i; j++) {
//             if(nums[j] > nums[i]) {
//                 tmp = nums[i];
//                 for(int k = i; k > j; k--) {
//                     nums[k] = nums[k-1];
//                 }
//                 nums[j] = tmp;
//                 break;
//             }
//         }
//     }
// }

//개선 소스
void insertionSort() {
    int tmp;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i-1; nums[j] > nums[j+1] && j >= 0; j--) {
            tmp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1] = tmp;
        }
    }
}

void printAll() {
    for(auto iter = nums.begin(); iter != nums.end(); ++iter) {
        printf("%d ", *iter);
    }
}
