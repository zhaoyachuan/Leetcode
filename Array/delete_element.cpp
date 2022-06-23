#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int Removes_duplicates_from_an_array(int* array,int length)
{
    int slow=0;
    int len=length;
    for(int fast=1;fast<length;fast++)
    {
        if(array[fast]!=array[slow])
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
    length=Removes_duplicates_from_an_array(array,10);
    cout<<length<<endl;
    return 0;
}