class Solution {
public:
int search(vector& nums, int target) {

    int start=0;
    int end=nums.size()-1;
    int mid;
    while(start<=end)
    {
        mid=start-(start-end)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
    
}
};
