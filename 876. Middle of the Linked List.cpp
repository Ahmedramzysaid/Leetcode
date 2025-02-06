/*
  struct ListNode {
  Definition for singly-linked list.
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public :
   ListNode* middleNode(ListNode* head) {
        
     ListNode*  cur =  head ;
     int cnt= 0 ;
     while (cur !=nullptr)
     {
         cur =  cur->next ;
         cnt++ ;
     }
     cur =  head ;
     for (int i =0  ;i  < cnt /2 ;i++)
     {
         cur =  cur->next ;
     }
     return cur ;
    }
};