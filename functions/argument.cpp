#include<iostream>
using namespace std;
void startriangle(int x){   // argument
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    startriangle(3);
    startriangle(5);
}