#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char password[100];
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSymbol = 0;

    printf("パスワードを入力してください: ");
    scanf("%99s", password);

    int length = strlen(password);

    // 文字種チェック
    for (int i = 0; i < length; i++) {
        if (islower(password[i])) {
            hasLower = 1;
        } else if (isupper(password[i])) {
            hasUpper = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else {
            hasSymbol = 1;
        }
    }

    // 判定
    if (length < 8) {
        printf("判定結果: 弱いパスワード\n");
    } 
    else if (length >= 12 && hasLower && hasUpper && hasDigit && hasSymbol) {
        printf("判定結果: 強いパスワード\n");
    } 
    else {
        printf("判定結果: 普通のパスワード\n");
    }

    return 0;
}
