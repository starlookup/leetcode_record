/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */ 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int l1_num = 0,l2_num = 0,sum_result = 0,carry = 0;
       ListNode *head = l1;
       while(1)
       {
        sum_result = (l1->val + l2->val + carry) % 10;
        carry = (l1->val + l2->val + carry) / 10;
        l1->val = sum_result;
        if(l1->next == NULL && l2->next != NULL)
        {
            l1->next = new ListNode(0);
        }
        else if(l1->next != NULL && l2->next == NULL)
        {
            l2->next = new ListNode(0);
        }
        else if(l1->next == NULL && l2->next == NULL)
        {
            if(carry)
            {
                l1->next = new ListNode(carry);
            }

            break;
        }
         l1 = l1->next;
         l2 = l2->next;
       }
       return head;
    }
};