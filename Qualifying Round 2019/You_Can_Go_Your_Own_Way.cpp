//
// Created by Satyabrat Bhol on 04/01/23.
//
/**************bhol****************/
#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <map>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int k=1;k<=t;k++) {
        int n;
        cin>>n;
//        vector<vector<bool>> adj(n, vector<int>(n, false));
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++) {
            char c = s[i];
            if(c == 'E'){
                s[i] = 'S';
            } else {
                s[i] = 'E';
            }
        }
        cout<<"Case #"<<k<<": "<<s<<endl;

    }

    return 0;
}