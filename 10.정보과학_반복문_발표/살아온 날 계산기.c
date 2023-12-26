#include <stdio.h>

//function pakage
int test_leap_year(int year);                //윤년 판별
int date_sum(int y, int m, int d);        //해당 년부터 받은 날짜지의 날짜 계산

int main()
{
        int y,m,d;                                                //현재 년월일
        int b_y, b_m, b_d;                                //생년월일
        int t_sum=0;                                        //살아온날의 합
        int test;                                                //평년 판별
        int i;
        
        printf("생년월일과 현날짜를 입력하시오 \n예) 2007년 7월 2일인 경우 2007 7 2\n\n");
        printf("생년월일 입력 : ");
        scanf("%d %d %d", &b_y, &b_m, &b_d);
        printf("현날짜 입력 : ");
        scanf("%d %d %d", &y, &m, &d);

        //살아온 날의 합 계산
        for(i=b_y; i<y; i++)
        {
                t_sum+=date_sum(i, 12, 31);
        }
        t_sum+=date_sum(y, m, d);                        //현재까지 날짜 더함
        t_sum-=date_sum(b_y, b_m , b_d-1);        //생년1월1일부터 태어난 날까지 합을 빼줌

        printf(" 당신은 총 %d일 살았습니다.\n", t_sum);
}

int test_leap_year(int year)
{
        if( year % 4 == 0){
                if( year % 100 == 0){
                        if(year % 400 == 0)
                                return 0;                        //윤년
                        else
                                return 1;
                }else
                        return 0;                                //윤년
        }else
                return 1;                                        //평년        
}

int date_sum(int y, int m, int d)
{
        int sum =0;
        int i;
        int test = test_leap_year(y);

        for(i=1; i<m ; i++)
        {
                if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
                        sum+=31;
                else if(i==2)
                {
                        if(test==1)                        //해당 연도가 평년일 경우
                                sum+=28;
                        else
                                sum+=29;                //해당 연도가 윤년일 경우
                }
                else
                        sum+=30;
        }
        sum+=d;                                                //오늘 날짜 더함
        return sum;
}
