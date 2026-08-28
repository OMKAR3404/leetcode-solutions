int search(int* arr, int numsSize, int target) {

int high = numsSize - 1 , low = 0,mid;
    while(low <= high){
        mid = (high+low)/2;
        if(target == arr[mid]){
            return mid;
        }else if(target > arr[mid]){
            low = mid +1;
        }else if(target < arr[mid]){
            high = mid-1;
        }

    }

    if(arr[mid] == target){
        return 1;
    }else{
        return -1;
    }
}