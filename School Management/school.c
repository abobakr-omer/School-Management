#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include"color.h"
#include "school.h"
#include "string.h"


   char s[20];
    int  internal_choice1;
    int internal_choice2;
    std_t*student;

    char c;

int Educational_index,Class_index,ID_index,choice,sizes=0;
std_t school[Educational_level][Class_number][ID_number]= {{{0}}};
void welcome_school(void)
{
    printf(ANSI_COLOR_RESET);
    printf("\t\t\t\t\t *****     ****  *       *     ***        ***     *\n");
    printf(ANSI_COLOR_CYAN);
    printf("\t\t\t\t\t*         *      *       *    *   *      *   *    *\n");
    printf(ANSI_COLOR_MAGENTA);
    printf("\t\t\t\t\t*        *       *       *   *     *    *     *   *\n");
    printf(ANSI_COLOR_BLUE);
    printf("\t\t\t\t\t *****   *       *********  *       *  *       *  *\n");
    printf(ANSI_COLOR_YELLOW);
    printf("\t\t\t\t\t     *   *       *       *   *     *    *     *   *\n");
    printf(ANSI_COLOR_GREEN);
    printf("\t\t\t\t\t     *    *      *       *    *   *      *   *    *\n");
    printf(ANSI_COLOR_RED);
    printf("\t\t\t\t\t*****      ****  *       *     ***        ***     *******\n");
printf(ANSI_COLOR_YELLOW);
    printf("\n\t\t\t\t\t\t\tWelcome to the SCHOOL of legends\n");
    printf(ANSI_COLOR_RED);
    printf("\n\t\t\t\t\t\t\tPress Enter to enter the SCHOOL");
     scanf("%c",&c);

                if(c=='\n')
                {
                    system("cls");
                }

}
void school_StudentAdd(std_t*p,int*sizes,int Educational_levels)
{
    //std_t s;

    if(p->age==0)
    {
        printf(ANSI_COLOR_GREEN);
        printf("Enter the name\n");
        printf(ANSI_COLOR_RED);
        string_scan(&p->name,20);
        printf(ANSI_COLOR_GREEN);
        printf("Enter the grade:");
        printf(ANSI_COLOR_RED);
        printf("A_B_C_D_E_F\n");
        printf(ANSI_COLOR_RED);
        while(1)
        {

            scanf("%c",&p->grade);
            fflush(stdin);
            if(((p->grade)>='A')&&((p->grade)<='F'))
            {
                break;
            }
            else if(((p->grade)>='a')&&((p->grade)<='f'))
            {
                break;
            }


            else
            {
                fflush(stdin);
                printf(ANSI_COLOR_YELLOW);
                printf("Wrong Input,Please Enter the grade from these options");
                printf(ANSI_COLOR_RED);
                printf("A_B_C_D_E_F\n");


            }


        }

        while(Educational_levels==1)
        {
            for(int i=1; i>0; )
            {
                printf(ANSI_COLOR_GREEN);
                printf("Enter the age between 6 to 8\n");
                printf(ANSI_COLOR_RED);
                i--;

            }

            scanf("%d",&p->age);
            if(p->age>=6&&p->age<=8)
            {
                break;
            }

            else
            {
                 fflush(stdin);
                printf(ANSI_COLOR_RED);
                printf("Wrong Input,Please enter the appropriate age for this age group\n");



            }


        }
        while(Educational_levels==2)
        {
           for(int i=1; i>0; )
            {
                printf(ANSI_COLOR_GREEN);
                printf("Enter the age between 9 to 11\n");
                printf(ANSI_COLOR_RED);
                i--;

            }
            scanf("%d",&p->age);
            if(p->age>=9||p->age<=11)
            {
                break;
            }

            else
            {
                 fflush(stdin);
                printf(ANSI_COLOR_RED);

                printf("Wrong Input,Please enter the appropriate age for this age group\n");



            }


        }
        while(Educational_levels==3)
        {
           for(int i=1; i>0; )
            {
                printf(ANSI_COLOR_GREEN);
                printf("Enter the age between 12 to 14\n");
                printf(ANSI_COLOR_RED);
                i--;

            }
            scanf("%d",&p->age);
            if(p->age>=12||p->age<=14)
            {
                break;
            }

            else
            {
                 fflush(stdin);
                printf(ANSI_COLOR_RED);

                printf("Wrong Input,Please enter the appropriate age for this age group\n");



            }


        }
        system("cls");
        printf(ANSI_COLOR_YELLOW);
        printf("Father's data\n");
        printf(ANSI_COLOR_YELLOW);
        printf("Enter the name\n");
        printf(ANSI_COLOR_RED);
        string_scan(p->father.name,20);
        printf(ANSI_COLOR_YELLOW);
        printf("Enter the phone\n");
        printf(ANSI_COLOR_RED);
        string_scan(p->father.phone,11);
        printf(ANSI_COLOR_YELLOW);
        printf("Enter the address\n");
        printf(ANSI_COLOR_RED);
        string_scan(p->father.address,200);
        /*printf("Enter the mother's data\n");
        printf("Enter the name\n");
        string_scan(p->mother.name,20);
        printf("Enter the phone\n");
        string_scan(p->mother.phone,11);
        printf("Enter the address\n");
        string_scan(p->mother.address,200);*/
        *sizes=*sizes+1;
        //printf("size:%d\n",*sizes);
    }
    else
    {
        printf(ANSI_COLOR_RED);
        printf("This place is filled with another student's data\n");
        sleep(1);

    }
}
std_t* school_SearchByName(char*str,std_t p[][Class_number][ID_number])
{
    int i,j,k;
    for(i=0; i<Educational_level; i++)
    {
        for(j=0; j<Class_number; j++)
        {
            for(k=0; k<ID_number; k++)
            {
                if(string_compareNotSensitive2(&p[i][j][k].name,str)==0)
                {
                    printf("%d %d %d\n",i,j,k);
                    return &p[i][j][k];
                }
            }
        }
    }

    return 0;

}
void school_StudentEditName(std_t*p)
{
    printf("Enter the New name\n");
    string_scan(&p->name,20);
}
void school_StudentEditGrade(std_t*p)
{
    printf("Enter the New grade\n");
    scanf("%c",&p->grade);
}
void school_StudentEditAge(std_t*p)
{
    printf("Enter the New Age\n");
    scanf("%d",&p->age);
}


