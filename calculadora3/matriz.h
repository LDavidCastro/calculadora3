#pragma once

namespace calculadora3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de matriz
	/// </summary>
	public ref class matriz : public System::Windows::Forms::Form
	{
	public:
		matriz(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~matriz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSalir;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonLimpiar;
	private: System::Windows::Forms::Button^ buttonResta;
	private: System::Windows::Forms::Button^ buttonInversa;
	private: System::Windows::Forms::Button^ buttonAdjunta;
	private: System::Windows::Forms::Button^ buttonDeterminant;
	private: System::Windows::Forms::Button^ buttonTranspose;
	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ buttonSum;
	private: System::Windows::Forms::TextBox^ textBoxResult22;
	private: System::Windows::Forms::TextBox^ textBoxResult12;
	private: System::Windows::Forms::TextBox^ textBoxResult21;
	private: System::Windows::Forms::TextBox^ textBoxResult11;
	private: System::Windows::Forms::TextBox^ textBoxB22;
	private: System::Windows::Forms::TextBox^ textBoxB12;
	private: System::Windows::Forms::TextBox^ textBoxB21;
	private: System::Windows::Forms::TextBox^ textBoxb11;
	private: System::Windows::Forms::TextBox^ textBoxA22;
	private: System::Windows::Forms::TextBox^ textBoxA12;
	private: System::Windows::Forms::TextBox^ textBoxA21;
	private: System::Windows::Forms::TextBox^ textBoxA11;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(matriz::typeid));
			this->buttonSalir = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->buttonResta = (gcnew System::Windows::Forms::Button());
			this->buttonInversa = (gcnew System::Windows::Forms::Button());
			this->buttonAdjunta = (gcnew System::Windows::Forms::Button());
			this->buttonDeterminant = (gcnew System::Windows::Forms::Button());
			this->buttonTranspose = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonSum = (gcnew System::Windows::Forms::Button());
			this->textBoxResult22 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxResult12 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxResult21 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxResult11 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB22 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB12 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB21 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxb11 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA22 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA12 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA21 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA11 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonSalir
			// 
			this->buttonSalir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.BackgroundImage")));
			this->buttonSalir->Location = System::Drawing::Point(761, 477);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(89, 35);
			this->buttonSalir->TabIndex = 71;
			this->buttonSalir->Text = L"Salir";
			this->buttonSalir->UseVisualStyleBackColor = true;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &matriz::buttonSalir_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(517, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 70;
			this->label3->Text = L"Resultado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(318, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 17);
			this->label2->TabIndex = 69;
			this->label2->Text = L"MatrizB;";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(104, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 68;
			this->label1->Text = L"Matriz A:";
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Location = System::Drawing::Point(698, 227);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(89, 35);
			this->buttonLimpiar->TabIndex = 67;
			this->buttonLimpiar->Text = L"Limpiar";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &matriz::buttonLimpiar_Click);
			// 
			// buttonResta
			// 
			this->buttonResta->Location = System::Drawing::Point(179, 311);
			this->buttonResta->Name = L"buttonResta";
			this->buttonResta->Size = System::Drawing::Size(100, 39);
			this->buttonResta->TabIndex = 66;
			this->buttonResta->Text = L"Resta";
			this->buttonResta->UseVisualStyleBackColor = true;
			this->buttonResta->Click += gcnew System::EventHandler(this, &matriz::buttonResta_Click);
			// 
			// buttonInversa
			// 
			this->buttonInversa->Location = System::Drawing::Point(471, 374);
			this->buttonInversa->Name = L"buttonInversa";
			this->buttonInversa->Size = System::Drawing::Size(91, 36);
			this->buttonInversa->TabIndex = 65;
			this->buttonInversa->Text = L"Inversa";
			this->buttonInversa->UseVisualStyleBackColor = true;
			this->buttonInversa->Click += gcnew System::EventHandler(this, &matriz::buttonInversa_Click);
			// 
			// buttonAdjunta
			// 
			this->buttonAdjunta->Location = System::Drawing::Point(356, 375);
			this->buttonAdjunta->Name = L"buttonAdjunta";
			this->buttonAdjunta->Size = System::Drawing::Size(75, 35);
			this->buttonAdjunta->TabIndex = 64;
			this->buttonAdjunta->Text = L"Adjunta";
			this->buttonAdjunta->UseVisualStyleBackColor = true;
			this->buttonAdjunta->Click += gcnew System::EventHandler(this, &matriz::buttonAdjunta_Click);
			// 
			// buttonDeterminant
			// 
			this->buttonDeterminant->Location = System::Drawing::Point(471, 313);
			this->buttonDeterminant->Name = L"buttonDeterminant";
			this->buttonDeterminant->Size = System::Drawing::Size(110, 35);
			this->buttonDeterminant->TabIndex = 63;
			this->buttonDeterminant->Text = L"Determinante";
			this->buttonDeterminant->UseVisualStyleBackColor = true;
			this->buttonDeterminant->Click += gcnew System::EventHandler(this, &matriz::buttonDeterminant_Click);
			// 
			// buttonTranspose
			// 
			this->buttonTranspose->Location = System::Drawing::Point(356, 313);
			this->buttonTranspose->Name = L"buttonTranspose";
			this->buttonTranspose->Size = System::Drawing::Size(100, 35);
			this->buttonTranspose->TabIndex = 62;
			this->buttonTranspose->Text = L"Traspuesta";
			this->buttonTranspose->UseVisualStyleBackColor = true;
			this->buttonTranspose->Click += gcnew System::EventHandler(this, &matriz::buttonTranspose_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->Location = System::Drawing::Point(110, 374);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(100, 35);
			this->buttonMultiply->TabIndex = 61;
			this->buttonMultiply->Text = L"multiplicación ";
			this->buttonMultiply->UseVisualStyleBackColor = true;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &matriz::buttonMultiply_Click);
			// 
			// buttonSum
			// 
			this->buttonSum->Location = System::Drawing::Point(66, 311);
			this->buttonSum->Name = L"buttonSum";
			this->buttonSum->Size = System::Drawing::Size(99, 35);
			this->buttonSum->TabIndex = 60;
			this->buttonSum->Text = L"suma";
			this->buttonSum->UseVisualStyleBackColor = true;
			this->buttonSum->Click += gcnew System::EventHandler(this, &matriz::buttonSum_Click);
			// 
			// textBoxResult22
			// 
			this->textBoxResult22->Location = System::Drawing::Point(561, 204);
			this->textBoxResult22->Name = L"textBoxResult22";
			this->textBoxResult22->Size = System::Drawing::Size(55, 22);
			this->textBoxResult22->TabIndex = 59;
			// 
			// textBoxResult12
			// 
			this->textBoxResult12->Location = System::Drawing::Point(561, 165);
			this->textBoxResult12->Name = L"textBoxResult12";
			this->textBoxResult12->Size = System::Drawing::Size(55, 22);
			this->textBoxResult12->TabIndex = 58;
			// 
			// textBoxResult21
			// 
			this->textBoxResult21->Location = System::Drawing::Point(486, 202);
			this->textBoxResult21->Name = L"textBoxResult21";
			this->textBoxResult21->Size = System::Drawing::Size(55, 22);
			this->textBoxResult21->TabIndex = 57;
			// 
			// textBoxResult11
			// 
			this->textBoxResult11->Location = System::Drawing::Point(486, 165);
			this->textBoxResult11->Name = L"textBoxResult11";
			this->textBoxResult11->Size = System::Drawing::Size(55, 22);
			this->textBoxResult11->TabIndex = 56;
			// 
			// textBoxB22
			// 
			this->textBoxB22->Location = System::Drawing::Point(345, 204);
			this->textBoxB22->Name = L"textBoxB22";
			this->textBoxB22->Size = System::Drawing::Size(55, 22);
			this->textBoxB22->TabIndex = 55;
			// 
			// textBoxB12
			// 
			this->textBoxB12->Location = System::Drawing::Point(345, 165);
			this->textBoxB12->Name = L"textBoxB12";
			this->textBoxB12->Size = System::Drawing::Size(55, 22);
			this->textBoxB12->TabIndex = 54;
			// 
			// textBoxB21
			// 
			this->textBoxB21->Location = System::Drawing::Point(270, 202);
			this->textBoxB21->Name = L"textBoxB21";
			this->textBoxB21->Size = System::Drawing::Size(55, 22);
			this->textBoxB21->TabIndex = 53;
			// 
			// textBoxb11
			// 
			this->textBoxb11->Location = System::Drawing::Point(270, 165);
			this->textBoxb11->Name = L"textBoxb11";
			this->textBoxb11->Size = System::Drawing::Size(55, 22);
			this->textBoxb11->TabIndex = 52;
			// 
			// textBoxA22
			// 
			this->textBoxA22->Location = System::Drawing::Point(142, 204);
			this->textBoxA22->Name = L"textBoxA22";
			this->textBoxA22->Size = System::Drawing::Size(55, 22);
			this->textBoxA22->TabIndex = 51;
			// 
			// textBoxA12
			// 
			this->textBoxA12->Location = System::Drawing::Point(142, 165);
			this->textBoxA12->Name = L"textBoxA12";
			this->textBoxA12->Size = System::Drawing::Size(55, 22);
			this->textBoxA12->TabIndex = 50;
			// 
			// textBoxA21
			// 
			this->textBoxA21->Location = System::Drawing::Point(67, 202);
			this->textBoxA21->Name = L"textBoxA21";
			this->textBoxA21->Size = System::Drawing::Size(55, 22);
			this->textBoxA21->TabIndex = 49;
			// 
			// textBoxA11
			// 
			this->textBoxA11->Location = System::Drawing::Point(67, 165);
			this->textBoxA11->Name = L"textBoxA11";
			this->textBoxA11->Size = System::Drawing::Size(55, 22);
			this->textBoxA11->TabIndex = 48;
			// 
			// matriz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(917, 638);
			this->Controls->Add(this->buttonSalir);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonLimpiar);
			this->Controls->Add(this->buttonResta);
			this->Controls->Add(this->buttonInversa);
			this->Controls->Add(this->buttonAdjunta);
			this->Controls->Add(this->buttonDeterminant);
			this->Controls->Add(this->buttonTranspose);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->buttonSum);
			this->Controls->Add(this->textBoxResult22);
			this->Controls->Add(this->textBoxResult12);
			this->Controls->Add(this->textBoxResult21);
			this->Controls->Add(this->textBoxResult11);
			this->Controls->Add(this->textBoxB22);
			this->Controls->Add(this->textBoxB12);
			this->Controls->Add(this->textBoxB21);
			this->Controls->Add(this->textBoxb11);
			this->Controls->Add(this->textBoxA22);
			this->Controls->Add(this->textBoxA12);
			this->Controls->Add(this->textBoxA21);
			this->Controls->Add(this->textBoxA11);
			this->Name = L"matriz";
			this->Text = L"matriz";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSum_Click(System::Object^ sender, System::EventArgs^ e) {
		// Matriz A
		double A11 = Double::Parse(textBoxA11->Text);
		double A12 = Double::Parse(textBoxA12->Text);
		double A21 = Double::Parse(textBoxA21->Text);
		double A22 = Double::Parse(textBoxA22->Text);

		// Matriz B
		double B11 = Double::Parse(textBoxb11->Text);
		double B12 = Double::Parse(textBoxB12->Text);
		double B21 = Double::Parse(textBoxB21->Text);
		double B22 = Double::Parse(textBoxB22->Text);

		// Realizar la suma
		double result11 = A11 + B11;
		double result12 = A12 + B12;
		double result21 = A21 + B21;
		double result22 = A22 + B22;

		// Mostrar el resultado en los TextBox correspondientes
		textBoxResult11->Text = result11.ToString();
		textBoxResult12->Text = result12.ToString();
		textBoxResult21->Text = result21.ToString();
		textBoxResult22->Text = result22.ToString();
	}
