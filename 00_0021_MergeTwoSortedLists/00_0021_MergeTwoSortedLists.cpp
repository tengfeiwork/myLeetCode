/*
Merge two sorted linked lists and return it as a new list. 
The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/

class Solution
{

public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode * tmp1 = NULL;
        ListNode * tmp2 = NULL;
        ListNode * newl = NULL;

        if(l1 == NULL)
        {
            return l2;
        }
        else if(l2 == NULL)
        {
            return l1;
        }

        if(l1->val <= l2->val)
        {
            newl = l1;
        }
        else
        {
            newl = l2;
        }

        while(l1 != NULL && l2 != NULL)
        {
            tmp1  = l1->next;
            tmp2  = l2->next;

            if(l1->val <= l2->val)
            {
                l1->next = l2;
                l2->next = tmp1;
                l1 = tmp1;
                l2 = tmp2;
            }
            else
            {
                l1 = tmp1;
            }
            
        }
        cout<<"merge completed!"<<endl;
        return newl;
    }
};
