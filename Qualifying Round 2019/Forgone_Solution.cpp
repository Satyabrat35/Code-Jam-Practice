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

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) {
        long long int n, temp;
        cin>>n;
        string x,y;
        temp = n;
        while(temp) {
            int z = temp%10;
            if(z==4){
                x ='2' + x;
                y ='2' + y;
            } else {
                x = to_string(z) + x;
                y ='0' + y;
            }
            temp/=10;
        }
        
        cout<<"Case #"<<i<<": "<<stoi(x)<<' '<<stoi(y)<<endl;
    }

    return 0;
}