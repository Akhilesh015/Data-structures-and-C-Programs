#include<stdio.h>
#include<conio.h>

int GCD(int a , int b){
    if(a==b){
        return a;
    }
    if(a%b==0){
        return b;
    }
    if(b%a==0){
        return a;
    }
    if(a>b){
        return GCD(a%b,b);

    }
    if(b>a){
        return GCD(a,b%a);
    }

}


main(){
    int g,h;
    printf("Enter the 2 numbers of which GCD you want to find ");
    scanf("%d %d",&g,&h);
    printf("GCD of %d and %d is %d",g,h,GCD(g,h));

}
