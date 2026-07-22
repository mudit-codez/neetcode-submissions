class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> num;
        int n = nums.size();
        int i = 0, j = k - 1;
        for (int l = 0; l <= j; l++) {
            if (num.size() == 0) {
                num.push_back(l);
            } else if (nums[l] <= nums[num.back()]) {
                num.push_back(l);
            } else {
                while (!num.empty() && nums[l] > nums[num.back()]) {
                    num.pop_back();
                }
                num.push_back(l);
            }
        }
        vector<int> ans;
        ans.push_back(nums[num.front()]);
        i++;
        j++;
        while (j < n) {
            if (num.front() == i - 1) {
                num.pop_front();
            }

            if (num.size() == 0) {
                num.push_back(j);
            } else if (nums[j] <= nums[num.back()]) {
                num.push_back(j);
            } else {
                while (!num.empty() && nums[j] > nums[num.back()]) {
                    num.pop_back();
                }
                num.push_back(j);
            }
            ans.push_back(nums[num.front()]);
            i++;
            j++;
        }
        return ans;
    }
};
