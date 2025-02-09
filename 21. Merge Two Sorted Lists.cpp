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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2 ;
        if(!list2) return list1 ;
         ListNode* head = new  ListNode()  ; 
         ListNode* cur = head ;
         while(list1 && list2)
         {
             ListNode* nx  ;
             if(list1->val  < list2->val)
             {
                nx = list1 ;
                list1 =  list1->next ;
             }
             else {
                nx =  list2 ;
                list2 =  list2->next ;
             }
             cur->next  =  nx  ;
             cur =  nx ;

         }
         while(list1)
         {
             ListNode* nx = list1 ;
             list1 =  list1->next ;
              cur->next  =  nx  ;
             cur =  nx ;
         }
          while(list2)
          {
          ListNode* nx = list2  ;
          cur->next  =  nx  ;
          cur =  nx ;
          list2 =  list2->next ;
          }
         return head->next ;

    }
};