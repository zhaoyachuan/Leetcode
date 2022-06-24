
#include <iostream>
#include <vector>
using namespace std;
/*
滑动窗口；
双指针变种；
*/
int remove0(vector<int>& A,int target)
{
    int result=INT32_MAX;
    int sum=0;
    int head=0;
    int len=0;
    for (int tail = 0; tail < A.size(); tail++)
    { 
        sum=sum+A[tail];
        while(sum>=target)
        {
            len=tail-head+1;
            if(len<result)
            {
                result=len;
            }
            sum=sum-A[head];
            head++;
        }
    }
    return result;
}
int main()
{
    vector<int> array={2,3,1,2,4,3,7};
    int length=0;
    vector<int> result;
    length=remove0(array,7);
    cout<<length<<endl;
    return 0;
}