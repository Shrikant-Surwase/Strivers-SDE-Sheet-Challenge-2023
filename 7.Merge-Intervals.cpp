#Merge Intervals
##Problem Statement
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
and return an array of the non-overlapping intervals that cover all the intervals in the input.
  
  CODE:
#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>>ans;
    sort(intervals.begin(), intervals.end());
    vector<int>temp=intervals[0];
    for(auto i: intervals){
        if( i[0] <= temp[1]){
            temp[1] = max(temp[1], i[1]);
         
        }else{
            ans.push_back(temp);
            temp = i;
        }
    }
       ans.push_back(temp);
    return ans;
}

