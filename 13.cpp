#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>


struct ZNAK {
    std::string surname;
    std::string name;
    std::string zodiac_sign;
    std::string birth_date;
    
    bool operator<(const ZNAK& other) const {
        return birth_date < other.birth_date;
    }
};


void write_data() {
    std::ofstream file("data.txt", std::ios::app);
    if (file.is_open()) {
        while (true) {
            ZNAK person;
            std::cout << "Введите фамилию (или 'конец' для завершения ввода): ";
            std::cin >> person.surname;
            if (person.surname == "конец") {
                break;
            }
            std::cout << "Name: ";
            std::cin >> person.name;
            std::cout << "Zodiak: ";
            std::cin >> person.zodiac_sign;
            std::cout << "Date of birth: ";
            std::cin >> person.birth_date;
            file << person.surname << " " << person.name << " "
                 << person.zodiac_sign << " " << person.birth_date << std::endl;
            std::cout << "Данные успешно записаны в файл" << std::endl;
            std::string answer;
            std::cout << "Хотите продолжить ввод данных? (да/нет): ";
            std::cin >> answer;
            if (answer != "да") {
                break;
            }
        }
        file.close();
    } else {
        std::cout << "Ошибка открытия файла" << std::endl;
    }
}


std::vector<ZNAK> read_data(const std::string& zodiac_sign) {
    std::ifstream file("data.txt");
    std::vector<ZNAK> persons;
    if (file.is_open()) {
        ZNAK person;
        while (file >> person.surname >> person.name >> person.zodiac_sign >> person.birth_date) {
            if (person.zodiac_sign == zodiac_sign) {
                persons.push_back(person);
            }
        }
        file.close();
        std::sort(persons.begin(), persons.end());
    } else {
        std::cout << "Ошибка открытия файла" << std::endl;
    }
    return persons;
}

int main() {

    write_data();
    std::string zodiak_prompt;
    cout << "Поиск по знаку зодиака: ";
    std::cin >> zodiak_prompt;
    


    std::vector<ZNAK> persons = read_data(zodiak_prompt);
    if (persons.empty()) {
        std::cout << "Людей с знаком " << zodiak_prompt << " не найдено" << std::endl;
    } else {
        std::cout << "Найдены люди с знаком " << zodiak_prompt << ", отсортированные по датам рождения:" << std::endl;
        for (const auto& person : persons) {
            std::cout << person.surname << " " << person.name << ", дата рождения: " << person.birth_date << std::endl;
        }
    }

    return 0;
}
