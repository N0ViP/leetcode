/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode res, *ptr;

    ptr = &res;
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            ptr->next = list1;
            list1 = list1->next;
        }
        else
        {
            ptr->next = list2;
            list2 = list2->next;
        }
        ptr = ptr->next;
        ptr->next = NULL;
    }
    while (list1)
    {
        ptr->next = list1;
        list1 = list1->next;
        ptr = ptr->next;
        ptr->next = NULL;
    }
    while (list2)
    {
        ptr->next = list2;
        list2 = list2->next;
        ptr = ptr->next;
        ptr->next = NULL;
    }

    return (res.next);
}
