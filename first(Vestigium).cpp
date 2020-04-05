/*
** Author   : Smit Makadia
** Roll No. : 18BCE231
*/

#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define boom ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
using namespace std;
 
int main() {
    
    boom
    int t,z=1;
    cin>>t;
    while(z<=t)
    {
        int n;
        cin>>n;
        int a[n][n],sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==j)
                {
                    sum+=a[i][j];
                }
            }
        }
        int r=0;
        for(int i=0;i<n;i++)
        {
            int b[n+1]={0};
            for(int j=0;j<n;j++)
            {
                if(b[a[i][j]]==1)
                {
                    r++;
                    break;
                }
                else
                {
                    b[a[i][j]]++;
                }
            }
        }
        int c=0;
        for(int j=0;j<n;j++)
        {
            int b[n+1]={0};
            for(int i=0;i<n;i++)
            {
                if(b[a[i][j]]==1)
                {
                    c++;
                    break;
                }
                else
                {
                    b[a[i][j]]++;
                }
            }
        }
        cout<<"Case #"<<z<<": "<<sum<<" "<<r<<" "<<c<<endl;
        z++;
    }
}