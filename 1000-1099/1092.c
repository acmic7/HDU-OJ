//1092
#include <iostream>

using namespace std;

int main()
{
    int n,x,s;
    while(cin>>n){
        s=0;
        if(n==0) break;
        for(int i=1;i<=n;i++){
            cin>>x;
            s+=x;
        }
        cout<<s<<"\n";
    }
    return 0;
}