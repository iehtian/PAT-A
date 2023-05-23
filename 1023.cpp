#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
string dazhengshujiafa(string s1,string s2){
    int len = max(s1.length(), s2.length());
    while (s1.length()<len)
    {
        s1 = '0' + s1;
    }
    while (s2.length()<len)
    {
        s2 = '0' + s2;
    }
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int jinwei = 0;
    string res;
    for (int i = 0; i < len; i++)
    {
        if (s1[i]+s2[i]+jinwei-96>=10)
        {
            res += s1[i] + s2[i] + jinwei - 96 - 10 + 48;
            jinwei = 1;
        }
        else{
            res += s1[i] + s2[i] + jinwei - 96 + 48;
            jinwei = 0;
        }
    }
    if (jinwei==1)
    {
        res += 49;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    string s;
    cin >> s;
    map<char, int> mp1, mp2;
    for (int i = 0; i < s.length(); i++)
    {
        mp1[s[i]]++;
    }
    string res = dazhengshujiafa(s, s);
    if (res.length()!=s.length())
    {
        printf("No\n");
        cout << res;
        return 0;
    }
    for (int i = 0; i < res.length(); i++)
    {
        mp2[res[i]]++;
    }
    if (mp1.size()!=mp2.size())
    {
        printf("No\n");
        cout << res;
        return 0;
    }
    for (map<char,int>::iterator it=mp1.begin(),it2=mp2.begin(); it != mp1.end(); it++,it2++)
    {
        if (it->second!=it2->second)
        {
            printf("No");
            cout << res;
            return 0;
        }
    }
    printf("Yes\n");
    cout << res;
}