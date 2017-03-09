#include <iostream>
#include <string>

using namespace std;

// superclass
class Animal {
public:
	void speak() { cout << "Grr" << endl; };
};

// subclass
class Cat : public Animal {
public:
	void jump() { cout << "Cat jumping!" << endl; };

};

int main() {

	Animal a;
	a.speak();

	Cat b;
	b.speak();
	b.jump();

	return 0;
}
