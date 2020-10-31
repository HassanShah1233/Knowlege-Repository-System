#include <iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//structure to store information
struct student
{
    char firstname[50];
    char lastname[50];
    char city[10];
    char username[50];
    char password[50];
    double phone_no;
};

//declaring global variables
char loginusername[50];
char loginpassword[50];
int i=0;
student s[10];
int found_i;

//Function to check Login Details
bool Login(char username[50],char password[50])
{
		bool found = false;
		
    	for(int k=0;k<=i;k++)
    	{
    			
    		if(strcmp(s[k].username,username)==0 && strcmp(s[k].password,password)==0 )
    		{

    			found = true;
    			found_i = k;
			}
	}
	
	 return found;		
		
}
		
//Function to display main menu			 
void Display_Menus()
{
	cout<<"\n\n\n";
	
	cout<<"********** Welcome To ABC Organization ********";    
	 
	cout<<"\n\n"; 	
	
    cout << "Enter your  Option " << endl<<endl;
    cout << "Press 1 for Register " << endl<<endl;
    cout << "Press 2 for Login " << endl<<endl;
    cout << "Press 3 for Exit " << endl<<endl;
	

}		

//Function for Signup/register

void Register()
{
	   cout<<"---------- Register -------------------------";		
       cout<<"\n\n";
        cout << "Enter First Name: ";
        cin >> s[i].firstname;
        
        cout<<"\n";
        
        cout << "Enter Last Name: ";
        cin >> s[i].lastname;
        
        cout<<"\n";
        
        cout << "Enter City ";
        cin >> s[i].city;
        
        cout<<"\n";
        
         cout << "Enter UserName ";
        cin >> s[i].username;
        
        cout<<"\n";
        
        cout << "Enter Password ";
        cin >> s[i].password;
        cout<<"\n";
        
        cout << "Enter Phone NO ";
        cin >> s[i].phone_no;
        cout<<"\n";
}


//Function to display user profile
void Display_User_Info()
{
   system ("CLS");
   
   cout<<"\n\n";
   cout<<"********* Welcome "<<s[found_i].firstname<<"   "<<s[found_i].lastname<<"   To your Profile ************"<<endl<<endl;

	cout<<"First Name  :  "<<s[found_i].firstname<<endl;
  	cout<<"Last  Name  :  "<<s[found_i].lastname<<endl;
  	cout<<"City Name  :  "<<s[found_i].city<<endl;
  	cout<<"User_Name  :  "<<s[found_i].username<<endl;
  	cout<<"Password :  "<<s[found_i].password<<endl;
  	cout<<"Phone Number :  "<<s[found_i].phone_no<<endl;

 
	
}

//Function to Edit Record
void Update()
{
	char fname[50];
    char lname[50];
    char c[30];
    char uname[50];
    char pass[50];
	
	   cout<<"---------- Update Information -------------------------";		
       cout<<"\n\n";
    
	//setting the per-existing data to null to store new data   
    s[found_i].firstname == '\0';
  	s[found_i].lastname  =='\0';
  	s[found_i].city == '\0';
  	s[found_i].username == '\0';
  	s[found_i].password == '\0';
  	
  	//Getting New Data
        cout << "Enter Name: ";
        cin >>s[found_i].firstname;
        
        cout<<"\n";
        
        cout << "Enter Last Name: ";
        cin >>s[found_i].lastname;
        
        cout<<"\n";
        
        cout << "Enter City ";
        cin >> s[found_i].city;
        
        cout<<"\n";
        
         cout << "Enter UserName ";
        cin >> s[found_i].username;
        
        cout<<"\n";
        
        cout << "Enter Password ";
        cin >> s[found_i].password;
        cout<<"\n";
        
        cout<<"\n\n\nThe Record has been updated";        
        
}


int main()
{
	int choice;

    
    while(choice !=3)
    
    {
       	
    Display_Menus();
    
	//Getting the user Choice After displaying menus   	
    cin>>choice;
    
    cout<<"\n\n\n";
    
       	//Registring User
       	if(choice == 1)
       	
       	{
       		
         Register();
         i++;
         
         }
    
    //Login/Edit Profile
    
    if(choice == 2)
    
    {
    
    int option;
    	
    cout<<"Enter username : "<<endl;	
    cin>>loginusername;
    	
    cout<<"Enter Password : "<<endl;
    cin>>loginpassword;
    	
  bool check = Login(loginusername,loginpassword);	
  
  if(check == true)
  {
  	cout<<"Found Index : "<<found_i;
  	Display_User_Info();
  	
  	cout<<"\n";
  	cout<<"Want to Edit Your Record  \n "<<endl;
  	cout<<"\n\n";
  	cout<<"Press 1 for Edit "<<endl;
  	cout<<" Press Any other key to go to main menu "<<endl;
  	cin>>option;
  	
  	if(option == 1)
  	{
  	
  		Update();
  		
	}
}
   else
  {
  	cout<<"Sorry no record found Against this UserName and Password";
  }
}
if(choice == 3)
{
		exit(0);
}
	
//pressing invalid/undesired key
else
{
		cout<<"Please input the valid choice "<<endl;
}
  	
  }

   cout << endl;  	
}
