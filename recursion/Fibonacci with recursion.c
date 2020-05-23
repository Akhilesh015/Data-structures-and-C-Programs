#include<stdio.h>
#include<conio.h>

int fib(int n){
    if (n==1||n==2)
        return 1;
    return (fib(n-1)+fib(n-2));


}

/*main(){

int n,t;
printf("Enter the term you want to search");
scanf("%d",&t);

printf("%d term is %d",t,fib(t));

}//this is for if user want to search particular term*/



//printing fibonacci series upto some term


main(){

int n,t,i;
printf("Enter the term till where you want the series");
scanf("%d",&t);
for(i=1;i<=t;i++){
        printf(" %d ",fib(i));

}
}


