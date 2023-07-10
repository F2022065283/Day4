#include<iostream>
#include<cstdlib>
#include "STUDENT.h"
using namespace std;
class student
{
    private:
    string id,name,email,address;
      public:
    string getidd()
    {
        return id;
    }
    string getnamee()
    {
        return name;
    }
    string emaill()
    {
        return email;
    }
    string ad()
    {
        return address;
    }
    void printinfo()
    {
        cout<<"ID = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Email = "<<email<<endl;
        cout<<"Address = "<<address<<endl;
    }
    void setter(string idd,string namee,string emaill,string add)
    {
        id=idd;
        name=namee;
        email=emaill;
        address=add;
    }
};
int main()
{
    string id,name,email,add;
    cout<<"Enter your ID\n";
    fflush(stdin);
    getline(cin,id);
    cout<<"Enter your Name\n";
    fflush(stdin);
    getline(cin,name);
    cout<<"Enter your email\n";
    fflush(stdin);
    getline(cin,email);
    cout<<"Enter your Address\n";
    fflush(stdin);
    getline(cin,add);
    class student obj;
    obj.setter(id,name,email,add);
    obj.printinfo();
}