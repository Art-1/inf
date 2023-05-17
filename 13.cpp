










#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

// Структура для хранения информации о человеке
struct ZNAK {
    std::string surname;
    std::string name;
    std::string zodiac_sign;
    std::string birth_date;
    
    bool operator<(const ZNAK& other) const {
        return birth_date < other.birth_date;
    }
};

// Функция для записи информации о человеке в файл
void write_data(const ZNAK& person) {
    std::ofstream file("data.txt", std::ios::app);
    if (file.is_open()) {
        file << person.surname << " " << person.name << " "
             << person.zodiac_sign << " " << person.birth_date << std::endl;
        file.close();
        std::cout << "Данные успешно записаны в файл" << std::endl;
    } else {
        std::cout << "Ошибка открытия файла" << std::endl;
    }
}

// Функция для чтения информации о людях с определенным знаком зодиака из файла
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
    // Записываем информацию о людях в файл
    ZNAK person1 = {"Иванов", "Иван", "Овен", "01.04.1990"};
    ZNAK person2 = {"Петров", "Петр", "Лев", "15.08.1985"};
    ZNAK person3 = {"Сидорова", "Мария", "Овен", "10.03.1995"};
    write_data(person1);
    write_data(person2);
    write_data(person3);

    // Считываем информацию о людях с знаком Овен из файла и сортируем по датам рождения
    std::vector<ZNAK> persons = read_data("Овен");
    if (persons.empty()) {
        std::cout << "Людей с знаком Овен не найдено" << std::endl;
    } else {
        std::cout << "Найдены люди с знаком Овен, отсортированные по датам рождения:" << std::endl;
        for (const auto& person : persons) {
            std::cout << person.surname << " " << person.name << ", дата рождения: " << person.birth_date << std::endl;
        }
    }

    return 0;
}


