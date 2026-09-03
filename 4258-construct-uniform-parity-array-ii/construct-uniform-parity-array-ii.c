bool uniformArray(int* nums1, int nums1Size) {

int nums2[nums1Size];
int flag = 0;
int small = INT_MAX;
if(nums1Size == 1 ){
    return true;
}
    for(int i=0;i<nums1Size ; i++){
        if(nums1[i] % 2 != 0 && nums1[i]<small){
            small = nums1[i] ;
        }
    }

    if(small == INT_MAX){
        return true;
    }

    for(int i=0;i<nums1Size;i++){
        if(nums1[i] % 2 == 0 && nums1[i] <small ){
            return false;
        }
    }
    return true;
}