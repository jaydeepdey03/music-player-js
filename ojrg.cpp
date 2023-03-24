// #include <iostream>
// #include <string.h>
// using namespace std;
// class Vehicle
// {
// public:
//     void wheels()
//     {
//         cout << "The car has 4 wheels" << endl;
//     }
// };
// class Car : public Vehicle
// {
// public:
//     void EnginePetrol()
//     {
//         cout << "The car is Petrol Engine" << endl;
//     }
// };
// class Bike : public Vehicle
// {
// public:
//     void gear()
//     {
//         cout << "The bike has 2 wheels" << endl;
//     }
// };
// int main()
// {
//     Car obj1;
//     Bike obj2;
//     obj1.wheels();
//     obj1.EnginePetrol();
//     obj2.gear();
// }


#include <iostream>

using namespace std;

class Father{
public:
    void show_fatherName(){
        cout << "Mike " << endl;
    }
};

class Mother{
public:
    void show_motherName(){
        cout << "Alice" << endl;
    }
};

class Girl: public Father, public Mother{
public:
    void show_girlName(){
        cout << "Anna" << endl;
    }
};

int main()
{
    Girl g1;
    g1.show_fatherName();
    g1.show_motherName();
    g1.show_girlName();
    return 0;
}