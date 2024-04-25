#include <iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Pet{
public:
  int PetId;
string pettype;
  int pet_age;
  bool isadopted;
  string pincode;
  string piclink;
  string userid;
  int Auserid;
  bool custody;
string userdescription;
  
  
};
class user{ 
public:
    string name;
    string number;
string password;
     
    
};



class praani{
public:
vector<Pet> PetList;
unordered_map<string,user> usermap;

vector<string> pettype;
int petid;
praani(){
    petid=1;
    
    pettype.push_back("cat");
     pettype.push_back("dog");
    
}

string login(){
    cout<<"enter mobile number"<<endl;
    string no;
    cin>>no;
      cout<<"enter password"<<endl;
    string pass;
    cin>>pass;
if(usermap.find(no)!=usermap.end()){

user obj = usermap[no];
    if(obj.password==pass){
        cout<<"login successfull"<<endl;
        cout<<no;
        
        
    }
    else{
       cout<<"invalid password"<<endl; 
         return "-1";
    }
    
}
else{
    return "-1";
}

    
    
}
string createacnt(){
    cout<<"please enter your mobile number"<<endl;
    string no;
    cin>>no;
    if(usermap.find(no)==usermap.end()){
        string s;
        string r;
        
        cout<<"enter password"<<endl;
        cin>>s;
        cout<<"ReEnter password"<<endl;
        cin>>r;
        while(s!=r){
             cout<<"enter password"<<endl;
        cin>>s;
        cout<<"ReEnter password"<<endl;
        cin>>r;
        }
        user u;
        u.number=no;
        u.password=s;
        cout<<"your name:"<<endl;
        cin>>u.name;
        usermap[no]=u;
        return no;
        
        
    }
    else{
        user u = usermap[no];
        
        cout<<"already registered"<<endl;
        return u.number;
    }
}
 
void addpet(){
    Pet p;
    p.PetId=petid++;
    cout<<"select pet type"<<endl;
    int i=1;
    for(string s : pettype){
        cout<<i<<"."<<s<<endl;i++;
    }
    cout<<i<<".to add a pettype"<<endl;
    int m;
    cin>>m;
     string s;
    if(m>=i){
        cout<<"enter pettype"<<endl;       
        cin>>s;
        pettype.push_back(s);
         p.pettype=s;
    }
    else{
        p.pettype=pettype[m-1];
    }
    cout<<"age of the pet:"<<endl;
    cin>>p.pet_age;
        cout<<"pincode of the pet area"<<endl;
    cin>>p.pincode;
        cout<<"link of the picture of pet"<<endl;
    cin>>p.piclink;
        cout<<"is pet under your custody? Y/N"<<endl;
    string text;
    cin>>text;
    if(text=="Y")p.custody=true;
    else p.custody=false;
    cout<<"give some detail about the pet"<<endl;
    string t;
  //  cin>>t;
    getline(cin,t);    
 
      cout<<"do you want to be a user with us to track the pet status? Y/N"<<endl;
     p.userdescription=t;
    cin>>text;
    p.isadopted=false;
    if(text=="Y"){
        string out = createacnt();
       p.userid=out;
        PetList.push_back(p);

    cout<<"Thanks For reporting a pet :)"<<endl;
        
        
        
    }
    else{
        cout<<"Thanks for reporting a pet :)"<<endl;
        return;
    }
    
    
    
   
    
    
    
}

    

    
    
};


int main()
{
    bool runner= true;
praani obj;    
while(runner){
cout<<"welcome to Praani application"<<endl;
cout<<"#Adopt.#Don't shop"<<endl;
cout<<"please slect an option to proceed"<<endl;
cout<<"1.Report and save a pet"<<endl;
    cout<<"2.Adopt and change a life of a pet"<<endl;
    cout<<"3.create account with us"<<endl;
      cout<<"4.close application"<<endl;
int n;
    cin>>n;
    switch(n){
        case 1:obj.addpet();break;
        case 2:break;
        case 3:obj.createacnt();break;
        case 4:runner=false;break;
    }
    
    
}

return 0;
}
