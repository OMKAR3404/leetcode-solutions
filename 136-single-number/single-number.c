int singleNumber(int* nums, int numsSize) {



    for(int i = 0;i<numsSize;i++){
        int s=0;
        for(int j = 0 ; j<numsSize; j++){
        if(nums[i]==nums[j]){
           s++;           
        }
        }
        if(s==1){
            return nums[i];
        }

    }

    return -1;
}