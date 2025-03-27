/*
Without using classes, write a program to calculate the perimeter 
of shapes. The program must accept from user input the number of sides
the shape from the user and the length of each side, then calculate the 
perimeter, and display the result. 

Note: All sides are not necessarily same the length.
Note: All sides are integers.
 */

 #include <iostream>

 using namespace std;

int main() {
    cout<<"Part 1"<<endl; //do not remove, edit, or change the placement of this line.
    int numOfSides=0;//the number of sides
    string shape;//the shape from the user
    int lengthOfSide;//length of each side
    int Perimeter=0;//then calculate the 
    int i;

    cout << "HELLO! Please enter the number of sides:" << endl;
    cin >> numOfSides;
    cout << "Please enter the shape:" << endl;
    cin >> shape;
    for(i=1;i <= numOfSides; i++){
    cout << "Please enter the lengths of each side:" << endl;
    cin >> lengthOfSide;
    Perimeter += lengthOfSide;
    }
    cout << "The perimeter of the " << shape << " is: " <<     Perimeter << endl;
    return 0;
 }
