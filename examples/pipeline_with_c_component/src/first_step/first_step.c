#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
    for (int i=0; i<argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    FILE* ptr;
    char ch;

    chdir(argv[1]);
    ptr = fopen("data.txt", "r");

    while((ch = fgetc(ptr)) != EOF) 
    {
        printf("%c", ch);
    }
    printf("\n");
 
    fclose(ptr);
    FILE* ptr_o;
    chdir(argv[2]);
    ptr_o = fopen("clean_data.txt", "w");

    fprintf(ptr, "New data are available.");

    fclose(ptr_o);
}
