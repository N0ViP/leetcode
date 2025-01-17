/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *ptr = head;
    while (head && head->next)
    {
        ptr = ptr->next;
        head = head->next->next;
        if (ptr == head)
            return (1);
    }
    return (0);
}
