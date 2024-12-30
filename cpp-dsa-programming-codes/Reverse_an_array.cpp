#include<iostream>
#include<vector>
using namespace std;
void rev_array(vector<int> &array,int size){
    int i=0;
    int j=size-1;
    while (i<j)
    {
        swap(array[i],array[j]);
        i++;
        j--;
    }
    
}
void print_array(vector<int> &array,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
}
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    vector<int> array(size);
    cout<<"enter elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"The array is: ";
    print_array(array,size);
    cout<<endl;
    cout<<"The reversed array is: ";
    rev_array(array,size);
    print_array(array,size);
    
    return 0;
}