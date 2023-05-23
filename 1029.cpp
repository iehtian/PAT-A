#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n1,n2;
    cin >> n1;
    vector<int> v;
    for (int i = 0; i < n1; i++)
    {
        int tem;
        cin >> tem;
        v.push_back(tem);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int tem;
        cin >> tem;
        v.push_back(tem);
    }
    sort(v.begin(), v.end());
    int res;
    if (((n1+n2)%2==0))
    {
        res = (n1 + n2) / 2 - 1;
    }
    else{
        res = (n1 + n2) / 2;
    }
    cout << v[res];
}