//
// Created by Satyabrat Bhol on 05/01/23.
//
/**************bhol****************/
//#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <map>
using namespace std;

long long gcd(long long a , long long b)
{
    if(b==0) return a;
    a%=b;
    return gcd(b,a);
}

int main() {
    int t;
    cin>>t;
    for(int k=1;k<=t;k++) {
        long long n,l;
        cin>>n>>l;
        vector<long long> vec(l);
        for(int i=0;i<l;i++) {
            cin>>vec[i];
        }
        vector<pair<long long, long long>> vp;
        set<long long> st;
        for(int i=0;i<l-1;i++) {
            long long x = gcd(vec[i], vec[i+1]);
            long long a = vec[i]/x;
            long long b = vec[i+1]/x;
            vp.push_back({a,x});
            vp.push_back({x,b});
            st.insert(a);
            st.insert(b);
            st.insert(x);
        }
        cout<<s.size();
        vector<long long>mp(26);
        int j = 0;
        for(auto &it: st) {
            mp[j] = *it;
            j+=1;
        }
        string ans;
        for(int i=0;i<vp.size();i++) {
            char a = vp[i].first;
            // rest code here ---
        }

        cout<<"Case #"<<k<<": "<<s<<endl;

    }

    return 0;
}