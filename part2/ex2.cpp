#include <iostream>
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
 // Ex2. Store 5 integers in an array and use a function to calculate and print the average. 
int score[5] = {12 , 12 , 12, 12, 12};

float avg = calculateAvg(score);
cout<<"Average : "<<avg;

    return 0;
}