private: System::Void buttonResta_Click(System::Object^ sender, System::EventArgs^ e) {

	// Matriz A
	double A11 = Double::Parse(textBoxA11->Text);
	double A12 = Double::Parse(textBoxA12->Text);
	double A21 = Double::Parse(textBoxA21->Text);
	double A22 = Double::Parse(textBoxA22->Text);

	// Matriz B
	double B11 = Double::Parse(textBoxb11->Text);
	double B12 = Double::Parse(textBoxB12->Text);
	double B21 = Double::Parse(textBoxB21->Text);
	double B22 = Double::Parse(textBoxB22->Text);

	// Realizar la resta
	double result11 = A11 - B11;
	double result12 = A12 - B12;
	double result21 = A21 - B21;
	double result22 = A22 - B22;

	// Mostrar el resultado en los TextBox correspondientes
	textBoxResult11->Text = result11.ToString();
	textBoxResult12->Text = result12.ToString();
	textBoxResult21->Text = result21.ToString();
	textBoxResult22->Text = result22.ToString();

	
}
private: System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
	// Matriz A
	double A11 = Double::Parse(textBoxA11->Text);
	double A12 = Double::Parse(textBoxA12->Text);
	double A21 = Double::Parse(textBoxA21->Text);
	double A22 = Double::Parse(textBoxA22->Text);

	// Matriz B
	double B11 = Double::Parse(textBoxb11->Text);
	double B12 = Double::Parse(textBoxB12->Text);
	double B21 = Double::Parse(textBoxB21->Text);
	double B22 = Double::Parse(textBoxB22->Text);

	// Realizar la multiplicación
	double result11 = A11 * B11 + A12 * B21;
	double result12 = A11 * B12 + A12 * B22;
	double result21 = A21 * B11 + A22 * B21;
	double result22 = A21 * B12 + A22 * B22;

	// Mostrar el resultado en los TextBox correspondientes
	textBoxResult11->Text = result11.ToString();
	textBoxResult12->Text = result12.ToString();
	textBoxResult21->Text = result21.ToString();
	textBoxResult22->Text = result22.ToString();
}
private: System::Void buttonTranspose_Click(System::Object^ sender, System::EventArgs^ e) {
	// Matriz A
	double A11 = Double::Parse(textBoxA11->Text);
	double A12 = Double::Parse(textBoxA12->Text);
	double A21 = Double::Parse(textBoxA21->Text);
	double A22 = Double::Parse(textBoxA22->Text);

	// Calcular la matriz traspuesta
	double transpose11 = A11;
	double transpose12 = A21;
	double transpose21 = A12;
	double transpose22 = A22;

	// Mostrar la matriz traspuesta en los TextBox correspondientes
	textBoxResult11->Text = transpose11.ToString();
	textBoxResult12->Text = transpose12.ToString();
	textBoxResult21->Text = transpose21.ToString();
	textBoxResult22->Text = transpose22.ToString();
}
private: System::Void buttonDeterminant_Click(System::Object^ sender, System::EventArgs^ e) {
	// Matriz A
	double A11 = Double::Parse(textBoxA11->Text);
	double A12 = Double::Parse(textBoxA12->Text);
	double A21 = Double::Parse(textBoxA21->Text);
	double A22 = Double::Parse(textBoxA22->Text);

	// Calcular la determinante
	double determinant = A11 * A22 - A12 * A21;

	// Mostrar la determinante en el TextBox correspondiente
	textBoxResult11->Text = determinant.ToString();
	textBoxResult12->Text = "";
	textBoxResult21->Text = "";
	textBoxResult22->Text = "";
}
private: System::Void buttonAdjunta_Click(System::Object^ sender, System::EventArgs^ e) {

	// Matriz A
	double A11 = Double::Parse(textBoxA11->Text);
	double A12 = Double::Parse(textBoxA12->Text);
	double A21 = Double::Parse(textBoxA21->Text);
	double A22 = Double::Parse(textBoxA22->Text);

	// Calcular la matriz adjunta
	double adjoint11 = A22;
	double adjoint12 = -A12;
	double adjoint21 = -A21;
	double adjoint22 = A11;

	// Mostrar la matriz adjunta en los TextBox correspondientes
	textBoxResult11->Text = adjoint11.ToString();
	textBoxResult12->Text = adjoint12.ToString();
	textBoxResult21->Text = adjoint21.ToString();
	textBoxResult22->Text = adjoint22.ToString();
}
private: System::Void buttonInversa_Click(System::Object^ sender, System::EventArgs^ e) {

	// Matriz A
	double A11 = Double::Parse(textBoxA11->Text);
	double A12 = Double::Parse(textBoxA12->Text);
	double A21 = Double::Parse(textBoxA21->Text);
	double A22 = Double::Parse(textBoxA22->Text);

	// Calcular la inversa
	double determinant = A11 * A22 - A12 * A21;
	if (determinant != 0)
	{
		double inverseFactor = 1.0 / determinant;
		double inverse11 = A22 * inverseFactor;
		double inverse12 = -A12 * inverseFactor;
		double inverse21 = -A21 * inverseFactor;
		double inverse22 = A11 * inverseFactor;

		// Mostrar la matriz inversa en los TextBox correspondientes
		textBoxResult11->Text = inverse11.ToString();
		textBoxResult12->Text = inverse12.ToString();
		textBoxResult21->Text = inverse21.ToString();
		textBoxResult22->Text = inverse22.ToString();
	}
	else
	{
		MessageBox::Show("La matriz no es invertible (singular). La determinante es igual a cero.");
	}

}
private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	// Limpiar el contenido de los TextBox
	textBoxA11->Text = "";
	textBoxA12->Text = "";
	textBoxA21->Text = "";
	textBoxA22->Text = "";

	textBoxb11->Text = "";
	textBoxB12->Text = "";
	textBoxB21->Text = "";
	textBoxB22->Text = "";

	textBoxResult11->Text = "";
	textBoxResult12->Text = "";
	textBoxResult21->Text = "";
	textBoxResult22->Text = "";
}
private: System::Void buttonSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
