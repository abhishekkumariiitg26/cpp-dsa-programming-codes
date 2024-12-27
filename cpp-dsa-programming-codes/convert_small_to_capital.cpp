#include<iostream>
using namespace std;
char small_to_capital(char ch){
    int ans=(int)ch;
    ans-=32;
    return (char)ans;
}
int main(){
    char ch;
    cout<<"enter a character to convert to capital letter: ";
    cin>>ch;
    cout<<small_to_capital(ch);

    return 0;
}