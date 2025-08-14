#include <iostream>
using namespace std;

int highestNum(int a , int b){

    if(a > b){
        return a;
    }else if(b > a){
        return b;
    }
    //if draw
    return 0;
}


int main(){
   int a , b;
   cout<<"input Num1 : ";cin>>a;
   cout<<"input Num2 : ";cin>>b;

   int result = highestNum(a,b);
   if(result== 0 ){
    cout<<"a and b is equal"<<endl;
   }else{
     cout<<result<<" is the highest Number"<<endl;
   }
  
    return 0;
}



// Ex5.  Write  a  function  that  takes  two  integers  and  returns  the  larger  one.  Test  it  with  user 
// input.