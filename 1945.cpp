#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        cin >> a[i];
    }
    int b[n + 1][n + 1];
    memset(b, 0, sizeof(b));
    for (int i = 1; i < n+1; i++)
    {
        for (int j = i; j < n+1; j++)
        {
            if (i==j)
            {
                continue;
            }
            b[i][j] = b[i][j - 1] + a[j-1];
        }
    }
    
}