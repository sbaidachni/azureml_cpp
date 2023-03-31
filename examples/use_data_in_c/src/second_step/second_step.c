#include <stdlib.h>
#include <stdio.h>
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
    ptr = fopen("clean_data.txt", "r");

    while((ch = fgetc(ptr)) != EOF) 
    {
        printf("%c", ch);
    }
    printf("\n");
 
    fclose(ptr);
    FILE* ptr_o;
    chdir(argv[2]);
    ptr_o = fopen("final_data.txt", "w");

    fprintf(ptr, "Final data are available.");

    fclose(ptr_o);
}