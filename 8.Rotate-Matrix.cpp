#Rotate Matrix
##Problem Statement
Given a 2D matrix of size N*M, rotate the element of the matrix clockwise.

#INPUT:
1
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

#OUTPUT:
5 1 2 3
9 10 6 4
13 11 7 8
14 15 16 12

CODE:
  

void rotateMatrix(vector<vector<int>> &mat, int n, int m)

{

    // Write your code here

     int i,j,left,right,top,bottom,k,temp;

     left=0;top=0;right=m-1;bottom=n-1;

     while(top<bottom&&left<right)

     {

         temp=mat[top][left];

         for(i=left+1;i<=right;i++)

         {

             k= mat[top][i];

             mat[top][i]=temp;

             temp=k;

         }

         top++;

         for(i=top;i<=bottom;i++)

         {

                k=mat[i][right];

                mat[i][right]=temp;

                temp=k;

 

         }

         right--;

         for(i=right;i>=left;i--)

         {

             k=mat[bottom][i];

             mat[bottom][i]=temp;

             temp=k;

         }

         bottom--;

         for(i=bottom;i>=top;i--)

         {

             k=mat[i][left];

             mat[i][left]=temp;

             temp=k;

         }

         left++;

         mat[top-1][left-1]=temp;

     }

}
