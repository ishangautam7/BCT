// Task #5: Create a class vehicle with 3 data members as model number, model name and cost.
// Create 2 different objects of above class and display their model number, model name and cost.

#include<iostream>
using namespace std;

class Vehicle{
    private:
        int modelNumber;
        string modelName;
        double cost;
    public:
        Vehicle(int modelNumber, const string& modelName, double cost) : modelNumber(modelNumber), modelName(modelName), cost(cost){}

        int getModelNumber(){
            return modelNumber;
        }

        string &getModelName(){
            return modelName;
        }

        double getCost(){
            return cost;
        }
};

int main(){
   
    Vehicle v1(1, "Car", 100000);
    Vehicle v2(2, "Bike", 10000);

    cout << "Vehicle 1" << endl;
    cout << "Model Number: " << v1.getModelNumber() << ", Model Name: " << v1.getModelName() << ", Cost: " << v1.getCost() << endl;

    cout << "Vehicle 2" << endl;
    cout << "Model Number: " << v2.getModelNumber() << ", Model Name: " << v2.getModelName() << ", Cost: " << v2.getCost() << endl;

    return 0;
}

