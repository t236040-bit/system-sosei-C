#include <stdio.h>

int main(void)
{
    int diff;
    char large;
    char small;
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c", &small);
    diff = 'a' - 'A';
    large = small - diff;
    
    printf("%cの大文字は%c", small, large);

    return 0;
}