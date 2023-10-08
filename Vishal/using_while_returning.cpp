#include<iostream>
using namespace std;

class MyClass {
private:
    string a;
  enum Color {
    Red,
    Green,
    Blue
  };

public:
  MyClass() {}

  // Get the current color of the object.
  Color GetColor() const {
    return _color;
  } 

  // Set the color of the object.
  void SetColor(Color color) {
    _color = color;
  }

private:
  Color _color;
};

class MyClass2 {
private:
  enum Color {
    Red,
    Green,
    Blue
  };

  Color color;

public:
  MyClass2(Color color) : color(color) {}

  // Get the color of the object.
  Color GetColor() const {
    return color;
  }
};

// See the commented code

int main() {
  // Create a new MyClass object.
  MyClass myObject;

  // Get the current color of the object.
  Color color = myObject.GetColor();

  // Set the color of the object to red.
  myObject.SetColor(Color::Red);

  // Print the color of the object to the console.
  std::cout << color << std::endl;

  return 0;
}

