#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>ans={4,3,2,6,5};
    int n=ans.size();
    for(int i=0;i<n;i++)
    {
        bool k=false;
        for(int j=1;j<n-i;j++)
        {
          if(ans[j-1]>ans[j])
            swap(ans[j-1],ans[j]);
            k=true;
        }
        if(!k) break;
    }

    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;

}
