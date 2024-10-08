// COMSC-210 | Lab 16 | Mauricio Espinosa

#include <iostream>
#include <iomanip>
using namespace std;

// Class Declaration
class Color 
{
    private:
    int red;
    int green;
    int blue;

    public:
    // getters and setters
    int getRed()          { return red; }
    void setRed(int r)    { red = r; }
    int getGreen()        { return green; }
    void setGreen(int g)  { green = g; }
    int getBlue()         { return blue; }
    void setBlue(int b)   { blue = b; }

    // print method
    void print() {
        cout << setw(15) << "Red: " << red << endl;
        cout << setw(15) << "Green: " << green << endl;
        cout << setw(15) << "Blue: " << blue << endl << endl;
    }

};


int main() {

    // First color object
    Color color1;
    color1.setRed(255);
    color1.setGreen(65280);
    color1.setBlue(16711680);
    color1.print();

    // Second color object
    Color color2;
    color2.setRed(125);
    color2.setGreen(2644);
    color2.setBlue(25649);
    color2.print();

    return 0;
}