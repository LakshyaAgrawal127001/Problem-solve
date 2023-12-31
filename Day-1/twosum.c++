class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        // Brute Force Approach => T.C => O(N2)
        // vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                //   ans.push_back(i);
                //   ans.push_back(j);
                return {i,j};
                } 
            }
        }
        return {};
   
  }
};
