//1096
#include <iostream>

using namespace std;

int main()
{
    int n,q,s,x;
    cin>>n;
    while(n--){
        cin>>q;
        s=0;
        for(int i=1;i<=q;i++){
            cin>>x;
            s+=x;
        }
        cout<<s<<"\n";
        if(n!=0) cout<<"\n";
    }
    return 0;
}
