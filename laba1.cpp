#include <iostream>
#include <string>
#include <vector>

using namespace std;

class OilWell {
    string location;
    vector<string> specialists;
    vector<string> equipment;
    string oil_quality;

public:
    OilWell() {
        cout << "default constructor called" << endl;
    }

    OilWell(const OilWell&) {
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
        cout << "{ ";
        for (int i = 0; i < specialists.size(); i++) {
            cout << specialists[i] << " ";
        }
        cout << "}" << endl;
    }
    void GetEquipment() {
        cout << "{ ";
        for (int i = 0; i < equipment.size(); i++) {
            cout << equipment[i] << " ";
        }
        cout << "}" << endl;
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

    Maps(const Maps&) {
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
        cout << "{ ";
        for (int i = 0; i < specialists.size(); i++) {
            cout << specialists[i] << " ";
        }
        cout << " }" << endl;
    }
    void GetWells() {
        cout << "{ ";
        for (int i = 0; i < wells.size(); i++) {
            cout << wells[i] << " ";
        }
        cout << " }" << endl;
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
    // vector<string> specialists = {};
    // //specialists = { "Arthur", "Tommy" };
    // string str;
    // while (str != "end/") {
    //     cin >> str;
    //     if (str == "end/") break;
    //     specialists.push_back(str);
    // }
    
    // vector<string> equipment;
    // //equipment = { "Fr-242", "TS-230"};
    // str = "";
    // while (str != "end/") {
    //     cin >> str;
    //     if (str == "end/") break;
    //     equipment.push_back(str);
    // }

    // OilWell well2("Brazil", specialists, equipment, "High");

    // well2.GetSpecialists();
    // well2.GetEquipment();

    // OilWell well_c(well2);
    // well2.SetQuality("H");
    // //Specialist arthur("Arthur", 20, "Proga");

    // //////////////////////////////////////////
    // void (OilWell:: * ptr)() = &OilWell::GetQuality;

    // (well2.*ptr)();

    // //////////////////////////////////////////
    // Specialist sp("Gabdrahimov A.I", 20, "programming", "Ufa", 60000);
    // //Specialist Sp1(sp);

    // void (Specialist:: * ptr2)(int) = &Specialist::SetAge;

    // (sp.*ptr2)(21);
    // sp.GetAge();
    vector<string> specialists;
    vector<string> equipment;
    
    while (true) {
        string location;
        string oil_quality;
        
        cout << "Well location: (If break: b)" << endl;
        cin >> location;
        if (location == "b") break;
        
        int N = 256;
        while (true) {
            string fio;
            int age;
            string specialization;
            string work_location;
            int salary;
            
            cout << "Fio: " << endl;
            cin >> fio;
            cout << "Age: " << endl;
            cin >> age;
            cout << "Specialization: " << endl;
            cin >> specialization;
            cout << "Work location: " << endl;
            cin >> work_location;
            cout << "Salary: " << endl;
            cin >> salary;
            
            
            string str;
            while (true) {
                cin >> str;
                if (str == "b") break;
                equipment.push_back(str);
                str = "";
            }
            
            cout << "Oil quality" << endl;
            cin >> oil_quality;
            
        }
    }

    return 0;
}
