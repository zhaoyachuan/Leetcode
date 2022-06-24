#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;
/*
相向双指针；
另辟空间
*/
vector<int> remove0(vector<int>& A)
{
    int k=A.size()-1;
    vector<int> result(A.size());
    for (int i = 0, j = A.size() - 1; i <= j;)
    { 
        if (A[i] * A[i] < A[j] * A[j])
        {
            result[k--] = A[j] * A[j];
            j--;
        }
        else {
            result[k--] = A[i] * A[i];
            i++;
        }
    }
    return result;
}
int main()
{
    vector<int> array={-4,-1,0,3,10};
    int length=0;
    vector<int> result;
    result=remove0(array);
    cout<<length<<endl;
    return 0;
}