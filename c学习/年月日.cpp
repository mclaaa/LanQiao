#include <stdio.h>
#include <stdlib.h>
int
 main()
{ 
    int year, month, days;
    
   // printf("输入年份：");
    //scanf("%d",&year);
    printf("输入月份："); 
    scanf("%d", &month);
    switch(month){
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            days=31;
            break; 
        case 4: 
        case 6: 
        case 9: 
        case 11:
            days=30;
            break; 
        case 2:
            // 判断闰年
            //if(year%4==0 && year%100!=0 || year%400==0)
                days=29; 
            //else
              //  days=28; 
            break; 
        default:
            printf("月份输入错误！\n");
            exit(1);
            break; 
    } 
    printf("天数：%d\n", days); 
    return 0;
}
