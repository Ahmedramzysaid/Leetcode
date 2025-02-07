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
int gcd(int a  , int b) 
{
    if (a  == 0) return b   ;
    if (a  <  b) swap(a ,b) ;
    return gcd(a%b ,b) ;
}


    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*  cur =  head->next  ; 
        ListNode* nx =  head ;
        while(cur)
        {
          ListNode* newnode =  new ListNode(gcd(nx->val , cur->val)) ;  
          nx->next  =  newnode ; 
          newnode->next  =  cur ; 
          nx =  cur  ;
          cur =  cur->next ;
        }
        return head ;
    }
};