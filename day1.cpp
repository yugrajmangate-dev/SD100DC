#include<bits/stdc++.h>
using namespace std;

int main(){
int n=5;

for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++ ){
        cout << "* ";
    }
cout << "\n"; 
}


for(int k=n; k>=1; k--){
    for(int m=1; m<=k; m++ ){
        cout << "* ";
    }
cout << "\n"; 

}
    return 0;
}