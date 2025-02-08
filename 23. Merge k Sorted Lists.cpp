class Solution {
public:
    ListNode* merge_sort(ListNode* a, ListNode* b) {
        if (!a) return b;
        if (!b) return a;

        ListNode* c = new ListNode();
        ListNode* f = c;
        ListNode* cur = a;
        ListNode* cur1 = b;
        
        while(cur && cur1) {
            if (cur->val < cur1->val) {
                f->next = cur;
                cur = cur->next;
            } else {
                f->next = cur1;
                cur1 = cur1->next;
            }
            f = f->next;
        }
        
        
        if(cur) f->next = cur;
        if(cur1) f->next = cur1;
        
        return c->next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;
        
        ListNode* head = lists[0];
        for (int i = 1; i < lists.size(); i++) {
            head = merge_sort(head, lists[i]);
        }
        return head;
    }
};