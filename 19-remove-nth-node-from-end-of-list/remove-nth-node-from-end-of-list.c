/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

struct ListNode* temp = head;
struct ListNode* f= head;
struct ListNode* s = head;
struct ListNode* prev = NULL;
for(int i=0;i<n;i++){
            f = f->next;
        }
    while(f != NULL ){
        prev = s;
        s = s->next;
        f = f->next;
    }
    
    if(s==head){
        head = s->next;
        free(s);
        s= head;
    }else{
    prev -> next = s->next;
    free(s);
    s = prev->next;
    }
    return head;



}