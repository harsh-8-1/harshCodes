//https://leetcode.com/problems/subarray-sum-equals-k/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans =0,c=0;
        map<int,int>mp;
        for(auto i:nums)
        {
            c+=i;
            if(c==k){ans++;}
            if(mp.find(c-k)!=mp.end()){ans+=mp[c-k];}
            mp[c]++;
        }
        return ans;
    }
};
