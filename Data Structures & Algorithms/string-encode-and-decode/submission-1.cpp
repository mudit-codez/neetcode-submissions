class Solution {
public:

    string encode(vector<string>& strs){
        string ans = "";
        for(string s : strs){
            int n = s.size();
            ans+=to_string(n);
            ans+="#";
            ans+=s;
        }
        return ans;
    }
    vector<string> decode(string s){
        vector<string> ans;
        int ptr = 0;
        while(ptr < s.size()){
            int j = ptr;

            while(s[j] != '#'){
                j++;
            }

            int size = stoi(s.substr(ptr, j - ptr));
            ptr = j + 1;

            string str = "";
            while(size--){
                str += s[ptr];
                ptr++;
            }
            ans.push_back(str);
        }
        return ans;
    }
};