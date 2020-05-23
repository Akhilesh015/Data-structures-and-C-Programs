#include<stdio.h>
#include<conio.h>



void towerofhanoi(int n,char src, char dest, char helper)
{
    //base case
    if(n==0){
        return;

    }
    //recursive case
    //move n-1 disks from src to helper
    towerofhanoi(n-1,src,helper,dest);

    printf("\nMove %d from %c to %c",n,src,dest);

    towerofhanoi(n-1,helper,dest,src);


}

int main()
{
    int n;
    printf("Enter number of disks");
    scanf("%d",&n);
    towerofhanoi(n,'A','B','C');
    return 0;

}
