#include <math.h>
int reverse(int x){
    int m = x;
    
    double res=0;

    while(x!=0){
        m = x%10;
        res = m + res*10;
        x = x/10; 
    }
    if(res < -pow(2,31) || res > pow(2,31)-1){
    return 0;}
    else {
        return res;
    }

}