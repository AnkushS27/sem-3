// Find Inverse using Gauss jordon method
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the order of the matrix: ";
    cin>>n;
    float a[n][n],b[n][n],c[n][n],d[n][n],x[n],y[n],z[n],p,q,r,s,t,u,v,w,sum=0;
    cout<<"Enter the elements of the matrix: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                b[i][j]=1;
            }
            else
            {
                b[i][j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                p=c[j][i]/c[i][i];
                for(k=0;k<n;k++)
                {
                    c[j][k]=c[j][k]-p*c[i][k];
                    d[j][k]=d[j][k]-p*d[i][k];
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        q=c[i][i];
        for(j=0;j<n;j++)
        {
            c[i][j]=c[i][j]/q;
            d[i][j]=d[i][j]/q;
        }
    }
    cout<<"The inverse of the matrix is: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
