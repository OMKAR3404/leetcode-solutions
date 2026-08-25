void rotate(int* nums, int numsSize, int k) {

    int tp[numsSize];
    for(int i =0;i<numsSize;i++){
        tp[(i+k) % numsSize] = nums[i];
    }
     for(int i = 0; i < numsSize; i++){
        nums[i] = tp[i];
    }
}