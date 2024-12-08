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

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode *res = NULL;
    while (list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            ft_new_node(&res, list1->val);
            list1 = list1->next;
        }
        else
        {
            ft_new_node(&res, list2->val);
            list2 = list2->next;
        }
    }
    while (list1)
    {
        ft_new_node(&res, list1->val);
        list1 = list1->next;
    }
    while (list2)
    {
        ft_new_node(&res, list2->val);
        list2 = list2->next;
    }
    return (res);
}
