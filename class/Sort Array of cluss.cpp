


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


};

 bool comp(Student a, Student b)
{
    //when a is less than b
    return a.std_id < b.std_id;
}

/*bool operator < (Student s)
{
   return std_id < s.std_id;
}*/
int main()
{
   vector<Student>a;
   for(int i=0;i<10;i++)
   {
       a.push_back(Student("A",20-i,20));

   }
    for(int i=0;i<10;i++)
   {
        a[i].print_info();
   }
cout<<endl;
   cout<<"After Sorting"<<"\n";
   sort(a.begin(), a.end(),comp);
  // sort(a.begin(), a.end());
    for(int i=0;i<10;i++)
   {
        a[i].print_info();
   }


    return 0;
}
