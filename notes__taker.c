#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    while (1)
    {
        int a;
        char note[2100];
        printf("1. write a note\n");
        printf("2. show notes\n");
        printf("3. exit\n");
        printf("select a option\n");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("enter note\n::");
            char new_note[100];
            scanf("%s", &new_note);

            strcat(new_note, "\n");
            strcat(note, new_note);
        }
        if (a == 2)
        {
            printf("%s", note);
        }
        if (a == 3)
        {
            break;
        }
    }
}