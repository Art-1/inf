#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct dateStruct {
        int age;
        string male;
        string education;
        string second_group_ans;
    };

int main(){
    setlocale(LC_ALL, "rus");
    string s;
    dateStruct newPerson;

    ofstream text_file;
    text_file.open("D:\\Desktop\\inf-main\\bd.txt");

    for (text_file; !text_file.eof(); text_file) {
        text_file.write("ok", strlen("ok"));
    }

}
