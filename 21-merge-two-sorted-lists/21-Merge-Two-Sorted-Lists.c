/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1==NULL) return list2;
    if(list2==NULL) return list1;
    struct ListNode *res;
    res = malloc(sizeof(struct ListNode));
    struct ListNode *head=res;
    while((list1 != NULL)&&(list2!=NULL)){
        int p1=list1->val,p2=list2->val;
        if(p1>p2){
            res->val=p2;
            list2=list2->next;
        }
        else{
            res->val=p1;
            list1=list1->next;
        }
         if (list1 != NULL && list2 != NULL) {
        res->next = malloc(sizeof(struct ListNode));
        res=res->next;
         }
    }
    res->next = (list1 != NULL) ? list1 : list2;
    return head;
}