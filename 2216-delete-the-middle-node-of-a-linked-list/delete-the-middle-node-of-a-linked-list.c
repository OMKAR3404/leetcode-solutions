/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {

    struct ListNode* slow = head;
    struct ListNode*  fast = head;

    while(fast!= NULL && fast->next != NULL ){
        fast = fast->next->next;
        slow = slow->next;
    }
        struct ListNode*  temp = head;
        struct ListNode*  prev = NULL;
        if(temp->next == NULL){
            free(temp);
            head = NULL;
            return head;
        }
        while(temp!= slow ){
                prev = temp;
                temp = temp->next;
        }
            prev->next = temp->next;
            free(temp);
            temp = prev->next;


            return head; 
    
    


}
    