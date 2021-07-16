#include<stdio.h>
int leap_year(int);
int months_last(int,int);
int month_name(int);
int Day_of_week(int,int,int);
int space_printer(int);


int space_printer(int h){
    int i;
    for(i=1; i<=h; i++)
        printf("    ");
    return 0;
}


int leap_year(int y){
    if(y%4!=0||(y%100==0&&y%400!=0))
        return 0;
    else return 1;
}


int months_last(int m,int y){
    int l;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        l=31;
    if(m==4||m==6||m==9||m==11)
        l=30;
    if(m==2&&leap_year(y))
        l=29;
    if(m==2&&!leap_year(y))
        l=28;
    return l;
}


int month_name(int m){
    switch(m){
        case 1:
            printf("JANUARY");
            break;
        case 2:
            printf("FEBRUARY");
            break;
        case 3:
            printf("MARCH");
            break;
        case 4:
            printf("APRIL");
            break;
        case 5:
            printf("MAY");
            break;
        case 6:
            printf("JUNE");
            break;
        case 7:
            printf("JULY");
            break;
        case 8:
            printf("AUGUST");
            break;
        case 9:
            printf("SEPTEMBER");
            break;
        case 10:
            printf("OCTOBER");
            break;
        case 11:
            printf("NOVEMBER");
            break;
        case 12:
            printf("DECEMBER");
            break;
    }
    return 0;
}


int Day_of_week(int y,int m,int q){
    int h;
    if(m==1||m==2){
        y=y-1;
        if(m==1)
            m=13;
        else
            m=14;
    }
    h=(q+(26*(m+1))/10+y+y/4+6*(y/100)+(y/400))%7;
    return h;
}


int main(){
    int y,m,q,h,l;
    while(1){
        printf("Please Enter Month(1-12):\n");
        scanf("%d",&m);
        printf("Please Enter Year:\n");
        scanf("%d",&y);
        printf("\n");
        printf("Calendar for:\n");
        printf("\n");
        printf(month_name(m));
        printf(" %d\n",y);
        printf("\n");
        printf("SAT SUN MON TUE WED THU FRI\n");
        printf("\n");
        l=months_last(m,y);
        h=Day_of_week(y,m,1);
        printf(space_printer(h));
        for(q=1; q<=l; q++){
            h=Day_of_week(y,m,q);
            if(q<=9)
                printf("  %d ",q);
            else
                printf(" %d ",q);
            if(h==6)
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}

