#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int d,m,y,nd,nm,ny,ndays;
    // clrscr();

    printf("Enter the date, month, year\n");
    scanf("%d%d%d",&d,&m,&y);

    ndays = month[m-1];

    if(y<=1812 || y>2022)
    {
        printf("Invalid Input year\n");
        exit(0);
    }


    if(m<1 || m>12)
    {
        printf("Invalid Input month\n");
        exit(0);
    }   

    if(m ==2)
    {
        if(y%100 == 0)
        {
            if (y%4==0)
            {
                ndays = 29;
            }
            
        }

        else{
            if (y%4 == 0)
            {
                ndays = 29;
            }
            
        }
    }
     
    if(d<=0 || d>ndays)
    {
        printf("Invalid Input days\n");
        exit(0);
    }

    nd = d+1;
    nm = m;
    ny = y;

    if(nd>ndays)
    {
        nd=1;
        nm++;
    }

    if (nm>12)
    {
        nm = 1;
        ny++;
    }
    
    printf("\nGiven date is %d:%d:%d",d,m,y);
    printf("\nNext day's date is %d:%d:%d",nd,nm,ny);
    getch();
    return 0;
}





//Or-----------------------------------------------------------------------------------------------------------------
// #include<stdio.h>
// int main()
// {
//     int day,month,year,flag=1;

//     printf("Enter the day:");
//     scanf("%d",&day);

//     printf("\nEnter the month:");
//     scanf("%d",&month);

//     printf("\nEnter the year:");
//     scanf("%d",&year);
//     if(month>12 || month<1 || day<1 || day>31 || year<1812 || year>2022)
//      {
//          flag=0;
//          printf("Ivalid date\n");
//      }
//     if((flag==1 && day<30 && month!=2)||(flag==1 && day<28 && month==2)|| (flag==1 && day==28 && (year%4)==0 && month==2) ){
//         day++;
//     }
//     else if((flag==1 && day>28 && (year%4)==0 && month==2)|| (flag==1 && day==28 && (year%4)!=0 && month==2)||(flag==1 && month==8 && day==31) || (flag==1 && ((month<=7)%2)!=0 && day==31) || (flag==1 && ((month<=7)%2)==0 && day>=31)|| (flag==1 && ((month>8)%2)!=0 && day>=30) || (flag==1 && ((month>8)%2)==0 && day>=31))
//     {
//         day=1;
//         month++;
//     }
//     if(month>12)
//    {
//        month=1;
//        year++;
//    }
//    if(flag==1)
//    printf("The next day is:- %d:%d:%d",day,month,year);
//     else
//     printf("The date is wrong:- %d:%d:%d",day,month,year);
// }


