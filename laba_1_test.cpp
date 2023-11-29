#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Specialist {
    string fio;
    int age;
    string specialization;
    string work_location;
    int salary;

public:
    Specialist() {
        cout << "	<default constructor called>" << endl;
    }
    Specialist(const Specialist&) {
        cout << "<copy constructor called>" << endl;
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
    void GetWork_location() {
    	cout << work_location << endl;
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
    void SetWork_location(string work_location) {
    	this->work_location = work_location;
	}

    ~Specialist() {
        cout << "destructor called" << endl;
    }
};


class OilWell {
	string well_name;
    string location;
    vector<Specialist> specialists;
    vector<string> equipment;
    string oil_quality;

public:
    OilWell() {
        cout << "<default constructor called>" << endl;
    }

    OilWell(const OilWell&) {
        cout << "<copy constructor called>" << endl;
    }


    OilWell(string location, string well_name, vector<Specialist> specialists, vector<string> equipment, string oil_quality) {
        this->location = location;
        this->well_name = well_name;
        this->specialists = specialists;
        this->equipment = equipment;
        this->oil_quality = oil_quality;
    }


    void GetLocation() {
        cout << location << endl;
    }
    void GetWellName() {
        cout << well_name << endl;
    }
    void GetSpecialists() {
        cout << "Specialists: " << endl;
        for (int i = 0; i < specialists.size(); i++) {
            cout << "Name: " << specialists[i].GetFio() << ", Age: " << specialists[i].GetAge() << ", Profession: " << specialists[i].GetSpecialization() << ", Location: " << specialists[i].GetWork_location() << ", Salary: " << specialists[i].GetSalary() << endl;
        }
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
    void SetWellName(string well_name) {
    	this->well_name = well_name;
	}
    void SetSpecialists(vector<Specialist> specialists) {
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
    vector<string> map_names;
    vector<string> wells;
    int count;

public:
    Maps() {
        cout << "<default constructor called>" << endl;
    }

    Maps(const Maps&) {
        cout << "<copy constructor called>" << endl;
    }


    Maps(vector<string> map_names, vector<string> wells, int count) {
        this->map_names = map_names;
        this->wells = wells;
        this->count = count;
    }


    void GetMap_Names() {
        cout << "{ ";
        for (int i = 0; i < map_names.size(); i++) {
            cout << map_names[i] << " ";
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

    void SetMap_Names(vector<string> map_names) {
        this->map_names = map_names;
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

int main() {
    vector<Specialist> specialists;

    Specialist spec1("John", 30, "Engineer", "New York", 5000);
    Specialist spec2("Alice", 28, "Geologist", "New York", 6000);

    specialists.push_back(spec1);
    specialists.push_back(spec2);

    vector<string> equipment;

    OilWell well("New York", "New-y-2", specialists, equipment, "High");

    return 0;
}
