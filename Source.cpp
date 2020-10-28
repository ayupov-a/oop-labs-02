#include <iostream>
#include <cmath>

using namespace std;

class Quadrangle {
protected:
	double area;
	double insc_rad;
	double desc_rad;
public:
	
	Quadrangle() {
		cout << "Quadrangle()" << "\n\n";
		this->area = 1;
		this->insc_rad = 5;
		this->desc_rad = 6;
	}
	Quadrangle(double area, double insc_rad, double desc_rad) {
		cout << "Quadrangle(double area, double insc_rad, double desc_rad)" << "\n\n";
		this->area = area;
		this->insc_rad = insc_rad;
		this->desc_rad = desc_rad;	
	}
	Quadrangle(const Quadrangle &q) {
		cout << "Quadrangle(const Quadrangle &q)" << "\n\n";
		area = q.area;
		insc_rad = q.insc_rad;
		desc_rad = q.desc_rad;
	}
	~Quadrangle() {
		cout << "~Quadrangle()" << endl;
		printf("%0.1f %0.1f %0.1f\n", area, insc_rad, desc_rad);
	}
	void area_increase(double areainc) {
		area = area + areainc;
		insc_rad = sqrt(area * 2);
		desc_rad = sqrt(area * 4);
	}
	void reset();
};

void Quadrangle::reset() {
	area = 1;
	insc_rad = 1;
	desc_rad = 1;
}


int main() {
	/*{
		Quadrangle q;
		Quadrangle q1(5.1, 6, 7);
		Quadrangle q2(q1);
	}*/
	Quadrangle *q = new Quadrangle(5.1, 6, 7);
	q->reset();
	q->area_increase(2);


	delete q;

	return 0;
}