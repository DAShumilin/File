#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

    FILE* file;
    char name[] = "1.txt";
    int y = 0;

    if ((file = fopen(name, "r")) == NULL){

        printf("Error");
        return 0;
    }
    
    else {

        while (fscanf(file, "%*s") != EOF) {

            ++y;
        }
    }

    printf("%d", y);

    fclose(file);

    return 0;
}