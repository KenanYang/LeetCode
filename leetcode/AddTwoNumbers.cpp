//
//  AddTwoNumbers.cpp
//  leetcode
//
//  Created by KENAN YANG on 17/3/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "AddTwoNumbers.hpp"

ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* ansSP = NULL;
    int loc = (l1->val + l2->val)%10;
    int nex = (l1->val + l2->val)/10;
    ansSP = new ListNode(loc);
    ListNode* ansNext = ansSP;
    while((l1->next != NULL) || (l2->next != NULL) || (nex != 0)){
        if(l1->next == NULL) l1->next = new ListNode(0);
        if(l2->next == NULL) l2->next = new ListNode(0);
        l1 = l1->next;
        l2 = l2->next;
        loc = (l1->val + l2->val + nex) % 10;
        nex = (l1->val + l2->val + nex) / 10;
        ansNext->next = new ListNode(loc);
        ansNext = ansNext -> next;
    }
    
    return ansSP;
}
