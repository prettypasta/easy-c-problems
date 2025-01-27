int removeDuplicates(int* nums, int numsSize) {
    int c =1;
    for(int i=1 ;i<numsSize; i++){
        if (nums[i]!= nums[i-1]){
            nums[c]=nums[i];
            c++;
        }
    }
    return c ;
    
}