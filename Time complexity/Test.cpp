#include <iostream>
using namespace std;

int main()
{
    const int busCapacity = 50;
    int waitingPassengers;

    cout << "Enter the number of passengers waiting: ";
    cin >> waitingPassengers;


    int emptySeats = busCapacity - (waitingPassengers % busCapacity);

    cout << emptySeats <<endl;

    return 0;
}
