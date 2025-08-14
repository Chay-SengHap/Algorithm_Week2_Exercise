#include <iostream>
#include <fstream>
using namespace std;

float calculateAvg(int* score){
    float avg = 0;
    int total = 0;

    for(int i = 0 ; i  < sizeof(score)/sizeof(score[0]); i++){
        total +=score[i];
    } 
    avg = (float)total / sizeof(score)/sizeof(score[0]);



    return avg;
}



int main(){
    fstream File;
    File.open("student.txt" , ios::app);
    string firstName , lastName , fullName;
    
    cout<<"Input Your First Name : ";cin>>firstName;
    cout<<"Input Your Last Name : ";cin>>lastName;

    fullName = firstName.append(lastName);

    cout<<"Your Full Name is : "<<fullName<<" with the legth of "<<fullName.length()<<endl;
    File<<"Full Name : "<<fullName<<"\n";
    int score[5];

    for(int i = 0 ; i < sizeof(score)/sizeof(int) ; i++){
        cout<<"Input Score Number " <<i+1 <<" : ";cin>>score[i];
        File<<"Score "<<to_string(i+1)<<" : "<<score[i]<<"\n";
    }

    float average = calculateAvg(score);
    File<<"Average Score :"<<average<<"\n";
    File.close();



    fstream read;
    string line;

    read.open("student.txt" , ios::in);
    cout<<"All Student Name Score and Avg Score"<<endl;
    while(getline(read , line)){
        cout<<line;
        cout<<endl;
    }
    





   
    read.close();

    return 0;
}