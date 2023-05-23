#include<algorithm>
#include<iostream>
#include<queue>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    queue<int> qe;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        if (mp[tem]==0)
        {
            qe.push(tem);
        }
        mp[tem]++;
    }
    for (int i = 0; qe.empty()!=true; i++)
    {
        if (mp[qe.front()]==1)
        {
            cout << qe.front();
            return 0;
        }
        qe.pop();
    }
    cout << "None";
}