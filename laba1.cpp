#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int N = 256;

class OilWell {
    string location;
    vector<string> specialists;
    vector<string> equipment;
    string oil_quality;
    
    public:
        OilWell() {
            cout << "default constructor called" << endl;
        }
        
        OilWell(const OilWell &) {
            cout << "copy constructor called" << endl;
        }
        
        
        OilWell(string location, vector<string> specialists, vector<string> equipment, string oil_quality) {
            this->location = location;
            this->specialists = specialists;
            this->equipment = equipment;
            this->oil_quality = oil_quality;
        }
        
        
        void GetLocation() {
            cout << location << endl;
        }
        void GetSpecialists() {
            for (int i = 0; i < specialists.size(); i++) {
                cout << specialists[i] << endl;
            }
        }
        void GetEquipment() {
            for (int i = 0; i < equipment.size(); i++) {
                cout << equipment[i] << endl;
            }
        }
        void GetQuality() {
            cout << oil_quality << endl;
        }
        
        
        void SetLocation(string location) {
            this->location = location;
        }
        void SetSpecialists(vector<string> specialists) {
            this->specialists = specialists;
        }
        void SetEquipment(vector<string> equipment) {
            this->equipment = equipment;
        }
        void SetQuality(string quality) {
            this->oil_quality = quality;
        }
        
        ~OilWell() {
            cout << "destructor called" << endl;
        }
};

class Maps {
    string location;
    vector<string> wells;
    vector<string> specialists;
    int count;
    
    public:
        Maps() {
            cout << "default constructor called" << endl;
        }
        
        Maps(const Maps &) {
            cout << "copy constructor called" << endl;
        }
        
        
        Maps(string location, vector<string> wells, vector<string> specialists, int count) {
            this->location = location;
            this->wells = wells;
            this->specialists = specialists;
            this->count = count;
        }
        
        
        void GetLocation() {
            cout << location << endl;
        }
        void GetSpecialists() {
            for (int i = 0; i < specialists.size(); i++) {
                cout << specialists[i] << endl;
            }
        }
        void GetWells() {
            for (int i = 0; i < wells.size(); i++) {
                cout << wells[i] << endl;
            }
        }
        void GetCount() {
            cout << count << endl;
        }
        
        
        void SetLocation(string location) {
            this->location = location;
        }
        void SetSpecialists(vector<string> specialists) {
            this->specialists = specialists;
        }
        void SetWells(vector<string> wells) {
            this->wells = wells;
        }
        void SetCount(int count) {
            this->count = count;
        }
        
        ~Maps() {
            cout << "destructor called" << endl;
        }
};

class Specialist {
    string fio;
    int age;
    string specialization;
    string work_location;
    int salary;
    
    public:
        Specialist() {
            cout << "default constructor called" << endl;
        }
        
        Specialist(string fio, int age, string specialization, string work_location, int salary) {
            this->fio = fio;
            this->age = age;
            this->specialization = specialization;
            this->work_location = work_location;
            this->salary = salary;
        }
        
        void GetFio() {
            cout << fio << endl;
        }
        void GetAge() {
            cout << age << endl;
        }
        void GetSpecialization() {
            cout << specialization << endl;
        }
        void GetSalary() {
            cout << salary << endl;
        }
        
        
        void SetFio(string fio) {
            this->fio = fio;
        }
        void SetAge(int age) {
            this->age = age;
        }
        void SetSpecialization(string specialization) {
            this->specialization = specialization;
        }
        void SetSalary(int salary) {
            this->salary = salary;
        }
        
        ~Specialist() {
            cout << "destructor called" << endl;
        }
};

int main() {
    //OilWell well;
    vector<string> specialists = {"Arthur", "Tommy"};
    vector<string> equipment = {"Fr-242", "TS-230"};
    OilWell well2("Brazil", specialists, equipment, "High");
    OilWell well_c(well2);
    well2.SetQuality("H");
    //Specialist arthur("Arthur", 20, "Proga");
    
    //////////////////////////////////////////
    void (OilWell::*ptr)() = &OilWell::GetQuality;
    
    (well2.*ptr)();
    
    //////////////////////////////////////////
    Specialist sp("Gabdrahimov A.I", 20, "programming", "Ufa", 30000);
    
    // Присваиваем указатель на компоненту-функцию SetQuality новому экземпляру
    void (Specialist::*ptr2)(int) = &Specialist::SetAge;
    
    // Вызываем компоненту-функцию SetQuality для нового экземпляра через указатель
    (sp.*ptr2)(21);
    sp.GetAge();
    
    return 0;
}
