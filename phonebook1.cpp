#include <iostream>
#include <string>
using namespace std;
string name;
string number;
string email;
string address;
void addContact() 
{
cout << "Enter name: ";
cin >> name;
cout << "Enter phone number: ";
cin >> number;
cout << "Enter email: ";
cin >> email;
cout << "Enter address: ";
cin >> address;
}
void searchContact()
{
string searchName;
cout << "Enter name of contact to search: ";
cin >> searchName;
if (name == searchName) {
cout << "Name: " << name << endl;
cout << "Phone number: " << number << endl;
cout << "Email: " << email << endl;
cout << "Address: " << address << endl;
}
else 
{
cout << "Contact not found." << endl;
}
}
void deleteContact() 
{
string deleteName;
cout << "Enter name of contact to delete: ";
cin >> deleteName;
if (name == deleteName) 
{
name = "";
number = "";
email = "";
address = "";
cout << "Contact deleted." << endl;
}
else 
{
cout << "Contact not found." << endl;
}
}
int main() 
{
int choice,lines;
while (true) 
{
cout << "1. Add contact" << endl;
cout << "2. Search contact" << endl;
cout << "3. Delete contact" << endl;
cout << "4. Exit" << endl;
cout << "Enter choice: ";
cin >> choice;
{
if (choice == 1) 
{
addContact();
}
else if (choice == 2) 
{
searchContact();
}
else if (choice == 3) 
{
deleteContact();
}
else if (choice == 4) 
{
cout<<"You Can Leave.Thank You";
        break;
}
else if(choice != lines)
{
cout<<"invalid choice try again:"<<endl;
}
}
}
return 0;
}
