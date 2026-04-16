class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n1 = nums.size();
        int n2 = 2*n1;
        int it=0;
        vector<int> ans;

        if(n1==0) return ans;

        while(it<n1){
            ans.push_back(nums[it]);
            it++;
        } 

        while(it<n2){
            ans.push_back(nums[it-n1]);
            it++;
        }

        return ans;
    }
};