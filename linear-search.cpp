#include<iostream>
using namespace std;


int linear_search(double A[],int n,double key){
    for(int i=0;i<n;i++){
        if(A[i]==key){
            return i;
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
    double A[n],key;
    
    cout<<"Enter elements of Array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter element to search: "<<endl;
    cin>>key;
    cout<<"Element is at "<<linear_search(A,n,key);
    return 0;
}