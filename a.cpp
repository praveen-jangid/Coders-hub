#include<iostream>
using namespace std;
int main(){

int a=10200;

string str=to_string(a);
cout<<str<<endl;


for(int i=0;i<a.length();i++){
    cout<<a[i]<<endl;
}
return 0;
} 