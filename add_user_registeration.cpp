#include<iostream>
#include<string>
#include<array>
static int id =0;
class user 
{
    public : 
    std::string name="";
    int age=0;
    int id=0;
    user (std::string n="" , int a=0)
    {
    name =n;
    age =a;
    }
        
};
enum option 

{
Add_record =1,
Fetch_record ,
EXIT
};
std::array <user,100> users;
int get_option()
{
    int op;
std::cout<<"please enter your option";
std::cin>>op;
return op;
}
void show_menu()
{
std::cout<< "menu"<<std::endl;
std::cout<< "1- add_record"<<std::endl;
std::cout<< "2- fetch_record"<<std::endl;
std::cout<< "3- exit"<<std::endl;
}
int get_id(int id)
{
std::cout <<"please enter your id"<<std::endl;
std::cin >> id;
return id;
}
void add_record()
{
    
    std::string name; int age;
    std::cout<<"please enter your name"<<std::endl;
    std::cin>>name;
    std::cout<<"please enter your age"<<std::endl;
    std::cin>>age;
users[id].name = name;
users[id].age = age;
id++;
}
void fetch_record()
{
int id;
std::cout<<"please enter your id";
std::cin>>id;
std::cout <<"your name is : "<<users[id].name<<std::endl;
std::cout <<"your age is : "<<users[id].age<<std::endl;
}
int main ()
{
bool IsRuning=true;
while (IsRuning)
{
show_menu();
int option =get_option();
switch (option )
{
case option::Add_record:
add_record();
break;
case option::Fetch_record:
fetch_record();
break;
case option::EXIT:
IsRuning=false;
default : 
break;
}
}

}