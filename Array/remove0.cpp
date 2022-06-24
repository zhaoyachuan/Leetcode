#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int remove0(int* array,int length)
{
    int slow=length-1;
    int len=length;
    for(int fast=0;fast<length;fast++)
    {
        if(array[fast]==0)
        {
            slow++;
            array[slow]=array[fast];
        }
        else
        {
            len--;
        }
    }
    return len;
}
int main()
{
    int array[10]={0,0,1,1,1,2,2,3,3,4};
    int length=0;
    length=remove0(array,10);
    cout<<length<<endl;
    return 0;
}