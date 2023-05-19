#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, double> mp1, mp2,mp3;
    for (int i = 0; i < n; i++)
    {
        double d2;
        int d1;
        cin >> d1 >> d2;
        mp1[d1] = d2;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double  d2;
        int d1;
        cin >> d1 >> d2;
        mp2[d1] = d2;
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (mp1.find(i)!=mp1.end()||mp2.find(i)!=mp2.end())
        {
            if ((mp1[i] + mp2[i]<=0&&mp1[i] + mp2[i]>-0.05)||(mp1[i] + mp2[i]>0&&mp1[i] + mp2[i]<0.05))
            {
                continue;
            }
            mp3[i] = mp1[i] + mp2[i];
        }
    }
    cout << mp3.size();
    for (map<int,double>::reverse_iterator it= mp3.rbegin(); it != mp3.rend(); it++)
    {
        printf(" %d %.1lf", it->first, it->second);
    }
}