#include "Vector3.h"
#include "strin.h"

using namespace std;

int main() {

	cout << "--- Vector3 stuff ---" << endl;

	Vector3 <int> v;
	Vector3 <char> f ('p', 'e', 't');
	Vector3 <char> c = f;

	c.print();
	Vector3 <float> vec(5, 8, 30);
	Vector3<float> vec2(1, 1, 1);

	Vector3 <float> sum = vec + vec2;

	vec.Normalize();

	vec.distance_to(vec2);

	cout << endl << "--- Strin stuff ---" << endl;

	Strin s1("cul");
	//s1.clear();
	s1.print();
	Strin ss("merda");

	Strin s2(s1);

	Strin s3 = s1 + ss;
	s3.print();

	if (s1 == s3)
		cout << "Yes" << endl;

	system("pause");
	return 0;
}