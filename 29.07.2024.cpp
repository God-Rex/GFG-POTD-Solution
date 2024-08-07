class Solution {
public:
    int rowWithMax1s(vector<vector<int>>& arr) {
        int n = arr.size();       
        int m = arr[0].size();   
        int max_row_index = -1;   
        
        int r = 0;    
        int c = m - 1; 
        
        while (r < n && c >= 0) {
            if (arr[r][c] == 1) {
                max_row_index = r; 
                c--;              
            } else {
                r++;             
            }
        }
        
        return max_row_index;
    }
};
