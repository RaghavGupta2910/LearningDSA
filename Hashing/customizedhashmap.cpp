#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

class Student{
    public:
    string fname;
    string lname;
    int rollno;

    Student(string f, string l, int rn){
        fname = f;
        lname = l;
        rollno = rn;
    }

    bool operator==(const Student &s) const{
        return rollno == s.rollno;
    }
};

class HashFnc{
    public:
    size_t operator()(const Student &s) const{
        return s.fname.length() + s.lname.length();
    }
};

int main(){

    unordered_map<Student, int, HashFnc> student_map;

    Student s1("Raghav", "Gupta", 01);
    Student s2("Ananya", "Singh", 02);
    Student s3("Raghav", "Sharma", 03);
    Student s4("Ananya", "Singh", 04);

    student_map[s1] = 100;
    student_map[s2] = 200;
    student_map[s3] = 300;
    student_map[s4] = 400;
    for(unordered_map<Student, int, HashFnc>::iterator it = student_map.begin(); it != student_map.end(); it++){
        cout<<"Name: "<<it->first.fname<<" "<<it->first.lname<<", Roll No: "<<it->first.rollno<<", Marks: "<<it->second<<endl;
    }
}