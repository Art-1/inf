#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Contact {
private:
    string firstName;
    string lastName;
    string birthDate;
    string phoneNumber;
public:
    Contact(string first, string last, string date, string phone) {
        firstName = first;
        lastName = last;
        birthDate = date;
        phoneNumber = phone;
    }
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getBirthDate() const { return birthDate; }
    string getPhoneNumber() const { return phoneNumber; }
    void setFirstName(string first) { firstName = first; }
    void setLastName(string last) { lastName = last; }
    void setBirthDate(string date) { birthDate = date; }
    void setPhoneNumber(string phone) { phoneNumber = phone; }
    void print() const {
        cout << firstName << " " << lastName << ", born " << birthDate
             << ", phone number: " << phoneNumber << endl;
    }
};

class AddressBook {
private:
    vector<Contact> contacts;
public:
    void addContact(Contact contact) {
        contacts.push_back(contact);
    }
    void removeContact(int index) {
        contacts.erase(contacts.begin() + index);
    }
    void printContacts() const {
        for (int i = 0; i < contacts.size(); i++) {
            cout << i + 1 << ". ";
            contacts[i].print();
        }
    }
    vector<Contact> searchByLastName(string lastName) const {
        vector<Contact> result;
        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].getLastName() == lastName) {
                result.push_back(contacts[i]);
            }
        }
        return result;
    }
    vector<Contact> searchByFirstName(string firstName) const {
        vector<Contact> result;
        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].getFirstName() == firstName) {
                result.push_back(contacts[i]);
            }
        }
        return result;
    }
    vector<Contact> searchByBirthDate(string birthDate) const {
        vector<Contact> result;
        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].getBirthDate() == birthDate) {
                result.push_back(contacts[i]);
            }
        }
        return result;
    }
    vector<Contact> searchByPhoneNumber(string phoneNumber) const {
        vector<Contact> result;
        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].getPhoneNumber() == phoneNumber) {
                result.push_back(contacts[i]);
            }
        }
        return result;
    }
    void sortByFirstName() {
        sort(contacts.begin(), contacts.end(),
             [](const Contact& a, const Contact& b) {
                 return a.getFirstName() < b.getFirstName();
             });
    }
    void sortByLastName() {
        sort(contacts.begin(), contacts.end(),
             [](const Contact& a, const Contact& b) {
                 return a.getLastName() < b.getLastName();
             });
    }
    void sortByBirthDate() {
        sort(contacts.begin(), contacts.end(),
             [](const Contact& a, const Contact& b) {
                 return a.getBirthDate() < b.getBirthDate();
             });
    }
    void sortByPhoneNumber() {
        sort(contacts.begin(), contacts.end(),
             [](const Contact& a, const Contact& b) {
                 return a.getPhoneNumber() < b.getPhoneNumber();
             });
    }
};

int main() {
    AddressBook book;
    book.addContact(Contact("John", "Doe", "01/01/1970", "123-456-7890"));
    book.addContact(Contact("Jane", "Doe", "02/02/1980", "234-567-8901"));
    book.addContact(Contact("Bob", "Smith", "03/03/1990", "345-678-9012"));
    book.addContact(Contact("Alice", "Jones", "04/04/2000", "456-789-0123"));
    
    while (true) {
        string name, surname, date, phone_number;
        string breaked;
        
        cout << "Name: ";
        cin >> name;
        cout << "Surname: ";
        cin >> surname;
        cout << "Date of birthday: ";
        cin >> date;
        cout << "Phone: ";
        cin >> phone_number;
        cout << "Break?: ";
        cin >> breaked;
        
        book.addContact(Contact(name, surname, date, phone_number));
        
        if (breaked == "y") {
            break;
        }
    }
    cout << endl;
    
    while (true) {
        string prompt;
        string value;
        cout << "Search by (firstName/lastName/birthDate/phoneNumber [if break - break]): ";
        cin >> prompt;
        
        if (prompt == "break") break;
        
        cout << prompt << ": ";
        cin >> value;
        
        
        
        if (prompt == "firstName") {
            vector<Contact> result = book.searchByFirstName(value);
            cout << "Contacts with " << prompt << " " << value << ":" << endl;
            for (int i = 0; i < result.size(); i++) {
                result[i].print();
            }
        }
        
        else if (prompt == "lastName") {
            vector<Contact> result = book.searchByLastName(value);
            cout << "Contacts with " << prompt << " " << value << ":" << endl;
            for (int i = 0; i < result.size(); i++) {
                result[i].print();
            }
        }
        else if (prompt == "birthDate") {
            vector<Contact> result = book.searchByBirthDate(value);
            cout << "Contacts with " << prompt << " " << value << ":" << endl;
            for (int i = 0; i < result.size(); i++) {
                result[i].print();
            }
        }
        else if (prompt == "phoneNumber") {
            vector<Contact> result = book.searchByPhoneNumber(value);
            cout << "Contacts with " << prompt << " " << value << ":" << endl;
            for (int i = 0; i < result.size(); i++) {
                result[i].print();
            }
        }
    }
    cout << endl;
    
    while (true) {
        string prompt;
        cout << "Sort by (firstName/lastName/birthDate/phoneNumber [if break - break]): ";
        cin >> prompt;
        
        if (prompt == "break") break;
        
        cout << prompt << ": ";
        if (prompt == "firstName"){
            book.sortByFirstName();
            book.printContacts();
        }
        if (prompt == "lastName"){
            book.sortByLastName();
            book.printContacts();
        }
        if (prompt == "birthDate"){
            book.sortByBirthDate();
            book.printContacts();
        }
        if (prompt == "phoneNumber"){
            book.sortByPhoneNumber();
            book.printContacts();
        }
    }
    cout << endl;
    string ans, name, surname, date, phone_number;
    int number = 0;
    
    cout << "Remove contact (y/n)?: ";
    cin >> ans;
    
    if (ans == "y") {
        book.printContacts();
        cout << "Enter number of the contact to remove: ";
        cin >> number;
        
        book.removeContact(number);
        cout << "Contacts list after remove elements: \n";
        book.printContacts();
    }

    /*cout << "All contacts:" << endl;
    book.printContacts();

    vector<Contact> result = book.searchByLastName("Doe");
    cout << "Contacts with last name \"Doe\":" << endl;
    for (int i = 0; i < result.size(); i++) {
        result[i].print();
    }*/
    
}
