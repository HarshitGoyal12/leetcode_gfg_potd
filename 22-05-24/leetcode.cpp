//131. Palindrome Partitioning

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
 // a helper function will be created for checking palindrome
 bool isPalin(const string &s,int i,int j){
    while(i<j){
        if(s[i++]!=s[j--]){
            return false;
        }
    }
    return true;
 }
 void partition(string s,int index,vector<string>&path, vector<vector<string>>& result){
    //base case
    if(index==s.length()){
    result.push_back(path);
    return;
    }
    for(int j=index+1;j<=s.length();j++){
        if(isPalin(s,index,j-1)){
            path.push_back(s.substr(index,j-index));
            partition(s,j,path,result);
            path.pop_back();
        }
    }
 }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>path;
        partition(s,0,path,result);
        return result;
    }
};