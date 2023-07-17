class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*
         int res = nums.length;
    for(int i=0; i<nums.length; i++){
        res ^= i;
        res ^= nums[i];
    }
    return res;

        */
        // sum => O(N)
        int n = nums.size();
        int sum = 0;

        int diff = (n * (n + 1))/2;

        for(int i = 0; i < n; i++){
           sum += nums[i];
        }
        return diff - sum;
    }
};
/*
Binary search = > O(Log N);
sort(nums.begin(),nums.end());
 int left = 0, right = nums.size(), mid= (left + right)/2;
    while(left<right){
        mid = (left + right)/2;

        if(nums[mid]>mid) right = mid;
        
        else left = mid+1;
    }
    return left;
*/
