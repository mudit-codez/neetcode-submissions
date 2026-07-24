class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target < matrix[0][0]) return false;
        int m = matrix.size();
        int st = 0, end = m-1;
        int row = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(matrix[mid][0] == target){
                return true;
            }
            else if(matrix[mid][0] > target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        row = end;
        st = 0, end = matrix[0].size()-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid] > target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return false;
    }
};
