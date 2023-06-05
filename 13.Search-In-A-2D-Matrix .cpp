#Search In A 2D Matrix 

#Problem Statement

Given an m*n 2D matrix and an integer, write a program to find if the given integer exists in the matrix.
  
  Given matrix has the following properties:

    Integers in each row are sorted from left to right.
    The first integer of each row is greater than the last integer of the previous row
    
  In the problem we can see , each element in the row is sorted so we can use the binary search to seach the target.
      
      CODE:
bool searchMatrix(vector<vector<int>>& mat, int target) {
        //we can use the binary serach beacause the given mat is in sored form 
        int row=mat.size();
        int col = mat[0].size();
        int lo=0, hi=row*col-1;
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;
            int r = mid/col;
            int c = mid%col;
            if(mat[r][c] == target) return true;
            if(mat[r][c] < target) lo=mid+1;
            else hi=mid-1;
        }
        return false;
        
}
