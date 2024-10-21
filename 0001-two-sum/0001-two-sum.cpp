class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            int rem=target-curr;
            if(mpp.find(rem)!=mpp.end()){
                ans.push_back(mpp[rem]);
                ans.push_back(i);
                break;
            }
            mpp[curr]=i;
        }
        return ans;
    }
};