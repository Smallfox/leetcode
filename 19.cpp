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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(!head) return NULL;
        if(head && n == 0) return head;
        int path = 1;
        ListNode *l = head;
        while(l->next != NULL)
        {
            l = l -> next;
            path++;
        }
        int pdel = path - n;//start from head
        if(pdel == 0) return head->next;
        ListNode *deln;
        l = head;
        for(int i = 0; i < pdel-1; i++)
            l = l -> next;
        deln = l -> next;
        l -> next = deln -> next;
        return head;
    }
};
