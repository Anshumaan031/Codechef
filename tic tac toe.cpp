#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0; i<T; i++){
	    char Arr[3][3];
	    int X=0;
	    int o=0;
	    int count=0;
	    
	    for(int j=0; j<3; j++){
	        for(int k=0; k<3; k++){
	            cin>>Arr[j][k];
	        }
	    }
	    for(int j=0; j<3; j++){
	        for(int k=0; k<3; k++){
	            //cout<<Arr[j][k];
	            if(Arr[j][k] == 'O'){
	                o++;
	            }
	            else if(Arr[j][k] == '_'){
	                count++;
	            }
	            else if(Arr[j][k] == 'X'){
	                X++;
	            }
	        }
	    }
	    int xw=0;
	    int ow=0;
	    if(Arr[2][0]=='X' && Arr[1][1]=='X' && Arr[0][2]=='X'){
	        xw = 1;
	    }
	    if(Arr[2][0]=='O' && Arr[1][1]=='O' && Arr[0][2]=='O'){
	        ow = 1;
	    }
                 if(Arr[0][2]=='X' && Arr[1][2]=='X' && Arr[2][2]=='X'){
	        xw = 1;
	    }
	    if(Arr[0][2]=='O' && Arr[1][2]=='O' && Arr[2][2]=='O'){
	        ow = 1;
	    }
                if(Arr[0][0]=='X' && Arr[1][1]=='X' && Arr[2][2]=='X'){
	        xw = 1;
	    }
	    if(Arr[0][0]=='O' && Arr[1][1]=='O' && Arr[2][2]=='O'){
	        ow = 1;
	    }
                if(Arr[0][0]=='X' && Arr[0][1]=='X' && Arr[0][2]=='X'){
	        xw = 1;
	    }
	    if(Arr[0][0]=='O' && Arr[0][1]=='O' && Arr[0][2]=='O'){
	        ow = 1;
	    }
                if(Arr[2][0]=='X' && Arr[2][1]=='X' && Arr[2][2]=='X'){
	        xw = 1;
	    }
	    if(Arr[2][0]=='O' && Arr[2][1]=='O' && Arr[2][2]=='O'){
	        ow = 1;
	    }
                if(Arr[0][0]=='X' && Arr[1][0]=='X' && Arr[2][0]=='X'){
	        xw = 1;
	    }
	    if(Arr[0][0]=='O' && Arr[1][0]=='O' && Arr[2][0]=='O'){
	        ow = 1;
	    }
                if(Arr[0][1]=='X' && Arr[1][1]=='X' && Arr[2][1]=='X'){
	        xw = 1;
	    }
	    if(Arr[0][1]=='O' && Arr[1][1]=='O' && Arr[2][1]=='O'){
	        ow = 1;
	    }
                if(Arr[1][0]=='X' && Arr[1][1]=='X' && Arr[1][2]=='X'){
	        xw = 1;
	    } 
	    if(Arr[1][0]=='O' && Arr[1][1]=='O' && Arr[1][2]=='O'){
	        ow = 1;
	    }
	    if((xw==1 && ow==1) || (X-o<0) || (X-o>1)){
	        cout<<"3"<<endl;
	    }
	    else if((xw==0 && ow==0 && count==0) || (xw==1 && ow==0 && X>o) || 
	       (xw==0 && ow==1 && X==o)){
	           cout<<"1"<<endl;
	    }
	    else if((xw==0 && ow==0 && count>0) || (X==0 && o==0 && count==9)){
	        cout<<"2"<<endl;
	    }
	    else {
	        cout<<"3"<<endl;
	    }
	}
	return 0;
}
