#include <iostream>
using namespace std;
class Counter{
    private:
    int count;
    public:
    Counter(int count){
    }
    Counter(){
        count = 1;
    }
    void set_start(int count){
        this->count = count;
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
    char choice;
    int start;
    Counter ct;
    cout << "Вы хотите указать начальное значение счётчика? Введите y / n: " << endl;
    cin >> choice;
    if(choice == 'n'){
        ct.set_start(1);
    }
    else if (choice == 'y'){
        cout << "Введите начальное значение счётчика: " <<endl;
        cin >> start;
        ct.set_start(start);
    }
    else {
        cout << "Неверный выбор" << endl;
        return 0;
    }
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