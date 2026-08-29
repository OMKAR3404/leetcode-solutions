/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



/*struct ListNode* deleten(int *val , struct ListNode* head){

    struct ListNode* temp = head;
    struct ListNode* prev = NULL;
    while(temp != NULL){
        if(temp->val == val[i]){
            if(temp == head ){
                head = temp-> next;
                free(temp);
                temp = head ;
                i++;
            }else{
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }

        }else{
            prev = temp;
            temp = temp-> next;
        }
    }
    return head;
}*/
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {

    int p[100001] = {0};
    
      for(int i = 0; i < numsSize; i++) {
        p[nums[i]] = 1;
    }

     struct ListNode* temp = head;
    struct ListNode* prev = NULL;

    while(temp!= NULL){
          if(p[temp->val]){
            if(temp == head ){
                head = temp-> next;
                free(temp);
                temp = head ;
            }else{
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }

        }else{
            prev = temp;
            temp = temp-> next;
        }


    }


    return head;

        
}