#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // Open the input file for reading.
  ifstream inputFile("my_file.txt");

  if (inputFile.is_open()) {
    cout << "Is open"<< endl;
    // Read the data from the file.
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }

    // Close the input file.
    inputFile.close();
  } else {
    cout << "Error: Could not open input file." << endl;
  }

  // Open the output file for writing.
  ofstream outputFile("my_file_out.txt");

  if (outputFile.is_open()) {
    // Write the data to the file.
    outputFile << "This is a line of text." << endl;
    outputFile << "This is another line of text." << endl;

    // Close the output file.
    outputFile.close();
  } else {
    cout << "Error: Could not open output file." << endl;
  }

  return 0;
}
