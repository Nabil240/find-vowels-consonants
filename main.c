#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int vowels=0, consonants=0;
    printf("Write a String: ");
    fgets(str,sizeof(str),stdin);
    for(int i=0; str[i] !='\0';i++)
    {
        if(isalpha(str[i]))
        {
            char ch=tolower(str[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                vowels++;
            }else
            {
                consonants++;
            }
        }
    }
    printf("Number of Vowels: %d\n",vowels);
    printf("Number of Consonants: %d\n",consonants);
}