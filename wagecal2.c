//to calculate total wages
#include<stdio.h>
int main()
{

    int hours_worked,pay_rate,extra_time_work,overtime_pay_rate,overtime_wage,total_wage;
    printf("no of hours worked\n");
    scanf("%d",&hours_worked);

    printf("pay rate\n");
    scanf("%d",&pay_rate);

    extra_time_work  = hours_worked-40
    overtime_wage = extra_time_work*1.5*pay_rate;
    total_wage = 40*pay_rate+overtime_wage;
    printf("total wage\n : %d",total_wage);
    return 0;
}

