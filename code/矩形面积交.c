#include <stdio.h>
typedef struct{
    double x;
    double y;
} point;
double min(double a,double b);
double max(double a,double b);
int main()
{
    point p[4];    //����ĸ��������
    double x1,x2,y1,y2;
    int i;
//    �����������ε��ĸ���
    for(i=0;i<4;i++){
        scanf("%lf %lf",&p[i].x,&p[i].y);
    }
    x1=min( max( p[0].x, p[1].x ), max( p[2].x, p[3].x ) );
    x2=max( min( p[0].x, p[1].x ), min( p[2].x, p[3].x ) );
    y1=min( max( p[0].y, p[1].y), max( p[2].y, p[3].y ) );
    y2=max( min( p[0].y, p[1].y), min( p[2].y, p[3].y ) );
//    �жϸ����ĵ��Ƿ��ܹ��ɾ���
    if((p[0].x-p[1].x && p[2].x-p[3].x) && (p[0].y-p[1].y && p[2].y-p[3].y)){
//        �ཻ/����
        if(x1>x2&&y1>y2){
            printf("%.2lf",(x1-x2)*(y1-y2));
        }else{
//        ����
            printf("0.00");
        }
    }else{
        printf("0.00");
    }
    return 0;
}
double min(double a,double b) {
    return a>b?b:a;
}
double max(double a,double b)
{
    return a>b?a:b;
}
