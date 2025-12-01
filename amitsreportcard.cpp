Problem Title: Amit's Report Card.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"select how many subjects";
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"enter the marks:";
        cin>>marks[i];
    }
    int highest =marks[0];
    int lowest =marks[0];
    for(int i=1;i<n;i++){
        if(marks[i] >highest)
            highest=marks[i];
        if(marks[i] <lowest)
            lowest=marks[i];
        }
        cout<<"highest"<<highest<<"\n";
        cout<<"lowest"<<lowest<<"\n";
     return 0;

        }
    


