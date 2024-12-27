#include<iostream>
using namespace std;
string check_leap_year(int year){
    if(year%400==0){
        return "Leap Year";
    }
    else if(year%4==0 && year%100!=0){
        return "Leap Year";
    }
    else{
        return "Not Leap Year";
    }
}
int main(){
    int year;
    cout<<"enter year to check: ";
    cin>>year;
    cout<<check_leap_year(year);
    return 0;
}