//Dont give up, tough times make you strong.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    string  s;
    cin>>t>>s;
    for(int i=0;i<t;i++)
    {
        
            if (s[i]==s[i+1])
            {
                count++;
            }
        
    }
    cout<<count<<endl;
}