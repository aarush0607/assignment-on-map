class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int extra=target-nums[i];
            if(m.find(extra)!=m.end())
            {
                ans.push_back(m[extra]);
                ans.push_back(i);
            }
            m[nums[i]]=i;
        }
        
        return ans;
    }
};
