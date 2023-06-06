#Majority Element - II 
#Problem Statement

A majority element is an element that

occurs more than floor('N' / 3) times in

the array

CODE:
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int>ans;
    unordered_map<int,int>mp;
    for(int i=0; i<arr.size(); i++) mp[arr[i]]++;
  
   int f = floor(arr.size()/3);
    for(auto i: mp){
        if(i.second > f) ans.push_back(i.first);
    }
    return ans;

}
