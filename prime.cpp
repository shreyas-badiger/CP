#include<iostream>
#include<cmath>

using namespace std;

unsigned long long int *a;
int main()
{
    int m,t,n;
    int i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a = new unsigned long long int[n+3];
        for(i=2;i<=n;i++)
            a[i]=i;
        int temp= sqrt(n);
        for(i=2;i<=temp;i++)
        {
            if(a[i]!=0)
                {
                    j=i*i;
                    while(j<=n)
                    {
                        a[j]=0;
                        j=j+i;
                    }
                }

        }
        int count=0;
        for(i=2;i<=n;i++)
            if(a[i]!=0)
                {cout<<a[i]<<" ";count++;}
        cout<<endl<<"count="<<count<<endl;

    }
    return 0;
}

