/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        long long  num = 0 , x=0 , len =0   ; 
        ListNode* cur =  head ;
        while (cur != nullptr)
        {
         len++ ;
          cur=  cur->next  ;
        }
        cur = head  ;
        while (cur != nullptr )
        {
            num +=  (cur->val *  pow (2, len-x-1)) ;
            x++ ;
            cur =  cur->next  ;
        }
        return  num ;

        
    }
};