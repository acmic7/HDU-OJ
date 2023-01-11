//1094
#include <iostream>

using namespace std;

int main()
{
    int n,x,s;
    while(cin>>n){
        s=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&x);
            s+=x;
        }
        cout<<s<<"\n";
    }
    return 0;
}