#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int no=1;
    while(no<=t)
    {
        int n,k;
        cin>>n>>k;
        vector <int> num(n);
        for(int i=0;i<n;i++)
        {
            
            cin>>num[i];
          
        }
        int cur;
        int expe=k;
        int count=0;
        int oc=0;
        for(int i=0;i<n;i++)
        {
            cur=num[i];
           
            if(cur==expe)
            {
                count++;
               
                if(expe!=1)
                    expe--;
            }
            else
            {
                expe=k;
                if(cur==expe)
                {
                	count=1;
                	if(expe!=1)
                		expe--;
                }
                else
                	count=0;
            }
            if(count==k)
            {
                oc++;
                expe=k;
                count=0;
            }
          
        }
        cout<<"Case #"<<no<<": "<<oc<<endl;
        no++;
    }
}