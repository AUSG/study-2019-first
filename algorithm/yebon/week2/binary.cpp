////
////  binary.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 10..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  Binary Search
////
//
#include <iostream>
#include <vector>

using namespace std;
vector<int> nums{8, 15, 23, 37, 48, 58, 62, 78, 89, 95};

int binarySearch(int start, int end, int findingNum);

int main(void) {
    int findingNum = 37;

    printf("%d\n", binarySearch(0, nums.size(), findingNum));
}

int binarySearch(int start, int end, int findingNum) {
    if(start > end) {
        return -1;
    }
    int mid = (start + end) / 2;

    if(nums[mid] == findingNum) {
        return mid;
    } else if(nums[mid] < findingNum) {
        return binarySearch(mid + 1, end, findingNum);
    } else {
        return binarySearch(start, mid - 1, findingNum);
    }
}