#include<iostream>
#include<string>
using namespace std;
int main(){
    int grade;
    string fullNames;
    cout<<"Enter your full names: "<<endl;
    getline(cin,fullNames);
    cout<<"Enter your grade: "<<endl;
    cin>>grade;
    switch(grade){
        case 'A':(grade == 70 && grade < 100);
        cout<<"Your fullnames is: "<<fullNames<<" and your grade is: A"<<endl;
        break;
        case 'B':(grade == 60 && grade <= 69);
        cout<<"Your fullnames is: "<<fullNames<<" and your grade is: B"<<endl;
        break;
        case 'C':(grade == 50 && grade <=59);
        cout<<"Your fullnames is: "<<fullNames<<" and your grade is: C"<<endl;
        break;
        case 'D': (grade == 40 && grade <=49);
        cout<<"Your fullnames is: "<<fullNames<<" and your grade is: D"<<endl;
        break;
        case 'F': (grade <40 && grade =1);
        cout<<"Yourfullnames is: "<<fullNames<<" and your grade is: F"<<endl;
        break;

    }
}