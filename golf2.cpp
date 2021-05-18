#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,x,K;
        cin>>N>>x>>K;
        int f=(N+1)%K;
        if(x%K==0 || x%K==f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}