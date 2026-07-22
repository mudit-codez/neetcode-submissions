class Solution {
   public:
    string minWindow(string s, string t) {
        int n = s.size();
        vector<int> freq(256, 0);
        for (char c : t) {
            freq[c]++;
        }
        string ans;
        int minlen = INT_MAX;
        int req = t.size();
        int i = 0, j = 0;
        while (j < n) {
            freq[s[j]]--;
            if (freq[s[j]] >= 0) {
                req--;
            }
            while (req == 0) {
                if (j - i + 1 < minlen) {
                    minlen = j - i + 1;
                    ans = s.substr(i, minlen);
                }
                freq[s[i]]++;
                if (freq[s[i]] > 0) {
                    req++;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
