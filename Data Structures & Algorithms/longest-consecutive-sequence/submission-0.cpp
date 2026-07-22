class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        map<int, int> freq;
        for(int i : nums){
            freq[i]++;
        }
        int size = 1;
        int max_size = 1;
        int prev = freq.begin()->first;
        for(auto const& pair : freq){
            if(pair.first == prev+1){
                size++;
                max_size = max(max_size, size);
            }
            else{
                size = 1;
            }
            prev = pair.first;
        }
        return max_size;
    }
};
