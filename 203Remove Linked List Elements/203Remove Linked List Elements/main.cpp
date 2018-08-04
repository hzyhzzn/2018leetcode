#include <iostream>
#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		if (head == NULL ) return head;

		ListNode *p = head;

		if (p->val == val)
			head = head->next;

		while (p->next) {
			if (p->next->val == val)
				p->next = p->next->next;
			else
				p = p->next;
		}


		if (p->val == val)
			p = p->next;

		return head;
	}
};
int main()
{
	Solution sol;
	ListNode *x;
	x = (ListNode *)malloc(sizeof(ListNode));
	x->val = 1;
	x->next = NULL;
	ListNode *res = sol.removeElements(x,1);
	return 0;
}