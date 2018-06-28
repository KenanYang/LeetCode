//
//  palindrome_num.cpp
//  leetcode
//
//  Created by KENAN YANG on 26/6/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "palindrome_num.hpp"

bool Solution::isPalindrome(int x){
    if(x<0) return false;
    int temp = x;
    int rx = 0;
    while(temp !=0){
        rx = rx*10 + temp%10;
        temp /= 10;
    }
    return rx == x;
}
