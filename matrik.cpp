#include <iostream>
using namespace std;

typedef struct {
	int tgl [5] [6];
}kalender;

int main() {
	
	kalender A;

	for (int i=0; i<5; i++)
	{
		for (int j=0; j<6; j++)
		{
			cout << "Masukan Nilai : ";
			cin >> A.tgl [i] [j];
		}
	}
cout << "nilai adalah : " << A.tgl [2] [2]<<endl;
	return 0;
}