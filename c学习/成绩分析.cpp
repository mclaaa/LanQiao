#include <stdio.h>
#include <stdlib.h>
int main(){
    double ave = 0.0;
    int i, j, max = -1, a[1000],  min = 100;
    scanf("%d",&j);
    for (i = 0; i < j; i++){
        scanf("%d",&a[i]);
    }
    for (i = 0; i < j; i++){
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
        ave += a[i];
    }
    ave /= j;
    printf("%d\n%d\n%0.2lf\n", max, min,ave);
    return 0;
}
