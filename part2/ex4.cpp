#include <iostream>
using namespace std;

int main(){
    string sentence[3];
    for (int i = 0 ; i < 3 ; i++){
        cout<<"Input Sentence "<<i+1<<" : ";cin>>sentence[i];
    }
    for (int i = 0 ; i < 3 ; i++){
        cout<<"Sentence "<<i+1<<" : "<<sentence[i]<<"With the Length of "<<sentence[i].length()<<endl;
    }

    
    return 0;
}



// Ex4.  Ask  the  user  to  input  3  sentences  using  getline()  and  print  each  sentence  with  its 