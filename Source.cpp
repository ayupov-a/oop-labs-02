#include <iostream>
#include <cmath>

using namespace std;

class Polygon {
protected:
	double area;
public:
	
	Polygon() {
		cout << "Polygon()" << "\n\n";
		this->area = 1;
	}
	Polygon(double area) {
		cout << "Polygon(double area)" << "\n\n";
		this->area = area;
	}
	Polygon(const Polygon &q) {
		cout << "Polygon(const Polygon &q)" << "\n\n";
		area = q.area;
	}
	~Polygon() {
		cout << "~Polygon()" << endl;
		printf("%0.1f \n", area);
	}
	void area_increase(double areainc) {
		area = area + areainc;
	}
	void reset();
};

void Polygon::reset() {
	area = 1;

}

class Rectangle : public Polygon {
private:
	float side_a, side_b;
public:
	Rectangle() {

	}
};


int main() {
	/*{
		Polygon q;
		Polygon q1(5.1, 6, 7);
		Polygon q2(q1);
	}*/
	Polygon *q = new Polygon(5.1);
	q->reset();
	q->area_increase(2);


	delete q;

	return 0;
}