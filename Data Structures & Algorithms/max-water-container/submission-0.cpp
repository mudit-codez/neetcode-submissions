class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int st = 0, end = n-1;
        int max_area = 0;
        while(st<end){
            int area = min(heights[st], heights[end])*(end-st);
            max_area = max(max_area, area);

            if(heights[st]<heights[end]){
                st++;
            }
            else{
                end--;
            }
        }
        return max_area;
    }
};
