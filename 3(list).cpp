#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//4

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
    /*book.addContact(Contact("John", "Doe", "01/01/1970", "123-456-7890"));
    book.addContact(Contact("Jane", "Doe", "02/02/1980", "234-567-8901"));
    book.addContact(Contact("Bob", "Smith", "03/03/1990", "345-678-9012"));
    book.addContact(Contact("Alice", "Jones", "04/04/2000", "456-789-0123"));*/
    
    int n;
    cout << "N: \n";
    cin >> n;
    string name, surname, date, phone;
    
    for (int i = 0; i < n; i++) {
        cout << "Name: ";
        cin >> name;
        cout << endl;
        
        cout << "Surname: ";
        cin >> surname;
        cout << endl;
        
        cout << "Date of birthday: ";
        cin >> surname;
        cout << endl;
        
        cout << "Phone: ";
        cin >> surname;
        cout << endl;
        book.addContact(Contact(name, surname, date, phone));
    }

    cout << "All contacts:" << endl;
    book.printContacts();

    vector<Contact> result = book.searchByLastName("Doe");
    cout << "Contacts with last name \"Doe\":" << endl;
    for (int i = 0; i < result.size(); i++) {
        result[i].print();
    }
    
}
