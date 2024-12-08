/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void ft_new_node(struct ListNode **res, int n)
{
    struct ListNode *tmp = (struct ListNode *) malloc(sizeof(struct ListNode));
    tmp->val = n;
    tmp->next = NULL;
    if (!*res)
        *res = tmp;
    else
    {
        struct ListNode *ptr = *res;
        while (ptr->next)
            ptr = ptr->next;
        ptr->next = tmp;
    }
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum = 0;
    struct ListNode *res = NULL;
    while (l1 && l2)
    {
        sum += l1->val + l2->val;
        ft_new_node(&res, sum % 10);
        sum /= 10;
        l1 = l1->next;
        l2 = l2->next;
    }
    while (l1)
    {
        sum += l1->val;
        ft_new_node(&res, sum % 10);
        sum /= 10;
        l1 = l1->next;
    }
    while (l2)
    {
        sum += l2->val;
        ft_new_node(&res, sum % 10);
        sum /= 10;
        l2 = l2->next;
    }
    if (sum > 0)
        ft_new_node(&res, sum % 10);
    return (res);
}
