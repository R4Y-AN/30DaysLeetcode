class Solution {
public:
    // TC O(nlogn) (*.*)
    vector<vector<int>> findMatrix(vector<int>& nums) {
        //O(nlogn)
        sort(nums.begin(),nums.end());
        int d=0;
        vector<vector<int>> ans(1);
        ans[d].push_back(nums[0]);

        //O(n)
        for(int i=1;i<nums.size();++i){
            if(nums[i]==nums[i-1]){
                ++d;
            }else{
                d=0;
            }
            if(d==ans.size()){
                ans.push_back(vector<int>());
            }
            ans[d].push_back(nums[i]);
        }
        return ans;
    }
};
