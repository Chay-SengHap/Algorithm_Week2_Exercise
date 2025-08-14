#include <iostream>
using namespace std;

int main(){

    int num[5] = {2 ,4,1,4 ,5};
    int min = num[0];
    int max = num[0];


    for(int i = 0 ; i < 5 ; i++){
        if(num[i] < min){
            min = num[i];
        }
        if(num[i] > max){
            max = num[i];
        }
    }

    cout<<"min : "<<min<<" and "<<"max : "<<max;






    return 0;
}



// Ex6.  Store  5  numbers  in  an  array  and  use  a  function  to  find  the  maximum  and  minimum 
// values.