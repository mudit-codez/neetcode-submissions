class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.size(); i++){
            if(!isalnum(s[i])){
                s.erase(s.begin()+i);
                i--;
            }
        }
        string str = s;
        for(char &c : str){
            c = tolower(c);
        }
        int start = 0;
        int end = str.size()-1;
        while(start<=end){
            if(str[start] != str[end]) return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};
