class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0] = 0;
        suffix[n-1] = 0;
        for(int i=1; i<n; i++){
            prefix[i] = max(prefix[i-1], height[i-1]);
        }
        for(int i=n-2; i>=0; i--){
            suffix[i] = max(suffix[i+1], height[i+1]);
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            int partial_sum = min(prefix[i], suffix[i])-height[i];
            if(partial_sum > 0){
                sum += partial_sum;
            }
        }
        return sum;
    }
};
