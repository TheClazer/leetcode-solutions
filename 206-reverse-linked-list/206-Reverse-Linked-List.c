/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) return NULL;
    struct ListNode* temp =head;
    int i =0;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    int val[i];
    temp=head;
    i=0;
    while(temp!=NULL){
        val[i++]=temp->val;
        temp=temp->next;
    }
    
    temp=head;
    while(temp!=NULL){
        temp->val=val[--i];
        temp=temp->next;
    }
    return head;

}