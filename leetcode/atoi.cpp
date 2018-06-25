//
//  atoi.cpp
//  leetcode
//
//  Created by KENAN YANG on 25/6/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "atoi.hpp"

int Solution::myAtoi(string str){
    int i = 0,sign = 1;
    bool no_sign = true, num= false;
    long unsigned int len = str.length();
    long long ret = 0;
    for(; i < len; i++){
        if(str[i] == '+'){
            if(no_sign && num == false){
                sign = 1;
                no_sign = false;
            }
            else break;
        }
        else if(str[i] == '-'){
            if(no_sign && num == false){
                sign = -1;
                no_sign = false;
            }
            else break;
        }
        else if(str[i]<='9' && str[i]>='0'){
            ret = ret*10 - (str[i] - '0');
            num = true;
            if(ret < INT32_MIN) break;
        }
        else if(str[i] == ' '){
            if(num || no_sign==false) break;
        }
        else break;
    }
    ret*=-sign;
    if(ret > INT32_MAX) return INT32_MAX;
    if(ret < INT32_MIN) return INT32_MIN;
    return int(ret);
}
