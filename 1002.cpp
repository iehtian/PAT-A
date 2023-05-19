#include<algorithm>
#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<double, double> mp1, mp2,mp3;
    for (int i = 0; i < n; i++)
    {
        double d1, d2;
        cin >> d1 >> d2;
        mp1[d1] = d2;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double  d1,d2;
        cin >> d1 >> d2;
        mp2[d1] = d2;
    }
    for (map<double,double>::iterator it=mp1.begin(); it != mp1.end(); it++)
    {
        if (mp2.find(it->first)!=mp2.end())
        {
            mp3[it->first] = it->second + mp2[it->first];
        }
        else{
            mp3[it->first] = it->second;
        }
    }
    for (map<double,double>::iterator it=mp2.begin(); it != mp2.end(); it++)
    {
        if (mp1.find(it->first)!=mp1.end())
        {
            continue;
        }
        else{
            mp3[it->first] = it->second;
        }
    }
    cout << mp3.size();
    for (map<double,double>::reverse_iterator it= mp3.rbegin(); it != mp3.rend(); it++)
    {
        printf(" %.0lf %.1lf", it->first, it->second);
    }
}