// N 1
/*
#include <iostream>
using namespace std;
int main()
{
	const int r = 5;
	int mas[r];
	for (int i = 0; i < r; i++) {
		cin >> mas[i];
	}
	for (int i = r - 1; i >= 0; i--) {
		cout << mas[i] << ' ';
		i += i;
	}
	cout << endl;
}
*/
// N 2
/*
#include <iostream>
using namespace std;
int main()
{
	const int r = 15;
	int mas[r];
	for (int i = 0; i < r; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < r; i++) {
		if(i % 5 == 0 && i % 3 == 0)
		i +=i;
		cout << mas[i] << ' ';
	}
	cout << endl;
}
*/
// N 3
/*
#include <iostream>
using namespace std;
int main()
{
	const int r = 17;
	int mas[r];
	for (int i = 0; i < r; i++) {
		mas[i] = rand() % 46;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < r; i++) {
		if (i % 2 == 0 || i % 3 == 0)
			i += i;
		cout << mas[i] << ' ';
	}
	cout << endl;
	
}
*/
//N 4
#include <iostream>
using namespace std;
int main()
{
	const int r = 17;
	int mas[r];
	for (int i = 0; i < r; i++) {
		mas[i] = rand() % 53;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < r; i++) {
		if (i % 2 == 0)
			i += i;
		int h = 0;
		h++;	
		cout << mas[i] << ' ';
	}

	cout << endl;
}