#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    double w, t, l;
    double res = 1;
    for (int i = 0; i < 3; i++)
    {
        cin >> w >> t >> l;
        double best = max(w, t);
        best = max(best, l);
        res *= best;
        if (best==w)
        {
            printf("W ");
        }
        else if (best==t)
        {
            printf("T ");
        }
        else{
            printf("L ");
        }
    }
    res *= 0.65;
    res--;
    res *= 2;
    printf("%.2f", res);
}