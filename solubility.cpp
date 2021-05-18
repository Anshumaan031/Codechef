#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int X,A,B;
        cin>>X>>A>>B;
        int F=A+(100-X)*B;
        int sol=F*10;
        cout<<sol<<endl;
    }
}