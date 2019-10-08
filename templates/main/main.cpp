#include "Vector3.h"
#include "strin.h"

using namespace std;

int main() {

	/*Vector3 <int> v;
	Vector3 <char> f ('p', 'e', 't');
	Vector3 <char> c = f;

	c.print();
	Vector3 <float> vec(5, 8, 30);
	Vector3<float> vec2(1, 1, 1);

	Vector3 <float> sum = vec + vec2;

	vec.Normalize();

	vec.distance_to(vec2);*/


	Strin s1("hello");

	Strin s2(s1);

	Strin s3 = s1 + s2;


	system("pause");
	return 0;
}