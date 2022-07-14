#include<bits/stdc++.h>
    using namespace std;
    
    void fun(int index,vector<int>&ans,int a[],int n)
    {
        if(index==n)
        {
            for(auto it:ans)
            {
                cout<<it<<" ";
            }

            if(ans.size()==0)
            {
                cout<<"{}";
            }
            cout<<endl;
            return ;
        }

        ans.push_back(a[index]);
        fun(index+1,ans,a,n);
        ans.pop_back();
        fun(index+1,ans,a,n);

    }

    int main()
     {
        int a[3]={3,1,2};
        int n=3;
        vector<int>ans;
        fun(0,ans,a,n);
        return 0;

     }
