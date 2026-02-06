#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int balance = 1000;      
    int action;              
    int item;               

    ofstream receipt("my_receipt.txt");  
    int totalSpent = 0;                   

    cout << "Ваш поточний баланс: " << balance << "\n\n";

    cout << "1 - Показати товари\n";
    cout << "2 - Купити товар\n";
    cout << "3 - Повернути товар\n";
    cout << "Оберіть дію: ";
    cin >> action;

    if (action == 1) {
        cout << "1. Хуба буба - 40\n";
        cout << "2. Тіктак - 80\n";
        cout << "3. Помідорка - 30\n";
        cout << "4. Морозивко - 10\n";
        cout << "5. Чіпси - 20\n";
    }

    if (action == 2) {
        while (true) {
            cout << "\n Товари \n";
            cout << "1. Хуба буба - 40\n";
            cout << "2. Тіктак - 80\n";
            cout << "3. Помідорка - 30\n";
            cout << "4. Морозивко - 10\n";
            cout << "5. Чіпси - 20\n";
            cout << "0. Вийти з покупки\n";

            cout << "Оберіть номер товару: ";
            cin >> item;

            if (item == 0) {
                cout << "Вихід з покупки...\n";
                break;
            }

            int cost = 0;
            switch (item) {
                case 1: cost = 40; break;
                case 2: cost = 80; break;
                case 3: cost = 30; break;
                case 4: cost = 10; break;
                case 5: cost = 20; break;
                default:
                    cout << "Невірний номер товару\n";
                    continue;
            }

            if (balance >= cost) {
                balance -= cost;
                totalSpent += cost;
               
                receipt << "Товар: " << item << " Вартість: " << cost << "\n";
                
                cout << "\n Чек \n";
                cout << "Товар: " << item << " Вартість: " << cost << "\n";
                cout << "Баланс після покупки: " << balance << "\n";
                
            } else {
                cout << "Недостатньо коштів\n";
            }
        }

    
        receipt << "Загально: " << totalSpent << "\n";
        cout << "\n=== Підсумковий чек ===\n";
        cout << "Загальна сума покупок: " << totalSpent << "\n";
        cout << "Баланс: " << balance << "\n";
       

        receipt.close();
    }

    if (action == 3) {
        cout << "1. Хуба буба - 40\n";
        cout << "2. Тіктак - 80\n";
        cout << "3. Помідорка - 30\n";
        cout << "4. Морозивко - 10\n";
        cout << "5. Чіпси - 20\n";

        cout << "Оберіть товар для повернення: ";
        cin >> item;

        switch (item) {
            case 1: balance += 40; break;
            case 2: balance += 80; break;
            case 3: balance += 30; break;
            case 4: balance += 10; break;
            case 5: balance += 20; break;
            default:
                cout << "Невірно\n";
        }

        cout << "Товар повернено\n";
        cout << "Баланс: " << balance << "\n";
    }

    return 0;
}

