#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 100

struct catalog
{
 char name[40];
 char surname[40];
 int age;
 char phone[15];
};

int main(void)
{
    struct catalog mycatalog[MAX_LEN], *ps, *pe; 
    
    char ch;
        pe = mycatalog; /* pe = &mycatalog[0] */

    do {
        printf("Surname\t: ");
        scanf("%s",pe->surname);
        printf("Name\t: ");
        scanf("%s",pe->name);
        printf("Age\t: ");
        scanf("%d",&(pe->age));
        printf("Phone\t: ");
        scanf("%s",pe->phone);
        pe++;
        printf("Continue? (y or n): ");

        /*while(isspace(ch = getchar()));// /* ignore spaces, tabs, new lines etc */

    do
        {
             ch=getchar();

        } while( (ch!='y' && ch!='n') );

        printf("\n");

    } while ( ch=='y' && pe<& mycatalog[MAX_LEN] ); /*otherwise, use if*/

     pe--; /* pointer pe must point to the last entry of the array */
     ps=mycatalog; /* set pointer ps at the start of the array */

    while( ps<=pe )
    {
        printf("Surname\t: %s\n",ps->surname);
        printf("Name\t: %s\n",ps->name);
        printf("Age\t: %d\n",ps->age);
        printf("Phone\t: %s\n",ps->phone);
        printf("----------------------\n\n");
        ps++;
    }

    return 0;
}
