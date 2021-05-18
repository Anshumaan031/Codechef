#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long x=2;
        long y=N-1;
        long m=1000000000+7;
        int temp=1;
        while(y>0){
            if(y%2!=0){
                temp=(temp*x)%m;
            }
            x=(x*x)%m;
            y=y/2;
        }
        cout<<temp<<endl;
    }
}