/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode* temp = node;
    struct ListNode* cur =temp;
    while(temp->next!=NULL){
        cur=temp;
        temp->val=temp->next->val;
        temp=temp->next;
    }
    cur->next=NULL;
    
}