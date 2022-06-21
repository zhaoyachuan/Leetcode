#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int binary(int* array,int length,int target)
{
    int left=0;
    int right=length-1;
    int middle=0;
    while(left<=right)
    {
        middle=(left+right)/2;
        if(array[middle]>target)
        {
            right=middle-1;

        }
        else if (array[middle]<target)
        {
            left=middle+1;
        }
        else
        {
            return middle;
        }
        

    }
    return -1;
}
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int index=0;
    index=binary(array,10,8);
    cout<<index<<endl;
    return 0;
}