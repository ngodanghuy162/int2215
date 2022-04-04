#include <bits/stdc++.h>

using namespace std;

class Employee {
    public:
        string name, address;
        int year_of_joining;
        double salary;
        Employee(string _name, int _year_of_joining, double _salary, string _address) : name(_name), year_of_joining(_year_of_joining), salary(_salary), address(_address) {};
        void printinfor() {
            cout << name;
            for(int i = 0; i < 9-name.length(); i++) {
                cout << " ";
            }
            cout << year_of_joining ;
            cout << "                ";
            cout << address << "\n";
        }
};

int main() {
    cout << "Name" << "     " << "Year of joining" << "     " << "Address\n";
    vector<Employee> v;
    Employee Huy("Huy", 2003, 900000000, "nghia tan");
    Employee acong("acong", 2003, 900000000, "to hieu");
    Employee hocbong("hocbong", 2003, 500000000, "1 nam truc");
    v.push_back(Huy);
    v.push_back(acong);
    v.push_back(hocbong);
    for(int i = 0; i < v.size(); i++) {
        v[i].printinfor();
    }
}
