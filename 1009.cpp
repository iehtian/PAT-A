#include <algorithm>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
bool polymul(map<int, double> poly1, map<int, double> poly2, map<int, double> &res){
    for (map<int, double>::iterator it1 = poly1.begin(); it1 != poly1.end(); it1++)
    {
        for (map<int, double>::iterator it2 = poly2.begin(); it2 != poly2.end(); it2++)
        {
            res[it1->first + it2->first] += it1->second * it2->second;
        }
    }
}
int main(){
    map<int, double> duo1, duo2, res;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int zhi;
        double xi;
        cin >> zhi >> xi;
        duo1[zhi] = xi;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int zhi;
        double xi;
        cin >> zhi >> xi;
        duo2[zhi] = xi;
    }
    polymul(duo1, duo2, res);
    vector<int> v1;
    vector<double> v2;
    for (map<int, double>::iterator it=res.begin(); it != res.end(); it++)
    {
        v1.push_back(it->first);
        v2.push_back(it->second);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        if ((v2[i]<0&&v2[i]>0.05)||(v2[i]>0&&v2[i]<0.05))
        {
            v2[i] = 0;
        }
    }
    res.clear();
    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i]!=0)
        {
            res[v1[i]] = v2[i];
        }
    }
    cout << res.size();
    for (map<int,double>::reverse_iterator it= res.rbegin(); it !=res.rend() ; it++)
    {
        printf(" %d %.1f", it->first, it->second);
    }
    
}