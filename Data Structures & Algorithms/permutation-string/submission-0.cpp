class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size = s1.size();
        sort(s1.begin(), s1.end());
        int i=0, j=size-1;
        while(j<=s2.size()){
            string str = s2.substr(i, size);
            sort(str.begin(), str.end());
            if(s1==str) return true;
            i++;
            j++;
        }
        return false;
    }
};
