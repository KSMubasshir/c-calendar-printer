#include<stdio.h>
int month_name(int);
int Day_of_week(int,int,int);


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
    int y,m,q,h;
    while(1){
        printf("Please Enter Year:\n");
        scanf("%d",&y);
        printf("Please Enter Month(1-12):\n");
        scanf("%d",&m);
        printf("Please Enter Date:\n");
        scanf("%d",&q);
        h=Day_of_week(y,m,q);
        switch(h){
        case 0:
            printf(month_name(m));
            printf(" %d,%d is SATURDAY\n",q,y);
            break;
        case 1:
            printf(month_name(m));
            printf(" %d,%d is SUNDAY\n",q,y);
            break;
        case 2:
            printf(month_name(m));
            printf(" %d,%d is MONDAY\n",q,y);
            break;
        case 3:
            printf(month_name(m));
            printf(" %d,%d is TUESDAY\n",q,y);
            break;
        case 4:
            printf(month_name(m));
            printf(" %d,%d is WEDNESDAY\n",q,y);
            break;
        case 5:
            printf(month_name(m));
            printf(" %d,%d is THURSDAY\n",q,y);
            break;
        case 6:
            printf(month_name(m));
            printf(" %d,%d is FRIDAY\n",q,y);
            break;
        }
    }
    return 0;
}
