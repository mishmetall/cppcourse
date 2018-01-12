#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
	virtual const char* what() const noexcept {
		return "Something happened!";
	}
};

class Test {
public:
	void goesWrong() {
		throw MyException();
	}
};

int main(int argc, char **argv) {
	Test t;

	try {
		t.goesWrong();
	} catch (MyException &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