void school_StudentPrint(std_t*p)
{
    if(p->age!=0)
    {
        printf(ANSI_COLOR_GREEN);
        printf("name:\n");
        printf(ANSI_COLOR_RED);
        printf("%s\n",p->name);
        printf(ANSI_COLOR_GREEN);
        printf("grade:\n");
        printf(ANSI_COLOR_RED);
        printf("%c\n",p->grade);
        printf(ANSI_COLOR_GREEN);
        printf("age:\n");
        printf(ANSI_COLOR_RED);
        printf("%d\n",p->age);
        printf(ANSI_COLOR_GREEN);
        printf("Father's data\n");
        printf(ANSI_COLOR_GREEN);
        printf("name:\n");
        printf(ANSI_COLOR_RED);
        printf("%s\n",p->father.name);
        printf(ANSI_COLOR_GREEN);
        printf("the phone:\n");
        printf(ANSI_COLOR_RED);
        printf("%s\n",p->father.phone);
        printf(ANSI_COLOR_GREEN);
        printf("the address:\n");
        printf(ANSI_COLOR_RED);
        printf("%s\n",p->father.address);
        /*printf("the mother's data\n");
        printf("name:\n");
        printf("%s\n",p->mother.name);
        printf("the phone:\n");
        printf("%s\n",p->mother.phone);
        printf("the address:\n");
        printf("%s\n",p->mother.address);*/
    }
    else
    {
        printf(ANSI_COLOR_GREEN);
        printf("No data has been entered in this location before\n");
        return;
    }
    printf("=========================================================\n");
}

void school_AllStudentPrint(std_t p[][Class_number][ID_number],int sizes)
{
    int i=0,j=0,k=0;
    if(sizes!=0)
    {


        for(i=0; i<Educational_level; i++)
        {

            for(j=0; j<Class_number; j++)
            {

                for(k=0; k<ID_number; k++)
                {
                    if(p[i][j][k].age!=0)
                    {
                        printf(ANSI_COLOR_GREEN);
                        printf("The Educational_level %d The Class_number  The %d ID_number is %d\n",i+1,j+1,k+1);
                        printf("name:\n");
                        printf(ANSI_COLOR_RED);
                        printf("%s\n",p[i][j][k].name);
                        printf(ANSI_COLOR_GREEN);
                        printf("grade:\n");
                        printf(ANSI_COLOR_RED);
                        printf("%c\n",p[i][j][k].grade);
                        printf(ANSI_COLOR_GREEN);
                        printf("age:\n");
                        printf(ANSI_COLOR_RED);
                        printf("%d\n",p[i][j][k].age);
                        printf(ANSI_COLOR_GREEN);
                        printf("the father's data\n");
                        printf("name:\n");
                        printf(ANSI_COLOR_RED);
                        printf("%s\n",p[i][j][k].father.name);
                        printf(ANSI_COLOR_GREEN);
                        printf("the phone:\n");
                        printf(ANSI_COLOR_RED);
                        printf("%s\n",p[i][j][k].father.phone);
                        printf(ANSI_COLOR_GREEN);
                        printf("the address:\n");
                        printf(ANSI_COLOR_RED);
                        printf("%s\n",p[i][j][k].father.address);
                        /*printf("the mother's data\n");
                        printf("name:\n");
                        printf("%s\n",p[i][j][k].mother.name);
                        printf("the phone:\n");
                        printf("%s\n",p[i][j][k].mother.phone);
                        printf("the address:\n");
                        printf("%s\n",p[i][j][k].mother.address);*/
                        printf("---------------------------------------------------------------------------\n");
                    }
                }
            }

        }
    }
    else
    {
        printf(ANSI_COLOR_RED);
        printf("School Is Empty\n");
    }

}


