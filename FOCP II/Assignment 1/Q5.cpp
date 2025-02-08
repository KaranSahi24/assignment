#include <iostream>
using namespace std;
int main()
{
    int i,j;  
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Matrix:"<<endl;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Rotated Matrix:"<<endl;
    for (i=0;i<3;i++)
    {
        for (j=2;j>=0;j--)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}