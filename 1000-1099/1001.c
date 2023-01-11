//1001
#include <iostream>

using namespace std;

int main()
{
    int n,s;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            s+=i;
        }
        cout<<s<<"\n\n";
        s=0;
    }
    return 0;
}