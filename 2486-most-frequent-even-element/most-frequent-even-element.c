int mostFrequentEven(int* nums, int numsSize) {
    int p[100001] = {0};
    for(int i=0;i<numsSize ;i++){
        p[nums[i]]++;
    }

int maxfeq = 0;
int ans = -1;
    for(int i=0;i <= 100000;i+=2){
        if(p[i] > maxfeq) {
            maxfeq = p[i];
            ans = i;
        }
    }
    return ans;
}