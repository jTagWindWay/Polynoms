#include "TList.h"
#include <iostream>
#include "TPolinom.h"

using namespace std;

void main() {

	TPolinom B;
	TMonom  b, b1, b2, b3, b4, c, c1, c2, c3;

	b.SetMonom(2, 2, 2, 2);
	b1.SetMonom(4, 4, 4, 4);
	b2.SetMonom(7, 7, 7, 7);
	b3.SetMonom(3, 3, 3, 3);
	b4.SetMonom(5, 5, 5, 5);

;
	B.InsMonom(b);
	B.InsMonom(b1);
	B.InsMonom(b2);
	B.InsMonom(b3);
	B.InsMonom(b4);

	cout << B <<"B"<< endl << "" << endl;
	cout << "" << endl;
	TPolinom C;

	c.SetMonom(1, 1, 1, 1);
	c1.SetMonom(-2, 2, 2, 2);
	c2.SetMonom(6, 5, 5, 5);
	c3.SetMonom(-7, 7, 7, 7);

	C.InsMonom(c);
	C.InsMonom(c1);
	C.InsMonom(c2);
	C.InsMonom(c3);


	cout << C << "C" << endl << "" << endl;
	cout << "" << endl;
	TPolinom D = B + C;
	cout << D <<"D = B + C" << endl << "" << endl;
	//cout << "" << endl;
	//TPolinom F = C + B;
	//cout << F << "F = C + B" <<  endl << "" << endl;
	//cout << "" << endl;
	//cout << C << "C" <<  endl << "" << endl;
	//cout << "" << endl;

	//cout << B << "B" <<  endl << "" << endl;
	//TPolinom G = C + D;
	//cout << G <<"G = C + D"<<  endl << "" << endl;
	//cout << "" <<  endl << "" << endl;
	//TPolinom P = C * B;
	//cout << P << "P = C * B" <<  endl << "" << endl;
	//cout << "" <<  endl << "" << endl;


	//TList<int> A;
	//A.Sort(15);
	//A.Sort(1);
	//A.Sort(32);
	//A.Sort(4);
	//A.Sort(7);
	//A.Sort(21);
	//A.Sort(0);

	//for (A.Reset(); !A.isEnd(); A.GoNext()) {
	//	cout << A.GetCurrenValue() <<" ";
	//}



	system("pause");
	
}












