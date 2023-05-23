#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string first, last;
    string zao = "00:00:00", wan = "24:60:60";
    for (size_t i = 0; i < n; i++)
    {
        string name, a, b;
        cin >> name >> a >> b;
        if (a<=wan)
        {
            wan = a;
            first = name;
        }
        if (b>=zao)
        {
            zao = b;
            last = name;
        }
    }
    cout << first << " " << last;
}