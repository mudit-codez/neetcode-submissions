class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i : nums){
            freq[i]++;
        }

        vector<int> ans;
        while(k--){
            int maxfreq;
            int max_f = 0;
            for(auto const& pair : freq){
                if(pair.second > max_f){
                    max_f = pair.second;
                    maxfreq = pair.first;
                }
            }
            ans.push_back(maxfreq);
            freq.erase(maxfreq);
        }
        return ans;
    }
};
