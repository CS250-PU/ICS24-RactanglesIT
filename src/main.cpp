//******************************************************************************
// File name:  
// Author:     
// Date:       
// Class:      
// Assignment: 
// Purpose:    
//
//******************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

// TODO#1: Create Rectangle struct
struct Rectangle {
  double mLength;
  double mWidth;
};

// TODO#3: Write the function prototype for writeRectangle
void writeRectangle (const Rectangle &rsRectangle, ostream &outStream);

// TODO#6: Write the function prototype for readRectangle
bool readRectangle (Rectangle &rsRectangle, istream &inStream);

// TODO#9: Write the function prototype for reactangleArea


// TODO@12: Write the prototype for readAllRectangles


// TODO#15: Write the prototype for writeAllRectangles



int main () {
  const int MAX_RECTANGLES = 100;
  const string FILE_NAME = "data/rectangles.txt";
  Rectangle sRectangles[MAX_RECTANGLES];
  ifstream inStream;
  int numRectangles;

  // TODO#2: Declare a single struct with length 5.0 and width 10.0
  Rectangle sRectangle = {5.0, 10.0};

  cout << "Fun With Rectangles" << endl;

  // TODO#5: Call the function to output sRectangle to the screen
  writeRectangle (sRectangle, cout);
  cout << endl << endl;

  // TODO#8: Change the contents of sRectangle by calling readRectangle
  //          using the values 5.0 and 10.0 for length and width respectively.
  //          Prompt the user.
  cout << "Enter Rectangle length and width: ";
  readRectangle (sRectangle, cin);
  writeRectangle (sRectangle, cout);

  // TODO#11: Output the area of sRectangle to the screen


  inStream.open (FILE_NAME);
  if (inStream.fail ()) {
    cout << "Error Opening: " << FILE_NAME << endl;
    exit (EXIT_FAILURE);
  }

  // TODO#14: Read all rectangles


  inStream.close ();

  // TODO#17: Write all rectangles


  cout << endl << endl;
  return EXIT_SUCCESS;
}

// TODO#4: Function definition for displayRectangle
void writeRectangle (const Rectangle &rsRectangle, ostream &outStream) {
  outStream << "length: " << rsRectangle.mLength 
    << " width: " << rsRectangle.mWidth;
}

// TODO#7: Function definition for readRectangle
bool readRectangle (Rectangle &rsRectangle, istream &inStream) {
  bool bIsEOF = true;

  if (inStream >> rsRectangle.mLength >> rsRectangle.mWidth) {
    bIsEOF = false;
  }
  return bIsEOF;
}

// TODO#10: Function definition for rectangleArea


// TODO#13: Function definition for readAllRectangles
//          NOTE: Call readRectangle in your solution


// TODO#16: Function definition for writeAllRectangles
//          NOTE: Call writeRectangle in your solution
