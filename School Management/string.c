
#include "string.h"
#include <stdio.h>
#include <stdlib.h>
int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}

void string_print(char arr[])//int arr[]
{
    int i;
    for(i=0; arr[i]!=0; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    //printf("f: len=%d\n",string_len(arr));
    //printf("f: size=%d\n",sizeof(arr));
}
void string_scan(char*str,int maxSize)
{
    int i=0;
    fflush(stdin);
    scanf("%c",&str[i]);
    for(; str[i]!='\n'&&i<maxSize-1;)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;
}
void string_reverse(char *str)
{

    int i,j=string_len(str),temp;

    for(i=0; i<j/2; i++)
    {
        temp=str[i];
        str[i]=str[j-i-1];
        str[j-i-1]=temp;
    }
}
void string_UpperToLower(char*str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=('a'-'A');
        }
    }
}
int string_compare(char*str1,char*str2)
{
    int i;
    if(string_len(str1)==string_len(str2))
    {
        for(i=0; str1[i]; i++)
        {
            if(str1[i]!=str2[i])
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;

}
int string_compareNotSensitive2(char*s1,char*s2)
{
    int i;
    char c1,c2;
    for(i=0; s1[i]||s2[i]; i++)
    {
        c1=s1[i];
        c2=s2[i];
        if(c1>='A'&&c1<='Z')
        {
            c1=s1[i]-'A'+'a';
        }
        else if(c2>='A'&&c2<='Z')
        {
            c2=s2[i]-'A'+'a';
        }
        if(c1>c2)
        {
            return 1;
        }
        else if(c2>c1)
        {
            return -1;
        }
    }
    return 0;
}

void string_longestWord(char*s1,char*word)
{
    int i,j,c=0,max_word=0,index_longest_word;
    for(i=0;s1[i];i++)
    {
        if(s1[i]==' ')
        {
            if(max_word<c)
            {
                max_word=c;
                index_longest_word=i-max_word;
            }
            c=0;
        }
        else
        {
            c++;
        }
    }
    if(max_word<c)
            {
                max_word=c;
                index_longest_word=i-max_word;
            }
    for(j=0;j<max_word;j++)
    {
        word[j]=s1[index_longest_word];
        index_longest_word++;
    }
    word[j]=0;

}


