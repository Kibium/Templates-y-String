
#ifndef VECTOR_3
#define VECTOR_3
#include <iostream>
template<class T>

class Vector3 {

	

public:

	Vector3 <T>& operator + (const Vector3<T> &vector) {
	
		x += vector.x;
		y += vector.y;
		z = vector.z;

		return *this;
	}

	T x, y, z; 

	Vector3() : x(0), y(0), z(0) {};
	Vector3(T x, T y, T z) : x(x), y(y), z(z) {};
	Vector3(const Vector3 &vec) : x(vec.x), y(vec.y), z(vec.z) {};

	void Normalize() const;
	float distance_to(Vector3<T>) const;

};

#endif