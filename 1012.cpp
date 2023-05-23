#include<algorithm>
#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;
struct student
{
    string name;
    int c, m, e, a;
    int rankc, rankm, ranke, ranka;
};
bool cmp1(student s1,student s2){
    return s1.c < s2.c;
}
bool cmp2(student s1,student s2){
    return s1.m < s2.m;
}
bool cmp1(student s1,student s2){
    return s1.e < s2.e;
}
bool cmp1(student s1,student s2){
    return s1.a < s2.a;
}
int main(){
    int n;
    cin >> n;
    student stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].name >> stu[i].c >> stu[i].m >> stu[i].e;
        double tem = ((double)stu[i].c + (double)stu[i].m + (double)stu[i].e) / 3;
        stu[i].a = round(tem);
    }
    sort(stu, stu + n, cmp1);
    for (int i = 0; i < n; i++)
    {
        stu[i].c = i+1;
    }
    sort(stu, stu + n, cmp2);
    for (int i = 0; i < n; i++)
    {
        stu[i].m = i+1;
    }
}