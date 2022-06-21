#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void test_arr(){
    int array[2][3]={
        {1,2,3},
        {4,5,6}
    }; 
    cout << &array[0][0]<<" "<<&array[0][1]<<" "<<array[0][2]<<endl;
}
int main()
{
    test_arr();
    return 0;
}