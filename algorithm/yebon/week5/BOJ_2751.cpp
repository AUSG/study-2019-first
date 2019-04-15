////
////  BOJ_2751.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 15..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  정렬 merge
////
//
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 123456789

using namespace std;

vector<int> mergeSort(int start, int end);

vector<int> nums;

int main(void) {
    int num, tmp;
    
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &tmp);
        nums.push_back(tmp);
    }
    nums = mergeSort(0, num - 1);
    for(int i = 0; i < num; i++) {
        printf("%d\n", nums[i]);
    }
    
    return 0;
}

vector<int> mergeSort(int start, int end) {
    vector<int> tmpArr, leftArr, rightArr;
    int leftIdx, rightIdx;
    leftIdx = rightIdx = 0;
    
    if(start == end) {
        tmpArr.push_back(nums[start]);
        return tmpArr;
    }
    int mid = (start + end) / 2;
    leftArr = mergeSort(start, mid);
    rightArr = mergeSort(mid + 1, end);
    
    leftArr.push_back(MAX);
    rightArr.push_back(MAX);
    for(int i = start; i <= end; i++) {
        if(leftArr[leftIdx] < rightArr[rightIdx]) {
            tmpArr.push_back(leftArr[leftIdx++]);
        } else {
            tmpArr.push_back(rightArr[rightIdx++]);
        }
    }
    
    return tmpArr;
}
