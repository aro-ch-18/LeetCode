#include<bits/stdc++.h>
class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size()<2) return "";
        unordered_set<char> uset;
        for(auto i:s){
            uset.insert(i);
        }
        for(int i=0;i<s.size();i++){
            if(uset.count(tolower(s[i]))&&uset.count(toupper(s[i]))) continue;
            string left=longestNiceSubstring(s.substr(0,i));
            string right=longestNiceSubstring(s.substr(i+1));
            return left.size()>=right.size()?left:right;
        }
        return s;
        
    }
};