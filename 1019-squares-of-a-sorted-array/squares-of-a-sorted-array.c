/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 void sort(int* arr , int* numsSize){
    for(int i =0;i<*numsSize-1 ; i++){
        for(int j=0;j<*numsSize-1-i;j++){
            if(arr[j] > arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t ;
            }
        }
    }
 }
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* res = (int*)malloc(sizeof(int)*numsSize);

    for(int i =0;i<numsSize;i++){
        res[i] = nums[i]*nums[i];
    }

    sort(res, returnSize); 



    return res;
    
}