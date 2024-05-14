#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        // code here
        // dijkstra algo looking ?? because of the shortest path
        //min heap
        //structure can be {diff ,row,col}
       priority_queue <pair<int,pair<int,int>>, 
       vector<pair<int,pair<int,int>>>, 
       greater<pair<int,pair<int,int>>>> pq;
       vector<vector<int>>dist(rows,vector<int>(columns,1e9));
       dist[0][0]=0;
       pq.push({0,{0,0}});
       int dr[]={-1,0,1,0};
       int dc[]={0,1,0,-1};
       while(!pq.empty()){
           auto it=pq.top();
           pq.pop();
           int diff=it.first;
           int row=it.second.first;
           int col=it.second.second;
           if(row==rows-1 && col==columns-1){
               return diff;
           }
           //4 posssibilties
           for(int i=0;i<4;i++){
               int newr=row+dr[i];
               int newc=col+dc[i];
               if(newr>=0 && newc>=0 & newr<rows && newc<columns ){
                   int newEffort=max(abs(heights[row][col]-heights[newr][newc]),diff);
                   if(newEffort <dist[newr][newc]){
                       dist[newr][newc]=newEffort;
                       pq.push({newEffort,{newr,newc}});
                   }
               }
           }
           
       }
       return 0;
       
    }
};