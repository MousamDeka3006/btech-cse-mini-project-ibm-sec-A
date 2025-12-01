#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of days:";
    cin>>n;
    int time[n];
    cout<<"Enter exercise times";
    for(int i=0;i<n;i++){
        cin>>time[i];

    }
    cout<<"Reversed exercises times";
    for(int i=0;i<n;i++){
        cout<<time[n-1-i]<<"\n";
    }
    return 0;
}