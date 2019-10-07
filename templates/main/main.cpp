#include "Vector3.h"
#include "strin.h"

using namespace std;

int main() {

	/*Vector3 <int> v;
	Vector3 <char> f ('p', 'e', 't');
	Vector3 <char> c = f;

	cout << c.x << ' ' << c.y << ' ' << c.z << endl;

	Vector3 <float> vec(5, 8, 30);
	Vector3<float> vec2(1, 1, 1);

	Vector3 <float> sum = vec + vec2;

	cout << sum.x << ' ' << sum.y << ' ' << sum.z << endl;

	vec.distance_to(vec2);
*/

	Strin s1 (" Gitano");

	Strin s2("holayolo");

	Strin s3 = s2;

	Strin s4 = s2 + s1;

	system("pause");
	return 0;
}