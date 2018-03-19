#pragma once
#include <iostream>
#include  <string>
#include "cstdlib"

template <class T>
struct TLink {
	T value;
	TLink *pNext;
};

template <class T>
class TList {
public:
	int Size;
	int Pos;
	TLink <T> *pFirst, *pLast, *pCurrent, *pPrevious, *pStop;
public:

	TList() {
		pFirst = pLast = pCurrent = pPrevious = pStop = NULL;
		Size = 0;
		Pos = -1;
	}

	virtual void InsFirst(T a) {
		TLink<T>*tmp = new TLink<T>;
		tmp->value = a;
		if (Size == 0) {
			pFirst = pLast = pCurrent = tmp;
			tmp->pNext = pStop;
		}
		else {
			tmp->pNext = pFirst;
			pFirst = tmp;
			Pos++;
		}
		Size++;
	}

	 void InsCurrent(T a) {
		if (pCurrent == pFirst) {
			InsFirst(a);
		}
		else {
			TLink<T> *tmp = new TLink<T>;
			tmp->value = a;
			tmp->pNext = pCurrent;
			pPrevious->pNext = tmp;
			pCurrent = tmp;
			Size++;
		}
	}

	 void InsLast(T a) {;
		 if (pFirst == NULL) InsFirst(a);
		 else {
			 TLink<T> *tmp = new TLink<T>;
			 tmp->value = a;
			 pLast->pNext = tmp;   //
			 tmp->pNext = pStop;
			 pLast = tmp;
			 Size++;
		 }
	 }

     virtual void delFirst() {
		if (Size == 1) {
			delete pFirst;
			pFirst = pLast = pCurrent = pPrevious = pStop;
		}
		else {
			TLink <T> * tmp = pFirst->pNext;
			delete pFirst;
			pFirst = tmp;
		}
		Size--;
		Pos--;
	}

	virtual void delCurrent() {
		if (pCurrent == pFirst)  delFirst();
		else {
			pCurrent = pCurrent->pNext;
			delete pPrevious->pNext;
			pPrevious->pNext = pCurrent;
			Size--;
		}
	}

	void Reset() {
		pCurrent = pFirst;
		Pos = 0;
		pPrevious = pStop;
	}

	void GoNext() {
		pPrevious = pCurrent;
		pCurrent = pCurrent->pNext;
		Pos++;
	}

	bool isEnd() {
		if (pCurrent == pStop) return true;
		return false;
	}

	T GetCurrenValue() {
		return pCurrent->value;
	}

	T GetNextValue() {
		return pNext->value;
	}

	void Sort(T a) {
		TList<int> l;
		if (pFirst == pStop || pFirst->value > a) {
			InsFirst(a); return;
		}
		if (a >= pLast->value) {
			InsLast(a); return;
		}
		for (Reset(); !isEnd(); GoNext()) {
			if (pCurrent->value > a) {
				InsCurrent(a);
				return;
			}
		}
	}

	~TList() {
		int size = Size;
		for (int i = 0; i<size; i++) {
			delFirst();
		}
	}

};

template <class T>
class THeadList :public TList<T> {
public:
	TLink<T> *pHead;
public:

	THeadList() :TList() {
		TLink<T> *tmp = new TLink<T>;
		pHead = tmp;
		pStop = tmp;
		tmp->pNext = pStop;
		Size = 0;
	}

	~THeadList() {
		TList<T>::~TList();
		delete pHead;
	}

	virtual void InsFirst(T a) {
		TLink<T> *tmp = new TLink<T>;
		tmp->value = a;
		if (pFirst == NULL) {
			tmp->pNext = pStop;
			pFirst = pLast = tmp;
			Pos = 0;
		}
		else {
			tmp->pNext = pFirst;
			pFirst = tmp;
			Pos++;
		}
		Size++;
		pHead->pNext = pFirst;
	}

	virtual void delFirst() {
		if (Size == 1)
		{
			delete pFirst;
			pFirst = pLast = pPrevious = pCurrent = NULL;
			pHead->pNext = pStop;
		}
		else
		{
			TLink<T> *tmp = pFirst->pNext;
			delete pFirst;
			pFirst = tmp;
			pHead->pNext = pFirst;
		}
		Size--;
		Pos--;
	}



};