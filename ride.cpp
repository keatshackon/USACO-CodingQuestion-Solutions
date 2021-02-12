/*
ID: keatsha1
TASK: ride
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin >> a >> b;

    ll res1 = 1;
    ll res2 = 1;
    for(ll i = 0;i < a.length();i++){
    	int  t1 = (a[i] - 64);
    	res1 = ((res1 % 47) * (t1  % 47))  % 47;
    }

    for(ll i = 0;i < b.length();i++){
    	int t1 = (b[i] - 64);
    	res2 = ((res2 % 47)  * (t1 % 47)) % 47;	
    }

    if(res2 == res1){
    	fout<<"GO"<<"\n";
    }else{
    	fout<<"STAY"<<"\n";
    }
    return 0;
}
