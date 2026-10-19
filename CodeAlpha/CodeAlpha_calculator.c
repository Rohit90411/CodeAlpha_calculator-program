#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    char ch;//'-',''*','/'
    printf("enter the operator what kind of operation you want to performed ch=");
    scanf(" %c", &ch);
    switch(ch)
    {
      case '+':
          printf("the value of a+b=%d",a+b);
          break;
      case '-':
        printf("the value of a-b=%d",a-b);
        break;
       case '*':
           printf("the value of a*b =%d",a*b);
           break;
       case '/':
         printf("the value of a/b=%d",a/b);
         break;
}
getch();
return(0);
}
