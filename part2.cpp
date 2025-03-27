/*
Using classes, write the same program from Part 1. 
Create a Shape class which stores the number of sides a shape has, 
the length of each side, and a method that calculates the perimeter 
and returns it. The class must not print any value to the screen or 
prompt the user to enter any value. All user input and output to 
screen must be done in the main function.

Note: All sides are not necessarily same the length.
Note: All sides are integers.
*/

 #include <iostream>

 using namespace std;

class Shape {
    private:
        int numOfSides;
        int* sideLengths;

    public:
        Shape(int sides) {
            numOfSides = sides;
            sideLengths = new int[numOfSides];
        }

        void setSideLength(int index, int length) {
            sideLengths[index] = length;
        }

        int calculatePerimeter() {
            int perimeter = 0;
            for (int i = 0; i < numOfSides; i++) {
                perimeter += sideLengths[i];
            }
            return perimeter;
        }
};

int main() {
    cout << "Part 1" << endl; //do not remove, edit, or change the placement of this line.
    int numOfSides = 0; //the number of sides
    string shape; //the shape from the user
    int lengthOfSide; //length of each side
    int Perimeter = 0; //then calculate the perimeter

    cout << "HELLO! Please enter the number of sides:" << endl;
    cin >> numOfSides;
    cout << "Please enter the shape:" << endl;
    cin >> shape;

    Shape s(numOfSides);

    for (int i = 0; i < numOfSides; i++) {
        cout << "Please enter the length of each side " << endl;
        cin >> lengthOfSide;
        s.setSideLength(i, lengthOfSide);
    }

    Perimeter = s.calculatePerimeter();
    cout << "The perimeter of the " << shape << " is: " << Perimeter << endl;

    return 0;
}
