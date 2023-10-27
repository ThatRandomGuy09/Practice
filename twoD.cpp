class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        if(!matrix.size()) return false;
        int hi = (row * col) - 1;
        
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            int element = matrix[mid/col][mid % col];
            if(element == target) {
                return true;
            }
            if(element < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;
    }
};