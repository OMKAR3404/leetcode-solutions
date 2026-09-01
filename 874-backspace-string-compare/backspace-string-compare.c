
bool backspaceCompare(char* s, char* t) {

    char stack1[strlen(s)];
    char stack2[strlen(t)];
    int top1= -1;
    int top2 = -1 ;

   for(int i = 0; i < strlen(s); i++) {

        if(s[i] != '#') {
            top1++;
            stack1[top1] = s[i];
        }
        else {
            if(top1 != -1) {
                top1--;
            }
        }
    }

    for(int i =0 ;i < strlen(t); i++){
        if(t[i] != '#'){
                top2++;
            stack2[top2] = t[i];
        }
        else{
            if(top2 != -1){
                top2--;
        }
    }
    }

 if(top1 != top2) {
        return false;
    }

    for(int i = 0; i <= top1; i++) {
        if(stack1[i] != stack2[i]) {
            return false;
        }
    }

    return true;
}