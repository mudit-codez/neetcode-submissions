class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_ans = 0;
        int i=0, j=0;
        int n = s.size();
        unordered_set<char> st;
        while(j<=n-1){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                j++;
            }
            else{
                int size = st.size();
                max_ans = max(max_ans, size);
                st.erase(s[i]);
                i++;
            }
        }
        max_ans = max(max_ans, (int)st.size());
        return max_ans;
    }
};
