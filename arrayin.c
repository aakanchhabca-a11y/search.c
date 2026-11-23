#include<stdio.h>
int main()
{
    int arr[10];
    printf("enter the element:");
    
    
    for(int i=0;i<=5;i++){
        scanf("%d" , &arr[i]);
        }
    printf("elements are :");
    for(int i=0;i<5;i++){
        printf("%d\n" , arr[i]);
    }
    return 0;

}