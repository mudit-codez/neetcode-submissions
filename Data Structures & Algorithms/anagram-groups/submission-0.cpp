class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        int n = strs.size();
        vector<string> sorted(n);
        for(int i=0; i<n; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            sorted[i] = s;
        }
        unordered_map<string, vector<string>> m;
        for(int i=0; i<n; i++){
            m[sorted[i]].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto const& pair : m){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
