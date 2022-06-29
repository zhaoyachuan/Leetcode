
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generaterMatrix(int n)
{
    vector<vector<int>> result(n,vector<int>(n,0));//定义一个二维数组,n*n大小，内容全为0；
    int loop=n/2;
    int startx=0,starty=0;
    int count=1;
    int i=0,j=0;
    int len=n-1;
    while(loop>0)
    {
        i=startx;
        j=starty;

        //模拟上右下左
        for(j=starty;j<starty+len;j++)
        {
            result[startx][j]=count++;
        }
        for(i=startx;i<startx+len;i++)
        {
            result[i][j]=count++;
        }
        for(;j>starty;j--)
        {
            result[i][j]=count++;
        }
        for(;i>startx;i--)
        {
            result[i][j]=count++;
        }
        startx++;
        starty++;
        len=len-2;
        loop--;
    }
    if (n%2!=0)
    {
        result[n/2][n/2]=n*n;
    }
    
    return result;
}
int main()
{
    vector<int> array={2,3,1,2,4,3,7};
    int n=5;
    vector<vector<int>> result(n,vector<int>(n,0));
    result=generaterMatrix(n);


    return 0;
}