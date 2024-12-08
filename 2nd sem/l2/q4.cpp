// Task #4: WAP to illustrate how to declare, define and realize a namespace mechanism. Define
// two namespaces “doctors” and “engineers” with members - salary and function to increase their
// salary by 10% and 15% respectively. Use different techniques to access the members. Also
// illustrate how do you access the members of one namespace through another namespace.

#include<iostream>
using namespace std;

namespace doctors{
    double salary = 10000;

    int increaseSalary(double salary){
        return salary + (salary * 0.10);
    }
}

namespace engineers{
    double salary = 10000;

    int increaseSalary(double salary){
        return salary + (salary * 0.15);
    }

    void increaseValueofdoctors(){
        doctors::salary = doctors::increaseSalary(doctors::salary);
    }
}

int main(){
    cout << "Doctors Salary: " << doctors::salary << endl;
    cout << "Engineers Salary: "<< engineers::salary << endl;

    engineers::increaseValueofdoctors();
    engineers::salary = engineers::increaseSalary(engineers::salary);

    cout << "Doctors Salary: " << doctors::salary << endl;
    cout << "Engineers Salary: "<< engineers::salary << endl;

    return 0;
}