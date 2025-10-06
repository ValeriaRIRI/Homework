#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "RUS");

    int Cost_Gloves = 56;
    int Cost_Briafcase = 325;
    int Cost_Tie = 129;

    int D = 1020;


    int x = Cost_Gloves + Cost_Briafcase + Cost_Tie;
    int result = D - x;
    printf("Ðàñ÷åò ñäà÷è ïîñëå ñîâåðøåííûõ ïîêóïîê\n");
    printf("--------------------------------------\n");
    printf("Óñëîâèÿ:\n");
    printf("Ñòîèìîñòü ïåð÷àòîê %d\n", Cost_Gloves);
    printf("Ñòîèìîñòü ðþêçàêà %d\n", Cost_Briafcase);
    printf("Ñòîèìîñòü ãàëñòóêà %d\n", Cost_Tie);
    printf("Èñõîäíàÿ ñóììà äåíåã %d\n", D);
    printf("--------------------------------------\n");
    printf("Ðàñ÷¸ò:\n");
    printf("Ñóììà ïîêóïîê: %d ðóá + %d ðóá + %d ðóá = %d ðóá\n", Cost_Gloves, Cost_Briafcase, Cost_Tie, x);
    printf("Ñäà÷à: %d - %d = %d\n", D, x, result);
    return  0;

}
