#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string Name;
    int Age;
    float Score;


    public:
    void displayPerformance(string name, int age, float score){
        Name = name;
        Age = age;
        Score = score;
    }


    void recordStudentData() {
        cout<< "Enter Student Name: ";
        cin>> Name;
        cout<< "Enter Student Age: ";
        cin>> Age;
        cout<< "Enter Student Score: ";
        cin>> Score;
    }


    void displayPerformance() {
        cout <<"Student name: "<< Name << endl;
        cout <<"Student Age: "<< Age << endl;
        cout <<"Student Score: "<< Score << endl;
    }

};

int main() {
    string name;
    int age;
    float score;


    Student studentnt1;

}

