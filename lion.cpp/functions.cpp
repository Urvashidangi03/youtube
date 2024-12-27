#include<iostream>
using namespace std;

int sum(int m,int n){     //function declaration
    int ans = m+n;        //function defined
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    cout<<sum(a,b);      //function call
    cout<<endl;
}