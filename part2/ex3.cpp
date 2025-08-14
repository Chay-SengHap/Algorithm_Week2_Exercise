#include <iostream>
using namespace std;


int main(){
    int array[3] = {1 ,2, 3};
    cout<<"Before Increase by 10 : ";
    for (int i : array){
        cout<<i<<" ";
    }
    int* ptr = array;
    *ptr+=10;
    cout<<endl;
    cout<<"After Increase by 10 : ";
    for (int i : array){
        cout<<i<<" ";
    }
    return 0;
}


// Ex3. Use a pointer to increase the first value in the array by 10 and print the updated array. 