
#ok
#include<iostream>
using namespace std;

//IO_DONE
int main(){
    int x, n;
    cout<<"Enter the no = ";
    cin>>x;
    cout<<"Enter the value of exponent = ";
    cin>>n;
    int ans=1;
    while(n>0){
        int bit=n&1;
        if(bit){
            ans=ans*x;
        }
        n=n>>1;
        x=x*x;
    }
    cout<<ans;
    return 0;
}
