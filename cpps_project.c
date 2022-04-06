

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

typedef struct
{
    int roll;
    char name[20];
    long mo_no;
    char htown[20];
    char dob[8];
} stud;
int a = 1;
int teach();
void edit() {}
void delete () {}
void display() {}
void search() {}
void fordelay(long int j)
{
    int i, k;
    for (i = 0; i < j; i++)
        k = i;
}
void header()
{
    // system("color 6");
    printf("____________________________________________________________________________________________________\n");
    printf("                   --------- M.K.GANGHI COLLEGE OF ENGINEERING , NIGDI ---------\n");
    printf("                ____     welocome to the MKGCOE students information portal      ____\n");
    printf("____________________________________________________________________________________________________\n\n");
}

void create()
{
    // clrscr();
    int i;
    printf("Loading ");
    for (i = 0; i < 8; i++)
    {
        fordelay(100000000);
        printf(".");
    }
    // system("cls");
    header();
    printf(" CREATE STUDENTS ACCOUNT \n\n\n");
    stud s;
    while (a == 1)
    {
        FILE *fptr;
        fptr = fopen("cp.txt", "a");
        printf(" Enter Roll No. :- ");
        scanf("%d", &s.roll);
        printf(" Enter the name :- ");
        fflush(stdin);
        scanf("%[^\n]s", s.name);
        printf(" Enter the mobile no. :- ");
        scanf("%ld", &s.mo_no);
        printf(" Enter home town :- ");
        scanf("%s", s.htown);
        printf(" Enter date of birth (dd/mm/yyyy) :- ");
        scanf("%s", s.dob);
        // fwrite(&s,sizeof(stud),1,fptr);
        // fclose(fptr);
        printf(" Enter '1' to add more\nEnter '0' to exit \n:-- ");
        scanf("%d", &a);
        if (a == 0)
        {
            teach();
        }
    }
}
int teach()
{
    // system("cls");

    system("color 6");
    int n;
    header();
    printf("``````````````````````````````````````````````````````````````````````````````````````````````````````\n");
    printf("  \t\t\t\t   --- welcome to student information portal ---\n ");
    printf("  \t\t\t\t   -- * this page is for faculty members only * -- \n\n");
    printf("login as faculty for further process\n");
    int pass;
    printf(" enter user password --> ");
    scanf("%d", &pass);
    if (pass == 123)
    {

        printf("      ##   MENU   ## \n");
        printf(" 1. Create student's account \n");
        printf(" 2. Edit a student' account \n");
        printf(" 3. Delete student's account \n");
        printf(" 4. Search for student's record \n");
        printf(" 5. Display all students information \n");
        printf(" 0. *Exit\n\n");
        printf("\t Enter your choice --  ");
        scanf("%d", &n);
        switch (n)
        {
        case 0:
            return 0;
        case 1:
            create();
            break;
        case 2:
            edit();
            break;
        case 3:
            create();
            break;
        case 4:
            search();
            break;
        case 5:
            display();
            break;
        default:
            printf("enter appropriate value");
            break;
        }
    }

    getch();
}

int main()
{
    system("cls");
    char starter[] = "The programme is made by Paras kirit khilosiya the programme is for student management system of m.k gandhi college of engineering";
    for (int i = 0; i < strlen(starter); i++)
    {
        printf("%c", starter[i]);
        fordelay(10000000);
    }
    getche();
    system("cls");
    system("color 7");
    int ch;
    header();
    printf("\t\t\t\t\t-: you are here as :-\n\t\t\t\t      1.student       2.faculty \n");
choice:
    printf("\n\t\t\t\t\t  enter your choice --> ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\n\t\t\t sorry for now the portal for student is not working\n \n\t\t\t\t\t\t  ------ !!!! ------ \n\n\n\n");
        break;
    case 2:
        teach();
        break;
    default:
        printf("\t\t\t\t\t ~~ enter the valid input !!! ~~");
        goto choice;
    }
}
