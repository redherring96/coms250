#ifndef GASTANK_H
#define GASTANK_H

class GasTank {
private:
	double capacity, amount;
public:
	GasTank();
	GasTank(double);
	void addGas(double);
	void UseGas(double);
	bool isEmpty();
	bool isFull();
	double getGasLevel();
	double fillUp();
};


#endif

