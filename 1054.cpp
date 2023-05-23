#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int main(){
    int n1,n2;
    cin >> n1>>n2;
    int res=0;
    int rr=0;
    map<int, int> mp;
    for (int i = 0; i < n1*n2; i++)
    {
        int tem;
        cin >> tem;
        mp[tem]++;
    }
    for (map<int,int>::iterator it = mp.begin(); it!= mp.end(); it++)
    {
        if (it->second>res)
        {
            res = it->second;
            rr = it->first;
        }
    }
    cout << rr;
}