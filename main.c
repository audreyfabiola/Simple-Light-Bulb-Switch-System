#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mylib/mylib.h"

void background_gray() {
    printf("\033[100m");
}

void white_on_red() {
    printf("\033[41;37m"); // White text on red background
}

void background_yellow() {
    printf("\033[43m");
}

void white_on_green() {
    printf("\033[37;42m"); // White text on green background
}

void reset() {
    printf("\033[0m");
}

void OFF() {
    printf("    _____\n");
    printf("   |__ __|\n");
    printf("     |=|\n"); 
    printf("     /");
    background_gray();
    printf(" ");
    reset();
    printf("\\\n");
    printf("    (");
    background_gray();
    printf("   ");
    reset();
    printf(")\n");
    printf("     `-'\n");
    printf("                 _______________________\n");
    printf("                |        _______        |\n");
    printf("                |       ||");
    white_on_red();
    printf(" OFF ");
    reset();
    printf("||        |\n");
    printf("                |       ||_____||       |\n");
    printf("                |       |/    /||       |\n");
    printf("                |       /    / ||       |\n");
    printf("                |      /____/ /-'       |\n");
    printf("                |      |____|/          |\n");
    printf("                |                       |\n");
    printf("                `-----------------------'\n");
}

    
void ON() {
    printf("    _____ \n");
    printf("   |__ __| \n");
    printf("     |=| \n");
    printf("     /");  
    background_yellow();
    printf(" "); 
    reset();
    printf("\\ \n");
    printf("--- (");
    background_yellow();
    printf("   ");
    reset();
    printf(") --- \n");
    printf("   , `-'.\n");
    printf("  /   |  \\\\n");  
    printf("                 _______________________ \n");
    printf("                |                       | \n");
    printf("                |       ____            | \n");
    printf("                |      |____|\\          | \n");  
    printf("                |      \\    \\ \\-'       | \n");
    printf("                |       \\    \\ ||       | \n");
    printf("                |       |\\____\\||       | \n");
    printf("                |       ||");
    white_on_green();
    printf(" ON  ");
    reset();
    printf("||       | \n");
    printf("                |       ||_____||       | \n");
    printf("                |                       | \n");
    printf("                `-----------------------' \n");
}

int main(void) {
    int s0 = 0, s1 = 0, b, o0 = 0;
    while (true) {
        printf("\033[2J"); // Clear screen 
        printf("\033[1;1H"); // Move cursor to upper left
        printf("Bulb: \n");
        if (o0 == 0) {
            OFF();
        } else {
            ON();
        }
        reset();

        printf("Enter button input (0 for not pushing button // 1 for pushing button): ");
        scanf("%d", &b);

        if (b == 0 || b == 1) {
            states(s0, s1, o0, b, &s0, &s1, &o0);
        } else {
            printf("Please enter a proper input (0 or 1)\n");
        }
    }

    return 0;
}

