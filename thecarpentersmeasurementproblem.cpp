#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the numbers:";
    cin>>a>>b;
    int x=a, y=b;
    while(b!=0){
        int c=b;
        b=a%b;
        a=c;

    }
    int gcd=a;
    int lcm=(x*y)/gcd;
    cout<<"gcd:"<<gcd<<endl;
    cout<<"lcm"<<lcm<<endl;
    return 0;
}