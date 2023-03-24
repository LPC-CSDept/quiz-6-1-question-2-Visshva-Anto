#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
// Implement all your functions here
// ******************************
void getinput(int &, int&, int &);
int findMin(int, int, int);
void printResult(int, int, int, int);

void getinput(int &n1, int&n2, int &n3)
{
    cout << "Enter 3 number: \n";
    cin >> n1 >> n2 >> n3;
}
int findMin(int n1, int n2, int n3)
{
    int min;
    if((n1<n2) && (n1<n3))
        min=n1;

    else if((n2<n1) && (n2<n3))
        min=n2;

    else
        min=n3;
    return min;
}
void printResult(int n1, int n2, int n3, int min)
{
    cout << "The minimum is: \n" << min << endl;
}
