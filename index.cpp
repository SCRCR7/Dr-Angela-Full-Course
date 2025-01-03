#include<iostream>
using namespace std;


int main(){




   
 
  string fname;
  string sname;
  cout <<"Please enter your first name :"<<endl;
  cin>>fname;
   cout <<"Please enter your second name :"<<endl;
  cin>>sname;




   double total_marks;
   cout<<"Please Enter your Total Marks: "<<endl;
   cin>>total_marks;
   double obtain_marks;
   cout<<"Please Enter your obtain Marks: "<<endl;
   cin>>obtain_marks;

   float percentage = obtain_marks / total_marks*100;
  cout<<percentage<<endl;

   if(percentage >=85 && percentage <=100){
        cout<<"Hey "<<fname<<""<<sname<<" Wohoo! You Got an A Grade and You Are Eligible for this Scholarship "<<endl;
   }else if(percentage >=70 && percentage<85){
          cout<<"Hey "<<fname<<""<<sname<<" You Got B+ Grade"<<endl;
   }else if(percentage >=60 && percentage<70){
             cout<<"Hey "<<fname<<""<<sname<<" You Got C Grade"<<endl;
   }else{
          cout<<"Your Are Not Eligible for this Program Try it Next Time Best of Luck "<<endl; 
   }

   int a =20;
   cout<<a<<endl;
   cout<<&a<<endl;
   cout<<"s-changes"<<endl;
    return 0;
}