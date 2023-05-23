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
    long long n, k;
    cin >> n >> k;
    int i = 0;
    string s1 = to_string(n), s2 = to_string(n);
    reverse(s2.begin(), s2.end());
    while (s2!=s1&&i<k)
    {
        s1 = dazhengshujiafa(s1, s2);
        s2 = s1;
        reverse(s2.begin(), s2.end());
        i++;
    }
    cout << s1 << endl << i;
}