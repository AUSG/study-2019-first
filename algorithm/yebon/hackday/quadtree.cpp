////
////  quadtree.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 10..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  상하뒤집기
////
//
#include <iostream>
#include <vector>

using namespace std;

vector<char> upsideDown(vector<char> tree);
void printAll(vector<char> tree);

int main(void) {
    vector<char> tree;
//    tree.push_back('x');
//    tree.push_back('x');
//    tree.push_back('w');
//    tree.push_back('w');
//    tree.push_back('w');
//    tree.push_back('b');
//    tree.push_back('x');
//    tree.push_back('w');
//    tree.push_back('x');
//    tree.push_back('w');
//    tree.push_back('b');
//    tree.push_back('b');
//    tree.push_back('b');
//    tree.push_back('w');
//    tree.push_back('w');
//    tree.push_back('x');
//    tree.push_back('x');
//    tree.push_back('x');
//    tree.push_back('w');
//    tree.push_back('w');
//    tree.push_back('b');
//    tree.push_back('b');
//    tree.push_back('b');
//    tree.push_back('w');
//    tree.push_back('w');
//    tree.push_back('w');
//    tree.push_back('w');
//    tree.push_back('b');
//    tree.push_back('b');
    
    tree.push_back('x');
    tree.push_back('w');
    tree.push_back('b');
    tree.push_back('b');
    tree.push_back('w');
    tree = upsideDown(tree);
    
    printAll(tree);
    
    return 0;
}

vector<char> upsideDown(vector<char> tree) {
    vector<char> result;
    vector<char> arr[4];
    int i, j;
    i = 0;
    j = 0;
    
    if(tree.size() == 1 || tree.size() == 0)
        return tree;
    
    for(auto iter = tree.begin() + 1; iter != tree.end(); ++iter) {
        if(*iter == 'x') {
            j -= 4;
        }
        arr[i].push_back(*iter);
        j++;
        if(j == 1) {
            i++;
            j = 0;
        }
    }

    arr[0] = upsideDown(arr[0]);
    arr[1] = upsideDown(arr[1]);
    arr[2] = upsideDown(arr[2]);
    arr[3] = upsideDown(arr[3]);
    
    result.push_back('x');
    result.insert(result.end(), arr[2].begin(), arr[2].end());
    result.insert(result.end(), arr[3].begin(), arr[3].end());
    result.insert(result.end(), arr[0].begin(), arr[0].end());
    result.insert(result.end(), arr[1].begin(), arr[1].end());
    
    return result;
}

void printAll(vector<char> tree) {
    if(tree.size() == 0)
        return;
    for(auto iter = tree.begin(); iter != tree.end(); ++iter) {
        printf("%c ", *iter);
    }
    puts("");
}
