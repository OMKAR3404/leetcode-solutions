typedef struct Node{
    char data;
    struct Node *link;
   
}Slist;

void push(char s,Slist **top){

    if(*top == NULL){
        Slist *newnode = (Slist*)malloc(sizeof(Slist));
        newnode->data = s;
        newnode->link = NULL;
        *top = newnode;
        printf("enterd element to stack");
        return ;
    }

        Slist *newnode = (Slist*)malloc(sizeof(Slist));
        newnode->data = s;
        newnode->link = NULL;
        newnode->link = *top;
        (*top) = newnode;
    
    }

void pop(Slist **top){
    if(*top == NULL){
        return ;
    }
    Slist *t = *top;
    *top = (*top)->link;
    free(t);
 }
bool isValid(char* s) {
    Slist *top = NULL;
    int i=0;
    while(s[i]!= '\0'){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            push(s[i],&top);
            i++;
        }
        else if(s[i] == '}' || s[i] == ')' || s[i] == ']'){
            switch(s[i]){
                case '}' : 
                 if(top == NULL){
                    return 0;
                }else if(top->data == '{'){
                    pop(&top);
                    i++;
                }else{
                    return 0;
                }
                break;

                case ']' :
                if(top == NULL){
                    return 0;
                }
                else if(top->data == '['){
                    pop(&top);
                    i++;
                }
                else{
                    return 0;
                }
                break;

                case ')' :
                 if(top == NULL){
                    return 0;
                }else if(top->data == '('){
                    pop(&top);
                    i++;
                }else{
                    return 0;
                }
                break;


            }
        }
    }
    if(s[i] == '\0'){
        if(top == NULL){
            return 1;
        }
        return 0;
    }
    
    return 1;


}