// 1. Write a program to print the below pattern.

// Input: 5

// Output: 

// 5  5  5  5  5
// 5  4  4  4  4
// 5  4  3  3  3
// 5  4  3  2  2
// 5  4  3  2  1


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);//Fetching the input from the user
    int w=n;
    // int q=n;
    int x=0,y=0;
    int arr[n][n];//Declaring the  matrix array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;//Setting the values to 0;
        }
    }
    for(int i=0;i<n;i++)//Outer loop to be executed n number of times
    {
        for(int j=0;j<n;j++)
        {                       //Two for loops to interate over the matrix
            for(int k=0;k<n;k++)
            {
                if((j==x||k==y) && arr[j][k]==0)//Checking if x or y is either the row index or column index and 0 (to eliminate overwriting)
                {
                    arr[j][k]=w;//Setting the indexes value to n;
                }
            }
        }
        w--;//decrementing the alies n value
        x++;//incrementing x;
        y++;//incrementing y;
    }
    for(int i=0;i<n;i++)//printing the output
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }


}
