#include <stdio.h>

//function pakage
int test_leap_year(int year);                //���� �Ǻ�
int date_sum(int y, int m, int d);        //�ش� ����� ���� ��¥���� ��¥ ���

int main()
{
        int y,m,d;                                                //���� �����
        int b_y, b_m, b_d;                                //�������
        int t_sum=0;                                        //��ƿ³��� ��
        int test;                                                //��� �Ǻ�
        int i;
        
        printf("������ϰ� ����¥�� �Է��Ͻÿ� \n��) 2007�� 7�� 2���� ��� 2007 7 2\n\n");
        printf("������� �Է� : ");
        scanf("%d %d %d", &b_y, &b_m, &b_d);
        printf("����¥ �Է� : ");
        scanf("%d %d %d", &y, &m, &d);

        //��ƿ� ���� �� ���
        for(i=b_y; i<y; i++)
        {
                t_sum+=date_sum(i, 12, 31);
        }
        t_sum+=date_sum(y, m, d);                        //������� ��¥ ����
        t_sum-=date_sum(b_y, b_m , b_d-1);        //����1��1�Ϻ��� �¾ ������ ���� ����

        printf(" ����� �� %d�� ��ҽ��ϴ�.\n", t_sum);
}

int test_leap_year(int year)
{
        if( year % 4 == 0){
                if( year % 100 == 0){
                        if(year % 400 == 0)
                                return 0;                        //����
                        else
                                return 1;
                }else
                        return 0;                                //����
        }else
                return 1;                                        //���        
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
                        if(test==1)                        //�ش� ������ ����� ���
                                sum+=28;
                        else
                                sum+=29;                //�ش� ������ ������ ���
                }
                else
                        sum+=30;
        }
        sum+=d;                                                //���� ��¥ ����
        return sum;
}
