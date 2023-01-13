#include <iostream>
using namespace std;
class Counter{
    private:
    int count;
    public:
    Counter(int count){
        this->count = count;
    }
    Counter(){
    }
    int add(){
        return count++;
    }
     int reduce(){
        return count--;
    }
    int out(){
        return count;
    }
};

int main(){
    setlocale(LC_ALL, "Russian");
    bool correct_input = 1;
    char choice;
    int start;
    do {
    cout << "Вы хотите указать начальное значение счётчика? Введите y / n: " << endl;
    cin >> choice;
    if(choice == 'n'){
       start = 1;
       correct_input = 0;
    }
    else if (choice == 'y'){
        cout << "Введите начальное значение счётчика: " <<endl;
        cin >> start;
        correct_input = 0;
    }
    else {
        cout << "Неверный выбор" << endl;
    }
    } while(correct_input == 1);
    Counter ct(start);

    while(true){
        cout << "\nВведите команду ('+', '-', '=' или 'x'): ";
        cin >> choice;
        switch(choice){
            case '+': 
            ct.add();
            break;
            case '-':
            ct.reduce();
            break;
            case '=':
            cout << ct.out() << endl;;
            break;
            case 'x':
            return 0;
            break;
            default:
            cout << "Неверный выбор " << endl;
        }
    }
}