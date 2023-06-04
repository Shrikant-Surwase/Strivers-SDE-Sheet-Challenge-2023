# Best Time to Buy and Sell Stock
## Problem Statement

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
  
  CODE:

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
     int buy=INT_MAX,sell=0;
       for(int i=0; i<prices.size(); i++){
           buy = min(buy,prices[i]);
           sell = max(sell, prices[i]-buy);
       }
       return sell;
}
