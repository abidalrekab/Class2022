//
// Created by The Big Boss on 6/17/2022.
//
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    float score = 58.7;
    char grade;
    if (score >= 60) {
        grade ='P';
        cout << "the grade = " << grade << endl;
    }
    else
    {
        grade = 'F';
        cout << "the grade = " << grade << endl;

    }


    return 0;

}

