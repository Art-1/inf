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
            std::cout << "Введите фамилию (или end): ";
            std::cin >> person.surname;
            if (person.surname == "end") {
                break;
            }
            std::cout << "Введите имя: ";
            std::cin >> person.name;
            std::cout << "Введите знак зодиака: ";
            std::cin >> person.zodiac_sign;
            std::cout << "Введите дату рождения (в формате ДД.ММ.ГГГГ): ";
            std::cin >> person.birth_date;
            file << person.surname << " " << person.name << " "
                 << person.zodiac_sign << " " << person.birth_date << std::endl;
            std::cout << "Данные успешно записаны в файл" << std::endl;
            std::string answer;
            std::cout << "Продолжить ввод данных? (y/n): ";
            std::cin >> answer;
            if (answer != "y") {
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
    std::string zodiac;
    std::cout << "Поиск по знаку зодиака: ";
    std::cin >> zodiac;
    std::vector<ZNAK> persons = read_data(zodiac);
    if (persons.empty()) {
        std::cout << "Людей с " << zodiac << " не найдено" << std::endl;
    } else {
        std::cout << "Найдены люди " << zodiac << std::endl;
        for (const auto& person : persons) {
            std::cout << person.surname << " " << person.name << ", дата рождения: " << person.birth_date << std::endl;
        }
    }

    return 0;
}
