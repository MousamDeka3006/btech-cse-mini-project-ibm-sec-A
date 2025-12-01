#include<iostream>
using namespace std;
int main(){
    string word;
    cout<<"Enter a word:";
    cin>>word;
    string reverse="";
    for(int i=0;i<word.length();i++)
    {reverse =word[i]+reverse;
    }
    if(word==reverse)
    cout<<"perfect secret word";
    else
    cout<<"not a secret word";
    return 0;

   
}