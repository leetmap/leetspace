/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* newlink = NULL, start;
    if ( l1 == NULL ) return l2;
    if ( l2 == NULL ) return l1;
    start.next = NULL;
    newlink = &start;

    while ( l1 != NULL && l2 != NULL ) {
        if ( l1->val <= l2->val ) {
            newlink->next = l1;
            l1 = l1->next;  
        } else {
            newlink->next = l2;
            l2 = l2->next;
        }
        newlink = newlink->next;
    }
    while ( l1 != NULL ) {
        newlink->next = l1;
        l1 = l1->next;
        newlink = newlink->next;
    }
    while ( l2 != NULL ) {
        newlink->next = l2;
        l2 = l2->next;
        newlink = newlink->next;
    }
    newlink = start.next;
    return newlink;
}
