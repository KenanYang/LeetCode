//
//  main.cpp
//  leetcode
//
//  Created by KENAN YANG on 17/3/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include <iostream>

//#include "TwoSum.hpp"
//#include "AddTwoNumbers.hpp"
//#include "LengthOfLongestSubString.hpp"
#include "MedianofTwoSortedArrays.hpp"
#include "LongestPalindromicSub.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // Two Sum:
//    vector<int> num;
//    vector<int> index;
//    num.push_back(2);
//    num.push_back(7);
//    num.push_back(11);
//    num.push_back(15);
//    int target = 8;
//    TwoSum *ts = NULL;
//    ts = new TwoSum;
//    index = ts -> twoSum(num, target);
//    cout << index[0]<<" "<<index[1]<<endl;
//    delete ts;
    // Add Two Numbers:
//    ListNode* l1 = NULL;
//    ListNode* l2 = NULL;
//    ListNode* l1N = NULL;
//    ListNode* l2N = NULL;
//    l1 = new ListNode(2);
//    l2 = new ListNode(5);
//    l1N = l1;
//    l2N = l2;
//    l1N->next = new ListNode(4);
//    l2N->next = new ListNode(6);
//    l1N = l1N->next;
//    l2N = l2N->next;
//    l1N->next = new ListNode(3);
//    l2N->next = new ListNode(4);
//
//    AddTwoNumbers* atn = NULL;
//    atn = new AddTwoNumbers;
//    ListNode *ans = NULL;
//    ans = atn->addTwoNumbers(l1, l2);
//    while(ans != NULL){
//        cout<<ans->val<<" ";
//        ans = ans->next;
//    }
//    cout<<endl;
//    delete atn;
    //Length Of Longest sub string:
//    string s = "a";
//    LengthOfLongestSubString* it = NULL;
//    it = new LengthOfLongestSubString();
//    int ans = it->lengthOfLongestSubstring(s);
//    cout << ans <<endl;
    //Median of Two sorted array:
//    MedianofTwoSortedArrays* ptr = NULL;
//    ptr = new MedianofTwoSortedArrays();
//    vector<int> n1;
//    vector<int> n2;
//    n1.push_back(1);
//    n1.push_back(3);
//    n2.push_back(2);
//    double ans = ptr->findMedianSortedArrays(n1, n2);
//    cout<<ans<<endl;
    //LongestPalindromic:
    string s = "ccc";
    LongestPalindromicSub* ptr = new LongestPalindromicSub();
    cout<< ptr->longestPalindrome(s)<<endl;
    
    return 0;
}
