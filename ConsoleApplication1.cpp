#include <iostream>
#include <string>

using namespace std;

//const size_t MIN_POWER = 50;
//const size_t MAX_POWER = 1000;
//
//const double MIN_VOLUME = 0.7;
//const double MAX_VOLUME = 6;
//
//const size_t MAX_SPEED_LOW = 100;
//const size_t MAX_SPEED_UP = 350;
//
struct Date {
    size_t day, month, year;

    string getDate() {
        return (day < 10 ? "0" : "") + to_string(day) + '.' +
            (month < 10 ? "0" : "") + to_string(month) + '.' +
            to_string(year);
    }
};
//
//class Car {
//private:
//    string brand = "NoBrand";
//    string color = "none";
//    size_t power = MIN_POWER;
//    double volume = MIN_VOLUME;
//    size_t max_speed = MAX_SPEED_LOW;
//    Date date{};
//
//public:
//    Car() {}
//
//    Car(const string& brand, const string& color, const Date& date) {
//        setBrand("brand");
//        this->color = color;
//        this->date = date;
//    }
//
//    string gatBrand() {
//        return this->brand;
//    }
//    string gatColor() {
//        return this->color;
//    }
//
//    void setBrand(const string& brand) {
//        if (brand.empty() || brand == " ") {
//            cout << "Error!!! brand is empty" << endl;
//        }
//        else {
//            this->brand = brand;
//
//        }
//    }
//    void setColor(const string& brand) {
//        if (!color.empty() and color!="") {
//            this->color = color;
//        }
//    }
//    void print() {
//        cout << "==================== " << this->brand << " ====================" << endl;
//        cout << "\t Color     : " << this->color << endl;
//        cout << "\t Power     : " << this->power << endl;
//        cout << "\t Volume    : " << this->volume << endl;
//        cout << "\t Max Speed : " << this->max_speed << endl;
//        cout << "\t Date      : " << this->date.getDate() << endl;
//    }
//
//    void input() {
//        cout << "\t Brand     : "; getline(cin, this->brand);
//        cout << "\t Color     : "; getline(cin, this->color);
//        cout << "\t Power     : "; cin >> this->power;
//        cout << "\t Volume    : "; cin >> this->volume;
//        cout << "\t Max Speed : "; cin >> this->max_speed;
//        cout << "\t Date      : "; cin >> this->date.day >> this->date.month >> this->date.year;
//    }
//};
//int main() {
//    Date date = { 2,5,2020 };
//    cout << date.getDate() << endl;
//
//    Car ford;
//    Car bmw("BMW", "black", { 5,8,2012 });
//    cout << bmw.gatBrand() << endl;
//    bmw.setBrand("Mazda");
//    cout << bmw.gatBrand() << endl;
//    ford.setColor("red");
//    cout << bmw.gatColor() << endl;
//    bmw.print();
//    
//}
//----------------------------------------------------
struct Pib {
    string secondName, Name, thirdName;
};
struct posEd {
    string town, country, namePlace;
};
class Student {
private:
    Pib pib{};
    Date date{};
    int numbs = 0;
    posEd pos{};
    string group;
public:
    Student() {}

    string num() {
        return "+" + to_string(numbs);
    }
    string getPib() {
        return this->pib.secondName + ", " + this->pib.Name + ", " + this->pib.thirdName;
    }
    string getPos() {
        return this->pos.town + ", " + this->pos.country + ", " + this->pos.namePlace;
    }
    void setStudent() {
        cout << "Enter full name sturdent - "; cin >> this->pib.secondName >> this->pib.Name >> this->pib.thirdName;
        cout << "Enter Date - "; cin >> this->date.day >> this->date.month >> this->date.year;
        cout << "Enter numbs student - "; cin >> this->numbs;
        cout << "Enter position place of study and name - "; cin >> this->pos.town >> this->pos.country >> this->pos.namePlace;
        cout << "Enter group name - "; cin >> this->group;
        cout << "------------------------------------------------------" << endl;
    }
    void getStudent() {
        cout << "Name student - " << getPib() << endl;
        cout << "Date - " << this->date.getDate() << endl;
        cout << "Numbs - " << num() << endl;
        cout << "Pos - " << getPos() << endl;
        cout << "Group - " << this->group;
        cout << "------------------------------------------------------" << endl;

    }
}

//Car(const string& brand, const string& color, const Date& date) {
//    setBrand("brand");
//    this->color = color;
//    this->date = date;
//}

//string gatBrand() {
//    return this->brand;
//}
//string gatColor() {
//    return this->color;
//}
//void setColor(const string& brand) {
//    if (!color.empty() and color!="") {
//        this->color = color;
//    }
//}
; int main() {
    Student ivan;
    ivan.setStudent();
    ivan.getStudent();
}