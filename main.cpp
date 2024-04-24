#include <iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Pet{
  int PetId;
string pettype;
  int pet_age;
  bool isadopted;
  string pincode;
  string piclink;
  int userid;
  int Auserid;
  bool custody;
string userdescription
  
  
};
class user{ 
    int userid;
    string name;
    string number;
string password;
     
    
};

class praani{
public:
vector<Pet> PetList;
vector<user> userlist;
vector<string> pettype;
int petid
praani(){
    petid=1;
    
    pettype.push_back("cat");
     pettype.push_back("dog");
    
}
void addpet(){
    Pet p;
    p.petid=petid;
    cout<<"select pet "
    
}

    

    
    
};


int main()
{
    bool runner= true;
praani obj;    
while(runner){
cout<<"welcome to Praani application"<<endl;
cout<<"#Adopt.#Don't shop"<<endl;
cout<<"please slect an option to proceed"<<end;
cout<<"1.Report and save a pet"<<endl;
    cout<<"2.Adopt and change a life of a pet"<<endl;
    cout<<"3.close application"<<endl;
int n;
    cin>>n;
    switch(n){
        case 1:
        case 2:
        case 3:runner=false;break;
    }
    
    
}

return 0;
}
