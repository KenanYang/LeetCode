//
//  LongestPalindromicSub.cpp
//  leetcode
//
//  Created by KENAN YANG on 18/3/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "LongestPalindromicSub.hpp"

string LongestPalindromicSub::longestPalindrome(string s) {
    string ans = "";
    int len = (int)s.length(), maxL = 0;
    
    if(len == 1){
        return s;
    }
    
    for (int i=0; i<len-1; i++){
        if(s.at(i)==s.at(i+1)){//pivot is even
            if(maxL < 2){
                maxL = 2;
                ans = s.substr(i,maxL);
            }
            for(int j = 1;(i-j>=0)&&(i+1+j<len);j++){
                if(s.at(i-j)==s.at(i+1+j)){
                    if(2*(j+1) > maxL){
                        maxL = 2*(j+1);
                        ans = s.substr(i-j, maxL);
                    }
                }else break;
            }
        }
        //pivot is odd
        if(maxL < 1){
            maxL = 1;
            ans = s.substr(i,maxL);
        }
        for(int j = 1;(i-j>=0)&&(i+j<len);j++){
            if(s.at(i-j)==s.at(i+j)){
                if(2*j+1 > maxL){
                    maxL = 2*j+1;
                    ans = s.substr(i-j, maxL);
                }
            }else break;
        }
    }
    
    return ans;
}
