#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int Cost_Gloves = 56;
    int Cost_Briafcase = 325;
    int Cost_Tie = 129;

    int D = 1020;


    int x = Cost_Gloves + Cost_Briafcase + Cost_Tie;
    int result = D - x;
    printf("������ ����� ����� ����������� �������\n");
    printf("--------------------------------------\n");
    printf("�������:\n");
    printf("��������� �������� %d\n", Cost_Gloves);
    printf("��������� ������� %d\n", Cost_Briafcase);
    printf("��������� �������� %d\n", Cost_Tie);
    printf("�������� ����� ����� %d\n", D);
    printf("--------------------------------------\n");
    printf("������:\n");
    printf("����� �������: %d ��� + %d ��� + %d ��� = %d ���\n", Cost_Gloves, Cost_Briafcase, Cost_Tie, x);
    printf("�����: %d - %d = %d\n", D, x, result);
    return  0;
}