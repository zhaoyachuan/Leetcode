
#include <iostream>
#include <vector>
using namespace std;

vector<int> generaterMatrix(vector<vector<int>>& array)
{
    if (array.empty()||array[0].empty())
    {
        return {};
    }
    
    vector<int> result;
    int m=array.size();
    int n=array[0].size();
    int startx=0,starty=0;
    
    return result;
}
int main()
{
    int n=5;
    int count=1;
    vector<vector<int>> array(n,vector<int>(n,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           array[i][j]=count++;
        }
        
    }
    
    
    vector<int> result;
    result=generaterMatrix(array);


    return 0;
}