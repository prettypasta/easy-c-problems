int findGCD(int* nums, int numsSize) {
    int mn= nums[0];
    int mx=nums[0];
    for(int i=1; i<numsSize; i++){
        if(nums[i]<mn){
            mn=nums[i];
        }
        if(nums[i]>mx){
            mx= nums[i];
        }
        
    }
    while(mx!=0){
        int temp=mx;
        mx= mn%mx;
        mn=temp;
    }
    return mn;
}