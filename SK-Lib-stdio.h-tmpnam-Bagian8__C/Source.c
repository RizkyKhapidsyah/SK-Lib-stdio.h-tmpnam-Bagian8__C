#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    char* name1 = NULL;
    char* name2 = NULL;
    char* name3 = NULL;

    if ((name1 = tmpnam(NULL)) != NULL) { 
        printf("%s is safe to use as a temporary file.\n", name1);
    } else {
        printf("Cannot create a unique filename\n");
    }

    if ((name2 = _tempnam("c:\\tmp", "stq")) != NULL) {
        printf("%s is safe to use as a temporary file.\n", name2);
    } else {
        printf("Cannot create a unique filename\n");
    }

    if (name2) {
        free(name2);
    }

    if (_putenv("TMP=") != 0) {
        printf("Could not remove TMP environment variable.\n");
    }


    if ((name3 = _tempnam("c:\\tmp", "stq")) != NULL) {
        printf("%s is safe to use as a temporary file.\n", name3);
    } else {
        printf("Cannot create a unique filename\n");
    }

    if (name3) {
        free(name3);
    }

    _getch();
    return 0;
}