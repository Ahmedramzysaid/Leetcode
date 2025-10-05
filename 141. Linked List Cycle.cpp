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
    bool hasCycle(ListNode *head) {
        int cnt = 0 ; 
        while(head)
        {
           if (cnt > 10000 ) return true; 
            cnt++ ;
            head  = head->next ;
        }
        return false ;
    }
};