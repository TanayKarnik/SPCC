/*
#include<stdio.h>
//#include<conio.h>
#include<string.h>

int main()
{
	int slash[20]={0},i=0,j=0,k=0,l=0,slash_no=0;
	char inp[50]={0},part1[50]={0};
	printf("Enter production in the form A-> aB1|aB2|.....\nA-> ");
	gets(inp);
	inp[strlen(inp)]='\0';
	for(i=0;inp[i];i++)
	{
        if(inp[i]=='|')
        {
            slash[slash_no]=i;
            slash_no++;
        }
	}
	for(i=0;i<slash_no;i++)
    {
        if(inp[0]!=inp[slash[i]+1]||(inp[0]<='a'&&inp[0]>='z'))     //accept only terminals (small case)
        {
            printf("No LF");
            return 0;
        }
    }
    i=0;
    j=0;
    while(inp[i])
    {
        for(i++;inp[i]!='|'&&inp[i]&&inp[i]!=inp[0];i++,j++)
            part1[j]=inp[i];
        if(inp[i]=='|')
            part1[j++]='|';
    }
    part1[++j]='\0';
    printf("A-> %cA'",inp[0]);
    printf("\nA'-> %s",part1);
	return 0;
}
*/
/*
OUTPUT:
Enter production in the form A-> aB1|aB2|.....
A-> aV|abj|asdG
A-> aA'
A'-> V|bj|sdG
*/

#include <stdio.h>
#include<string.h>

int main(void) {
    char a[100],a1[100],a2[100],a3[100],a4[100],a5[100]; 
    char temp[]={'/'};
    int i,j=0,k,l;
    printf("Enter production A->");
    gets(a);
    for(i=0;a[i]!='/';i++,j++)
        a1[j]=a[i];
    a1[j]='\0';
    for(j=++i,i=0;a[j]!='\0';i++,j++)
        a2[i]=a[j];
    a2[i]='\0';
    k=0;l=0;
    for(i=0;i<strlen(a1)|| i<strlen(a2);i++)
    {
        if(a1[i]==a2[i]){
            a3[k]=a1[i];
            k++;
        }
        else
        {
            a4[l]=a1[i];
            a5[l]=a2[i];
            l++;
        }
    }
    a3[k]='X';
    a3[++k]='\0';
    //a4[l]='/';
    a5[l]='\0';
    a4[++l]='\0';
    strcat(a4,temp);
    strcat(a4,a5);
    
    printf("A->%s \n",a3);
    printf("X->%s",a4);
    
    return 0;
}
