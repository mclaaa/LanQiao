/*给定范围二分法*/
#include<iostream>

using namespace std;

double n;

int main(){
    cin >> n;

    double l = -1e4, r = 1e4;
    while(r - l > 1e-8){
        double mid = (l + r) / 2;
        if(mid * mid * mid >= n) r = mid;
        else l = mid;
    }

    printf("%lf", l);

    return 0;
}
/*或者
#include<cstdio>
#include<cmath>
int main(){
    double a;
    scanf("%lf",&a);
    printf("%.6lf",cbrt(a));
    return 0;}



*/
