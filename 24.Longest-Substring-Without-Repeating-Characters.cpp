@Longest Substring Without Repeating Characters 
@Problem Statemetn

Given a String, find the length of longest substring without any repeating character.
  
  CODE:
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
   int ans=INT_MIN;
   int l=0;
   unordered_set<int>s;
   for(int i=0; i<input.size(); i++){
      if(s.find(input[i]) != s.end()){
        while(l < i && s.find(input[i]) != s.end()){
            s.erase(input[l]);
            l++;
        }
    
      }
      s.insert(input[i]);
      ans = max(ans, i-l+1);
   }
   return ans;
}
