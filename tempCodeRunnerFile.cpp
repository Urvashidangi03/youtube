#include<iostream>
using namespace std;

int main(){
    cout<<"Enter size of array-";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"The array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}