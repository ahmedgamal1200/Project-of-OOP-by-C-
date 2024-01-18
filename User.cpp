#include"User.h"
int User::count=0;
User::User(){
name="";
age=0;
password = "";
email = "";
count++;
id = count;
}
/////////////////
User::User(string name, int age, string password, string email){
this->name = name;
this->age = age;
this->password = password;
this->email = email;
count++;
id = count;
}
////////////////////

// this is copy constructor ->:
User::User(const User &user){
name = user.name;
age = user.age;
password = user.password;
email = user.email;
//id= user.id;
}
////////////////////
bool User::operator==(const User& user){
    if(name != user.name || email != user.email || age != user.age || id != user.id || password != user.password){
        return false;
    }
    return true;
}


void User::setName(string n ){
    name = n;
}
string User::getName()const{
    return name;
}
///////////////////
void User::setPassword(string p){
    password = p;
}
string User::getPassword()const{
    return password;
}
//////////////////////
void User::setEmail(string e){
    email = e;
}
string User::getEmail()const {
    return email;
}
///////////////////
void User::setAge(int ag){
    age = ag;
}
int User::getAge()const {
    return age;
}
void User::setId(int ID){
    id = ID;
}
int User::getId()const{
    return id;
}
///////////////////////////
void User::DisplayInfo(){
cout <<"**************************"<<endl;
cout << "NAME=" <<name<<endl;
cout << "AGE=" << age <<endl;
cout << "ID=" << id <<endl;
cout << "EMAIL=" << email <<endl;
cout <<"**************************"<<endl;
}
/////////////////////////
istream &operator>>(istream&input,User &user){
cout <<"Enter the user information in this order"<<endl;
cout<<"Name" <<"Age" <<"Email"<<"Password";
cout<<"(Space separated) "<<endl;
input>>user.name>>user.age>>user.email>>user.password;
return input;
}
///////////////////////////
ostream &operator<<(ostream&output,const User &user){
output<<"=======User" <<user.id<<"info======"<<endl;
output<<"Name: " <<user.name;
output<<"|Age: " <<user.age;
output<<"|Id: " <<(user.id);
output<<"|Email: " <<user.email<<endl;
return output;
}
/////////////////////////
