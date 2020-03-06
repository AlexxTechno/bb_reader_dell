#pragma once
#include <windows.h>

namespace BB_reader_all_dell {

	using namespace System;
	using namespace Microsoft::Win32;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows;
	using namespace System::Windows::Forms;
	using namespace System::Data;
//	using namespace System::Drawing;
//	using namespace System::Drawing::Printing;
	using namespace System::IO;
//	using namespace System::Text;
	using namespace iTextSharp::text;
	using namespace iTextSharp::text::pdf;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
		
	//--- Глобальные переменные	-----------------------------------	
	private: unsigned int maska;	// маска защит и блокировок по приводам	
	//-- Переменные для определения дат записи
	private: static unsigned char norma = 0;		// данные в блоке есть
	//--- диапазон дат в данных архива ------------------
	private: static unsigned char min_D = 31;	    // день
	private: static unsigned char min_M = 12;		// месяц
	private: static unsigned char min_G = 99;		// год начальная дата
	private: static unsigned char max_D = 1;		// день
	private: static unsigned char max_M = 1;		// месяц
	private: static unsigned char max_G = 0;		// год конечная дата
	//---- таймер длительности процессов -------------------------
	private: static WORD sec = 0;
	private: static WORD min = 0; 
	//--- определение версии аппаратуры --------------------------
	private: static unsigned char vers = 0;		// 0- нет  1-АУКП.01  2- АУКП.02
		
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox22;
	private: System::Windows::Forms::CheckBox^  checkBox21;
	private: System::Windows::Forms::CheckBox^  checkBox20;
	private: System::Windows::Forms::CheckBox^  checkBox19;
	private: System::Windows::Forms::CheckBox^  checkBox18;
	private: System::Windows::Forms::CheckBox^  checkBox17;
	private: System::Windows::Forms::CheckBox^  checkBox16;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::CheckBox^  checkBox24;
	private: System::Windows::Forms::CheckBox^  checkBox23;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label17;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: System::Windows::Forms::Button^  button4;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::CheckBox^  checkBox26;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::CheckBox^  checkBox25;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label20;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape3;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;
private: System::Windows::Forms::RichTextBox^  richTextBox1;

private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Panel^  panel1;

private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Roboto", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(900, 610);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->checkBox26);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->checkBox25);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->checkBox24);
			this->tabPage1->Controls->Add(this->checkBox23);
			this->tabPage1->Controls->Add(this->checkBox22);
			this->tabPage1->Controls->Add(this->checkBox21);
			this->tabPage1->Controls->Add(this->checkBox20);
			this->tabPage1->Controls->Add(this->checkBox19);
			this->tabPage1->Controls->Add(this->checkBox18);
			this->tabPage1->Controls->Add(this->checkBox17);
			this->tabPage1->Controls->Add(this->checkBox16);
			this->tabPage1->Controls->Add(this->checkBox15);
			this->tabPage1->Controls->Add(this->checkBox14);
			this->tabPage1->Controls->Add(this->checkBox13);
			this->tabPage1->Controls->Add(this->checkBox12);
			this->tabPage1->Controls->Add(this->checkBox11);
			this->tabPage1->Controls->Add(this->checkBox10);
			this->tabPage1->Controls->Add(this->checkBox9);
			this->tabPage1->Controls->Add(this->checkBox8);
			this->tabPage1->Controls->Add(this->checkBox7);
			this->tabPage1->Controls->Add(this->checkBox6);
			this->tabPage1->Controls->Add(this->checkBox5);
			this->tabPage1->Controls->Add(this->checkBox4);
			this->tabPage1->Controls->Add(this->checkBox3);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->progressBar1);
			this->tabPage1->Controls->Add(this->monthCalendar1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->shapeContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage1->Size = System::Drawing::Size(892, 584);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Защиты и блокировки";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Location = System::Drawing::Point(837, 552);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(50, 23);
			this->panel1->TabIndex = 24;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Technic", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(2)));
			this->label24->Location = System::Drawing::Point(26, 4);
			this->label24->Margin = System::Windows::Forms::Padding(3, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(21, 14);
			this->label24->TabIndex = 21;
			this->label24->Text = L"00";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(20, 3);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(12, 16);
			this->label26->TabIndex = 23;
			this->label26->Text = L":";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Technic", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(2)));
			this->label25->Location = System::Drawing::Point(2, 4);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(21, 14);
			this->label25->TabIndex = 22;
			this->label25->Text = L"00";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(520, 558);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(43, 13);
			this->label23->TabIndex = 20;
			this->label23->Text = L"label23";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(660, 552);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(170, 23);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Сохранить таблицу в PDF";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 552);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(43, 13);
			this->label22->TabIndex = 18;
			this->label22->Text = L"label22";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(3, 567);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(43, 13);
			this->label21->TabIndex = 17;
			this->label21->Text = L"label21";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(4, 88);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(96, 95);
			this->listBox1->TabIndex = 16;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(166, 522);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Показать";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label20->Location = System::Drawing::Point(10, 527);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(71, 19);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Uсети (В)";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(166, 447);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Показать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(62, 447);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Сбросить все";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(93, 511);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(36, 13);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Uпит";
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Location = System::Drawing::Point(100, 529);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(15, 14);
			this->checkBox26->TabIndex = 10;
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(130, 511);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"ток";
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Location = System::Drawing::Point(138, 529);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(15, 14);
			this->checkBox25->TabIndex = 10;
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(12, 447);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Все";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label17->Location = System::Drawing::Point(94, 492);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(143, 19);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Отказ от блокировок";
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Location = System::Drawing::Point(220, 414);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(15, 14);
			this->checkBox24->TabIndex = 10;
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(178, 414);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(15, 14);
			this->checkBox23->TabIndex = 10;
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Location = System::Drawing::Point(240, 347);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(15, 14);
			this->checkBox22->TabIndex = 10;
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Location = System::Drawing::Point(240, 323);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(15, 14);
			this->checkBox21->TabIndex = 10;
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Location = System::Drawing::Point(219, 371);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(15, 14);
			this->checkBox20->TabIndex = 10;
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Location = System::Drawing::Point(219, 347);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(15, 14);
			this->checkBox19->TabIndex = 10;
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(219, 323);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(15, 14);
			this->checkBox18->TabIndex = 10;
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(219, 287);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(15, 14);
			this->checkBox17->TabIndex = 10;
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(219, 251);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(15, 14);
			this->checkBox16->TabIndex = 10;
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(219, 228);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(15, 14);
			this->checkBox15->TabIndex = 10;
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(198, 371);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(15, 14);
			this->checkBox14->TabIndex = 10;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(198, 347);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(15, 14);
			this->checkBox13->TabIndex = 10;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(198, 323);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(15, 14);
			this->checkBox12->TabIndex = 10;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(198, 299);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 10;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(198, 275);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 10;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(198, 251);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(15, 14);
			this->checkBox9->TabIndex = 10;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(198, 228);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 10;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(177, 371);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 10;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(177, 347);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 10;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(177, 323);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 10;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(177, 299);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 10;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(177, 275);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(177, 251);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(177, 228);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label14->Location = System::Drawing::Point(10, 402);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(70, 19);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Маслобак";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(10, 369);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 19);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Насос закачки М7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(10, 345);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 19);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Перегружатель М6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(10, 321);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 19);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Пылеподавление М5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(10, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 19);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Конвейер М4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(10, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Конвейер М3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(10, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 19);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Маслостанция М2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"ИО М1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(231, 302);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 19);
			this->label13->TabIndex = 7;
			this->label13->Text = L"БКЗ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(214, 207);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 19);
			this->label12->TabIndex = 7;
			this->label12->Text = L"БКИ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label16->Location = System::Drawing::Point(199, 396);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(58, 19);
			this->label16->TabIndex = 7;
			this->label16->Text = L"уровень";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(175, 396);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 19);
			this->label15->TabIndex = 7;
			this->label15->Text = L"t°";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(196, 208);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 19);
			this->label11->TabIndex = 7;
			this->label11->Text = L"t°";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(169, 207);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 19);
			this->label10->TabIndex = 7;
			this->label10->Text = L"ток";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Срабатывание защит и блокировок";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Откройте диск или файл";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(3, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 21);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Диск в файл";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(3, 44);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 21);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Открыть файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(270, 4);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(616, 20);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 3;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(104, 22);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(3, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 21);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Открыть диск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(270, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(616, 540);
			this->dataGridView1->TabIndex = 0;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(3, 3);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(3) {this->lineShape3, 
				this->lineShape2, this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(886, 578);
			this->shapeContainer1->TabIndex = 11;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape3
			// 
			this->lineShape3->Name = L"lineShape3";
			this->lineShape3->X1 = 12;
			this->lineShape3->X2 = 250;
			this->lineShape3->Y1 = 478;
			this->lineShape3->Y2 = 478;
			// 
			// lineShape2
			// 
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 10;
			this->lineShape2->X2 = 250;
			this->lineShape2->Y1 = 432;
			this->lineShape2->Y2 = 432;
			// 
			// lineShape1
			// 
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 9;
			this->lineShape1->X2 = 250;
			this->lineShape1->Y1 = 390;
			this->lineShape1->Y2 = 390;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage2->Size = System::Drawing::Size(892, 584);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"О программе";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Roboto", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(9, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(466, 514);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->Description = L"Выберите диск для считывыания даных";
			this->folderBrowserDialog1->RootFolder = System::Environment::SpecialFolder::MyComputer;
			this->folderBrowserDialog1->ShowNewFolderButton = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"file";
			this->openFileDialog1->Filter = L"(*.dat)|*.dat";
			this->openFileDialog1->RestoreDirectory = true;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->CheckPathExists = false;
			this->saveFileDialog1->DefaultExt = L"pdf";
			this->saveFileDialog1->Filter = L"(*.pdf)|*.pdf";
			this->saveFileDialog1->InitialDirectory = L"MyComputer";
			this->saveFileDialog1->RestoreDirectory = true;
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->CheckPathExists = false;
			this->saveFileDialog2->DefaultExt = L"dat";
			this->saveFileDialog2->Filter = L"(*.dat)|*.dat";
			this->saveFileDialog2->InitialDirectory = L"MyComputer";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 612);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"BB_reader v3.0";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		// кнопка ВЫБРАТЬ ВСЕ
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

				checkBox1->Checked = true;	
				checkBox2->Checked = true;
				checkBox3->Checked = true;
				checkBox4->Checked = true;
				checkBox5->Checked = true;
				checkBox6->Checked = true;
				checkBox7->Checked = true;
				checkBox8->Checked = true;
				checkBox9->Checked = true;
				checkBox10->Checked = true;
				checkBox11->Checked = true;
				checkBox12->Checked = true;
				checkBox13->Checked = true;
				checkBox14->Checked = true;
				checkBox15->Checked = true;
				checkBox16->Checked = true;
				checkBox17->Checked = true;
				checkBox18->Checked = true;
				checkBox19->Checked = true;
				checkBox20->Checked = true;
				checkBox21->Checked = true;
				checkBox22->Checked = true;
				checkBox23->Checked = true;
				checkBox24->Checked = true;				
				
				checkBox1_CheckedChanged(sender, e);
			 }
		// кнопка СБРОСИТЬ ВСЕ
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

				checkBox1->Checked = false;	
				checkBox2->Checked = false;
				checkBox3->Checked = false;
				checkBox4->Checked = false;
				checkBox5->Checked = false;
				checkBox6->Checked = false;
				checkBox7->Checked = false;
				checkBox8->Checked = false;
				checkBox9->Checked = false;
				checkBox10->Checked = false;
				checkBox11->Checked = false;
				checkBox12->Checked = false;
				checkBox13->Checked = false;
				checkBox14->Checked = false;
				checkBox15->Checked = false;
				checkBox16->Checked = false;
				checkBox17->Checked = false;
				checkBox18->Checked = false;
				checkBox19->Checked = false;
				checkBox20->Checked = false;
				checkBox21->Checked = false;
				checkBox22->Checked = false;
				checkBox23->Checked = false;
				checkBox24->Checked = false;
				
				button6->Enabled=false;	

				checkBox1_CheckedChanged(sender, e);
		 }
		// кнопка ОТКРЫТЬ ДИСК
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if ((folderBrowserDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)&&(folderBrowserDialog1->SelectedPath->Substring(0, 1) != "C"))
			{				
				String^ my_str = folderBrowserDialog1->SelectedPath;
				my_str = my_str->Substring(0, 1);	// Отделяем от пути первые два символа
				label1->Text= "Диск " + my_str + ":" ;				
				
		//----- Работа с диском --------------------------------------------
				LPCWSTR path ;	
				
				if(my_str=="A")path = L"\\\\.\\A:";
				if(my_str=="B")path = L"\\\\.\\B:";
				if(my_str=="D")path = L"\\\\.\\D:";
				if(my_str=="E")path = L"\\\\.\\E:";
				if(my_str=="F")path = L"\\\\.\\F:";
				if(my_str=="G")path = L"\\\\.\\G:";
				if(my_str=="H")path = L"\\\\.\\H:";
				if(my_str=="I")path = L"\\\\.\\I:";
				if(my_str=="J")path = L"\\\\.\\J:";
				if(my_str=="K")path = L"\\\\.\\K:";
					
				// Дескриптор файлового устройства (раздела диска).
				HANDLE partition = INVALID_HANDLE_VALUE;
				// Сведения о разделе.
				PARTITION_INFORMATION partitionInfo = {0};
				// Сведения о геометрии диска, на котором расположен раздел.
				DISK_GEOMETRY diskGeometry = {0};
				// Дескриптор файла для сохранения образа раздела.
				HANDLE file = INVALID_HANDLE_VALUE;
				// Буфер для чтения.
				BYTE* buffer = NULL;
				// Размер буфера.
				DWORD bufferSize = 0;
				// Количество возвращенных байт.
				DWORD bytesReturned = 0;
				// Количество записанных байт.
				DWORD bytesWritten = 0;
				// Результат выполнения.
				BOOL result;
				// Открываем раздел диска читаем.
				partition = CreateFile(
					path,
					GENERIC_READ,
					FILE_SHARE_READ | FILE_SHARE_WRITE,
					NULL,
					OPEN_EXISTING,
					0,
					NULL); 
				if (partition == INVALID_HANDLE_VALUE)
				{
					// CreateFile() не работает
					MessageBox::Show("Невозможно открыть диск " + my_str + ":");	 
					delete[] buffer;
					CloseHandle(partition);					
				}
				else 
				{							
				// Запрашиваем сведения о геометрии диска, на котором расположен раздел.
					if (!DeviceIoControl(partition,
						IOCTL_DISK_GET_DRIVE_GEOMETRY,
						NULL,
						0,
						&diskGeometry,
						sizeof (DISK_GEOMETRY),
						&bytesReturned,
						(LPOVERLAPPED)NULL))
					{
						MessageBox::Show("Ошибка запроса сведений о геометрии диска "  + my_str + ":");
						CloseHandle(partition);
					}
					else
					{
					// Запрашиваем сведения о разделе.
						if (!DeviceIoControl(partition,
							IOCTL_DISK_GET_PARTITION_INFO,
							NULL,
							0,&partitionInfo,
							sizeof (PARTITION_INFORMATION),
							&bytesReturned,
							(LPOVERLAPPED)NULL))
						{
							MessageBox::Show("Ошибка запроса сведений о разделе" + my_str + ":");
							CloseHandle(partition);
						}
						else
						{	
							MessageBox::Show("Диск " + my_str + ": все ОК");
					//-------- РАБОТА С ДИСКОМ ------- 	
														//-- последний вариант -----
							int myBuf = 512 * 50 ;  	//  512 * 10   					// 5120*325*30 = 49 920 000 б	// 121875*30;
							int zykl  = 73125 ;  		//	325 * 300					// 5120*325*30 = 490 920 000 б	// 325*30;
							unsigned char z[513]  ;
							
						// Выделение памяти для буфера указанного размера.	
							bufferSize = myBuf;        						
							buffer = new BYTE[bufferSize+1];							
							
							progressBar1->Value=0;
							progressBar1->Maximum = zykl;
							progressBar1->Visible = true;
							
							//-- Старт секундомер процесса считывания --------
							panel1->Visible = false;
							SYSTEMTIME st;
							GetSystemTime(&st);
							//label24->Text = "00";  	// секунды
							//label25->Text = "00";	// минуты	
							DWORD start_sec = st.wSecond;
							DWORD start_min = st.wMinute;						
							//------------------------------------------------	
							
							for (int i=1; i<(zykl+1); i++)   // было 326 
							{	
								result = ReadFile(partition, buffer, bufferSize, &bytesReturned, NULL);			
								if (!result)
								{
									MessageBox::Show("Ошибка чтения секторов в разделе" + my_str + ":");
									delete[] buffer;									
								}
								else
								{
									progressBar1->Value=i;
								
							//-------------------------------
							//-- buffer[nn] = 512*50 
							//--- блок на анализ по датам ------	
									for(int j=0; j<50; j++){
										for(int k=0; k<513; k++){ 
											z[k+1] = buffer[k+(512*j)];
										}
										analise_date(z);									
									}						
								}										
							}
					//------ / РАБОТА С ДИСКОМ ---------- 

							//-- cтоп секундомер -------
							SYSTEMTIME st1;
							GetSystemTime(&st1);
							//- секунды ---
							if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
							else{
								if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
								else /* == */				label24->Text = "";
							}
							//- минуты ---
							if(st1.wMinute>start_min)		label25->Text = (st1.wMinute-start_min).ToString("D2");
							else{
								if(st1.wMinute<start_min)	label25->Text = ((60-start_min)+st1.wMinute).ToString("D2");
								else /* == */				label25->Text = "";						
							}	
							panel1->Visible = true;
							//--------------------------
							
							result_date();
							progressBar1->Visible = false;
							delete[] buffer;
							CloseHandle(partition);	
						}
					}						
				}

			}
			else MessageBox::Show( "Диск не выбран!" );
		 }
		// кнопка ОТКРЫТЬ ФАЙЛ
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			button1->Enabled=false;		// открыть диск
			button3->Enabled=false;		// диск в файл
		
			openFileDialog1->ShowDialog();
			String^ file = openFileDialog1->FileName;
			
		// Проверка файла на расширение .dat - в настройках openFileDialog1
		// на extention
			
			Form1::Text = "BB_reader_dell  |  " + file;		
		
		//----------- РАБОТА С ФАЙЛОМ ---------- 
			//-- создаем поток для чтения ----
			FileStream^ fs = gcnew FileStream(file, FileMode::Open, FileAccess::Read);	
			//-- проверка наличия файла ------
			if ( File::Exists( file )==false )
			{
				fs->Close();
				MessageBox::Show( "Файл не найден!" );				
			}
			else 
			{
				label1->Text="Считывание данных из файла";
				listBox1->Items->Clear() ;
				MessageBox::Show( "Файл найден!"+"\n"+file );	
				listBox1->Visible = false;
				label21->Visible = true;
				label21->Text = file;

				//--- Переменные для работы с файлом ------------------------------
				BinaryReader^ r = gcnew BinaryReader(fs);	// Создаем читателя.
				unsigned char z[513];						// блок данных 512 байт
				int lim = 121875*30;						// количество блоков по 512				
				//-------------------------------------------------------------------

				//-- Старт секундомер процесса считывания --------
				panel1->Visible = false;
				SYSTEMTIME st;
				GetSystemTime(&st);
				//label24->Text = "00";  	// секунды
				//label25->Text = "00";		// минуты	
				DWORD start_sec = st.wSecond;
				DWORD start_min = st.wMinute;						
				//------------------------------------------------	

				//--- Текущщая дата из каждой строки ----------------------------------------------------------
				//	String^ data1 = z[1].ToString()  +"-"+z[2].ToString()  +"-"+(2000+z[3]).ToString()   +" г";
				//	String^ data2 = z[101].ToString()+"-"+z[102].ToString()+"-"+(2000+z[103]).ToString() +" г";
				//	String^ data3 = z[201].ToString()+"-"+z[202].ToString()+"-"+(2000+z[203]).ToString() +" г";
				//	String^ data4 = z[301].ToString()+"-"+z[302].ToString()+"-"+(2000+z[303]).ToString() +" г";
				//	String^ data5 = z[401].ToString()+"-"+z[402].ToString()+"-"+(2000+z[403]).ToString() +" г";
				//---------------------------------------------------------------------------------------------			
				
				progressBar1->Value=0;
				progressBar1->Maximum = lim;
				progressBar1->Visible = true;
				
				// Читаем данные из файла
				for (int j = 1; j < lim; j++)
				{
					progressBar1->Value=j;
					for (int i = 1; i < 513; i++)
					{
						z[i]=r->ReadByte();					// получили блок						
					}
					
					//--- блок на анализ по датам ------	
					analise_date(z);				
				}
				result_date();
				fs->Close();
				progressBar1->Visible = false;

				//-- cтоп секундомер -------
				SYSTEMTIME st1;
				GetSystemTime(&st1);
				//- секунды ---
				if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
				else{
					if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
					else /* == */				label24->Text = "";
				}
				//- минуты ---
				if(st1.wMinute>start_min)		label25->Text = (st1.wMinute-start_min).ToString("D2");
				else{
					if(st1.wMinute<start_min)	label25->Text = ((60-start_min)+st1.wMinute).ToString("D2");
					else /* == */				label25->Text = "";						
				}	
				panel1->Visible = true;
				//--------------------------
			}
			button1->Enabled=true;		// открыть диск
			button3->Enabled=true;		// диск в файл
		 }
		// кнопка Uсети - напряжение и блокировки по току и Uсети
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {	

		//--- проверка на правильную дату
		if (date_exist()==0) ;
		else 
		{
			MessageBox::Show("Данных с выбранной датой не зафиксированно!\n"+"Выберите дату из списка.");
			return;
		}
			 
		//--- заморозить кнопки и др. ------------		
		button1->Enabled=false;
		button2->Enabled=false;
		button3->Enabled=false;
		button4->Enabled=false;
		button5->Enabled=false;
		button6->Enabled=false;	
		button8->Enabled=false;
		// monthCalendar1->Enabled=false;

		//--- работаем с файлом ----
		//- путь в label21
		int lim = 121875*30;	// для 1872 000 000 байт
		unsigned char z[513];
		String^ U_error;		// напряжение сети + %от Uном		
		String^ block_U ;		// фраза для блоокировки по Uсети
		String^ block_I ;		// фраза для блоокировки по I

		//--- таблица в dataGridView1 ---------
		DataTable ^ tabl_U = gcnew DataTable();
		//-- шапка таблицы -------------
		tabl_U->Columns->Add("Время");
		tabl_U->Columns->Add("Uсети, В");		
		
		// переменная для определения столбцов в будущей таблице
		unsigned char ch = 0;
		if ((checkBox26->Checked==true)&&(checkBox25->Checked==true)) 
		{
			ch = 3;
			tabl_U->Columns->Add("Блокировка по Uсети");
			tabl_U->Columns->Add("Блокировка по току");
		}
		else 
		{
			if(checkBox26->Checked==true) 
			{
				ch = 1;
				tabl_U->Columns->Add("Блокировка Uсети");
			}
			else 
			{
				if(checkBox25->Checked==true)	
				{
					ch = 2;
					tabl_U->Columns->Add("Блокировка по току");
				}
				else	ch = 0;
			}
		}

		//-- Старт секундомер процесса считывания --------
		panel1->Visible = false;
		SYSTEMTIME st;
		GetSystemTime(&st);
		//label24->Text = "00";  	// секунды
		//label25->Text = "00";		// минуты	
		DWORD start_sec = st.wSecond;
		DWORD start_min = st.wMinute;						
		//------------------------------------------------
			
		// пробуем читать файл
		String^ path = label21->Text;
		FileStream^ fs = gcnew FileStream(path, FileMode::Open, FileAccess::Read);
		// Ругаемся, если файла нет.
		if ( File::Exists( path )==false )
		{
			MessageBox::Show( "Файл не найден!" );
		}
		else 
		{
			progressBar1->Value = 0 ;
			progressBar1->Maximum = lim ;
			progressBar1->Visible=true;	
			
			dataGridView1->Visible=false;

		// Создаем читателя.
			BinaryReader^ r = gcnew BinaryReader(fs);

		// Read data from BB.dat.
			for (int j = 1; j < lim; j++)
			{
				progressBar1->Value=j;
				for (int i = 1; i < 513; i++)
				{
					try{
						z[i]=r->ReadByte();
					}
					catch (Exception^ e)
					{
						MessageBox::Show("Ошибка считывания файла! " + e->ToString() );
					}
				}
		//----------------------------
		// подготавливаем строки если корректный блок
				if((z[511]==13)&&(z[512]==10))		// есть хвост блока
				{
//------------------------------------- -1-	---------------------------------------------------
					if ((z[99] ==13)&&(z[100]==10)&&(z[1]==(monthCalendar1->SelectionStart.Day))&&(z[2]==(monthCalendar1->SelectionStart.Month))&&(z[3]==(monthCalendar1->SelectionStart.Year)-2000)) 
					{	
						/*-- Блокировка по Uсети --*/
						if((z[36]&4)>0) block_U = "отключена";
						else 			block_U = "";
					
						/*-- Блокировка по I --*/
						if((z[36]&8)>0) block_I = "отключена";
						else 			block_I = "";

						/*-- Напряжение питания --*/
						if (z[53]&16) 	U_error =(z[54]*7).ToString() + " (" + ((z[54]*70)/114).ToString() + "%Uном)" ; 	// 1140В	
						else			U_error =(z[54]*7).ToString() + " (" + ((z[54]*70)/66).ToString()  + "%Uном)" ;	// 660В
						
						switch (ch)
						{
							case 3:								
							tabl_U->Rows->Add(my_time(z[4], z[5], z[6]), U_error, block_U, block_I);
							break;
							
							case 2:								
							tabl_U->Rows->Add(my_time(z[4], z[5], z[6]), U_error, block_I);
							break;
							
							case 1:								
							tabl_U->Rows->Add(my_time(z[4], z[5], z[6]), U_error, block_U);
							break;
							
							case 0:								
							tabl_U->Rows->Add(my_time(z[4], z[5], z[6]), U_error);
						}	
							
					}					
//------------------------------------- -2-	---------------------------------------------------					
					if ((z[199]==13)&&(z[200]==10)&&(z[101]==(monthCalendar1->SelectionStart.Day))&&(z[102]==(monthCalendar1->SelectionStart.Month))&&(z[103]==(monthCalendar1->SelectionStart.Year)-2000))
					{
						/*-- Блокировка по Uсети --*/
						if((z[136]&4)>0) block_U = "отключена";
						else 			 block_U = "";
					
						/*-- Блокировка по I --*/
						if((z[136]&8)>0) block_I = "отключена";
						else 			 block_I = "";

						/*-- Напряжение питания --*/						
						if (z[153]&16) 	U_error =(z[154]*7).ToString() + " (" + ((z[154]*70)/114).ToString() + "%Uном)" ; 	// 1140В	
						else			U_error =(z[154]*7).ToString() + " (" + ((z[154]*70)/66).ToString()  + "%Uном)" ;	// 660В
						
						switch (ch)
						{
							case 3:								
							tabl_U->Rows->Add(my_time(z[104], z[105], z[106]), U_error, block_U, block_I);
							break;
							
							case 2:								
							tabl_U->Rows->Add(my_time(z[104], z[105], z[106]), U_error, block_I);
							break;
							
							case 1:								
							tabl_U->Rows->Add(my_time(z[104], z[105], z[106]), U_error, block_U);
							break;
							
							case 0:								
							tabl_U->Rows->Add(my_time(z[104], z[105], z[106]), U_error);
						}
					}
//------------------------------------- -3- ---------------------------------------------------
					if ((z[299]==13)&&(z[300]==10)&&(z[201]==(monthCalendar1->SelectionStart.Day))&&(z[202]==(monthCalendar1->SelectionStart.Month))&&(z[203]==(monthCalendar1->SelectionStart.Year)-2000))
					{
						/*-- Блокировка по Uсети --*/
						if((z[236]&4)>0) block_U = "отключена";
						else 			 block_U = "";
					
						/*-- Блокировка по I --*/
						if((z[236]&8)>0) block_I = "отключена";
						else 			 block_I = "";

						/*-- Напряжение питания --*/
						if (z[253]&16) 	U_error =(z[254]*7).ToString() + " (" + ((z[254]*70)/114).ToString() + "%Uном)" ; 	// 1140В	
						else			U_error =(z[254]*7).ToString() + " (" + ((z[254]*70)/66).ToString()  + "%Uном)" ;	// 660В
						
						switch (ch)
						{
							case 3:								
							tabl_U->Rows->Add(my_time(z[204], z[205], z[206]), U_error, block_U, block_I);
							break;
							
							case 2:								
							tabl_U->Rows->Add(my_time(z[204], z[205], z[206]), U_error, block_I);
							break;
							
							case 1:								
							tabl_U->Rows->Add(my_time(z[204], z[205], z[206]), U_error, block_U);
							break;
							
							case 0:								
							tabl_U->Rows->Add(my_time(z[204], z[205], z[206]), U_error);
						}
					}
//------------------------------------- -4- ---------------------------------------------------
					if ((z[399]==13)&&(z[400]==10)&&(z[301]==(monthCalendar1->SelectionStart.Day))&&(z[302]==(monthCalendar1->SelectionStart.Month))&&(z[303]==(monthCalendar1->SelectionStart.Year)-2000))
					{
						/*-- Блокировка по Uсети --*/
						if((z[336]&4)>0) block_U = "отключена";
						else 			 block_U = "";
					
						/*-- Блокировка по I --*/
						if((z[336]&8)>0) block_I = "отключена";
						else 			 block_I = "";

						/*-- Напряжение питания --*/
						if (z[353]&16) 	U_error =(z[354]*7).ToString() + " (" + ((z[354]*70)/114).ToString() + "%Uном)" ; 	// 1140В	
						else			U_error =(z[354]*7).ToString() + " (" + ((z[354]*70)/66).ToString()  + "%Uном)" ;	// 660В
						
						switch (ch)
						{
							case 3:								
							tabl_U->Rows->Add(my_time(z[304], z[305], z[306]), U_error, block_U, block_I);
							break;
							
							case 2:								
							tabl_U->Rows->Add(my_time(z[304], z[305], z[306]), U_error, block_I);
							break;
							
							case 1:								
							tabl_U->Rows->Add(my_time(z[304], z[305], z[306]), U_error, block_U);
							break;
							
							case 0:								
							tabl_U->Rows->Add(my_time(z[304], z[305], z[306]), U_error);
						}
					}
//------------------------------------- -5- ---------------------------------------------------
					if ((z[499]==13)&&(z[500]==10)&&(z[401]==(monthCalendar1->SelectionStart.Day))&&(z[402]==(monthCalendar1->SelectionStart.Month))&&(z[403]==(monthCalendar1->SelectionStart.Year)-2000))
					{
						/*-- Блокировка по Uсети --*/
						if((z[436]&4)>0) block_U = "отключена";
						else 			 block_U = "";
					
						/*-- Блокировка по I --*/
						if((z[436]&8)>0) block_I = "отключена";
						else 			 block_I = "";

						/*-- Напряжение питания --*/
						if (z[453]&16) 	U_error =(z[454]*7).ToString() + " (" + ((z[454]*70)/114).ToString() + "%Uном)" ; 	// 1140В	
						else			U_error =(z[454]*7).ToString() + " (" + ((z[454]*70)/66).ToString()  + "%Uном)" ;	// 660В
												
						switch (ch)
						{
							case 3:								
							tabl_U->Rows->Add(my_time(z[404], z[405], z[406]), U_error, block_U, block_I);
							break;
							
							case 2:								
							tabl_U->Rows->Add(my_time(z[404], z[405], z[406]), U_error, block_I);
							break;
							
							case 1:								
							tabl_U->Rows->Add(my_time(z[404], z[405], z[406]), U_error, block_U);
							break;
							
							case 0:								
							tabl_U->Rows->Add(my_time(z[404], z[405], z[406]), U_error);
						}
					}
				}	
			}
		}	
					
		fs->Close();							// закрыть поток
		
		dataGridView1->Visible=true;			// показать таблицу
		dataGridView1->DataSource = tabl_U;		// заполнить таблицу
		label23->Text = "Данные за: " + monthCalendar1->SelectionStart.Day.ToString("D2")+"-"+monthCalendar1->SelectionStart.Month.ToString("D2")+"-"+monthCalendar1->SelectionStart.Year.ToString("D4")+" г";	
		
		
		progressBar1->Visible=false;			// спрятать прогресс

		//-- cтоп секундомер -------
		SYSTEMTIME st1;
		GetSystemTime(&st1);
		//- секунды ---
		if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
		else{
			if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
			else /* == */				label24->Text = "";
		}
		//- минуты ---
		if(st1.wMinute>start_min)		label25->Text = (st1.wMinute-start_min).ToString("D2");
		else{
			if(st1.wMinute<start_min)	label25->Text = ((60-start_min)+st1.wMinute).ToString("D2");
			else /* == */				label25->Text = "";						
		}	
		panel1->Visible = true;
		//--------------------------
		
		//--- разморозить кнопки и др. ------------		
		button1->Enabled=true;
		button2->Enabled=true;
		button3->Enabled=true;
		button4->Enabled=true;
		button5->Enabled=true;
		button6->Enabled=true;	
		button8->Enabled=true;
		monthCalendar1->Enabled=true;
			 
	}
		// кнопка Срабатывание защит и блокировок
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//--- проверка на правильную дату
		if (date_exist()==0) ;
		else 
		{
			MessageBox::Show("Данных с выбранной датой не зафиксированно!\n"+"Выберите дату из списка.");
			return;
		}
			 
		 //--- заморозить кнопки и др. ------------		
		button1->Enabled=false;
		button2->Enabled=false;
		button3->Enabled=false;
		button4->Enabled=false;
		button5->Enabled=false;
		button7->Enabled=false;	
		button8->Enabled=false;
		// monthCalendar1->Enabled=false;
		
		//--- спрятать прогресс
		progressBar1->Visible=false;
		//--- спрятать таблицу ---
		dataGridView1->Visible=false;	
		
		//--- работаем с файлом ----
		//- путь в label21
		int lim = 121875*30;	// для 1872 000 000 байт
		unsigned char z[513];

		//--- фразы отказов ----
		String^ m_error = "";		

		//--- таблица в dataGridView1 ---------
		DataTable ^ tabl_z = gcnew DataTable();
		
		//--- формируем шапку таблицы ----
		/*
		tabl_z->Columns->Add("Время");  // время есть всегда
		if((maska&power(1))||(maska&power(8))||(maska&power(15)))						tabl_z->Columns->Add("М1");  // М1
		if((maska&power(2))||(maska&power(9))||(maska&power(16)))						tabl_z->Columns->Add("М2");  // М2
		if((maska&power(3))||(maska&power(10))||(maska&power(17)))						tabl_z->Columns->Add("М3");  // М3
		if((maska&power(4))||(maska&power(11))||(maska&power(17)))						tabl_z->Columns->Add("М4");  // М4
		if((maska&power(5))||(maska&power(12))||(maska&power(18))||(maska&power(21)))	tabl_z->Columns->Add("М5");  // М5
		if((maska&power(6))||(maska&power(13))||(maska&power(19))||(maska&power(22)))	tabl_z->Columns->Add("М6");  // М6
		if((maska&power(7))||(maska&power(14))||(maska&power(20)))						tabl_z->Columns->Add("М7");  // М7	
		if((maska&power(23))||(maska&power(24)))										tabl_z->Columns->Add("Маслобак");  // Маслобак
		*/
		// шапка всегда для всех позиций
		tabl_z->Columns->Add("Время");  	// время 
		tabl_z->Columns->Add("М1");  		// М1
		tabl_z->Columns->Add("М2");  		// М2
		tabl_z->Columns->Add("М3");  		// М3
		tabl_z->Columns->Add("М4");  		// М4
		tabl_z->Columns->Add("М5");  		// М5
		tabl_z->Columns->Add("М6");  		// М6
		tabl_z->Columns->Add("М7");  		// М7	
		tabl_z->Columns->Add("Маслобак");  	// Маслобак	

		//-- Старт секундомер процесса считывания --------
		panel1->Visible = false;
		SYSTEMTIME st;
		GetSystemTime(&st);
		//label24->Text = "00";  	// секунды
		//label25->Text = "00";		// минуты	
		DWORD start_sec = st.wSecond;
		DWORD start_min = st.wMinute;						
			//------------------------------------------------	
		
		//*****************************************************************************
		//--- Работа с файлом --------
			
		// пробуем читать файл
		String^ path = label21->Text;
		FileStream^ fs = gcnew FileStream(path, FileMode::Open, FileAccess::Read);
		// Ругаемся, если файла нет.
		if ( File::Exists( path )==false )
		{
			MessageBox::Show( "Файл не найден!" );
		}
		else 
		{
			progressBar1->Value = 0 ;
			progressBar1->Maximum = lim ;
			progressBar1->Visible=true;	
			
			dataGridView1->Visible=false;			
			
		// Создаем читателя.
			BinaryReader^ r = gcnew BinaryReader(fs);

		// Read data from BB.dat.
			for (int j = 1; j < lim; j++)
			{
				progressBar1->Value=j;
				for (int i = 1; i < 513; i++)
				{
					try{
						z[i]=r->ReadByte();
					}
					catch (Exception^ e)
					{
						MessageBox::Show("Ошибка считывания файла! " + e->ToString() );
					}
				}
		//--- блок 512 -------------------
		// подготавливаем строки если корректный блок
				if((z[511]==13)&&(z[512]==10))		// есть хвост блока
				{
				
			//----- цикл разбора пяти строк в блоке 512 --------------------
					for(int s = 0; s < 5; s++)
					{						
						if ((z[99+(100*s)]==13)&&(z[100+(100*s)]==10)&&(z[1+(100*s)]==(monthCalendar1->SelectionStart.Day))&&(z[2+(100*s)]==(monthCalendar1->SelectionStart.Month))&&(z[3+(100*s)]==(monthCalendar1->SelectionStart.Year)-2000)) 
						{	
						//--- M1 --------------------------------------------------------------------------------
							/*-- М1 Ток БКТ1 или БКТ2   --*/			
							if((maska&power(1))&&(((z[45+(100*s)]&24)==8)||((z[48+(100*s)]&24)==8)))	
							{	m_error="Тех перегруз";	//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}						
							if((maska&power(1))&&(((z[45+(100*s)]&24)==16)||((z[48+(100*s)]&24)==16)))
							{	m_error="Опрокид";			//+++++++++++ новая строка +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}
							if((maska&power(1))&&(((z[45+(100*s)]&24)==24)||((z[48+(100*s)]&24)==24)))
							{	m_error="КЗ";				//+++++++++++ новая строка +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}				
							/*-- М1 БКДТ  --*/
							if((maska&power(8))&&((z[52+(100*s)]&1)>0))	
							{	m_error="t° авария";		//+++++++++++ новая строка +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}
							/*-- М1 БКИ  --*/
							if((maska&power(15))&&((z[55+(100*s)]&24)==8))
							{	m_error="Rи внимание";		//+++++++++++ новая строка +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}
							if((maska&power(15))&&((z[55+(100*s)]&24)==16))
							{	m_error="Rи авария";		//+++++++++++ новая строка +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);			
							}
								
						//--- M2 --------------------------------------------------------------------------------	
							/*-- М2 Ток БКТ1 или БКТ2   --*/
							if((maska&power(2))&&(((z[45+(100*s)]&3)==1)||((z[48+(100*s)]&3)==1)))
							{	m_error="Тех перегруз";	//+++++++++++ новая строка +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
							if((maska&power(2))&&(((z[45+(100*s)]&3)==2)||((z[48+(100*s)]&3)==2)))
							{	m_error="Опрокид";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
							if((maska&power(2))&&(((z[45+(100*s)]&3)==3)||((z[48+(100*s)]&3)==3)))
							{	m_error="КЗ";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
								
							/*-- М2 БКДТ  --*/
							if((maska&power(9))&&((z[52+(100*s)]&2)>0))
							{	m_error="t° авария";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
							
							/*-- М2 БКИ  --*/
							if((maska&power(16))&&((z[55+(100*s)]&3)==1))
							{	m_error="Rи внимание";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
							if((maska&power(16))&&((z[55+(100*s)]&3)==2))
							{	m_error="Rи авария";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}						
								
						//--- M3 --------------------------------------------------------------------------------	
							/*-- М3 Ток БКТ1 или БКТ2   --*/
							if((maska&power(3))&&(((z[46+(100*s)]&12)==4)||((z[49+(100*s)]&12)==4)))
							{	m_error="Тех перегруз";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 3, tabl_z);
							}
							if((maska&power(3))&&(((z[46+(100*s)]&12)==8)||((z[49+(100*s)]&12)==8)))
							{	m_error="Опрокид";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4], z[5], z[6], m_error, 3, tabl_z);
							}
							if((maska&power(3))&&(((z[46+(100*s)]&12)==12)||((z[49+(100*s)]&12)==12)))
							{	m_error="КЗ";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 3, tabl_z);
							}						
								
							/*-- М3 БКДТ  --*/
							if((maska&power(10))&&((z[52+(100*s)]&4)>0))
							{	m_error="t° авария";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 3, tabl_z);
							}

							/*-- М3 М4 БКИ  --*/
							if((maska&power(17))&&((z[56+(100*s)]&24)==8))	
							{ 	m_error="Rи внимание"; 		//+++++++++++ новая строка +++++++++++								
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 9, tabl_z);
							}
							if((maska&power(17))&&((z[56+(100*s)]&24)==16))
							{ 	m_error="Rи авария"; 			//+++++++++++ новая строка +++++++++++								
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 9, tabl_z);
							}
							
						//--- M4 --------------------------------------------------------------------------------	
							/*-- М4 Ток БКТ1 или БКТ2   --*/
							if((maska&power(4))&&(((z[46+(100*s)]&3)==1)||((z[49+(100*s)]&3)==1)))
							{	m_error="Тех перегруз";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}
							if((maska&power(4))&&(((z[46+(100*s)]&3)==2)||((z[49+(100*s)]&3)==2)))
							{	m_error="Опрокид";				//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}
							if((maska&power(4))&&(((z[46+(100*s)]&3)==3)||((z[49+(100*s)]&3)==3)))
							{	m_error="КЗ";				//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}
														
							/*-- М4 БКДТ  --*/
							if((maska&power(11))&&((z[52+(100*s)]&8)>0))
							{	m_error="t° авария";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}						
													
						//--- M5 --------------------------------------------------------------------------------	
							/*-- М5 Ток БКТ1 или БКТ2   --*/
							if((maska&power(5))&&(((z[47+(100*s)]&192)==64)||((z[50+(100*s)]&192)==64)))	
							{	m_error="Тех перегруз";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
							if((maska&power(5))&&(((z[47+(100*s)]&192)==128)||((z[50+(100*s)]&192)==128)))
							{	m_error="Опрокид";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4], z[5], z[6], m_error, 5, tabl_z);
							}
							if((maska&power(5))&&(((z[47+(100*s)]&192)==192)||((z[50+(100*s)]&192)==192)))	
							{	m_error="КЗ";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}						
													
							/*-- М5 БКДТ  --*/
							if((maska&power(12))&&((z[52+(100*s)]&16)>0))	
							{	m_error="t° авария";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
							
							/*-- М5 БКИ  --*/
							if((maska&power(18))&&((z[56+(100*s)]&3)==1))	
							{	m_error="Rи внимание"; 		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
							if((maska&power(18))&&((z[56+(100*s)]&3)==2))
							{	m_error="Rи авария";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
													
							/*-- М5 БКЗ  --*/
							if((maska&power(21))&&((z[74+(100*s)]&8)>0))	
							{	m_error="Rз авария"; 		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}						
										
						//--- M6 --------------------------------------------------------------------------------	
							/*-- М6 Ток БКТ1 или БКТ2   --*/
							if((maska&power(6))&&(((z[47+(100*s)]&48)==16)||((z[50+(100*s)]&48)==16)))	
							{	m_error="Тех перегруз";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4], z[5], z[6], m_error, 6, tabl_z);
							}
							if((maska&power(6))&&(((z[47+(100*s)]&48)==32)||((z[50+(100*s)]&48)==32)))	
							{	m_error="Опрокид";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4], z[5], z[6], m_error, 6, tabl_z);
							}
							if((maska&power(6))&&(((z[47+(100*s)]&48)==48)||((z[50+(100*s)]&48)==48)))	
							{	m_error="КЗ";			//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
														
							/*-- М6 БКДТ  --*/
							if((maska&power(13))&&((z[52+(100*s)]&32)>0))	
							{	m_error="t° авария";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
														
							/*-- М6 БКИ  --*/
							if((maska&power(19))&&((z[57+(100*s)]&24)==8))	
							{	m_error="Rи внимание"; 		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
							if((maska&power(19))&&((z[57+(100*s)]&24)==16))	
							{	m_error="Rи авария";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
														
							/*-- М6 БКЗ  --*/
							if((maska&power(22))&&((z[74+(100*s)]&4)>0))	
							{	m_error="Rз авария"; 		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
							
						//--- M7 --------------------------------------------------------------------------------	
							/*-- М7 Ток БКТ1 или БКТ2   --*/
							if((maska&power(7))&&(((z[47+(100*s)]&3)==1)||((z[50+(100*s)]&3)==1)))	
							{	m_error="Тех перегруз";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							if((maska&power(7))&&(((z[47+(100*s)]&3)==2)||((z[50+(100*s)]&3)==2)))	
							{	m_error="Опрокид";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							if((maska&power(7))&&(((z[47+(100*s)]&3)==3)||((z[50+(100*s)]&3)==3)))	
							{	m_error="КЗ";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
														
							/*-- М7 БКДТ  --*/
							if((maska&power(14))&&((z[52+(100*s)]&128)>0))	
							{	m_error="t° авария";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
												
							/*-- М7 БКИ  --*/
							if((maska&power(20))&&((z[57+(100*s)]&192)==64))	
							{	m_error="Rи внимание"; 		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							if((maska&power(20))&&((z[57+(100*s)]&192)==128))	
							{m_error="Rи авария";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							
						//--- Mаслобак --------------------------------------------------------------------------------	
							if((maska&power(23))&&((z[65+(100*s)]&2)>0))	
							{	m_error="t° авария"; 		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 8, tabl_z);
							}
							if((maska&power(24))&&((z[65+(100*s)]&1)>0))	
							{m_error="уровень";		//+++++++++++ новая строка +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 8, tabl_z);
							}					
						}					
					}				
				}
		//--- / блок 512  -------------------		
			}			
		}			
		fs->Close();		
		progressBar1->Visible=false;			// спрятать прогресс			

		//--- / Работа с файлом --------
		
		dataGridView1->Visible=true;			// показать таблицу
		dataGridView1->DataSource = tabl_z;		// заполнить таблицу
		label23->Text = "Данные за: " + monthCalendar1->SelectionStart.Day.ToString("D2")+"-"+monthCalendar1->SelectionStart.Month.ToString("D2")+"-"+monthCalendar1->SelectionStart.Year.ToString("D4")+" г";	
		
		//-- cтоп секундомер -------
		SYSTEMTIME st1;
		GetSystemTime(&st1);
		//- секунды ---
		if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
		else{
			if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
			else /* == */				label24->Text = "";
		}
		//- минуты ---
		if(st1.wMinute>start_min)		label25->Text = (st1.wMinute-start_min).ToString("D2");
		else{
			if(st1.wMinute<start_min)	label25->Text = ((60-start_min)+st1.wMinute).ToString("D2");
			else /* == */				label25->Text = "";						
		}	
		panel1->Visible = true;
		//--------------------------		
		
		//--- разморозить кнопки и др. ------------		
		button1->Enabled=true;
		button2->Enabled=true;
		button3->Enabled=true;
		button4->Enabled=true;
		button5->Enabled=true;
		button7->Enabled=true;	
		button8->Enabled=true;
		monthCalendar1->Enabled=true;	
	}
		// обработка чекбоксов фильтра для кнопки Все защиты
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		
		if(checkBox1->Checked==true)  maska |= power(1);
		else						  maska &= ~power(1);		// 2^0
		if(checkBox2->Checked==true)  maska |= power(2);
		else						  maska &= ~power(2);		// 2^1
		if(checkBox3->Checked==true)  maska |= power(3);
		else						  maska &= ~power(3);		// 2^2
		if(checkBox4->Checked==true)  maska |= power(4);
		else						  maska &= ~power(4);		// 2^3
		if(checkBox5->Checked==true)  maska |= power(5);
		else						  maska &= ~power(5);		// 2^4.
		if(checkBox6->Checked==true)  maska |= power(6);
		else						  maska &= ~power(6);		// 2^5
		if(checkBox7->Checked==true)  maska |= power(7);
		else						  maska &= ~power(7);		// 2^6
		if(checkBox8->Checked==true)  maska |= power(8);
		else						  maska &= ~power(8);		// 2^7
		if(checkBox9->Checked==true)  maska |= power(9);
		else						  maska &= ~power(9);		// 2^8
		if(checkBox10->Checked==true) maska |= power(10);
		else						  maska &= ~power(10);		// 2^9
		if(checkBox11->Checked==true) maska |= power(11);
		else						  maska &= ~power(11);		// 2^10
		if(checkBox12->Checked==true) maska |= power(12);
		else						  maska &= ~power(12);		// 2^11
		if(checkBox13->Checked==true) maska |= power(13);
		else						  maska &= ~power(13);		// 2^12
		if(checkBox14->Checked==true) maska |= power(14);
		else						  maska &= ~power(14);		// 2^13
		if(checkBox15->Checked==true) maska |= power(15);
		else						  maska &= ~power(15);		// 2^14
		if(checkBox16->Checked==true) maska |= power(16);
		else						  maska &= ~power(16);		// 2^15
		if(checkBox17->Checked==true) maska |= power(17);
		else						  maska &= ~power(17);		// 2^16
		if(checkBox18->Checked==true) maska |= power(18);
		else						  maska &= ~power(18);		// 2^17
		if(checkBox19->Checked==true) maska |= power(19);
		else						  maska &= ~power(19);		// 2^18
		if(checkBox20->Checked==true) maska |= power(20);
		else						  maska &= ~power(20);		// 2^19
		if(checkBox21->Checked==true) maska |= power(21);
		else						  maska &= ~power(21);		// 2^20
		if(checkBox22->Checked==true) maska |= power(22);
		else						  maska &= ~power(22);		// 2^21
		if(checkBox23->Checked==true) maska |= power(23);
		else						  maska &= ~power(23);		// 2^22
		if(checkBox24->Checked==true) maska |= power(24);
		else						  maska &= ~power(24);		// 2^23
		
		if((maska>0)&&label21->Text != "") 	button6->Enabled=true;		// выбрано и есть откуда читать 
		else								button6->Enabled=false;		// спрятать кнопку если ничего не выбрано
	}
	//--- инициализация/первая прогрузка формы
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Visible = false;
		button4->Enabled  = false;  // выбрать все 
		button5->Enabled  = false;  // сбросить все
		button6->Enabled  = false;  // все защиты
		button7->Enabled  = false;  // Uсети
		button8->Enabled  = false;  // сохранить PDF
		maska = 0;
		label21->Text = "";
		label22->Text = "";
		label23->Text = "";
		label24->Text = "00";
		label25->Text = "00";
		label26->Text = ":";
		panel1->Visible = false;
		progressBar1->Visible=false;
		
		//label21->Text = "E:\Работа_mzsha\VS\BB_Reader\Файлы dat\4 все.dat";
	}
	
	//---  формирователь времени для таблиц ----
private: String^ my_time(unsigned char my_hour, unsigned char my_minute, unsigned char my_sec){
		return (my_hour.ToString("D2") + ":" + my_minute.ToString("D2") + ":" + my_sec.ToString("D2"));
	}
	
	//---  формирователь даты  ----
//private: String^ my_data(unsigned char my_day, unsigned char my_month, unsigned char my_year){
//		return (my_day.ToString("D2") + "-" + my_month.ToString("D2") + "-" + (2000+my_year).ToString("D4")  +" г");
//	}

	//--- анализ блока 512 байт - поиск мин макс даты - составления перечня дат с данными
private: System::Void analise_date(unsigned char buf[513]){
		
		//--- Анализируем блок с данными ----------						

		if((buf[511]==13)&&(buf[512]==10))		// есть хвост блока
		{
			//--- Тип аппаратуры				
			switch (buf[489])
			{
				case 59:
				vers = 2;
				break;
				case 77:
				vers = 1;				
				break;
				default:
				vers = 0;						
			}
							
			//----- цикл разбора пяти строк в блоке 512 --------------------
			for(int s = 0; s < 5; s++)
			{			
				//----- строка -------------------------------
				if((buf[99+(100*s)]==13)&&(buf[100+(100*s)]==10))	// есть хвост строки
				{
					// проверка даты в допустимом диапазоне сразу все
					//     число				месяц				год
					if((buf[1+(100*s)]<32)&&(buf[1+(100*s)]>0)&&(buf[2+(100*s)]<13)&&(buf[2+(100*s)]>0)&&(buf[3+(100*s)]<100)&&(buf[3+(100*s)]>0))
					{
						//-- определяеи минимум
						if(buf[1+(100*s)]<min_D) min_D = buf[1+(100*s)];			
						if(buf[2+(100*s)]<min_M) min_M = buf[2+(100*s)];			
						if(buf[3+(100*s)]<min_G) min_G = buf[3+(100*s)];
					
						//-- определяеи максимум
						if(buf[1+(100*s)]>max_D) max_D = buf[1+(100*s)];
						if(buf[2+(100*s)]>max_M) max_M = buf[2+(100*s)];
						if(buf[3+(100*s)]>max_G) max_G = buf[3+(100*s)];

						norma = 1;
										
						// в каждой строке поиск новой даты
						if (!(listBox1->Items->Contains(buf[1+(100*s)].ToString("D2")+"-"+buf[2+(100*s)].ToString("D2")+"-"+(2000+buf[3+(100*s)]).ToString("D4") +" г"))) listBox1->Items->Add(buf[1+(100*s)].ToString("D2")+"-"+buf[2+(100*s)].ToString("D2")+"-"+(2000+buf[3+(100*s)]).ToString("D4") +" г");								
									
						// Тут возможно добавится поиск срабатывания защит по дате для формирования сводной неподробной таблицы
						// дата	(М1)-> защита
						//		(М2)-> защита 
						//		(М3)-> защита 
						//		(М4)-> защита 
						//		(М5)-> защита 
						//		(М6)-> защита 																											
						//		(М7)-> защита																																			
						//      маслобак -> защита	
					}											
				}
			}					
		}
	}
	
	//--- Вывод результатов после анализа дат в данных ---------
private: void result_date(){	
	
		if(norma == 1) {

			listBox1->Visible = true;
			label1->Text = "Данные с "  + min_D.ToString("D2") + "-" + min_M.ToString("D2") + "-" + (2000+min_G).ToString("D4") + 
								 " по " + max_D.ToString("D2") + "-" + max_M.ToString("D2") + "-" + (2000+max_G).ToString("D4");
		
			//--- ставим календарь на диапвазон мин-мах -------
			monthCalendar1->MaxDate = System::DateTime( max_G+2000, max_M, max_D , 0, 0, 0, 0 );
			monthCalendar1->MinDate = System::DateTime( min_G+2000, min_M, min_D , 0, 0, 0, 0 );
					
			//--- выбор  на max --------
			monthCalendar1->SelectionStart = System::DateTime( max_G+2000, max_M, max_D , 0, 0, 0, 0 );		// выбор работает 	
					
			//--- версия аппаратуры -----							
			switch (vers)
			{
				case 2:
				label22->Text = "АУКП.02";
				break;
				case 1:
				label22->Text = "АУКП.01";				
				break;
				default:
				label22->Text = "-";						
			}			
			
			if(label21->Text!=""){		//-- если от кнопки Открыть Файл
			//--- показываю кнопки ----------
				button4->Enabled  = true;  // выбрать все 
				button5->Enabled  = true;  // сбросить все
				button7->Enabled  = true;  // Uсети
			}
		}					
		else {
			label1->Text = "Данных нет!";
			listBox1->Visible = false;

			//--- прячу кнопки ----------
			button4->Enabled  = false;  // выбрать все 
			button5->Enabled  = false;  // сбросить все
			button7->Enabled  = false;  // Uсети
		}
	}
	
	//--- power(1) = 2^0 ----
private: unsigned int power(int n){
		unsigned int result = 1;
		if (n==0) return 1;
		for(int i=0; i<(n-1); i++){ 
			result *= 2;
		}
		return result;
	}
	
	//--- проверка выбора даты календаря на наличие в listBox1 ----
private: unsigned int date_exist(){
		if (listBox1->Items->Contains((monthCalendar1->SelectionStart.Day).ToString("D2")+"-"+(monthCalendar1->SelectionStart.Month).ToString("D2")+"-"+(monthCalendar1->SelectionStart.Year).ToString("D4")+" г")) 
		{		
			return 0;
		}
		else 	return 1;		
	}

	//--- внутренний метод добавления строки в таблицу если выбран чекбокс и есть срабатывание защиты/блокировки	
private: void AddRow(unsigned char my_hour, unsigned char my_minute, unsigned char my_second, String^ error, unsigned char n, DataTable ^tabl)
		{
			switch (n)
			{	
				case 1:	//M1
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), error, "", "", "", "", "", "", "");	
				break;
				case 2:	//M2
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", error, "", "", "", "", "", "");	
				break;
				case 3:	//M3
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", error, "", "", "", "", "");	
				break;
				case 4:	//M4
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", "", error, "", "", "", "");	
				break;
				case 5:	//M5
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", "", "", error, "", "", "");	
				break;
				case 6:	//M6
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", "", "", "", error, "", "");	
				break;
				case 7:	//M7
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", "", "", "", "", error, "");	
				break;
				case 8:	//Mаслобак
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", "", "", "", "", "", error);	
				break;
				case 9:	//M3 М4 - БКИ
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", error, "--", "", "", "", "");	
				break;
				default:
				break;
			}
		}
		//--- Cохранить PDF -----------------------------
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	
		//--- заморозить кнопки и др. ------------		
		button1->Enabled=false;
		button2->Enabled=false;
		button3->Enabled=false;
		button4->Enabled=false;
		button5->Enabled=false;
		button6->Enabled=false;
		button7->Enabled=false;			
		
		//--- спрятать прогресс
		progressBar1->Visible=false;	
		 
		// в свойствах насроить 
		saveFileDialog1->ShowDialog();
		String^ file = saveFileDialog1->FileName; 
		//label23->Text = file;
		
		if(file!="")
		{
			if ( File::Exists( file )==true )	MessageBox::Show("Файл уже существует и будет перезаписан!" );			
			else								MessageBox::Show("Данные будут сохранены в файл: " +  file);
			
			//--- версия аппаратуры -------
			String^ vers_pdf;
			switch (vers){
				case 2:
				vers_pdf = "АУКП.02";
				break;
				case 1:
				vers_pdf = "АУКП.01";
				break;
				default:
				vers_pdf = "АУКП";				
			}

			FileStream ^stream = gcnew FileStream(file, FileMode::Create); 				
			
			int n = dataGridView1->Columns->Count;
			int k = dataGridView1->Rows->Count;
			Document^ document = gcnew Document(); 
			
			iTextSharp::text::Font^ font = iTextSharp::text::FontFactory::GetFont(L"C:\\WINDOWS\\Fonts\\arial.ttf", "CP1251", BaseFont::NOT_EMBEDDED);
			font->Size = 9;		
			 
			PdfWriter::GetInstance(document, stream);			
			PdfPTable^ tabl = gcnew PdfPTable(dataGridView1->Columns->Count);

			tabl->WidthPercentage = 100;
			tabl->DefaultCell->BorderWidth = 1;
			tabl->DefaultCell->VerticalAlignment = Element::ALIGN_CENTER;

			//  шапка таблицы 
			for (int j=0;j<n;j++)
			{	
				PdfPCell ^cell = gcnew PdfPCell(gcnew Phrase(dataGridView1->Columns[j]->Name, font));
				cell->BackgroundColor = gcnew iTextSharp::text::Color(240, 240, 240);

				tabl->AddCell(cell);	
			}
			// тело таблицы
			for (int i=0;i<(k-1);i++)
			{
				for (int j=0;j<n;j++)
				{
					PdfPCell ^cell = gcnew PdfPCell(gcnew Phrase(dataGridView1[j,i]->Value->ToString(), font));
					tabl->AddCell(cell);
				}		
			}
			try      
			{              
				document->Open(); 
				document->NewPage();
				document->Add(gcnew Phrase("Архив данных о работе проходческого комбайна с аппаратурой " + vers_pdf + " зав. №____ " + /*zav_N.ToString() + */ "\n" + "производства МЗША от " + (monthCalendar1->SelectionStart.Day).ToString("D2") + "." + monthCalendar1->SelectionStart.Month.ToString("D2") + "." + monthCalendar1->SelectionStart.Year.ToString()  + " г.", font));
				document->Add(tabl);
				document->Close();
				stream->Close(); 
				MessageBox::Show( "Файл сохранен!" );
			}     
			catch (Exception^ e)
			{
				MessageBox::Show("Ошибка сохранения файла! " + e->ToString() );
			}			
		}
		else MessageBox::Show("Имя будущего файла не задано!");
		 
		//--- разморозить кнопки и др. ------------		
		button1->Enabled=true;
		button2->Enabled=true;
		button3->Enabled=true;
		button4->Enabled=true;
		button5->Enabled=true;
		button6->Enabled=true;
		button7->Enabled=true;				 
	}
	//--- Диск в файл ----------------------------
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {	
	
		if ((folderBrowserDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)&&(folderBrowserDialog1->SelectedPath->Substring(0, 1) != "C"))
		{				
			String^ my_str = folderBrowserDialog1->SelectedPath;
			my_str = my_str->Substring(0, 1);	// Отделяем от пути первые два символа
			
		//----- Работа с диском --------------------------------------------
			LPCWSTR path ;	
			
			if(my_str=="A")path = L"\\\\.\\A:";
			if(my_str=="B")path = L"\\\\.\\B:";
			if(my_str=="D")path = L"\\\\.\\D:";
			if(my_str=="E")path = L"\\\\.\\E:";
			if(my_str=="F")path = L"\\\\.\\F:";
			if(my_str=="G")path = L"\\\\.\\G:";
			if(my_str=="H")path = L"\\\\.\\H:";
			if(my_str=="I")path = L"\\\\.\\I:";
			if(my_str=="J")path = L"\\\\.\\J:";
			if(my_str=="K")path = L"\\\\.\\K:";
					
			// Дескриптор файлового устройства (раздела диска).
			HANDLE partition = INVALID_HANDLE_VALUE;
			// Сведения о разделе.
			PARTITION_INFORMATION partitionInfo = {0};
			// Сведения о геометрии диска, на котором расположен раздел.
			DISK_GEOMETRY diskGeometry = {0};
			// Дескриптор файла для сохранения образа раздела.
			HANDLE file = INVALID_HANDLE_VALUE;
			// Буфер для чтения.
			BYTE* buffer = NULL;
			// Размер буфера.
			DWORD bufferSize = 0;
			// Количество возвращенных байт.
			DWORD bytesReturned = 0;
			// Количество записанных байт.
			DWORD bytesWritten = 0;
			// Результат выполнения.
			BOOL result;
			// Открываем раздел диска читаем.
			partition = CreateFile(
				path,
				GENERIC_READ,
				FILE_SHARE_READ | FILE_SHARE_WRITE,
				NULL,
				OPEN_EXISTING,
				0,
				NULL); 
			if (partition == INVALID_HANDLE_VALUE)
			{
				// CreateFile() не работает
				MessageBox::Show("Невозможно открыть диск " + my_str + ":");	 
				delete[] buffer;
				CloseHandle(partition);					
			}
			else 
			{							
			// Запрашиваем сведения о геометрии диска, на котором расположен раздел.
				if (!DeviceIoControl(partition,
					IOCTL_DISK_GET_DRIVE_GEOMETRY,
					NULL,
					0,
					&diskGeometry,
					sizeof (DISK_GEOMETRY),
					&bytesReturned,
					(LPOVERLAPPED)NULL))
				{
					MessageBox::Show("Ошибка запроса сведений о геометрии диска "  + my_str + ":");
					CloseHandle(partition);
				}
				else
				{
				// Запрашиваем сведения о разделе.
					if (!DeviceIoControl(partition,
						IOCTL_DISK_GET_PARTITION_INFO,
						NULL,
						0,&partitionInfo,
							sizeof (PARTITION_INFORMATION),
						&bytesReturned,
						(LPOVERLAPPED)NULL))
					{
						MessageBox::Show("Ошибка запроса сведений о разделе" + my_str + ":");
						CloseHandle(partition);
					}
					else
					{	
						
					//--- с диском и разделом все ОК -----------	
							
						saveFileDialog2->ShowDialog();
						String^ file_dat = saveFileDialog2->FileName; 		
	
						if(file_dat!="")
						{
							if (File::Exists( file_dat )==true)	MessageBox::Show("Файл уже существует и будет перезаписан!" );			
							else								MessageBox::Show("Данные будут сохранены в файл: " + file_dat);
							
				//--- тут вся ботва с чтением и записью ---------	
					
					//-------- РАБОТА С ДИСКОМ ------- 	
					
						//	из файла - побайтно	(блоком 512)		| c диска - побуферно			
						//	121875 * 30								| 73125
						//	512										| 512 * 50
						//------------								|---------------------
						//  1 872 000 000							| 1 872 000 000

							int myBuf = 512 * 50   ;    // 121875*30;
							int zykl  = 73125  ;  		// 512;

							//-- Старт секундомер процесса считывания --------
							panel1->Visible = false;
							SYSTEMTIME st;
							GetSystemTime(&st);
							//label24->Text = "00";  	// секунды
							//label25->Text = "00";	// минуты	
							DWORD start_sec = st.wSecond;
							DWORD start_min = st.wMinute;						
							//------------------------------------------------	
								
							// Выделение памяти для буфера указанного размера.	
							bufferSize = myBuf;        						
							buffer = new BYTE[bufferSize+1];
								
							// Подготовка записи в файл	
							FileStream^ fs = gcnew FileStream(file_dat, FileMode::Create);	// поток для создания/редактирования файла       
							BinaryWriter^ w = gcnew BinaryWriter(fs);								// поток для записи в файл								
								
							progressBar1->Value=0;
							progressBar1->Maximum = zykl;
							progressBar1->Visible = true;
							
							for (int i=1; i<(zykl+1); i++)   // было 326 
							{	
								result = ReadFile(partition, buffer, bufferSize, &bytesReturned, NULL);			
								if (!result)
								{
									MessageBox::Show("Ошибка чтения секторов в разделе" + my_str + ":");
									delete[] buffer;
									
								}
								else
								{
									progressBar1->Value=i;
										
									//--- буфер корректно считан - надо сохранять в файл ---
									for (int nn=0; nn<(myBuf); nn++)
									{
										try	
										{
											w->Write(buffer[nn]);
										}
										catch (Exception^ e)
										{
											MessageBox::Show("Ошибка записи файла! " + e->ToString() );
										}
									}										
								}
							}						
						
					//------ / РАБОТА С ДИСКОМ ---------- 
						
							progressBar1->Visible = false;
							delete[] buffer;
								
							w->Close();				// закрываем потоки после считывания данных
							fs->Close();
							CloseHandle(partition);
							CloseHandle(file);								
								
				//--- / тут вся ботва с чтением и записью ---------		

							//-- cтоп секундомер -------
							SYSTEMTIME st1;
							GetSystemTime(&st1);
							//- секунды ---
							if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
							else{
								if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
								else /* == */				label24->Text = "";
							}
							//- минуты ---
							if(st1.wMinute>start_min)		label25->Text = (st1.wMinute-start_min).ToString("D2");
							else{
								if(st1.wMinute<start_min)	label25->Text = ((60-start_min)+st1.wMinute).ToString("D2");
								else /* == */				label25->Text = "";						
							}	
							panel1->Visible = true;
							//--------------------------
						}
						else 
						{
							MessageBox::Show("Путь для файла не задан!" );
							CloseHandle(partition);							
						}					
					}
				}						
			}
		}
		else 
		{
			MessageBox::Show( "Диск не выбран!" );	
			label21->Text= "";
		}			
	}

};
}