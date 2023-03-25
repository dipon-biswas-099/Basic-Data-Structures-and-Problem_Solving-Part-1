#include<bits/stdc++.h>
using namespace std;

class Student
{

public:
    int std_ID;
    string student_name;
    string father_name;

    void details()
    {
        cout<<"student ID  = "<<std_ID<<"\n";
        cout<<"student name  = "<<student_name<<"\n";
        cout<<"father name  = "<<father_name<<"\n\n\n";
    }

};

class Rectangle
{
public:
    int width,height;
    //area
    int calculate_area()
    {
        return width*height;
    }
    //perimeter
    int calculate_perimeter()
    {
        return 2*(width+height);
    }

};

class Person
{

public:
    string name;
    Person *father, *mother;

    Person()
    {
        father = NULL;
        mother = NULL;
    }

    Person(string name, string f_name, string m_name)
    {

        this->name = name;
        father = new Person;
        father->name = f_name;
        mother = new Person;

        mother->name = m_name;

    }

    void print_info()
    {
        cout<<"Name = "<< name<<"\n";
        cout<<"Fathers Name = "<< father->name<<"\n";
        // when we access a data of pointer type object that time we use "-> sign"
        cout<<"Mothers Name = "<< mother->name<<"\n";
    }
    ~Person()
    {
        cout<<"called"<<"\n";
        if(father!=NULL)
            delete father;
        if(mother!=NULL)
            delete mother;
    }

};

int main()
{
    /* Person p;
     p.father = new Person;
     p.mother = new Person;
     p.name = "p";
     p.father->name = "B";
     p.mother->name = "c";
     p.print_info();
     Rectangle r1;
     r1.height = 4;
     r1.width = 8;

     cout<<"Area = "<<r1.calculate_area()<<"\n";
     cout<<"Perimeter = "<<r1.calculate_perimeter()<<"\n";


     Student s;   // create object s of class student
     s.std_ID= 2244;
     s.student_name = "Rahul";
     s.father_name = "Neymar";

     s.details();

      Student s2;   // create object s of class student
     s.std_ID= 224400;
     s2.student_name = " Barca";
     s2.father_name = "Madrid";

     s2.details();
    */
    Person p("A","B","C");
    p.print_info();



    return 0;
}
