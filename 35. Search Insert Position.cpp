class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return binary_search(nums, 0, nums.size() - 1, target);
    }
    
    int binary_search(vector<int>& arr, int l, int r, int ele)
    {
        if(l > r)
        {
            return l;
        }
        
        int mid = l + (r - l) / 2;
        
        if(arr[mid] == ele)
        {
            return mid;
        }
        
        if(ele < arr[mid])
        {
            return binary_search(arr, 0, mid - 1, ele);
        }
        else
        {
            return binary_search(arr, mid + 1, r, ele);
        }
        
    }
};
