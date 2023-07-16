// Kadane's algo use

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // taking two varaible ;
        int sum = 0;
        int more = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            more = max(more,sum);
            sum = max(sum,0);
        }
        return more;
    }
};
