class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> arr;

        for(auto it:nums){
            arr[it]++;
        }

        for(auto it:arr){
            if(it.second!=1){
                return true;
            }
        }

        return false;
    }
};