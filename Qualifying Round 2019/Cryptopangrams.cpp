//
// Created by Satyabrat Bhol on 05/01/23.
// Will fail test cases like 10^100
/**************bhol****************/
// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <map>
#include <set>
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
        vector<long long> vp(l+1, 0);
        set<long long> st;
        for(int i=0;i<l-1;i++) {
            // updated logic ig
            if(vec[i] != vec[i+1]) {
                vp[i+1] = gcd(vec[i], vec[i+1]);
                for(int j=i;j>=0;j--) {
                    vp[j] = vec[j]/vp[j+1];
                }
                for(int j=i+1;j<l;j++) {
                    vp[j+1] = vec[j]/vp[j];
                }
            }
        }
        for(int i=0;i<vp.size();i++) {
            st.insert(vp[i]);
        }

        map<long long, char> mp;
        char j = 'A';
        for(auto &it: st) {
            mp[it] = j;
            j+=1;
        }

        string ans;
        for(int i=0;i<vp.size();i++) {
            ans += mp[vp[i]];
        }

        cout<<"Case #"<<k<<": "<<ans<<endl;

    }

    return 0;
}