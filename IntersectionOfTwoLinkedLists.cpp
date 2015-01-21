class Solution {
	public:
		ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
			if(!headA || !headB) return NULL;
			int stepA = 0, stepB = 0;
			ListNode *pA = headA, *pB = headB;
			while(pA->next)
			{
				pA = pA -> next;
				stepA++;
			}

			while(pB->next)
			{
				pB = pB -> next;
				stepB++;
			}

			if(pA != pB) return NULL;

			pA = headA;
			pB = headB;

			if(stepA > stepB)
			{
				for(int i = 0; i < (stepA-stepB); i++)
					pA = pA -> next;
			}
			else
			{
				for(int i = 0; i < (stepB-stepA); i++)
					pB = pB -> next;
			}

			while(pA != pB)
			{
				pA = pA -> next;
				pB = pB -> next;
			}
			return pA;
		}
;
