#include <iostream>
#include <fstream>
#include<string>
 
 using namespace std;
 bool IsloggedIN()
 {
     string username,password,un,pw;
     cout<<"ENTER USERNAME: ";
     cin>>username;
     cout<<"ENTER PAWSSWORD: ";
     cin>>password;

     ifstream read("data.txt");
     getline(read,un);
     getline(read,pw);
     if(un==username && pw==password)
     {
         return true;
     }
     else{
         return false;
     }
 }
 int main()
 {
     int choice;
     cout<<"1:Register\n2:Login\nyour choiche:";
     cin>>choice;
     if(choice==1)
     {
         string username,password;
         cout<<"select a usernmae: ";cin>>username;
         cout<<"select a password: "; cin>>password;

         ofstream file;
         file.open("data.txt");
         file<<username<<endl<<password;
         file.close();
         main ();

     }
     else if(choice ==2)
     {
         bool status=IsloggedIN();
         if(!status)
         {
             cout<<"Failed to Login!"<<endl;
             system("PAUSE");
             return 0;
         }
    
     else
     {
         cout<<"succesfully loged In!"<<endl;
         system("PAUSE");
         return 0;
     }
 }
}

