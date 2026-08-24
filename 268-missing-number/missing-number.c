int missingNumber(int* nums, int numsSize) {

    int map[numsSize+1];
    for(int i = 0; i <= numsSize; i++) {
    map[i] = 0;
}
   for(int i=0;i<numsSize;i++){
    map[nums[i]] = 1;
   }
   int j;
   for(j=0;j<=numsSize;j++){
        if(map[j] != 1){
             return j;
        }
}
return j;
}
