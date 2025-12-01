Problem title: The shopkeeper's lucky number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if(n%2==0){
        cout<<"number is even."<<n;
    }
    else  {
        cout<<"number is odd"<<n;
    }
    if(n%5==0){
        cout<<"number is divisible by 5.";

    }
    else{
        cout<<"not divisible by 5";
    }
    
    return 0;

}
