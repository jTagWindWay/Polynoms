#pragma once
#include "TList.h"
#include <string>
#include "cstdlib"
#include "iostream"
#include <cmath>

using namespace std;

struct TMonom {
	double coeff;
	int x, y, z;



 void SetMonom(double _coeff, int _x, int _y, int _z) {
		this->coeff = _coeff;
		this->x =  _x;
		this->y =  _y;
		this->z =  _z;
	}

	bool operator<(const TMonom &tm) {
		return((x * 100 + y * 10 + z) < (tm.x * 100 + tm.y * 10 + tm.z));
	}

	bool operator<=(const TMonom &tm) {
		return((x * 100 + y * 10 + z) <= (tm.x * 100 + tm.y * 10 + tm.z));
	}

	bool operator>(const TMonom &tm) {
		return((x * 100 + y * 10 + z) > (tm.x * 100 + tm.y * 10 + tm.z));
	}

	bool operator>=(const TMonom &tm) {
		return((x * 100 + y * 10 + z) >= (tm.x * 100 + tm.y * 10 + tm.z));
	}

	bool operator==(const TMonom &tm) {
		if ((x * 100 + y * 10 + z) == (tm.x * 100 + tm.y * 10 + tm.z)) {
			return(coeff == tm.coeff);
		}
		else
			return false;
	}

	bool EqualDegrees(const TMonom &q) {
		return ((x * 100 + y * 10 + z) == (q.x * 100 + q.y * 10 + q.z));
	}

	bool operator!=(const TMonom &tm) {
		if ((x * 100 + y * 10 + z) == (tm.x * 100 + tm.y * 10 + tm.z)) {
			return(coeff != tm.coeff);
		}
		else
			return true;
	}

	friend ostream& operator<<(ostream& os, const TMonom& m) {
		os << m.coeff;
		if (m.x) if (m.x>1) os << "x^" << m.x;
		else  os << "x";
		if (m.y) if (m.y>1) os << "y^" << m.y;
		else  os << "y";
		if (m.z) if (m.z>1) os << "z^" << m.z;
		else  os << "z";
		return os;
	}

	TMonom operator*(const TMonom &tm) {
		TMonom temp;
		temp.x = x + tm.x;
		temp.y = y + tm.y;
		temp.z = z + tm.z;
		temp.coeff = coeff * tm.coeff;
		return temp;
	}
	
	TMonom& operator=(const TMonom &tm) {
		coeff = tm.coeff;
		x = tm.x;
		y = tm.y;
		z = tm.z;
		return *this;
	}

	friend TMonom operator+(TMonom& tm1, TMonom& tm2){
		TMonom temp;
		temp.coeff = tm1.coeff + tm2.coeff;
		temp.x = tm1.x;
		temp.y = tm1.y;
		temp.z = tm1.z;
		return temp;
	}

	 void operator+=(TMonom& tm1) {
		coeff += tm1.coeff ;
		x += tm1.x;
		y += tm1.y;
		z += tm1.z;
		//return temp;
	}

};

class TPolinom :public THeadList<TMonom> {
public:

	TPolinom() :THeadList<TMonom>() {
		pHead->value.coeff = 0;
		pHead->value.z = -1;
	}

	TPolinom(TMonom *mas, int size) :THeadList<TMonom>() {
		for (int i = 0; i < size; i++) {
			InsMonom(mas[i]);
		}
	}

	TPolinom(TPolinom& p)
	{
		for (p.Reset(); !p.isEnd(); p.GoNext())
		{
			this->InsMonom(p.pCurrent->value);
		}
	}

	TPolinom(const TMonom &m) :THeadList() {
		TLink<TMonom> *tmp = new TLink<TMonom>;
		tmp->pNext = pStop;
		tmp->value = m;
		pHead->pNext = tmp;
		pFirst = pLast = pCurrent = tmp;
	}

	void operator *=(double k) {
		for (Reset(); !isEnd(); GoNext()) {
			pCurrent->value.coeff *= k;
		}
	}

	void InsMonom(TMonom& monom) {
		if (!Size) { 
			InsFirst(monom);
			return; 
		}
		for (Reset(); !isEnd(); GoNext()) {
			if (pCurrent->value.EqualDegrees(monom)) {                 //if (monom == pCurrent->value
				pCurrent->value.coeff += monom.coeff;
				if (pCurrent->value.coeff == 0) delCurrent();
				return;
			}
			else {
				if (monom > pCurrent->value) {
					InsCurrent(monom);
					return;
				}
			}
		}
		InsCurrent(monom);
	}

	void operator +=(TPolinom& Q) {
		for (Q.Reset(); !Q.isEnd(); Q.GoNext()) {
			InsMonom(Q.pCurrent->value);
		}
	}

	friend TPolinom operator+( TPolinom & tp,  TPolinom & tp1) {
		TPolinom tmp = tp1;
		tp.Reset();
		for (tp.pCurrent; !tp.isEnd(); tp.GoNext()) { 
			tmp.InsMonom(tp.pCurrent->value);

		}
		return tmp;
	}

	friend TPolinom operator-( TPolinom &tp,  TPolinom &tp1) {
		TPolinom tmp = tp1;
		tmp *=  -1;
		tmp = tp + tmp;
		return tmp;
	}

	TPolinom operator*(double a) {
		TPolinom tmp = *this;
		for (tmp.Reset(); !tmp.isEnd(); tmp.GoNext())
			tmp.pCurrent->value.coeff *= a;
		return tmp;
	}

	friend ostream& operator<<(ostream& os, TPolinom& tp){
		if (tp.Size == 0){
			os << 0 << " ";
			return os;
		}
			for (tp.Reset(); !tp.isEnd(); tp.GoNext()) {
					os << tp.pCurrent->value << " ";
			}

		return os;
	}

	TPolinom& operator=(TPolinom& tp)
	{
		TList<TMonom>::~TList();

		for (tp.Reset(); !tp.isEnd(); tp.GoNext())
		{
			this->InsMonom(tp.pCurrent->value);
		}

		return *this;
	}

	TPolinom operator*( TPolinom &p) {
		TPolinom tmp;
		for (p.Reset(); !p.isEnd(); p.GoNext())
			for (Reset(); !isEnd(); GoNext()) {
				tmp.InsMonom(pCurrent->value*p.pCurrent->value);
			}
		return tmp;
	}



};

