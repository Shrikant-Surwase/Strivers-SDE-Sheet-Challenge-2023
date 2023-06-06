#Unique Paths 
#Problem Statement

Given a matrix m X n, count paths from left-top to the right bottom of a matrix with the constraints that from each cell 
you can either only move to the rightward direction or the downward direction.
  
  CODE:
//Here we can use recursion and with the recursion we can solve these but overlaping the subproblem is created due to which we have 
//to use the dynamic programming to optimize it


#include <bits/stdc++.h>

int f(int i, int j, int m, int n,vector<vector<int>>&dp){
	if(i == m || j == n) return 0;
  
	if(i == m-1 && j == n-1) return 1;
   if(dp[i][j] != -1) return dp[i][j];
	return dp[i][j]=f(i+1, j, m, n, dp)+f(i, j+1, m, n, dp);
	
}

int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
	int ans = f(0,0,m,n,dp);
	return ans;
}
