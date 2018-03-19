#pragma once
#include "../TList/TList.h"
#include "../TList/TPolinom.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//gr = CreateGraphics();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button4;

	private:
		TMonom  *monom = new TMonom();
		TPolinom *A = new TPolinom();
		TPolinom *B = new TPolinom();
		TPolinom *C = new TPolinom();
		TPolinom *D = new TPolinom();
		TMonom *ABC = new TMonom();
		//Graphics ^ gr;

		double p, q;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
			 /// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Äîáàâèòü â A";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ñîçäàòü ìîíîì";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"X";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(32, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(32, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(65, 177);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(65, 225);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Z";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Koef";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(294, 86);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(504, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(258, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"A";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(492, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Ïîëèíîìû";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(294, 130);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(504, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(258, 133);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"B";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(33, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Äîáàâèòü â B";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(431, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Ðåçóëüòàò îïåðàöèè";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(258, 234);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Ñ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(294, 234);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(504, 20);
			this->textBox7->TabIndex = 22;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(434, 184);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 23;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(363, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Îïåðàöèÿ";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(626, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 23);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Ïîñ÷èòàòü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(434, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Î÷èñòèòü";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(294, 173);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(28, 23);
			this->button5->TabIndex = 27;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(294, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(28, 23);
			this->button6->TabIndex = 28;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(244, 172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(28, 23);
			this->button7->TabIndex = 29;
			this->button7->Text = L"*";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(244, 203);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(28, 23);
			this->button8->TabIndex = 30;
			this->button8->Text = L"*=";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(193, 172);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(28, 23);
			this->button9->TabIndex = 31;
			this->button9->Text = L"+=";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 339);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {       // XXXXXXXXXXXXXXXX



	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {           //YYYYYYYYYYYYYYYY



}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {           //ZZZZZZZZZZZZ



}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {           //KOEF



}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {                     //ADD IN A
	int Xstepen = Convert::ToInt32(textBox1->Text);
	int Ystepen = Convert::ToInt32(textBox2->Text);
	int Zstepen = Convert::ToInt32(textBox3->Text);
	double KOEFF = Convert::ToDouble(textBox4->Text);
	monom->SetMonom(KOEFF, Xstepen, Ystepen, Zstepen);
	A->InsMonom(*monom);
	textBox5->Text = "";
	for (A->Reset(); !A->isEnd(); A->GoNext()) {

		textBox5->Text += A->pCurrent->value.coeff.ToString() + " * x^" + A->pCurrent->value.x.ToString() + " * y^" + A->pCurrent->value.y.ToString() + " * z^" + A->pCurrent->value.z.ToString() + " ";

	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {                   //ADD IN B
	int Xstepen1 = Convert::ToInt32(textBox1->Text);
	int Ystepen1 = Convert::ToInt32(textBox2->Text);
	int Zstepen1 = Convert::ToInt32(textBox3->Text);
	double KOEFF1 = Convert::ToDouble(textBox4->Text);
	monom->SetMonom(KOEFF1, Xstepen1, Ystepen1, Zstepen1);
	B->InsMonom(*monom);
	textBox6->Text = "";
	for (B->Reset(); !B->isEnd(); B->GoNext()) {

		textBox6->Text += B->pCurrent->value.coeff.ToString() + " * x^" + B->pCurrent->value.x.ToString() + " * y^" + B->pCurrent->value.y.ToString() + " * z^" + B->pCurrent->value.z.ToString() + " + ";

	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {       // POLINOM A



}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {       //POLINOM B



}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {          // OPERATION 



}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {         //POLINOM C



}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {              // RESULT
	if ((Convert::ToString(textBox8->Text) == Convert::ToString("A*B")) && (Convert::ToString(textBox8->Text) == "B*A")) {
				
		*C = ((*A) * (*B));
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "A+=B")) {
	//	A += B;
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "A+=A")) {
		//
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "B+=A")) {
		//B->operator+=(A);
		//B += A;
		//C = A + B;
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "B+=B")) {
		//
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "A+B") && (Convert::ToString(textBox8->Text) == "B+A")) {
		//
		*C = *A + *B;
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "A-B")) {
		//
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "B-A")) {
		//
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "A*=B") && (Convert::ToString(textBox8->Text) == "B*=A")) {
		//
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "A*=A")) {
		//
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

	if ((Convert::ToString(textBox8->Text) == "B*=B")) {
		//B->operator*=(B);
		textBox7->Text = "";
		for (C->Reset(); !C->isEnd(); C->GoNext()) {

			textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

		}
	}

}


private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	ABC->SetMonom(0, 0, 0, 0);
	D->InsMonom(*ABC);
	*A = *D;
	*B = *D;
	*C = *D;
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	*C = *A + *B;
	textBox7->Text = "";
	for (C->Reset(); !C->isEnd(); C->GoNext()) {

		textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	*C = *A - *B;
	textBox7->Text = "";
	for (C->Reset(); !C->isEnd(); C->GoNext()) {

		textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	*C = *A * *B;
	textBox7->Text = "";
	for (C->Reset(); !C->isEnd(); C->GoNext()) {

		textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	// A->operator*=(*B);
	*A = *A * *B;
	*C = *A;
	textBox7->Text = "";
	for (C->Reset(); !C->isEnd(); C->GoNext()) {

		textBox7->Text += C->pCurrent->value.coeff.ToString() + " * x^" + C->pCurrent->value.x.ToString() + " * y^" + C->pCurrent->value.y.ToString() + " * z^" + C->pCurrent->value.z.ToString() + " + ";

	}
}
};
}
