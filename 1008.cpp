#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dianti = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        int target;
        cin >> target;
        res += 5;
        if (target>dianti)
        {
            res += (target - dianti) * 6;
        }
        else{
            res += (dianti - target) * 4;
        }
        dianti = target;
    }
    cout << res;
}