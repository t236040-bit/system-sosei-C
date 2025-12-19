#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int intelligence, stamina, charisma;
    const int TOTAL = 20;

    srand(time(0));

    // 
    int a = rand() % (TOTAL + 1); 
    int b = rand() % (TOTAL + 1); 

    // a,b‚ğ¸‡‚É‚µ‚Ä3•ªŠ„
    int min = a < b ? a : b;
    int max = a > b ? a : b;

    intelligence = min;
    stamina = max - min;
    charisma = TOTAL - max;

    // ƒNƒ‰ƒX”»’è
    const char *job;

    if (intelligence >= stamina && intelligence >= charisma) {
        job = "mage";
    } else if (stamina >= intelligence && stamina >= charisma) {
        job = "knight";
    } else {
        job = "thief";
    }

    // Œ‹‰Ê•\¦
    printf("Class: %s\n", job);
    printf("Intelligence: %d\n", intelligence);
    printf("Stamina:      %d\n", stamina);
    printf("Charisma:     %d\n", charisma);
    printf("Total:        %d\n", intelligence + stamina + charisma);

    return 0;
}
