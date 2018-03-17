//
//  AddTwoNumbers.hpp
//  leetcode
//
//  Created by KENAN YANG on 17/3/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#ifndef AddTwoNumbers_hpp
#define AddTwoNumbers_hpp

#include <stdio.h>

#endif /* AddTwoNumbers_hpp */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

class AddTwoNumbers{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
