#include <iostream>
using namespace std;

class employee {
    public:
        employee(string name[3], int year[3], string address[3])
        // string name[3];
        // int year[3];
        // string address[3];

    void display(){ 
       cout << "Name        " << "Year of Joining       " << "Address" << endl;
       cout << name[0] << "     " << year[0] << "       " << address[0] << endl;
       cout << name[1] << "     " << year[1] << "       " << address[1] << endl;
       cout << name[2] << "     " << year[2] << "       " << address[2] << endl;
    }
};

int main()
{
    employee obj1;
    obj1.name[0] = "Robert";
    obj1.name[1] = "Sam";
    obj1.name[2] = "John";

    obj1.year[0] = 1994;
    obj1.year[1] = 2000;
    obj1.year[3] = 1999;

    obj1.address[0] = "64C-WallsStreat";
    obj1.address[1] = "68D-WallsStreat";
    obj1.address[2] = "26B-WallsStreat";
    obj1.display();

    return 0;
}