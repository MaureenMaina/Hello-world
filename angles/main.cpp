#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Please enter the angles of the triangle." << endl;
    cin >> a >> b>> c;

    if ( (a+b+c)== 180){
        cout << "It is a valid triangle! \n";
    } else{
        cout << "Not a valid triangle!\n";
    }
    return 0;
}
