#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter order of matrix: ";
    cin>>n;
    int i,o=1,e=1,t=0,r=n-1,b=n-1,l=0;  
    int arr[n][n];
    cout<<"Normal Matrix:"<<endl;
    for (i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            arr[i][j]=o;
            cout<<arr[i][j]<<" ";
            o++;
        }
        cout<<endl;
    }
    while(e<=(n*n))
    {
        for (i=l;i<=r;i++)
        {
            arr[t][i]=e;
            e++;
        }

        t++;
        for (i=t;i<=b;i++)
        {
            arr[i][r]=e;
            e++;
        }

        r--;
        for (i=r;i>=l;i--)
        {
            arr[b][i]=e;
            e++;
        }

        b--;
        for (i=b;i>=t;i--)
        {
            arr[i][l]=e;
            e++;
        }

        l++;
    }
    cout<<"Spiral Matrix:"<<endl;
    for (i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}