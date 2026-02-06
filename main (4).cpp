#include <iostream>
#include <fstream>
using namespace std;

void addEvent() {
    ofstream outFile("events.txt");

    string title, when, type, location, day;

    cout << "ведіть назву події: ";
    getline(cin, title);

    cout << "час проведення: ";
    getline(cin, when);

    cout << "тип події: ";
    getline(cin, type);

    cout << "місце проведення: ";
    getline(cin, location);

    cout << "дата події: ";
    getline(cin, day);

    outFile << "подія: " << title << endl;
    outFile << "час: " << when << endl;
    outFile << "тип: " << type << endl;
    outFile << "місце: " << location << endl;
    outFile << "дата: " << day << endl;
    

    outFile.close();

    cout << "Подію додано!" << endl;
}

int main() {
    addEvent(); 
    return 0;
}
