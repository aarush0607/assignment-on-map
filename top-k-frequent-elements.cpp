class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        vector<vector<int>> bucket(nums.size()+1);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        vector<int> ans;
        for(auto& [num,freq] : freq)
        {
            bucket[freq].push_back(num);
        }

        for(int i=nums.size();i>=0 && ans.size()<k;i--)
        {
            for(auto b: bucket[i])
            {
                ans.push_back(b);
            }
        }
        return ans;
    }
}; 
