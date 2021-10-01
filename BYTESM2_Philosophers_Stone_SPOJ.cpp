#include "bits/stdc++.h" 


using namespace std; 




int main() 
{ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif  
    int t;
    cin>>t;
    while(t--)
    {
        int h,w;
        cin>>h>>w;
        int arr[h][w],mx=INT_MIN;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=h-2;i>=0;i--)
        {
            for(int j=0;j<w;j++)
            {
                int a=0,b=0,c=0;
                if(j-1>=0)a=arr[i+1][j-1];
                b=arr[i+1][j];
                if(j+1<w)c=arr[i+1][j+1];
                arr[i][j]+=max(a,max(b,c));
                if(arr[i][j]>mx)mx=arr[i][j];
            }
        }
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<mx;
        if(t>0)cout<<"\n";
    }   
    return 0; 
}