/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void special_case(struct ListNode** head, int right)
{
    struct ListNode *prev = NULL, *curr = *head, *next = NULL;
    int cnt = 0;
    while (curr && cnt < right)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    (*head)->next = next;
    *head = prev;
}

void regular_case(struct ListNode* head, int left, int right)
{
    struct ListNode *prev = NULL, *curr = head, *next = NULL;
    int cnt = 1;

    while (cnt < left - 1 && curr)
    {
        curr = curr->next;
        cnt++;
    }

    struct ListNode* l_prev = curr;
    struct ListNode* l_start = curr ? curr->next : NULL;

    prev = NULL;
    curr = l_start;
    while (curr && cnt < right)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    if (l_prev)
        l_prev->next = prev;
    if (l_start)
        l_start->next = curr;
}

struct ListNode* reverseBetween(struct ListNode* head, int left, int right)
{
    if (!head || left == right)
        return head;

    if (left == 1)
    {
        special_case(&head, right);
    }
    else
    {
        regular_case(head, left, right);
    }

    return head;
}

