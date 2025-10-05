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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head== nullptr) return head  ;
      int cnt = 0  ;
      ListNode* cur =  head  ; 
      while(cur)
      {
        cnt++; 
        cur =  cur->next  ;
      } 
      k =  k%cnt  ;
      if(k == 0) return head ;

      ListNode* h   =  head ;
      int u =  1  ;
      while(cnt -u  >=  k)
      {
      h  =  h->next ; 
      u++ ;
      }
      ListNode* nx  =   h; 
      while(nx->next !=  NULL)
      {
        nx  =  nx->next ; 
      }
      nx->next =  head ; 
      for(int i =0 ;  i  < (cnt-k) ;i++ )
      {
        nx  =  nx->next ;  
      }
      nx->next = NULL ; 
      return h ;
    }
};