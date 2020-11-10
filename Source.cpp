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
	double side_a;
	double side_b;
public:
	Rectangle() {
		this->side_a = 1;
		this->side_b = 2;
		this->area = side_a * side_b;
		cout << "Rectangle()" << endl;
	}
	Rectangle(double side_a, double side_b) {
		this->side_a = side_a;
		this->side_b = side_b;
		this->area = side_a * side_b;
		cout << "Rectangle(double side_a, double side_b)" << endl;
	}
	Rectangle(const Rectangle &r) {
		this->side_a = r.side_a;
		this->side_b = r.side_b;
		this->area = r.area;
		cout << "Rectangle(const Rectangle &r)" << endl;
	}
	~Rectangle() {
		cout << "~Rectangle" << endl;
	}
	double set_perimetr();
};

double Rectangle::set_perimetr() {
	cout << "set_perimetr" << endl;
	return 2 * side_a + 2 * side_b;
}

int main() {
	/*{
		Polygon q;
		Polygon q1(5.1, 6, 7);
		Polygon q2(q1);
	}*/
	Polygon *q = new Polygon(5.1);

	Rectangle r;
	//Rectangle *r = new Rectangle(5, 7);
	r.set_perimetr();

	

	//delete r;
	delete q;

	return 0;
}