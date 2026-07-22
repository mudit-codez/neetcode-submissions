class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int n = s.size();
        int ans = 0;
        int i=0, j=0;
        int max_freq = 0;
        while(j<n){
            freq[s[j]-'A']++;
            max_freq = max(max_freq, freq[s[j]-'A']);
            while((j-i+1)-max_freq > k){
                freq[s[i]-'A']--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
