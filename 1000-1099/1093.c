//1093
#include <iostream>

using namespace std;

int main()
{
    int n,q,x,s;
    cin>>n;
    while(n){
        cin>>q;
        s=0;
        for(int i=1;i<=q;i++){
            scanf("%d",&x);
            s+=x;
        }
        cout<<s<<"\n";
        n--;
    }
    return 0;
}