bool hasAlternatingBits(int n) {
int x,p=-1;
    while(n != 0){
        x = n&1;

        if(x == p){
            return false;
        }
        p = x;
        n = n>>1;
    }
    return true;
    
}