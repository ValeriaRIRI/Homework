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
    printf("Расчет сдачи после совершенных покупок\n");
    printf("--------------------------------------\n");
    printf("Условия:\n");
    printf("Стоимость перчаток %d\n", Cost_Gloves);
    printf("Стоимость рюкзака %d\n", Cost_Briafcase);
    printf("Стоимость галстука %d\n", Cost_Tie);
    printf("Исходная сумма денег %d\n", D);
    printf("--------------------------------------\n");
    printf("Расчёт:\n");
    printf("Сумма покупок: %d руб + %d руб + %d руб = %d руб\n", Cost_Gloves, Cost_Briafcase, Cost_Tie, x);
    printf("Сдача: %d - %d = %d\n", D, x, result);
    return  0;
}