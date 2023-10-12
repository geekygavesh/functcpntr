#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "gavesh    is  a programmer";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}