void school_StudentRemoveByName(std_t*p)
{
    int i;
    for(i=0; p->name[i]; i++)
    {
        p->name[i]=0;
    }
    p->age=0;
    p->grade=0;
}
void school_call(std_t*p)
{
    if(p->age==0)
    {
        printf(ANSI_COLOR_GREEN);
        printf("No data has been entered in this location before\n");
        return;
    }
    int i;
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t");
    printf(ANSI_COLOR_GREEN);
    for(i=0; p->father.phone[i]; i++)
    {
        printf("%c",p->father.phone[i]);
    }
    printf(ANSI_COLOR_RED);
    printf("\n\t\t\t\t\t\tRinging......\n");
    int barWidth = 40;
    for (int i2 = 0; i2 <= barWidth; ++i2)
    {
        printf("                             [");

        // Set the text and background color based on the progress
        if (i2 <= barWidth / 3)
            printf(ANSI_COLOR_RED);  // Red text color
        else if (i2 <= (2 * barWidth) / 3)
            printf(ANSI_COLOR_RED);  // Yellow text color
        else
            printf(ANSI_COLOR_RED);  // Green text color

        // Set the background color based on the progress
        if (i2 <= barWidth / 3)
            printf(ANSI_BACKGROUND_GREEN);  // Blue background color
        else if (i2 <= (2 * barWidth) / 3)
            printf(ANSI_BACKGROUND_GREEN);  // Magenta background color
        else
            printf(ANSI_BACKGROUND_GREEN);  // Cyan background color

        for (int j2 = 0; j2 < i2; ++j2)
            printf("#");

        printf("#");
        for (int j2 = i2 + 1; j2 <= barWidth; ++j2)
            printf(" ");

        printf(ANSI_COLOR_RESET ANSI_BACKGROUND_RESET);  // Reset text and background colors*/
        printf("] %d%%", (i2 * 100) / barWidth);
        fflush(stdout);  // Flush the output to ensure it is displayed

        usleep(79999);  // Sleep for 100 milliseconds (0.1 second)

        // Move the cursor back to the beginning of the line
        printf("\r");
    }


    system("cls");
    printf("\t\t\t\t\t\t\n\n\n\n\n\n\n");
    printf(ANSI_COLOR_GREEN);

    printf("\t\t\t\t\t\tOkay, we appreciate your call.\n\t\t\t\t\t\tWe will look into this matter with great interest\n\t\t\t\t\t\tand work hard for our son\n\t\t\t\t\t\tto reach the highest ratings thank you.\n");
           printf(ANSI_COLOR_RED);
                printf("\n\t\t\t\t\t\tPress ENTER To Back\n");
                fflush(stdin);
                scanf("%c",&c);

                if(c=='\n')
                {
                    system("cls");
                }





}
void school_sortByName(std_t p[][Class_number][ID_number],int Educational_Level,int Class_Number)
{
    int i,j,k;
    std_t temp;

    for(k=0; k<1;)
    {
        if(string_compareNotSensitive2(&p[Educational_Level][Class_Number][k].name,&p[Educational_Level][Class_Number][k+1].name)==1)
        {
            // printf("f:%s\n%s\n",p[Educational_Level][Class_Number][k].name,p[Educational_Level][Class_Number][k+1].name);
            /*temp.grade=p[i][j][k].grade;
            p[i][j][k].grade=p[i][j][k+1].grade;
            p[i][j][k+1].grade=temp.grade;
            temp.age=p[i][j][k].age;
            p[i][j][k].age=p[i][j][k+1].age;
            p[i][j][k+1].age=temp.age;*/
            temp=p[Educational_Level][Class_Number][k];
            p[Educational_Level][Class_Number][k]=p[Educational_Level][Class_Number][k+1];
            p[Educational_Level][Class_Number][k+1]=temp;
            k++;
        }

    }



}
void school_sortByGrade(std_t p[][Class_number][ID_number],int Educational_Level,int Class_Number)
{
    int i,j,k;
    std_t temp;

    for(k=0; k<1;)
    {
        if(p[Educational_Level][Class_Number][k].age<p[Educational_Level][Class_Number][k+1].age)
        {

            temp=p[Educational_Level][Class_Number][k];
            p[Educational_Level][Class_Number][k]=p[Educational_Level][Class_Number][k+1];
            p[Educational_Level][Class_Number][k+1]=temp;
            k++;
        }
    }



}

