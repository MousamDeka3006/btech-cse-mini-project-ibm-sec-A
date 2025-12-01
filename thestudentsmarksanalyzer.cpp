Problem title:The student's mark analyzer.
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter marks:\n"<<endl;
    int marks;
    int total;

    cin>>n;
    for(int i=0;i<n;i++){
     cin>>marks;
     total+=marks;

    }
  
    double average=(double)total/n;
    cout<<"total=\n"<<total<<endl;
    cout<<"average=\n"<<average<<endl;
    return 0;

}
