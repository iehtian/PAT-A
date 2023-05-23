#include<algorithm>
#include<iostream>
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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b, c;
        cin >> a >> b >> c;
        string s = dazhengshujiafa(a, b);
        if (s>c)
        {
            cout << "Case #" << i + 1 << ": true";
        }
        else{
            cout << "Case #" << i + 1 << ": false";
        }
    }
}