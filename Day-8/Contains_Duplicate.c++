class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        /* 
        Brute Force => o(N2)
           for(int i = 0; i < nums.size(); i++){
               int ele = nums[i];

               for(int j = i+1; j < nums.size(); j++){
                   if(nums[j] == element){
                       return true;
                   }
               }
               return false;
           } 
        
        */

        // approach 2 => o(N logn)
        sort(nums.begin(),nums.end());

        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;


        // appraoch 3 is hashmap
        // appraoch 4 is set 
    }
};
