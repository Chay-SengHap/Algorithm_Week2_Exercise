#include <iostream>
using namespace std;

int main(){
    // Ex1. Ask the user to input their first and last name, concatenate them, and print the full name
    string firstName , lastName , fullName;
    cout<<"Input Your First Name : ";cin>>firstName;
    cout<<"Input Your Last Name : ";cin>>lastName;

    fullName = firstName.append(" "+lastName);

    cout<<"Your Full Name is : "<<fullName<<" with the legth of "<<fullName.length()<<endl;
    return 0;
}



// Ex4.  Ask  the  user  to  input  3  sentences  using  getline()  and  print  each  sentence  with  its 
// character count. 
// Ex5.  Write  a  function  that  takes  two  integers  and  returns  the  larger  one.  Test  it  with  user 
// input. 
// Ex6.  Store  5  numbers  in  an  array  and  use  a  function  to  find  the  maximum  and  minimum 
// values. 
// Ex7.   Write a C++ program that: 
// 1.  Asks the user for 3 products (name and price). 
// 2.  Stores product names in a string array and prices in a double array. 
// 3.  Uses a function to calculate the total price. 
// 4.  Uses a pointer to update the price of one product. 
// 5.  Saves the product list and total price to products.txt. 
// 6.  Reads back from the file and displays the list. 