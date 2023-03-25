
#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;    // member
    int std_id;
    int age;
    string father_name;
    string mother_name;

    Student(string s,int id,int ag,string f_name,string m_name)
    {

        name =s;
        std_id= id;
        age = ag;
        father_name=f_name;
        mother_name=m_name;
    }
    // constructor overload
    Student(string name, int id, int ag)
    {
       this -> name = name;  // this -> means object of current class
        std_id= id;
        age = ag;

    }

    void print_info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<father_name<<" "<<mother_name<<" \n";

    }

    ~Student()  // destructor
    {
       cout<<"Called"<<"\n";
       print_info();
    }

};

int main()
{
    Student s("A",10,20,"b","c");
    s.print_info();

    Student s2("R",10,20);
    s2.print_info();


    return 0;
}
