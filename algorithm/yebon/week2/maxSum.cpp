////
////  maxSum.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 10..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  최대 연속 부분 구간 합
////  정답은 [4, -3, 6, 3]
////
//
#include <iostream>
#include <vector>

using namespace std;
vector<int> nums{-7, 4, -3, 6, 3, -8, 3, 4};
const int M_INF = -987654321;

void roughMaxSum();
int divideConquerGreedyMaxSum(int start, int end);
int dynamicMaxSum();
void dynamicMaxSumPrintIndex();
void printSection(int start, int end);

int main(void) {
    roughMaxSum();
    printf("%d \n", divideConquerGreedyMaxSum(0, nums.size() - 1));
    printf("%d \n", dynamicMaxSum());
    dynamicMaxSumPrintIndex();
    
    return 0;
}

void roughMaxSum() {
    int max = M_INF;
    int sum, start, end;
    
    sum = start = end = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        sum = 0;
        for(int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if(max < sum) {
                max = sum;
                start = i;
                end = j;
            }
        }
    }
    printSection(start, end);
}

int divideConquerGreedyMaxSum(int start, int end) {
    if(start > end) return M_INF;
    if(start == end) return nums[start];
    int mid = (start + end) / 2;
    int leftSum, rightSum;
    int leftMax, rightMax;
    int left, right;
    
    leftSum = rightSum = 0;
    leftMax = rightMax = M_INF;
    left = right = 0;
    for(int i = mid; i >= start; i--) {
        leftSum += nums[i];
        if (leftMax < leftSum) {
            left = i;
            leftMax = leftSum;
        }
    }
    for(int i = mid + 1; i <= end; i++) {
        rightSum += nums[i];
        if (rightMax < rightSum) {
            right = i;
            rightMax = rightSum;
        }
    }
    int leftDivided, rightDivided;
    leftDivided = divideConquerGreedyMaxSum(start, mid);
    rightDivided = divideConquerGreedyMaxSum(mid + 1, end);
    int divided = (leftDivided > rightDivided) ? leftDivided : rightDivided;
    int sum = leftMax + rightMax;
    
//    // 출력코드
//    if(sum > divided) {
//        printSection(left, right);
//    } else {
//        if(leftDivided > rightDivided) {
//            printSection(left, mid);
//        } else {
//            printSection(mid + 1, right);
//        }
//    }
    
    
    return divided > sum ? divided : sum;
}

void dynamicMaxSumPrintIndex() {
    int sum, start, end;
    int max = M_INF;
    bool isThrowFront = false;
    
    sum = start = end = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(sum > 0) {
            sum += nums[i];
            isThrowFront = false;
        } else {
            sum = nums[i];
            isThrowFront = true;
        }
        if(sum > max) {
            max = sum;
            end = i;
            if(isThrowFront) {
                start = i;
            }
        }
    }
    
    printSection(start, end);
}

int dynamicMaxSum() {
    int sum = 0;
    int max = M_INF;
    for(int i = 0; i < nums.size(); i++) {
        if(sum > 0) {
            sum += nums[i];
        } else {
            sum = nums[i];
        }
        if(sum > max) {
            max = sum;
        }
    }
    return max;
}

void printSection(int start, int end) {
    for(int i = start; i < end; i++) {
        printf("%d, ", nums[i]);
    }
    printf("%d\n", nums[end]);
}
