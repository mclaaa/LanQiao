 #include <stdio.h>
 #include <math.h>
int main(void)
 {
 int a=1;
 int b=6;
 int c=5;
 double delta;
 delta=b*b-4*a*c;
 double x1,x2;
 if(delta>0)
 {
 x1=(-b-sqrt(delta))/(2*a);
 x2=(-b+sqrt(delta))/(2*a);
 printf("������������,x1=%f,x2=%f\n",x1,x2);
 }
 else if(delta==0)
 { x1=(-b)/(2*a);
   x2=x1;
 printf("������Ψһ��,x1=%f,x2=%f\n",x1,x2);
 } 
 else if(delta<0)
 {
 printf("�����޽�\n");
  
 }
 return 0;		
 }

