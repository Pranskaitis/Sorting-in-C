#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i=0,c,j,N;
    int arr[30];

    printf("Enter a number 1 or 2 \n 1 - From lowest to highest \n 2 - From highest to lowest \n");
    scanf("%1d",&k); // determines if array will be sorted in ascending or descending order. k=1 in ascending, k=2 in descending.

    printf("Enter the n-th number to be found in the array \n");
    scanf("%d",&n); // determines the n-th number to be found in sorted array

    printf("Enter your array of numbers and end your array by pressing ctrl+z \n");

    while(i<30 && scanf("%d",&arr[i])==1)
    {
        N=i+1; // calculates the number of valid inputs
        i++;
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1; j<N ;j++)
        {
            if(k==1 && arr[j]<arr[i]) // sorts the array
            {
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
            if(k==2 && arr[j]>arr[i]) // sorts the array
            {
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }


    int x;
    for(x=0;x<N;x++)
        printf(" \n %d ",arr[x]); // prints out the sorted array

    if(k==1)
        printf("\n %d-th lowest number is %d",n,arr[n-1]);
    if(k==2)
        printf("\n %d-th highest number is %d",n,arr[n-1]);


    return 0;
}
