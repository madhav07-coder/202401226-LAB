class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map <int,int> mpp;
        for (auto i : nums)
        {
            mpp[i]++;
        } 
        int length = mpp.size();
        pair <int,int> b[length];
        int j = 0;
        for (auto i : mpp) 
        {
            b[j].first = i.second;
            b[j].second = i.first;
            j++;
        }
        sort (b,b+length);
        vector <int> ans;
        j =length-1;
        while (k--) 
        {
            ans.push_back(b[j].second);
            j--;
        }
        return ans;
    }
};
