#include<iostream>
using namespace std;
int main(){
    int number;
    //----input the total number of elements in array----
    cout<<"enter the number of elements in an array= ";
    cin>>number;
    const int elements =number;
    int arr[elements];
    //---entering the elements---
    cout<<"enter the elemts= ";
    for (int i=0;i<elements;i++){
        cin>>arr[i];
    }
    //----prints the array----
    cout<<"the array= ";
    for(int j:arr){
    cout<<j;
    }
    return 0;
}