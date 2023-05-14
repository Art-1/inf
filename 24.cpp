#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string path = "text.txt";
    string max_str;
    
    ifstream fin;
    fin.open(path);
    
    if (!fin.is_open()) cout << "File error";
    
    else {
    	string str;
    	
    	while (!fin.eof()) {
    		fin >> str;
    		if (str.length() > max_str.length()) max_str = str;
		}
		cout << max_str << endl;
	}
	fin.close();
    fin.open(path);
    
    if (!fin.is_open()) cout << "File error";
    
    else {
    	string str;
    	int max_count = 0, count = 0;
    	
    	while (!fin.eof()) {
    		fin >> str;
    		if (str == max_str) {
    			count++;
    			max_count = count;
			}
		}
		cout << max_count;
	}
	fin.close();
	
    
    return 0;
}