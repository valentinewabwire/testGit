#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {
    FILE*fp;
    fp=fopen ("asd.c","w");

    int age;
    char name[256];
    printf("Enter your name\n");
    gets('name');
    printf("Enter your Age\n");
    scanf("%d",&age);

    if(age > 18)
        printf("%c you can do driving",name);
    else
        printf("%c , %d is still young age",name,age);


    fclose(fp);

    return 0;
}
