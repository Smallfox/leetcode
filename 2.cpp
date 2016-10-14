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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;

        int sum = 0;
        ListNode *tl1 = l1, *tl2 = l2;
        ListNode *ss, *ns = new ListNode(0);
        ss = ns;
        
        while(tl1 != NULL || tl2 != NULL)
        {
            if(tl1 != NULL)
            {
                sum += tl1->val;
                tl1 = tl1->next;
            }
            if(tl2 != NULL)
            {
                sum += tl2->val;
                tl2 = tl2->next;
            }
            ss->next = new ListNode(sum%10);
            ss = ss->next;
            sum = sum / 10;
        }
        if( sum == 1)
            ss->next = new ListNode(1);
        return ns->next;
    }
};
