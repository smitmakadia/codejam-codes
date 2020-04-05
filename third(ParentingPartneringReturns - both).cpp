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
        vector<pair<int,int>>v;
        int a[n][2];
        char c[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
            v.pb(mk(a[i][0],i));
        }
        sort(v.begin(),v.end());
        int cl=0,jl=0,flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i].first>=cl)
            {
                c[v[i].second]='C';
                cl=a[v[i].second][1];
            }
            else
            {
                if(v[i].first>=jl)
                {
                    c[v[i].second]='J';
                    jl=a[v[i].second][1];
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"Case #"<<z<<": IMPOSSIBLE"<<endl;
        }
        else
        {
            cout<<"Case #"<<z<<": ";
            for(int i=0;i<n;i++)
            {
                cout<<c[i];
            }
            cout<<endl;
        }
        z++;
    }
}