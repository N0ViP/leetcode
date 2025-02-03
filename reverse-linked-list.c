/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* res = NULL;
    struct ListNode* tmp = NULL;

    while (head)
    {
        tmp = res;
        res = head;
        head = head->next;
        res->next = tmp;
    }

    return (res);
}
