class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum = accumulate(piles.begin(), piles.end(), 0);
        long long left = (sum+h-1)/h;
        long long right = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while(left <= right){
            int mid = left + (right-left)/2;
            long long s = 0;
            for(int i : piles){
                s += (i+mid-1)/mid;
            }
            if(s<=h){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};
