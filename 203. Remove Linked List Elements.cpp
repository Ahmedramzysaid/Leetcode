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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur = head ;
        ListNode* prv = NULL ;
        while(cur != NULL)
        {
            
            if (cur->val ==  val)
            {
              ListNode* a =  cur ;
              cur =  cur->next ;  
             // de 
              if (prv)  prv->next = cur  ;
              else {
                head =  cur  ;
              }
              delete a ;
            }
            else {
                prv =  cur  ;
            cur = cur-> next ;

            }
        }
        return  head  ;
    }
};