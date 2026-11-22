/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int i=0;
    struct ListNode* temp = head;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    temp=head;
    i=i/2 + 1;
    while(i>1){
        i--;
        temp=temp->next;
    }
    return temp;
}