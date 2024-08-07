#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include"color.h"
#include "school.h"
#include "string.h"



int main()
{
     system("COLOR 0A");



     welcome_school();


    while(1)
    {
        system("cls");

        printf(ANSI_COLOR_GREEN);
        printf("1-To add student\n2-print the student's data\n3-print all school's studend\n4-To Edit the student's data\n5-To Remove a student\n6-To call father\n7-To sort by Name\n8-To sort by Grade\n");
        printf(ANSI_COLOR_RED);
        scanf("%d",&choice);
        fflush(stdin);
        system("cls");
        if(choice>0&&choice<=8)
        {




            switch(choice)
            {
            case 1:
                printf(ANSI_COLOR_GREEN);
                printf("Enter The Educational level you have THREE Levels:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Educational_index);
                    if(Educational_index>=1&&Educational_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }
                printf(ANSI_COLOR_GREEN);
                printf("Enter Class Number you have THREE Classes:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Class_index);
                    if(Class_index>=1&&Class_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }

                printf(ANSI_COLOR_GREEN);
                printf("Enter ID Number From 1 To 10\n");
                printf(ANSI_COLOR_RED);
                while(1)
                {
                    scanf("%d",&ID_index);
                    if(ID_index>=1&&ID_index<=10)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 10\n");
                    }
                }

                system("cls");
                school_StudentAdd(&school[Educational_index-1][Class_index-1][ID_index-1],&sizes,Educational_index);
                //printf("size:%d\n",sizes);
                system("cls");
                break;
            case 2:
                printf(ANSI_COLOR_GREEN);
                printf("Enter The Educational level you have THREE Levels:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Educational_index);
                    if(Educational_index>=1&&Educational_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }
                printf(ANSI_COLOR_GREEN);
                printf("Enter Class Number you have THREE Classes:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Class_index);
                    if(Class_index>=1&&Class_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }

                printf(ANSI_COLOR_GREEN);
                printf("Enter ID Number From 1 To 10\n");
                printf(ANSI_COLOR_RED);
                while(1)
                {
                    scanf("%d",&ID_index);
                    if(ID_index>=1&&ID_index<=10)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 10\n");
                    }
                }

                system("cls");
                school_StudentPrint(&school[Educational_index-1][Class_index-1][ID_index-1]);
                printf(ANSI_COLOR_RED);
                printf("Press ENTER To Back\n");
                fflush(stdin);
                scanf("%c",&c);

                if(c=='\n')
                {
                    system("cls");
                    break;
                }
            case 3:
                school_AllStudentPrint(&school,sizes);
                printf(ANSI_COLOR_GREEN);
                printf("Press ENTER To Back\n");
                fflush(stdin);
                scanf("%c",&c);

                if(c=='\n')
                {
                    system("cls");
                    break;
                }
            case 4:
                printf(ANSI_COLOR_GREEN);
                printf("1-To Edit By Name\n2-To Edit By ID\n");

                while(1)
                {
                    printf(ANSI_COLOR_RED);
                    scanf("%d",&internal_choice1);
                    if(internal_choice1==1||internal_choice1==2)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid choice please choose from list front of you\n");
                        fflush(stdin);


                    }
                }
                system("cls");
                switch(internal_choice1)
                {
                case 1:
                    printf(ANSI_COLOR_GREEN);
                    printf("Enter The Name\n");
                    printf(ANSI_COLOR_RED);
                    string_scan(s,20);

                    if(school_SearchByName(s,school)!=0)
                    {
                        system("cls");
                        student=school_SearchByName(s,school);
                        printf(ANSI_COLOR_GREEN);
                        printf("1-To Edit The Name\n2-To Edit The Age\n3-To Edit The Grade\n");
                        while(1)
                        {
                            printf(ANSI_COLOR_RED);
                            scanf("%d",&internal_choice2);
                            if(internal_choice2==1||internal_choice2==2)
                            {
                                break;
                            }
                            else
                            {
                                printf("Invalid choice please choose from list front of you\n");
                                fflush(stdin);


                            }
                        }
                        switch(internal_choice2)
                        {
                        case 1:
                            school_StudentEditName(student);
                            break;
                        case 2:
                            school_StudentEditAge(student);
                            break;
                        case 3:
                            school_StudentEditGrade(student);
                            break;
                        }
                    }
                    else
                    {
                        printf(ANSI_COLOR_RED);
                        printf("This name does not match the name of any student in this school\n");
                        sleep(2);
                        break;

                    }

                    break;
                case 2:
                    printf(ANSI_COLOR_GREEN);
                    printf("Enter The Educational level you have THREE Levels:");
                    printf(ANSI_COLOR_RED);
                    printf("1,2 & 3\n");
                    while(1)
                    {
                        scanf("%d",&Educational_index);
                        if(Educational_index>=1&&Educational_index<=3)
                        {
                            break;
                        }
                        else
                        {
                            fflush(stdin);
                            printf("Please a valid Level from 1 to 3\n");
                        }
                    }
                    printf(ANSI_COLOR_GREEN);
                    printf("Enter Class Number you have THREE Classes:");
                    printf(ANSI_COLOR_RED);
                    printf("1,2 & 3\n");
                    while(1)
                    {
                        scanf("%d",&Class_index);
                        if(Class_index>=1&&Class_index<=3)
                        {
                            break;
                        }
                        else
                        {
                            fflush(stdin);
                            printf("Please a valid Level from 1 to 3\n");
                        }
                    }

                    printf(ANSI_COLOR_GREEN);
                    printf("Enter ID Number From 1 To 10\n");
                    printf(ANSI_COLOR_RED);
                    while(1)
                    {
                        scanf("%d",&ID_index);
                        if(ID_index>=1&&ID_index<=10)
                        {
                            break;
                        }
                        else
                        {
                            fflush(stdin);
                            printf("Please a valid Level from 1 to 10\n");
                        }
                    }
                    system("cls");
                     if(school[Educational_index-1][Class_index-1][ID_index-1].age!=0)
                    {
                        printf(ANSI_COLOR_GREEN);
                    printf("1-To Edit The Name\n2-To Edit The Age\n3-To Edit The Grade\n");
                    printf(ANSI_COLOR_GREEN);
                    scanf("%d",&internal_choice2);
                    system("cls");
                    switch(internal_choice2)
                    {
                    case 1:
                        school_StudentEditName(&school[Educational_index-1][Class_index-1][ID_index-1]);
                        break;
                    case 2:
                        school_StudentEditAge(&school[Educational_index-1][Class_index-1][ID_index-1]);
                        break;
                    case 3:
                        school_StudentEditGrade(&school[Educational_index-1][Class_index-1][ID_index-1]);
                        break;
                    }

                    }
                    else
                    {
                        printf(ANSI_COLOR_RED);
                        printf("No data has been entered in this location before\n");
                        sleep(2);
                        break;

                    }



                }

                break;
            case 5:
                printf(ANSI_COLOR_GREEN);
                printf("Enter The Educational level you have THREE Levels:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Educational_index);
                    if(Educational_index>=1&&Educational_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }
                printf(ANSI_COLOR_GREEN);
                printf("Enter Class Number you have THREE Classes:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Class_index);
                    if(Class_index>=1&&Class_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }

                printf(ANSI_COLOR_GREEN);
                printf("Enter ID Number From 1 To 10\n");
                printf(ANSI_COLOR_RED);
                while(1)
                {
                    scanf("%d",&ID_index);
                    if(ID_index>=1&&ID_index<=10)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 10\n");
                    }
                }
                if(school[Educational_index-1][Class_index-1][ID_index-1].age!=0)
                {
                    school_StudentRemoveByName(&school[Educational_index-1][Class_index-1][ID_index-1]);
                    break;
                }
                else
                {
                    printf(ANSI_COLOR_RED);
                    printf("No data has been entered in this location before\n");
                    sleep(2);
                    break;

                }
                system("cls");


                break;
            case 6:
                printf(ANSI_COLOR_GREEN);
                printf("1-To Call By Name\n2-To Call By ID\n");

                while(1)
                {
                    printf(ANSI_COLOR_RED);
                    scanf("%d",&internal_choice1);
                    if(internal_choice1==1||internal_choice1==2)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid choice please choose from list front of you\n");
                        fflush(stdin);


                    }
                }
                system("cls");
                switch(internal_choice1)
                {
                case 1:

                    printf(ANSI_COLOR_GREEN);
                    printf("Enter The Name\n");
                    printf(ANSI_COLOR_RED);
                    string_scan(s,20);
                    if(school_SearchByName(s,school)!=0)
                    {
                        system("cls");
                        student=school_SearchByName(s,school);
                        school_call(student);
                        break;
                    }
                    else
                    {
                        printf(ANSI_COLOR_RED);
                        printf("This name does not match the name of any student in this school\n");
                        sleep(2);
                        break;

                    }

                case 2:
                    printf(ANSI_COLOR_GREEN);
                    printf("Enter The Educational level you have THREE Levels:");
                    printf(ANSI_COLOR_RED);
                    printf("1,2 & 3\n");
                    while(1)
                    {
                        scanf("%d",&Educational_index);
                        if(Educational_index>=1&&Educational_index<=3)
                        {
                            break;
                        }
                        else
                        {
                            fflush(stdin);
                            printf("Please a valid Level from 1 to 3\n");
                        }
                    }
                    printf(ANSI_COLOR_GREEN);
                    printf("Enter Class Number you have THREE Classes:");
                    printf(ANSI_COLOR_RED);
                    printf("1,2 & 3\n");
                    while(1)
                    {
                        scanf("%d",&Class_index);
                        if(Class_index>=1&&Class_index<=3)
                        {
                            break;
                        }
                        else
                        {
                            fflush(stdin);
                            printf("Please a valid Level from 1 to 3\n");
                        }
                    }

                    printf(ANSI_COLOR_GREEN);
                    printf("Enter ID Number From 1 To 10\n");
                    printf(ANSI_COLOR_RED);
                    while(1)
                    {
                        scanf("%d",&ID_index);
                        if(ID_index>=1&&ID_index<=10)
                        {
                            break;
                        }
                        else
                        {
                            fflush(stdin);
                            printf("Please a valid Level from 1 to 10\n");
                        }
                    }
                    system("cls");
                    if(school[Educational_index-1][Class_index-1][ID_index-1].age!=0)
                    {
                        school_call(&school[Educational_index-1][Class_index-1][ID_index-1]);
                        break;
                    }
                    else
                    {
                        printf(ANSI_COLOR_RED);
                        printf("No data has been entered in this location before\n");
                        sleep(2);
                        break;

                    }


                }
                break;
            case 7:
                printf(ANSI_COLOR_GREEN);
                printf("Enter The Educational level you have THREE Levels:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Educational_index);
                    if(Educational_index>=1&&Educational_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }
                printf(ANSI_COLOR_GREEN);
                printf("Enter Class Number you have THREE Classes:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Class_index);
                    if(Class_index>=1&&Class_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }


                system("cls");
                school_sortByName(&school,Educational_index-1,Class_index-1);
                break;
            case 8:
                printf(ANSI_COLOR_GREEN);
                printf("Enter The Educational level you have THREE Levels:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Educational_index);
                    if(Educational_index>=1&&Educational_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }
                printf(ANSI_COLOR_GREEN);
                printf("Enter Class Number you have THREE Classes:");
                printf(ANSI_COLOR_RED);
                printf("1,2 & 3\n");
                while(1)
                {
                    scanf("%d",&Class_index);
                    if(Class_index>=1&&Class_index<=3)
                    {
                        break;
                    }
                    else
                    {
                        fflush(stdin);
                        printf("Please a valid Level from 1 to 3\n");
                    }
                }
                system("cls");
                school_sortByGrade(&school,Educational_index-1,Class_index-1);
                break;

            }


        }
        else
        {


            printf("Invalid choice please choose from list front of you\n");
            fflush(stdin);
            sleep(2);
            system("cls");
        }
    }

    return 0;
}
