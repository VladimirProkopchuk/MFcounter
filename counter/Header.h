#pragma once
class counter {
private: 
	int number;
public:
	counter(int n);
	
	int getNumber() {
		return number;
	}
	void plus();
	void minus();
};