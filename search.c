#include<stdio.h>
int main()
{

    int arr[ ]={10,20,30,40,50};
    int x = 10;
    int found =0;
    for(int i=0;i<=5;i++)
    {
       if(arr[i]==x)
       {
        printf("Elements are found :%d" , i+1);
        found=1;
        break;
       }
       if(found==0){
        printf("not found");
       }
    }
    return 0;

}