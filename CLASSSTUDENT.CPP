#include<iostream>
using namespace std;
class student
{
   private:
   int rollno,perce;
   char name[20];

   private:
    void getdata()
    {
        cout<<"enter your name,rollno,percentage";
        cin>>name>>rollno>>perce;
    }
   public:
      void showdata()
      {
          getdata();
          cout<<"your name is :"<<name;
          cout<<"\nyour rollno is :"<<rollno;
          cout<<"\nyour percentage is :"<<perce;
      }

};

       int main() {
           student s;
           s. showdata();
           return 0;
       }
