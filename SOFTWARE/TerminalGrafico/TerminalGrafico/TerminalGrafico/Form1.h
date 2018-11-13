#pragma once
#include <iostream>
#include <string>




namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Threading;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		public:
			Form1(void)
			{
				InitializeComponent();
				findPorts();
				//
				//TODO: Konstruktorcode hier hinzufügen.
				//
				this->textBoxRX->Enabled = false;
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
		// This delegate enables asynchronous calls for setting
		// the text property on a TextBox control.
		//delegate void SerialRXDelegate(String^ text);
		delegate void SerialRXDelegate(Int16 y);

		// This thread is used to demonstrate both thread-safe and
		// unsafe ways to call a Windows Forms control.
		private: Thread ^ serialThread;
			 

		private: System::IO::Ports::SerialPort^  _serialPort;
		protected:

		private: System::Windows::Forms::ComboBox^  comboBox1;
		private: System::Windows::Forms::Button^  button2;
		public: System::Windows::Forms::TextBox^  textBoxRX;
		private:


	protected private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::ComboBox^  baudeRate;
	private: System::Windows::Forms::Label^  label1;
	protected private:
	private:
	private: System::ComponentModel::IContainer^  components;


		protected:

		private:
			/// <summary>
			/// Erforderliche Designervariable.
			/// </summary>


	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Erforderliche Methode für die Designerunterstützung.
			/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
			/// </summary>
			void InitializeComponent(void) {
				this->components = (gcnew System::ComponentModel::Container());
				System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
				System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
				System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
				this->_serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
				this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->textBoxRX = (gcnew System::Windows::Forms::TextBox());
				this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
				this->baudeRate = (gcnew System::Windows::Forms::ComboBox());
				this->label1 = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
				this->SuspendLayout();
				// 
				// _serialPort
				// 
				this->_serialPort->PortName = L"COM5";
				this->_serialPort->ReadTimeout = 1000;
				this->_serialPort->WriteTimeout = 500;
				this->_serialPort->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::_serialPort_DataReceived);
				// 
				// comboBox1
				// 
				this->comboBox1->AllowDrop = true;
				this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->comboBox1->FormattingEnabled = true;
				this->comboBox1->Location = System::Drawing::Point(150, 18);
				this->comboBox1->Name = L"comboBox1";
				this->comboBox1->Size = System::Drawing::Size(121, 28);
				this->comboBox1->TabIndex = 10;
				// 
				// button2
				// 
				this->button2->Location = System::Drawing::Point(277, 18);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(75, 28);
				this->button2->TabIndex = 12;
				this->button2->Text = L"Abrir Porta";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
				// 
				// textBoxRX
				// 
				this->textBoxRX->Location = System::Drawing::Point(388, 23);
				this->textBoxRX->Name = L"textBoxRX";
				this->textBoxRX->Size = System::Drawing::Size(315, 20);
				this->textBoxRX->TabIndex = 13;
				// 
				// chart1
				// 
				chartArea2->Name = L"ChartArea1";
				this->chart1->ChartAreas->Add(chartArea2);
				legend2->Enabled = false;
				legend2->Name = L"Legend1";
				this->chart1->Legends->Add(legend2);
				this->chart1->Location = System::Drawing::Point(12, 52);
				this->chart1->Name = L"chart1";
				series2->ChartArea = L"ChartArea1";
				series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				series2->Legend = L"Legend1";
				series2->Name = L"Series1";
				this->chart1->Series->Add(series2);
				this->chart1->Size = System::Drawing::Size(727, 270);
				this->chart1->TabIndex = 16;
				this->chart1->Text = L"chart1";
				// 
				// baudeRate
				// 
				this->baudeRate->AllowDrop = true;
				this->baudeRate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				this->baudeRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->baudeRate->FormattingEnabled = true;
				this->baudeRate->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
					L"9600", L"19200", L"57600", L"115200", L"921600",
						L"2000000"
				});
				this->baudeRate->Location = System::Drawing::Point(12, 18);
				this->baudeRate->Name = L"baudeRate";
				this->baudeRate->Size = System::Drawing::Size(121, 28);
				this->baudeRate->TabIndex = 17;
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(567, 325);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(172, 13);
				this->label1->TabIndex = 18;
				this->label1->Text = L"Formato do dado esperado: \"x0y0\"";
				// 
				// Form1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(761, 346);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->baudeRate);
				this->Controls->Add(this->chart1);
				this->Controls->Add(this->textBoxRX);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->comboBox1);
				this->Name = L"Form1";
				this->ShowIcon = false;
				this->Text = L"Terminal Gráfico";
				this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
			// find available ports
		private: void findPorts(void)
		{
			// get port names
			array<Object^>^ objectArray = SerialPort::GetPortNames();
			// add string array to combobox
			this->comboBox1->Items->AddRange(objectArray);

		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			static Boolean status = true;
			if (status)
			{
				this->button2->Text = L"Refresh/Close";

				if (this->baudeRate->Text == String::Empty) this->textBoxRX->Text = "Selecione a velocidade";
				else if (this->comboBox1->Text == String::Empty) this->textBoxRX->Text = "Selecione uma porta";
				else {
					try {
						// make sure port isn't open	
						if (!this->_serialPort->IsOpen) {
							this->_serialPort->PortName = this->comboBox1->Text;
							this->_serialPort->BaudRate = Int32::Parse(this->baudeRate->Text);
							//open serial port 
							this->_serialPort->Open();

							// Disable open button
							//this->button2->Enabled = false;
							status = false;

							// Disable comm box
							this->comboBox1->Enabled = false;
						}
						else this->textBoxRX->Text = "Porta não está aberta";
					}
					catch (UnauthorizedAccessException^) {
						this->textBoxRX->Text = "Selecione uma porta";
					}
				}
			}
			else
			{
				status = true;
				this->button2->Text = L"Abrir Porta";

				//close serialPort
				this->_serialPort->Close();
				// Enable read button
				this->button2->Enabled = true;
				// Disable comm box
				this->comboBox1->Enabled = true;

				// get port names
				array<Object^>^ objectArray = SerialPort::GetPortNames();
				// add string array to combobox
				this->comboBox1->Items->Clear();
				this->comboBox1->Items->AddRange(objectArray);

			}
			
		}
		//Função para verificar se a conexão está ativa e se existe um ID válido
		private: System::Boolean checkDataToSend(Void) {
			if (this->_serialPort->IsOpen) return true;
			else this->textBoxRX->AppendText("\r\nConecte uma porta\r\n");
			return false;
		}
		//Leitura da serial
		private: System::Void _serialPort_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			this->serialThread = gcnew Thread(gcnew ThreadStart(this, &Form1::ThreadProcSafe));
			this->serialThread->Start();
		}
		//Escreve dado da serial na string da Thread
		private: void ThreadProcSafe() {
			String ^ str = this->_serialPort->ReadExisting();
			static int lastValueX = 101;
			UInt16
			//long  int
				pos = 0,
				xInt = 0,
				yInt = 0,
				erro = 0;
			//string xStr("");
			//string yStr("");

			String ^ xStr("");
			String ^ yStr("");

			for (int i = 0; i < str->Length; i++)
			//for (int i = 0; i < str.length(); i++)
			{
				if (str[i] == 'x') pos = 1;
				else if (str[i] == 'y') pos = 2;
				else if (pos == 1) xStr += str[i];
				else if (pos == 2) yStr += str[i];
			}

			if (xStr == "") erro = true;
			else if (yStr == "") erro = true;
			else
			{
				xInt = System::Convert::ToInt16(xStr);
				yInt = System::Convert::ToInt16(yStr);
				//stringstream sst;
				//sst << xStr << endl;
				//sst >> xInt;

				//sst << yStr << endl;
				//sst >> yInt;
			}

			//Proteção contra dado corrompido na coordenada x
			if ((xInt > 100) || erro)
			{
				if (lastValueX == 100) xInt = 0;
				else xInt = lastValueX + 1;
			}

			// Este é o cenário em que está tudo OK
			if ((lastValueX + 1 == xInt) || ((lastValueX == 100) && (xInt == 0)))
			{
				lastValueX = xInt;
			}
			// Este é o cenário em que ouve algum problema
			else erro = true;
			/*{
				int objetivo = xInt;

				// Ajusta o destino final para o lastValue em caso de erro
				if (xInt == 0)objetivo = 100;
				else objetivo--;

				//
				for (lastValueX; lastValueX != objetivo; lastValueX++)
				{
					if (lastValueX == 101) lastValueX = 0;

					this->SetPos(-10);
					//SetPos(0xffff);
				}
				lastValueX = xInt;
			}*/

			lastValueX = xInt;
			if (erro) this->SetPos(-1);
			else this->SetPos(yInt);

			//if (erro) SetPos(0xffff);
			//else SetPos(yInt);
		}
		// Tratamento de escrita do combobo com segurança
		private: void SetPos(Int16 y) {
			if (this->textBoxRX->InvokeRequired)
			{
				SerialRXDelegate^ d = gcnew SerialRXDelegate(this, &Form1::SetPos);
				this->Invoke(d, gcnew array<Object^> { y });
			}
			else
			{
				static Int16 count = 0, lastValue;
				if (y == -1)
				{
					y = lastValue;
					count++;
					this->textBoxRX->Text = count.ToString() + " dados perdidos";
				}
				lastValue = y;

				chart1->Series[0]->Points->AddY(y);
				//this->textBoxRX->Text = count.ToString() + " - " + y.ToString();
			}
		}
		// Tratamento de escrita do combobo com segurança
		/*private: void SetText(String^ text) {
			if (this->textBoxRX->InvokeRequired)
			{
				SerialRXDelegate^ d = gcnew SerialRXDelegate(this, &Form1::SetText);
				this->Invoke(d, gcnew array<Object^> { text });
			}
			else
			{
				static Int16 value = 15;
				static Int16 status;
				
				if (value == 15)status = 1;
				else if (value == -15)status = 0;
				
				if (status == 1)value--;
				else if(status == 0)value++;

				chart1->Series[0]->Points->AddY(value);
				this->textBoxRX->Text = text;
			}
		}*/

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		}
};
}
