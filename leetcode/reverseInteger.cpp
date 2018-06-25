//
//  reverseInteger.cpp
//  leetcode
//
//  Created by KENAN YANG on 25/6/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "reverseInteger.hpp"

int Solution::reverse(int x){

    int rx = 0;
    while (x != 0){
        int temp = rx*10 + x%10;
        x = x/10;
        if(temp/10 != rx)
            return 0;
        rx = temp;
    }
//    if(rx <= -(1 << 31) or rx >= (1 << 31)-1) return 0;
    return rx;
}
