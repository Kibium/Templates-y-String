#include "Vector3.h"
#include <math.h>

template<typename T>
void Vector3<T>::Normalize() const {

	float base = sqrt(x*x + y * y + z * z);
	x = x / base;
	y = y / base;
	z = z / base;

	std::cout << "The vector is now: " << x << ' ' << y << ' ' << z << std::endl;
}

template<typename T>
float Vector3<T>::distance_to(Vector3<T> vec) const{

	float d =  sqrt(pow(vec.x - x, 2) + pow(vec.y - y, 2) + pow(vec.z - z, 2));

	//std::cout << "Distance = " << d << std::endl;

	return d;

}