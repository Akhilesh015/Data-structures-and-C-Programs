#include<stdio.h>
#include<conio.h>

long fact(int n)
{
    if(n>0){
        return (n*fact(n-1));
    }
    else{
        return (1);


    }

}
main()
{
    int n;

    printf("Enter the number");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    getch();
}
