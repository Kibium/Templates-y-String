#include <iostream>
template<class T>

class Vector3 {

private:
	T x, y, z;

public:

	//I use a friend operator in order not to overwrite the variables we pass as parameters
	friend Vector3 <T>& operator + (const Vector3<T> &vec, const Vector3<T> &vec2) {
	
		Vector3<T> v;

		v.x = vec.x + vec2.x;
		v.y = vec.y + vec2.y;
		v.z = vec.z + vec2.z;

		return v;
	}

	Vector3() : x(0), y(0), z(0) {};
	Vector3(T x, T y, T z) : x(x), y(y), z(z) {};
	Vector3(const Vector3<T> &vec) : x(vec.x), y(vec.y), z(vec.z) {};

	//Converts the vector to a new vector of base 1 
	void Normalize() {

		float base = sqrt(x*x + y * y + z * z);
		x = x / base;
		y = y / base;
		z = z / base;

		std::cout << "The vector is now: " << x << ' ' << y << ' ' << z << std::endl;
	}

	//Returns the distance between two points
	float distance_to(Vector3<T> vec) {

		float d = sqrt(pow(vec.x - x, 2) + pow(vec.y - y, 2) + pow(vec.z - z, 2));

		std::cout << "Distance = " << d << std::endl;

		return d;

	};

	//Prints the vector value
	void print() {
		std::cout << x << ' ' << y << ' ' << z << std::endl;
	}

};