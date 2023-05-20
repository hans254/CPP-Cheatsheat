#include<iostream>
using namespace std;
int main()
{
    string student1_name;
    int student1_cat, student1_exam;
    int student1_total = (student1_cat + student1_exam);
    
    //KEY DETAILS FOR THE FIRST STUDENT
    cout<<"Enter the name of the first student.\n";
    getline(cin, student1_name);
    cout<<"Enter the score for the cat\n";
    cin>>student1_cat;
    cout<<"Enter the score for the exam\n";
    cin>>student1_exam;
    cout<<"The total score for "<<student1_name<<" is "<<student1_total<<endl;

    //KEY IN DETAILS FOR THE SECOND STUDENT
    string student2_name;
    int student2_cat, student2_exam;
    int student2_total = (student2_cat + student2_exam);

    cout<<"Enter the name of the second student.\n";
    getline(cin, student2_name);
    cout<<"Enter the score for the cat\n";
    cin>>student2_cat;
    cout<<"Enter the score for the exam\n";
    cin>>student2_exam;
    cout<<"The total score for "<<student2_name<<" is "<<student2_total<<endl;

    //FIND THE AVERAGE FOR THE TWO STUDENTS
    float average = (student1_total + student2_total)/2;
    cout<<"The average score for the two student is: "<<average<<endl;
    
    return 0;
}