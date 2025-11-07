#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
	
	printf("本日の睡眠時間は？");
	scanf("%d", &a);
	
	printf("本日の消費カロリーは？");
    scanf("%d", &b);
	
	if (a >= 8)
    {
        printf("よく眠れていますね\n");
    }
    else if (a == 0)
    {
        printf("寝ましょう?\n");
    }
    else
    {
        printf("足りないですね\n");
    }
	
	if (b >= 1300)
    {
        printf("よく運動できていますね\n");
    }
    else if (b == 0)
    {
        printf("動きましょう\n");
    }
    else
    {
        printf("足りないですね\n");
    }
	
    return 0;
}