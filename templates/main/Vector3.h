#include <iostream>
template<class T>

class Vector3 {

	

public:

	Vector3 <T>& operator + (const Vector3<T> &asd) {
	
		x += asd.x;
		y += asd.y;
		z = asd.z;

		return *this;
	}

	T x, y, z; //podrien ser float, double, etc.

	Vector3() : x(0), y(0), z(0) { std::cout << "Constructor default" << std::endl; };
	Vector3(T x, T y, T z) : x(x), y(y), z(z) { std::cout << "Constructor per valor" << std::endl; };
	Vector3(const Vector3 &vec) : x(vec.x), y(vec.y), z(vec.z) { std::cout << "Constructor kopia" << std::endl; };

	void Normalize();
	float distance_to(Vector3<float>);

};