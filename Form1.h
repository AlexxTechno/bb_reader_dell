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
	using namespace System::Drawing;
//	using namespace System::Drawing::Printing;
	using namespace System::IO;
//	using namespace System::Text;
	using namespace iTextSharp::text;
	using namespace iTextSharp::text::pdf;

	/// <summary>
	/// ������ ��� Form1
	///
	/// ��������! ��� ��������� ����� ����� ������ ���������� ����� ��������
	///          �������� ����� ����� �������� ("Resource File Name") ��� �������� ���������� ������������ �������,
	///          ���������� �� ����� ������� � ����������� .resx, �� ������� ������� ������ �����. � ��������� ������,
	///          ������������ �� ������ ��������� �������� � ���������������
	///          ���������, ��������������� ������ �����.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
		
	//--- ���������� ����������	-----------------------------------	
	private:  unsigned int maska;	// ����� ����� � ���������� �� ��������	
	//-- ���������� ��� ����������� ��� ������
	private: static unsigned char norma = 0;		// ������ � ����� ����
	//--- �������� ��� � ������ ������ ------------------
	private: static unsigned char min_D = 31;	    // ����
	private: static unsigned char min_M = 12;		// �����
	private: static unsigned char min_G = 99;		// ��� ��������� ����
	private: static unsigned char max_D = 1;		// ����
	private: static unsigned char max_M = 1;		// �����
	private: static unsigned char max_G = 0;		// ��� �������� ����
	//---- ������ ������������ ��������� -------------------------
	private: static WORD sec = 0;
	private: static WORD min = 0; 
	//--- ����������� ������ ���������� --------------------------
	private: static unsigned char vers = 0;		// 0- ���  1-����.01  2- ����.02
	//--- �������� �������� --------
	private: static unsigned char P_m1 ;
	private: static unsigned char P_m2 ;
	private: static unsigned char P_m3 ;
	private: static unsigned char P_m4 ;
	private: static unsigned char P_m5 ;
	private: static unsigned char P_m6 ;
	private: static unsigned char P_m7 ;
    //--- ������� �� ���������� ������� 660/1140 � ---
	private: static unsigned ust_U ;
		
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Button^  button1;

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
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;

private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label27;

private: System::Windows::Forms::CheckBox^  checkBox27;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape4;












private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
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
			this->lineShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
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
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(985, 610);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage1->Controls->Add(this->label33);
			this->tabPage1->Controls->Add(this->label32);
			this->tabPage1->Controls->Add(this->label31);
			this->tabPage1->Controls->Add(this->label30);
			this->tabPage1->Controls->Add(this->checkBox27);
			this->tabPage1->Controls->Add(this->label28);
			this->tabPage1->Controls->Add(this->label27);
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
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(977, 584);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"������ � ����������";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(75, 551);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(41, 13);
			this->label33->TabIndex = 28;
			this->label33->Text = L"1140 �";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(5, 550);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(78, 13);
			this->label32->TabIndex = 27;
			this->label32->Text = L"U���� ���.:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(161, 549);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(54, 13);
			this->label31->TabIndex = 27;
			this->label31->Text = L"������:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(5, 567);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(44, 13);
			this->label30->TabIndex = 26;
			this->label30->Text = L"����:";
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Location = System::Drawing::Point(177, 393);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(15, 14);
			this->checkBox27->TabIndex = 25;
			this->checkBox27->UseVisualStyleBackColor = true;
			this->checkBox27->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label28->Location = System::Drawing::Point(170, 375);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(29, 19);
			this->label28->TabIndex = 7;
			this->label28->Text = L"���";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label27->Location = System::Drawing::Point(11, 389);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(134, 19);
			this->label27->TabIndex = 9;
			this->label27->Text = L"�������� ��������";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Location = System::Drawing::Point(920, 549);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(50, 23);
			this->panel1->TabIndex = 24;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(26, 4);
			this->label24->Margin = System::Windows::Forms::Padding(3, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(22, 16);
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
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(2, 4);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(22, 16);
			this->label25->TabIndex = 22;
			this->label25->Text = L"00";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(605, 552);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 20;
			this->label23->Text = L"label23";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(743, 549);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(170, 23);
			this->button8->TabIndex = 19;
			this->button8->Text = L"��������� ������� � PDF";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(213, 549);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 18;
			this->label22->Text = L"label22";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(49, 567);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 17;
			this->label21->Text = L"label21";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(4, 88);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(96, 82);
			this->listBox1->TabIndex = 16;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(166, 514);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"��������";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label20->Location = System::Drawing::Point(10, 516);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(71, 19);
			this->label20->TabIndex = 9;
			this->label20->Text = L"U���� (�)";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(166, 454);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"��������";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(62, 454);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"�������� ���";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(93, 506);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(36, 13);
			this->label19->TabIndex = 7;
			this->label19->Text = L"U���";
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Location = System::Drawing::Point(100, 521);
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
			this->label18->Location = System::Drawing::Point(130, 506);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"���";
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Location = System::Drawing::Point(138, 521);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(15, 14);
			this->checkBox25->TabIndex = 10;
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(12, 454);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"���";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label17->Location = System::Drawing::Point(94, 487);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(143, 19);
			this->label17->TabIndex = 7;
			this->label17->Text = L"����� �� ����������";
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Location = System::Drawing::Point(220, 435);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(15, 14);
			this->checkBox24->TabIndex = 10;
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(178, 435);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(15, 14);
			this->checkBox23->TabIndex = 10;
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Location = System::Drawing::Point(240, 331);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(15, 14);
			this->checkBox22->TabIndex = 10;
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Location = System::Drawing::Point(240, 310);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(15, 14);
			this->checkBox21->TabIndex = 10;
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Location = System::Drawing::Point(219, 352);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(15, 14);
			this->checkBox20->TabIndex = 10;
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Location = System::Drawing::Point(219, 331);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(15, 14);
			this->checkBox19->TabIndex = 10;
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(219, 310);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(15, 14);
			this->checkBox18->TabIndex = 10;
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(219, 280);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(15, 14);
			this->checkBox17->TabIndex = 10;
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(219, 249);
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
			this->checkBox14->Location = System::Drawing::Point(198, 352);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(15, 14);
			this->checkBox14->TabIndex = 10;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(198, 331);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(15, 14);
			this->checkBox13->TabIndex = 10;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(198, 310);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(15, 14);
			this->checkBox12->TabIndex = 10;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(198, 290);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 10;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(198, 270);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 10;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(198, 249);
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
			this->checkBox7->Location = System::Drawing::Point(177, 352);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 10;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(177, 331);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 10;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(177, 310);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 10;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(177, 290);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 10;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(177, 270);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(177, 249);
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
			this->label14->Location = System::Drawing::Point(10, 430);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(70, 19);
			this->label14->TabIndex = 9;
			this->label14->Text = L"��������";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(10, 348);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 19);
			this->label9->TabIndex = 9;
			this->label9->Text = L"����� ������� �7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(10, 327);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 19);
			this->label8->TabIndex = 9;
			this->label8->Text = L"������������� �6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(10, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 19);
			this->label7->TabIndex = 9;
			this->label7->Text = L"�������������� �5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(10, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 19);
			this->label6->TabIndex = 9;
			this->label6->Text = L"�������� �4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(10, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"�������� �3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(10, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 19);
			this->label4->TabIndex = 9;
			this->label4->Text = L"������������ �2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"�� �1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(231, 291);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 19);
			this->label13->TabIndex = 7;
			this->label13->Text = L"���";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(214, 207);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 19);
			this->label12->TabIndex = 7;
			this->label12->Text = L"���";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label16->Location = System::Drawing::Point(199, 417);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(58, 19);
			this->label16->TabIndex = 7;
			this->label16->Text = L"�������";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(175, 417);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 19);
			this->label15->TabIndex = 7;
			this->label15->Text = L"t�";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(196, 208);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 19);
			this->label11->TabIndex = 7;
			this->label11->Text = L"t�";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(170, 206);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 19);
			this->label10->TabIndex = 7;
			this->label10->Text = L"���";
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
			this->label2->Text = L"������������ ����� � ����������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"�������� ���� ��� ����";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(3, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 21);
			this->button3->TabIndex = 5;
			this->button3->Text = L"���� � ����";
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
			this->button2->Text = L"������� ����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(270, 4);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(707, 20);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 3;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(103, 22);
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
			this->button1->Text = L"������� ����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(269, 4);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Size = System::Drawing::Size(710, 540);
			this->dataGridView1->TabIndex = 0;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(3, 3);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(4) {this->lineShape4, 
				this->lineShape2, this->lineShape3, this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(971, 578);
			this->shapeContainer1->TabIndex = 11;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape4
			// 
			this->lineShape4->Name = L"lineShape4";
			this->lineShape4->X1 = 5;
			this->lineShape4->X2 = 260;
			this->lineShape4->Y1 = 540;
			this->lineShape4->Y2 = 540;
			// 
			// lineShape2
			// 
			this->lineShape2->BorderColor = System::Drawing::SystemColors::AppWorkspace;
			this->lineShape2->BorderStyle = System::Drawing::Drawing2D::DashStyle::Dot;
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 12;
			this->lineShape2->X2 = 253;
			this->lineShape2->Y1 = 367;
			this->lineShape2->Y2 = 367;
			// 
			// lineShape3
			// 
			this->lineShape3->Name = L"lineShape3";
			this->lineShape3->X1 = 12;
			this->lineShape3->X2 = 250;
			this->lineShape3->Y1 = 479;
			this->lineShape3->Y2 = 479;
			// 
			// lineShape1
			// 
			this->lineShape1->BorderColor = System::Drawing::SystemColors::AppWorkspace;
			this->lineShape1->BorderStyle = System::Drawing::Drawing2D::DashStyle::Dot;
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 12;
			this->lineShape1->X2 = 253;
			this->lineShape1->Y1 = 409;
			this->lineShape1->Y2 = 409;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(977, 584);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"� ���������";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(561, 575);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->Description = L"�������� ���� ��� ����������� �����";
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
			this->ClientSize = System::Drawing::Size(984, 612);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"BB_reader v3.1";
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
		// ������ ������� ���
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

				//--- �������� �������� -----
				checkBox27->Checked = true;
		//		checkBox28->Checked = true;  // ����������
				
				checkBox1_CheckedChanged(sender, e);
			 }
		// ������ �������� ���
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
		// ������ ������� ����
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if ((folderBrowserDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)&&(folderBrowserDialog1->SelectedPath->Substring(0, 1) != "C"))
			{				
				String^ my_str = folderBrowserDialog1->SelectedPath;
				my_str = my_str->Substring(0, 1);	// �������� �� ���� ������ ��� �������
				label1->Text= "���� " + my_str + ":" ;				
				
		//----- ������ � ������ --------------------------------------------
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
					
				// ���������� ��������� ���������� (������� �����).
				HANDLE partition = INVALID_HANDLE_VALUE;
				// �������� � �������.
				PARTITION_INFORMATION partitionInfo = {0};
				// �������� � ��������� �����, �� ������� ���������� ������.
				DISK_GEOMETRY diskGeometry = {0};
				// ���������� ����� ��� ���������� ������ �������.
				HANDLE file = INVALID_HANDLE_VALUE;
				// ����� ��� ������.
				BYTE* buffer = NULL;
				// ������ ������.
				DWORD bufferSize = 0;
				// ���������� ������������ ����.
				DWORD bytesReturned = 0;
				// ���������� ���������� ����.
				DWORD bytesWritten = 0;
				// ��������� ����������.
				BOOL result;
				// ��������� ������ ����� ������.
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
					// CreateFile() �� ��������
					MessageBox::Show("���������� ������� ���� " + my_str + ":");	 
					delete[] buffer;
					CloseHandle(partition);					
				}
				else 
				{							
				// ����������� �������� � ��������� �����, �� ������� ���������� ������.
					if (!DeviceIoControl(partition,
						IOCTL_DISK_GET_DRIVE_GEOMETRY,
						NULL,
						0,
						&diskGeometry,
						sizeof (DISK_GEOMETRY),
						&bytesReturned,
						(LPOVERLAPPED)NULL))
					{
						MessageBox::Show("������ ������� �������� � ��������� ����� "  + my_str + ":");
						CloseHandle(partition);
					}
					else
					{
					// ����������� �������� � �������.
						if (!DeviceIoControl(partition,
							IOCTL_DISK_GET_PARTITION_INFO,
							NULL,
							0,&partitionInfo,
							sizeof (PARTITION_INFORMATION),
							&bytesReturned,
							(LPOVERLAPPED)NULL))
						{
							MessageBox::Show("������ ������� �������� � �������" + my_str + ":");
							CloseHandle(partition);
						}
						else
						{	
							MessageBox::Show("���� " + my_str + ": ��� ��");
					//-------- ������ � ������ ------- 	
														//-- ��������� ������� -----
							int myBuf = 512 * 50 ;  	//  512 * 10   					// 5120*325*30 = 49 920 000 �	// 121875*30;
							int zykl  = 73125 ;  		//	325 * 300					// 5120*325*30 = 490 920 000 �	// 325*30;
							unsigned char z[513]  ;
							
						// ��������� ������ ��� ������ ���������� �������.	
							bufferSize = myBuf;        						
							buffer = new BYTE[bufferSize+1];							
							
							progressBar1->Value=0;
							progressBar1->Maximum = zykl;
							progressBar1->Visible = true;
							
							//-- ����� ���������� �������� ���������� --------
							panel1->Visible = false;
							SYSTEMTIME st;
							GetSystemTime(&st);
							//label24->Text = "00";  	// �������
							//label25->Text = "00";	// ������	
							DWORD start_sec = st.wSecond;
							DWORD start_min = st.wMinute;						
							//------------------------------------------------	
							
							for (int i=1; i<(zykl+1); i++)   // ���� 326 
							{	
								result = ReadFile(partition, buffer, bufferSize, &bytesReturned, NULL);			
								if (!result)
								{
									MessageBox::Show("������ ������ �������� � �������" + my_str + ":");
									delete[] buffer;									
								}
								else
								{
									progressBar1->Value=i;
								
							//-------------------------------
							//-- buffer[nn] = 512*50 
							//--- ���� �� ������ �� ����� ------	
									for(int j=0; j<50; j++){
										for(int k=0; k<513; k++){ 
											z[k+1] = buffer[k+(512*j)];
										}
										analise_date(z);									
									}						
								}										
							}
					//------ / ������ � ������ ---------- 

							//-- c��� ���������� -------
							SYSTEMTIME st1;
							GetSystemTime(&st1);
							//- ������� ---
							if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
							else{
								if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
								else /* == */				label24->Text = "";
							}
							//- ������ ---
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
			else MessageBox::Show( "���� �� ������!" );
		 }
		// ������ ������� ����
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			button1->Enabled=false;		// ������� ����
			button3->Enabled=false;		// ���� � ����
		
			openFileDialog1->ShowDialog();
			String^ file = openFileDialog1->FileName;
			
		// �������� ����� �� ���������� .dat - � ���������� openFileDialog1
		// �� extention
			
			Form1::Text = "BB_reader_dell  |  " + file;		
		
		//----------- ������ � ������ ---------- 
			//-- ������� ����� ��� ������ ----
			FileStream^ fs = gcnew FileStream(file, FileMode::Open, FileAccess::Read);	
			//-- �������� ������� ����� ------
			if ( File::Exists( file )==false )
			{
				fs->Close();
				MessageBox::Show( "���� �� ������!" );				
			}
			else 
			{
				label1->Text="���������� ������ �� �����";
				listBox1->Items->Clear() ;
				MessageBox::Show( "���� ������!"+"\n"+file );	
				listBox1->Visible = false;
				label21->Visible = true;
				label21->Text = file;

				//--- ���������� ��� ������ � ������ ------------------------------
				BinaryReader^ r = gcnew BinaryReader(fs);	// ������� ��������.
				unsigned char z[513];						// ���� ������ 512 ����
				int lim = 121875*30;						// ���������� ������ �� 512				
				//-------------------------------------------------------------------

				//-- ����� ���������� �������� ���������� --------
				panel1->Visible = false;
				SYSTEMTIME st;
				GetSystemTime(&st);
				//label24->Text = "00";  	// �������
				//label25->Text = "00";		// ������	
				DWORD start_sec = st.wSecond;
				DWORD start_min = st.wMinute;						
				//------------------------------------------------	

				//--- �������� ���� �� ������ ������ ----------------------------------------------------------
				//	String^ data1 = z[1].ToString()  +"-"+z[2].ToString()  +"-"+(2000+z[3]).ToString()   +" �";
				//	String^ data2 = z[101].ToString()+"-"+z[102].ToString()+"-"+(2000+z[103]).ToString() +" �";
				//	String^ data3 = z[201].ToString()+"-"+z[202].ToString()+"-"+(2000+z[203]).ToString() +" �";
				//	String^ data4 = z[301].ToString()+"-"+z[302].ToString()+"-"+(2000+z[303]).ToString() +" �";
				//	String^ data5 = z[401].ToString()+"-"+z[402].ToString()+"-"+(2000+z[403]).ToString() +" �";
				//---------------------------------------------------------------------------------------------			
				
				progressBar1->Value=0;
				progressBar1->Maximum = lim;
				progressBar1->Visible = true;
				
				// ������ ������ �� �����
				for (int j = 1; j < lim; j++)
				{
					progressBar1->Value=j;
					for (int i = 1; i < 513; i++)
					{
						z[i]=r->ReadByte();					// �������� ����						
					}
					
					//--- ���� �� ������ �� ����� ------	
					analise_date(z);				
				}
				result_date();
				fs->Close();
				progressBar1->Visible = false;

				//-- c��� ���������� -------
				SYSTEMTIME st1;
				GetSystemTime(&st1);
				//- ������� ---
				if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
				else{
					if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
					else /* == */				label24->Text = "";
				}
				//- ������ ---
				if(st1.wMinute>start_min)		label25->Text = (st1.wMinute-start_min).ToString("D2");
				else{
					if(st1.wMinute<start_min)	label25->Text = ((60-start_min)+st1.wMinute).ToString("D2");
					else /* == */				label25->Text = "";						
				}	
				panel1->Visible = true;
				//--------------------------
			}
			button1->Enabled=true;		// ������� ����
			button3->Enabled=true;		// ���� � ����
		 }
		// ������ U���� - ���������� � ���������� �� ���� � U����
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {	

		//--- �������� �� ���������� ����
		if (date_exist()==0) ;
		else 
		{
			MessageBox::Show("������ � ��������� ����� �� �������������!\n"+"�������� ���� �� ������.");
			return;
		}
			 
		//--- ���������� ������ � ��. ------------		
		button1->Enabled=false;
		button2->Enabled=false;
		button3->Enabled=false;
		button4->Enabled=false;
		button5->Enabled=false;
		button6->Enabled=false;	
		button8->Enabled=false;
		// monthCalendar1->Enabled=false;

		//--- �������� � ������ ----
		//- ���� � label21
		int lim = 121875*30;	// ��� 1872 000 000 ����
		unsigned char z[513];
		String^ U_set;			// ���������� ���� + %�� U���		
		String^ block_U ;		// ����� ��� ����������� �� U����
		String^ block_I ;		// ����� ��� ����������� �� I
		String^ error_U ;		// ����� ��� ������ �� U����
		

		//--- ��� ������������ ����������� 660/1140		
		unsigned char U_da = 0;

		//--- ������� � dataGridView1 ---------
		DataTable ^ tabl_U = gcnew DataTable();
		//-- ����� ������� -------------
		tabl_U->Columns->Add("�����");
		tabl_U->Columns->Add("U����,�");	
		tabl_U->Columns->Add("������" + "\n" + "�� U����");	
		
		// ���������� ��� ����������� �������� � ������� �������
		unsigned char ch = 0;
		if ((checkBox26->Checked==true)&&(checkBox25->Checked==true)) 
		{
			ch = 3;
			tabl_U->Columns->Add("����������" + "\n" + "�� U����");
			tabl_U->Columns->Add("����������" + "\n" + "�� ����");			
		}
		else 
		{
			if(checkBox26->Checked==true) 
			{
				ch = 1;
				tabl_U->Columns->Add("���������� U����");
			}
			else 
			{
				if(checkBox25->Checked==true)	
				{
					ch = 2;
					tabl_U->Columns->Add("���������� �� ����");
				}
				else	ch = 0;
			}
		}

		//-- ����� ���������� �������� ���������� --------
		panel1->Visible = false;
		SYSTEMTIME st;
		GetSystemTime(&st);
		//label24->Text = "00";  	// �������
		//label25->Text = "00";		// ������	
		DWORD start_sec = st.wSecond;
		DWORD start_min = st.wMinute;						
		//------------------------------------------------
			
		// ������� ������ ����
		String^ path = label21->Text;
		FileStream^ fs = gcnew FileStream(path, FileMode::Open, FileAccess::Read);
		// ��������, ���� ����� ���.
		if ( File::Exists( path )==false )
		{
			MessageBox::Show( "���� �� ������!" );
		}
		else 
		{
			progressBar1->Value = 0 ;
			progressBar1->Maximum = lim ;
			progressBar1->Visible=true;	
			
			dataGridView1->Visible=false;

		// ������� ��������.
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
						MessageBox::Show("������ ���������� �����! " + e->ToString() );
					}
				}
		//----------------------------
		// �������������� ������ ���� ���������� ����
				if((z[511]==13)&&(z[512]==10))		// ���� ����� �����
				{
					//--- ����� �������� ����������
					// ���� �� ������� � ��������� ������ - ���� ������� � ��� ������ ����� ������ 
					// (z[53]&16) =1 (1140)    =0 (660)
					if(U_da == 0)
					{
						if ((z[399]==13)&&(z[400]==10)&&(z[499]==13)&&(z[500]==10)&&(z[353]&16)&&(z[453]&16)) {	label33->Text = "1140 �"; U_da = 1; }
						else 						 {	label33->Text = "660 �";  U_da = 1; }
					}
					
					//----- ���� ������� ���� ����� � ����� 512 --------------------
					for(int s = 0; s < 5; s++)
					{
						if ((z[99+(100*s)] ==13)&&(z[100+(100*s)]==10)&&(z[1+(100*s)]==(monthCalendar1->SelectionStart.Day))&&(z[2+(100*s)]==(monthCalendar1->SelectionStart.Month))&&(z[3+(100*s)]==(monthCalendar1->SelectionStart.Year)-2000)&&(z[4+(100*s)]<60)&&(z[5+(100*s)]<60)&&(z[6+(100*s)]<60)) 
						{	
							/*-- ���������� �� U���� --*/
							if((z[36+(100*s)]&4)>0) block_U = "���������";
							else 					block_U = "";
						
							/*-- ���������� �� I --*/
							if((z[36+(100*s)]&8)>0) block_I = "���������";
							else 					block_I = "";
							
							/*-- ������ �� U���� --*/	
							if((z[53+(100*s)]&4)==0) 	error_U = "��������" + "\n" + "����������� ���";
							else 						error_U = "";		
							if(z[53+(100*s)]&8) 		error_U = "����� ����";
							else 						error_U = "";

							/*-- ���������� ������� --*/
							if (z[53+(100*s)]&16) 	U_set =(z[54+(100*s)]*7).ToString() + " (" + ((z[54+(100*s)]*70)/114).ToString() + "%U���)" ; 	// 1140�	
							else					U_set =(z[54+(100*s)]*7).ToString() + " (" + ((z[54+(100*s)]*70)/66).ToString()  + "%U���)" ;	// 660�
							
							switch (ch)
							{
								case 3:								
								tabl_U->Rows->Add(my_time(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)]), U_set, error_U, block_U, block_I);
								break;
								
								case 2:								
								tabl_U->Rows->Add(my_time(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)]), U_set, error_U, block_I);
								break;
								
								case 1:								
								tabl_U->Rows->Add(my_time(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)]), U_set, error_U, block_U);
								break;
								
								case 0:								
								tabl_U->Rows->Add(my_time(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)]), U_set, error_U);
							}								
						}	
					}		
				}	
			}
		}	
					
		fs->Close();							// ������� �����
		
		dataGridView1->Visible=true;			// �������� �������
		dataGridView1->DataSource = tabl_U;		// ��������� �������

		//-- ����� ����������� �� ������� ������� (�����) �� �����������
		dataGridView1->Sort( dataGridView1->Columns[0], ListSortDirection::Ascending);

		label23->Text = "������ ��: " + monthCalendar1->SelectionStart.Day.ToString("D2")+"-"+monthCalendar1->SelectionStart.Month.ToString("D2")+"-"+monthCalendar1->SelectionStart.Year.ToString("D4")+" �";	
		
		
		progressBar1->Visible=false;			// �������� ��������

		//-- c��� ���������� -------
		SYSTEMTIME st1;
		GetSystemTime(&st1);
		//- ������� ---
		if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
		else{
			if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
			else /* == */				label24->Text = "";
		}
		//- ������ ---
		if(st1.wMinute>start_min)		label25->Text = (st1.wMinute-start_min).ToString("D2");
		else{
			if(st1.wMinute<start_min)	label25->Text = ((60-start_min)+st1.wMinute).ToString("D2");
			else /* == */				label25->Text = "";						
		}	
		panel1->Visible = true;
		//--------------------------
		
		//--- ����������� ������ � ��. ------------		
		button1->Enabled=true;
		button2->Enabled=true;
		button3->Enabled=true;
		button4->Enabled=true;
		button5->Enabled=true;
		button6->Enabled=true;	
		button8->Enabled=true;
		monthCalendar1->Enabled=true;
			 
	}
		// ������ ������������ ����� � ����������
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//--- �������� �� ���������� ����
		if (date_exist()==0) ;
		else 
		{
			MessageBox::Show("������ � ��������� ����� �� ��������������!\n"+"�������� ���� �� ������.");
			return;
		}
			 
		 //--- ���������� ������ � ��. ------------		
		button1->Enabled=false;
		button2->Enabled=false;
		button3->Enabled=false;
		button4->Enabled=false;
		button5->Enabled=false;
		button7->Enabled=false;	
		button8->Enabled=false;
		// monthCalendar1->Enabled=false;
		
		//--- �������� ��������
		progressBar1->Visible=false;
		//--- �������� ������� ---
		dataGridView1->Visible=false;	
		
		//--- �������� � ������ ----
		//- ���� � label21
		int lim = 121875*30;	// ��� 1872 000 000 ����
		unsigned char z[513];

		//--- ����� ������� ----
		String^ m_error = "";		
		
		//--- ��� ������������ ����������� ������ � ��������� � ������������ ����������� 660/1140
		unsigned char ustavki_da = 0;
		unsigned char U_da = 0;		

		//--- ������� � dataGridView1 ---------
		DataTable ^ tabl_z = gcnew DataTable();
		
		//--- ��������� ����� ������� ----
		/*
		tabl_z->Columns->Add("�����");  // ����� ���� ������
		if((maska&power(1))||(maska&power(8))||(maska&power(15)))						tabl_z->Columns->Add("�1");  // �1
		if((maska&power(2))||(maska&power(9))||(maska&power(16)))						tabl_z->Columns->Add("�2");  // �2
		if((maska&power(3))||(maska&power(10))||(maska&power(17)))						tabl_z->Columns->Add("�3");  // �3
		if((maska&power(4))||(maska&power(11))||(maska&power(17)))						tabl_z->Columns->Add("�4");  // �4
		if((maska&power(5))||(maska&power(12))||(maska&power(18))||(maska&power(21)))	tabl_z->Columns->Add("�5");  // �5
		if((maska&power(6))||(maska&power(13))||(maska&power(19))||(maska&power(22)))	tabl_z->Columns->Add("�6");  // �6
		if((maska&power(7))||(maska&power(14))||(maska&power(20)))						tabl_z->Columns->Add("�7");  // �7	
		if((maska&power(23))||(maska&power(24)))										tabl_z->Columns->Add("��������");  // ��������
		*/		
		
		// ����� ������ ��� ���� �������
		tabl_z->Columns->Add("�����");  						// ����� 
		tabl_z->Columns->Add("�1");  							// �1
		tabl_z->Columns->Add("�2");  							// �2
		tabl_z->Columns->Add("�3");  							// �3
		tabl_z->Columns->Add("�4");  							// �4
		tabl_z->Columns->Add("�5");  							// �5
		tabl_z->Columns->Add("�6");  							// �6
		tabl_z->Columns->Add("�7");  							// �7	
		tabl_z->Columns->Add("��������");  						// ��������	

		//-- ����� ���������� �������� ���������� --------
		panel1->Visible = false;
		SYSTEMTIME st;
		GetSystemTime(&st);
		//label24->Text = "00";  	// �������
		//label25->Text = "00";		// ������	
		DWORD start_sec = st.wSecond;
		DWORD start_min = st.wMinute;						
		//------------------------------------------------	
		
		//*****************************************************************************
		//--- ������ � ������ --------
			
		// ������� ������ ����
		String^ path = label21->Text;
		FileStream^ fs = gcnew FileStream(path, FileMode::Open, FileAccess::Read);
		// ��������, ���� ����� ���.
		if ( File::Exists( path )==false )
		{
			MessageBox::Show( "���� �� ������!" );
		}
		else 
		{
			progressBar1->Value = 0 ;
			progressBar1->Maximum = lim ;
			progressBar1->Visible=true;	
			
			dataGridView1->Visible=false;			
			
		// ������� ��������.
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
						MessageBox::Show("������ ���������� �����! " + e->ToString() );
					}
				}
		//--- ���� 512 -------------------
		// �������������� ������ ���� ���������� ����
				if((z[511]==13)&&(z[512]==10))		// ���� ����� �����
				{

	///--- ����� �������� ����������
	/// ���� � ������� � ��������� ������ - ���� ������� � ��� ������ ����� ������
	/// (z[53]&16) =1 (1140)    =0 (660)
	///--- �������� ��������
	///--------- �1 -------------|-------- �2 ---------------|------------ �3 -----------|------------ �4 -----------|------------ �5 -----------|------------ �6 -----------|------------ �7 -----------|      
	///- z[7]-���1-|- z[9]-���2--|- z[11]-���1-|- z[13]-���2-|- z[15]-���1-|- z[17]-���2-|- z[19]-���1-|- z[21]-���2-|- z[23]-���1-|- z[25]-���2-|- z[27]-���1-|- z[29]-���2-|- z[31]-���1-|- z[33]-���2-|
	/// (z[7]&48)==48  P_m1= 200 | 							 |			                 |                           |                           | (z[27]&64)==32  P_m6= 22  |
	/// (z[7]&48)==32  P_m1= 160 | (z[11]&48)==32  P_m2= 110 | (z[15]&48)==32  P_m3= 22  | (z[19]&48)==32  P_m4= 22  |	                         | (z[27]&48)==32  P_m6= 18  | (z[31]&48)==32  P_m6= 18  |
	/// (z[7]&48)==16  P_m1= 132 | (z[11]&48)==16  P_m2= 75  | (z[15]&48)==16  P_m3= 18  | (z[19]&48)==16  P_m4= 18  | (z[23]&48)==16  P_m5= 37  | (z[27]&48)==16  P_m6= 15  | (z[31]&48)==16  P_m6= 15  |  
	/// (z[7]&48)==0   P_m1= 110 | (z[11]&48)==0   P_m2= 55  | (z[15]&48)==0   P_m3= 15  | (z[19]&48)==0   P_m4= 15  | (z[23]&48)==0   P_m5= 30  | (z[27]&48)==0   P_m6= 11  | (z[31]&48)==0   P_m6= 5   |   
					
					if(U_da == 0)
					{
						
						if ((z[399]==13)&&(z[400]==10)&&(z[499]==13)&&(z[500]==10)&&(z[353]&16)&&(z[453]&16)) {	label33->Text = "1140 �"; ust_U = 1140;}
						else 						 {	label33->Text = "660 �";  ust_U = 660;  }
						
						//--- ���������� �������� �������� ---------------
						if ((z[399]==13)&&(z[400]==10)&&(z[499]==13)&&(z[500]==10))
						{
							//--- �1 ���1  ------
							switch(z[7]&48){
								case 48:
									P_m1= 200;
								break;
								case 32:
									P_m1= 160;
								break;
								case 16:
									P_m1= 132;
								break;
								case 0:
									P_m1= 110;
								break;
								default:
									P_m1= 0;
							}
							//--- �2 ���1  ------
							switch(z[11]&48){
								case 32:
									P_m2= 110;
								break;
								case 16:
									P_m2= 75;
								break;
								case 0:
									P_m2= 55;
								break;
								default:
									P_m2= 0;
							}
							//--- �3 ���1  ------
							switch(z[15]&48){
								case 32:
									P_m3= 22;
								break;
								case 16:
									P_m3= 18;
								break;
								case 0:
									P_m3= 15;
								break;
								default:
									P_m3= 0;
							}
							//--- �4 ���1  ------
							switch(z[19]&48){
								case 32:
									P_m4= 22;
								break;
								case 16:
									P_m4= 18;
								break;
								case 0:
									P_m4= 15;
								break;
								default:
									P_m4= 0;
							}
							//--- �5 ���1  ------
							switch(z[23]&48){
								case 16:
									P_m5= 37;
								break;
								case 0:
									P_m5= 30;
								break;
								default:
									P_m5= 0;
							}
							//--- �6 ���1  ------
							switch(z[27]&48){
								case 48:
									P_m6= 22;
								break;
								case 32:
									P_m6= 18;
								break;
								case 16:
									P_m6= 15;
								break;
								case 0:
									P_m6= 11;
								break;
								default:
									P_m6= 0;
							}
							//--- �7 ���1  ------
							switch(z[31]&48){
								case 32:
									P_m7= 18;
								break;
								case 16:
									P_m7= 15;
								break;
								case 0:
									P_m7= 5;
								break;
								default:
									P_m7= 0;
							}
						}						
						U_da = 1;
					}

					//--- ����� ������� �� �������� ���� ��� �������
					// ������� ��� ������ ���� �� ���� ������ 
					// if(((maska&power(1))||(maska&power(2))||(maska&power(3))||(maska&power(4))||(maska&power(5))||(maska&power(6))||(maska&power(7)))&&(ustavki_da==0)){
					if(((maska&power(1))||(maska&power(2))||(maska&power(3))||(maska&power(4))||(maska&power(5))||(maska&power(6))||(maska&power(7)))&&(ustavki_da==0)){			
								
									//	  ����    �1         �2         �3         �4         �5         �6         �7      ��������
						tabl_z->Rows->Add("--", privod(1), privod(2), privod(3), privod(4), privod(5), privod(6), privod(7), "--");												
						
						if(maska&power(27)){
							tabl_z->Rows->Add("--", bkt1_2(1), bkt1_2(2), bkt1_2(3), bkt1_2(4), bkt1_2(5), bkt1_2(6), bkt1_2(7), "--");							
						}
						
						ustavki_da = 1;
					}
									
			//----- ���� ������� ���� ����� � ����� 512 --------------------
					for(int s = 0; s < 5; s++)
					{	//-  |-------------- ����� ������------------|----------------- ��������� ���� -----------------------------------------------------------------------------------------------------------------------------------------|------------------- ���������� ����� ------------------					
						if ((z[99+(100*s)]==13)&&(z[100+(100*s)]==10)&&(z[1+(100*s)]==(monthCalendar1->SelectionStart.Day))&&(z[2+(100*s)]==(monthCalendar1->SelectionStart.Month))&&(z[3+(100*s)]==(monthCalendar1->SelectionStart.Year)-2000)&&(z[4+(100*s)]<60)&&(z[5+(100*s)]<60)&&(z[6+(100*s)]<60)) 
						{	
						//--- M1 --------------------------------------------------------------------------------
							//-- �������� ����, �� ���
							if((maska&power(1))&&(maska&power(27)))
							{	m_error = (256*(15&z[7+(100*s)]) + z[8+(100*s)]).ToString() + "\n";		// 	" | "	��� �� ���1	
								m_error +=(256*(15&z[9+(100*s)]) + z[10+(100*s)]).ToString();				// ��� �� ���2	
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}
							
							//--- ������ �� ���� --------------
							/*-- �1 ��� ���1 ��� ���2 --*/			
							if((maska&power(1))&&(((z[45+(100*s)]&24)==8)||((z[48+(100*s)]&24)==8)))	
							{	m_error="��� ��������";	//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}						
							if((maska&power(1))&&(((z[45+(100*s)]&24)==16)||((z[48+(100*s)]&24)==16)))
							{	m_error="�������";			//+++++++++++ ����� ������ +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}
							if((maska&power(1))&&(((z[45+(100*s)]&24)==24)||((z[48+(100*s)]&24)==24)))
							{	m_error="��";				//+++++++++++ ����� ������ +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}				
							/*-- �1 ����  --*/
							if((maska&power(8))&&((z[52+(100*s)]&1)>0))	
							{	m_error="t� ������";		//+++++++++++ ����� ������ +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}
							/*-- �1 ���  --*/
							if((maska&power(15))&&((z[55+(100*s)]&24)==8))
							{	m_error="R� ��������";		//+++++++++++ ����� ������ +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);
							}
							if((maska&power(15))&&((z[55+(100*s)]&24)==16))
							{	m_error="R� ������";		//+++++++++++ ����� ������ +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 1, tabl_z);			
							}
								
						//--- M2 --------------------------------------------------------------------------------	
							//-- �������� ����, �� ���
							if((maska&power(2))&&(maska&power(27)))
							{	m_error  =(256*(15&z[11+(100*s)]) + z[12+(100*s)]).ToString() +  "\n";	// ��� �� ���1	
								m_error +=(256*(15&z[13+(100*s)]) + z[14+(100*s)]).ToString();			// ��� �� ���2	
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}							
							
							/*-- �2 ��� ���1 ��� ���2   --*/
							if((maska&power(2))&&(((z[45+(100*s)]&3)==1)||((z[48+(100*s)]&3)==1)))
							{	m_error="��� ��������";	//+++++++++++ ����� ������ +++++++++++
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
							if((maska&power(2))&&(((z[45+(100*s)]&3)==2)||((z[48+(100*s)]&3)==2)))
							{	m_error="�������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
							if((maska&power(2))&&(((z[45+(100*s)]&3)==3)||((z[48+(100*s)]&3)==3)))
							{	m_error="��";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
								
							/*-- �2 ����  --*/
							if((maska&power(9))&&((z[52+(100*s)]&2)>0))
							{	m_error="t� ������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
							
							/*-- �2 ���  --*/
							if((maska&power(16))&&((z[55+(100*s)]&3)==1))
							{	m_error="R� ��������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}
							if((maska&power(16))&&((z[55+(100*s)]&3)==2))
							{	m_error="R� ������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 2, tabl_z);
							}						
								
						//--- M3 --------------------------------------------------------------------------------	
							//-- �������� ����, �� ���
							if((maska&power(3))&&(maska&power(27)))
							{	m_error  =(256*(15&z[15+(100*s)]) + z[16+(100*s)]).ToString() +  "\n";	// ��� �� ���1	
								m_error +=(256*(15&z[17+(100*s)]) + z[18+(100*s)]).ToString();			// ��� �� ���2	
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 3, tabl_z);
							}	
							
							/*-- �3 ��� ���1 ��� ���2   --*/
							if((maska&power(3))&&(((z[46+(100*s)]&12)==4)||((z[49+(100*s)]&12)==4)))
							{	m_error="��� ��������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 3, tabl_z);
							}
							if((maska&power(3))&&(((z[46+(100*s)]&12)==8)||((z[49+(100*s)]&12)==8)))
							{	m_error="�������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4], z[5], z[6], m_error, 3, tabl_z);
							}
							if((maska&power(3))&&(((z[46+(100*s)]&12)==12)||((z[49+(100*s)]&12)==12)))
							{	m_error="��";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 3, tabl_z);
							}						
								
							/*-- �3 ����  --*/
							if((maska&power(10))&&((z[52+(100*s)]&4)>0))
							{	m_error="t� ������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 3, tabl_z);
							}

							/*-- �3 �4 ���  --*/
							if((maska&power(17))&&((z[56+(100*s)]&24)==8))	
							{ 	m_error="R� ��������"; 		//+++++++++++ ����� ������ +++++++++++								
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 9, tabl_z);
							}
							if((maska&power(17))&&((z[56+(100*s)]&24)==16))
							{ 	m_error="R� ������"; 			//+++++++++++ ����� ������ +++++++++++								
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 9, tabl_z);
							}
							
						//--- M4 --------------------------------------------------------------------------------	
							//-- �������� ����, �� ���
							if((maska&power(4))&&(maska&power(27)))
							{	m_error  =(256*(15&z[19+(100*s)]) + z[20+(100*s)]).ToString() +  "\n";	// ��� �� ���1	
								m_error +=(256*(15&z[21+(100*s)]) + z[22+(100*s)]).ToString();			// ��� �� ���2	
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}
							
							/*-- �4 ��� ���1 ��� ���2   --*/
							if((maska&power(4))&&(((z[46+(100*s)]&3)==1)||((z[49+(100*s)]&3)==1)))
							{	m_error="��� ��������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}
							if((maska&power(4))&&(((z[46+(100*s)]&3)==2)||((z[49+(100*s)]&3)==2)))
							{	m_error="�������";				//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}
							if((maska&power(4))&&(((z[46+(100*s)]&3)==3)||((z[49+(100*s)]&3)==3)))
							{	m_error="��";				//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}
														
							/*-- �4 ����  --*/
							if((maska&power(11))&&((z[52+(100*s)]&8)>0))
							{	m_error="t� ������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 4, tabl_z);
							}						
													
						//--- M5 --------------------------------------------------------------------------------	
							//-- �������� ����, �� ���
							if((maska&power(5))&&(maska&power(27)))
							{	m_error  =(256*(15&z[23+(100*s)]) + z[24+(100*s)]).ToString() +  "\n";	// ��� �� ���1
								m_error +=(256*(15&z[25+(100*s)]) + z[26+(100*s)]).ToString();			// ��� �� ���2
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
							
							/*-- �5 ��� ���1 ��� ���2   --*/
							if((maska&power(5))&&(((z[47+(100*s)]&192)==64)||((z[50+(100*s)]&192)==64)))	
							{	m_error="��� ��������";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
							if((maska&power(5))&&(((z[47+(100*s)]&192)==128)||((z[50+(100*s)]&192)==128)))
							{	m_error="�������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4], z[5], z[6], m_error, 5, tabl_z);
							}
							if((maska&power(5))&&(((z[47+(100*s)]&192)==192)||((z[50+(100*s)]&192)==192)))	
							{	m_error="��";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}						
													
							/*-- �5 ����  --*/
							if((maska&power(12))&&((z[52+(100*s)]&16)>0))	
							{	m_error="t� ������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
							
							/*-- �5 ���  --*/
							if((maska&power(18))&&((z[56+(100*s)]&3)==1))	
							{	m_error="R� ��������"; 		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
							if((maska&power(18))&&((z[56+(100*s)]&3)==2))
							{	m_error="R� ������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}
													
							/*-- �5 ���  --*/
							if((maska&power(21))&&((z[74+(100*s)]&8)>0))	
							{	m_error="R� ������"; 		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 5, tabl_z);
							}						
										
						//--- M6 --------------------------------------------------------------------------------	
							//-- �������� ����, �� ���
							if((maska&power(6))&&(maska&power(27)))
							{	m_error  =(256*(15&z[27+(100*s)]) + z[28+(100*s)]).ToString() +  "\n";	// ��� �� ���1	
								m_error +=(256*(15&z[27+(100*s)]) + z[28+(100*s)]).ToString();			// ��� �� ���2
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
							
							/*-- �6 ��� ���1 ��� ���2   --*/
							if((maska&power(6))&&(((z[47+(100*s)]&48)==16)||((z[50+(100*s)]&48)==16)))	
							{	m_error="��� ��������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4], z[5], z[6], m_error, 6, tabl_z);
							}
							if((maska&power(6))&&(((z[47+(100*s)]&48)==32)||((z[50+(100*s)]&48)==32)))	
							{	m_error="�������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4], z[5], z[6], m_error, 6, tabl_z);
							}
							if((maska&power(6))&&(((z[47+(100*s)]&48)==48)||((z[50+(100*s)]&48)==48)))	
							{	m_error="��";			//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
														
							/*-- �6 ����  --*/
							if((maska&power(13))&&((z[52+(100*s)]&32)>0))	
							{	m_error="t� ������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
														
							/*-- �6 ���  --*/
							if((maska&power(19))&&((z[57+(100*s)]&24)==8))	
							{	m_error="R� ��������"; 		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
							if((maska&power(19))&&((z[57+(100*s)]&24)==16))	
							{	m_error="R� ������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
														
							/*-- �6 ���  --*/
							if((maska&power(22))&&((z[74+(100*s)]&4)>0))	
							{	m_error="R� ������"; 		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 6, tabl_z);
							}
							
						//--- M7 --------------------------------------------------------------------------------	
							//-- �������� ����, �� ���
							if((maska&power(7))&&(maska&power(27)))
							{	m_error  =(0.1*(256*(15&z[31+(100*s)]) + z[32+(100*s)])).ToString() +  "\n";	// ��� �� ���1	
								m_error +=(0.1*(256*(15&z[33+(100*s)]) + z[34+(100*s)])).ToString();			// ��� �� ���2
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							
							/*-- �7 ��� ���1 ��� ���2   --*/
							if((maska&power(7))&&(((z[47+(100*s)]&3)==1)||((z[50+(100*s)]&3)==1)))	
							{	m_error="��� ��������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							if((maska&power(7))&&(((z[47+(100*s)]&3)==2)||((z[50+(100*s)]&3)==2)))	
							{	m_error="�������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							if((maska&power(7))&&(((z[47+(100*s)]&3)==3)||((z[50+(100*s)]&3)==3)))	
							{	m_error="��";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
														
							/*-- �7 ����  --*/
							if((maska&power(14))&&((z[52+(100*s)]&128)>0))	
							{	m_error="t� ������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
												
							/*-- �7 ���  --*/
							if((maska&power(20))&&((z[56+(100*s)]&192)==64))	
							{	m_error="R� ��������"; 		//+++++++++++ ����� ������ +++++++++++	 + "\n"+ z[56+(100*s)].ToString()				
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							if((maska&power(20))&&((z[56+(100*s)]&192)==128))	
							{m_error="R� ������";		//+++++++++++ ����� ������ +++++++++++	  + "\n"+ z[56+(100*s)].ToString()				
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 7, tabl_z);
							}
							
						//--- M������� --------------------------------------------------------------------------------	
							if((maska&power(23))&&((z[65+(100*s)]&2)>0))	
							{	m_error="t� ������"; 		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 8, tabl_z);
							}
							if((maska&power(24))&&((z[65+(100*s)]&1)>0))	
							{m_error="�������";		//+++++++++++ ����� ������ +++++++++++					
								AddRow(z[4+(100*s)], z[5+(100*s)], z[6+(100*s)], m_error, 8, tabl_z);
							}					
						}					
					}				
				}
		//--- / ���� 512  -------------------		
			}			
		}			
		fs->Close();		
		progressBar1->Visible=false;			// �������� ��������			

		//--- / ������ � ������ --------
		
		dataGridView1->Visible=true;			// �������� �������
		dataGridView1->DataSource = tabl_z;		// ��������� �������
		//-- ����� ����������� �� ������� ������� (�����) �� �����������
		dataGridView1->Sort( dataGridView1->Columns[0], ListSortDirection::Ascending);

		label23->Text = "������ ��: " + monthCalendar1->SelectionStart.Day.ToString("D2")+"-"+monthCalendar1->SelectionStart.Month.ToString("D2")+"-"+monthCalendar1->SelectionStart.Year.ToString("D4")+" �";	
		
		//-- c��� ���������� -------
		SYSTEMTIME st1;
		GetSystemTime(&st1);
		//- ������� ---
		if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
		else{
			if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
			else /* == */				label24->Text = "";
		}
		//- ������ ---
		if(st1.wMinute>start_min)		label25->Text = (st1.wMinute-start_min).ToString("D2");
		else{
			if(st1.wMinute<start_min)	label25->Text = ((60-start_min)+st1.wMinute).ToString("D2");
			else /* == */				label25->Text = "";						
		}	
		panel1->Visible = true;
		//--------------------------		
		
		//--- ����������� ������ � ��. ------------		
		button1->Enabled=true;
		button2->Enabled=true;
		button3->Enabled=true;
		button4->Enabled=true;
		button5->Enabled=true;
		button7->Enabled=true;	
		button8->Enabled=true;
		monthCalendar1->Enabled=true;	
	}
		// ��������� ��������� ������� ��� ������ ��� ������
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
		
		if(checkBox27->Checked==true) maska |= power(27);
		else						  maska &= ~power(27);		// 2^27
/*		if(checkBox28->Checked==true) maska |= power(28);
		else						  maska &= ~power(28);	*/// 2^28	����������	
		
				
		if((maska>0)&&label21->Text != "") 	button6->Enabled=true;		// ������� � ���� ������ ������ 
		else								button6->Enabled=false;		// �������� ������ ���� ������ �� �������

		//--- �������� �������� ����� � ���������� - �������� ���� ���������� ������ �� ����
		if((checkBox1->Checked==true)||(checkBox2->Checked==true)||(checkBox3->Checked==true)||(checkBox4->Checked==true)||(checkBox5->Checked==true)||(checkBox6->Checked==true)||(checkBox7->Checked==true))
		{
			checkBox27->Enabled = true;
			label27->ForeColor = System::Drawing::Color::Black;
			label28->ForeColor = System::Drawing::Color::Black;  // ����������
		}
		else
		{
			checkBox27->Enabled = false;
			checkBox27->Checked = false;
		//	checkBox28->Enabled = false;  // ����������
		//	checkBox28->Checked = false;  // ����������
			label27->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			label28->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			label28->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		}

		//--- ���������� ������� � ����������� �� ���� ---
/*		if(checkBox27->Checked==true)
		{
			checkBox28->Enabled = true;
			label29->ForeColor = System::Drawing::Color::Black;			
		}
		else
		{
			checkBox28->Enabled = false;
			checkBox28->Checked = false;			
			label29->ForeColor = System::Drawing::SystemColors::ButtonShadow;			
		}
*/
		//label30->Text = maska.ToString();

	}
	//--- �������������/������ ��������� �����
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Visible = false;
		button4->Enabled  = false;  // ������� ��� 
		button5->Enabled  = false;  // �������� ���
		button6->Enabled  = false;  // ��� ������
		button7->Enabled  = false;  // U����
		button8->Enabled  = false;  // ��������� PDF
		maska = 0;
		label21->Text = "";
		label22->Text = "";
		label23->Text = "";
		label24->Text = "00";
		label25->Text = "00";
		label26->Text = ":";
		label33->Text = "";
		panel1->Visible = false;
		progressBar1->Visible=false;
		
		//-- �������� �������� �����, ���������� � ����� ����� � ����������
		checkBox27->Enabled = false;
	//	checkBox28->Enabled = false;  // ����������
		
		//label21->Text = "E:\������_mzsha\VS\BB_Reader\����� dat\4 ���.dat";
	}
	
	//---  ������������� ������� ��� ������ ----
private: String^ my_time(unsigned char my_hour, unsigned char my_minute, unsigned char my_sec){
		return (my_hour.ToString("D2") + ":" + my_minute.ToString("D2") + ":" + my_sec.ToString("D2"));
	}
	
	//---  ������������� ����  ----
//private: String^ my_data(unsigned char my_day, unsigned char my_month, unsigned char my_year){
//		return (my_day.ToString("D2") + "-" + my_month.ToString("D2") + "-" + (2000+my_year).ToString("D4")  +" �");
//	}

	//--- ������ ����� 512 ���� - ����� ��� ���� ���� - ����������� ������� ��� � �������
private: System::Void analise_date(unsigned char buf[513]){
		
		//--- ����������� ���� � ������� ----------						

		if((buf[511]==13)&&(buf[512]==10))		// ���� ����� �����
		{
			//--- ��� ����������				
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
							
			//----- ���� ������� ���� ����� � ����� 512 --------------------
			for(int s = 0; s < 5; s++)
			{			
				//----- ������ -------------------------------
				if((buf[99+(100*s)]==13)&&(buf[100+(100*s)]==10))	// ���� ����� ������
				{
					// �������� ���� � ���������� ��������� ����� ���
					//     �����				�����				���
					if((buf[1+(100*s)]<32)&&(buf[1+(100*s)]>0)&&(buf[2+(100*s)]<13)&&(buf[2+(100*s)]>0)&&(buf[3+(100*s)]<100)&&(buf[3+(100*s)]>0))
					{
						//-- ���������� �������
						//if(buf[1+(100*s)]<min_D) min_D = buf[1+(100*s)];			
						//if(buf[2+(100*s)]<min_M) min_M = buf[2+(100*s)];			
						//if(buf[3+(100*s)]<min_G) min_G = buf[3+(100*s)];
						
						if (buf[3+(100*s)]<min_G) min_G = buf[3+(100*s)];
						if ((buf[3+(100*s)]==min_G)&&(buf[2+(100*s)]<min_M)) min_M = buf[2+(100*s)];
						if ((buf[3+(100*s)]==min_G)&&(buf[2+(100*s)]==min_M)&&(buf[1+(100*s)]<min_D)) min_D = buf[1+(100*s)];
					
						//-- ���������� ��������
						//if(buf[1+(100*s)]>max_D) max_D = buf[1+(100*s)];
						//if(buf[2+(100*s)]>max_M) max_M = buf[2+(100*s)];
						//if(buf[3+(100*s)]>max_G) max_G = buf[3+(100*s)];
						
						if (buf[3+(100*s)]>max_G) max_G = buf[3+(100*s)];
						if ((buf[3+(100*s)]==max_G)&&(buf[2+(100*s)]>max_M)) max_M = buf[2+(100*s)];
						if ((buf[3+(100*s)]==max_G)&&(buf[2+(100*s)]==max_M)&&(buf[1+(100*s)]>max_D)) max_D = buf[1+(100*s)];

						norma = 1;
										
						// � ������ ������ ����� ����� ����
						if (!(listBox1->Items->Contains(buf[1+(100*s)].ToString("D2")+"-"+buf[2+(100*s)].ToString("D2")+"-"+(2000+buf[3+(100*s)]).ToString("D4") +" �"))) listBox1->Items->Add(buf[1+(100*s)].ToString("D2")+"-"+buf[2+(100*s)].ToString("D2")+"-"+(2000+buf[3+(100*s)]).ToString("D4") +" �");								
									
						// ��� �������� ��������� ����� ������������ ����� �� ���� ��� ������������ ������� ����������� �������
						// ����	(�1)-> ������
						//		(�2)-> ������ 
						//		(�3)-> ������ 
						//		(�4)-> ������ 
						//		(�5)-> ������ 
						//		(�6)-> ������ 																											
						//		(�7)-> ������																																			
						//      �������� -> ������	
					}											
				}
			}					
		}
	}
	
	//--- ����� ����������� ����� ������� ��� � ������ ---------
private: void result_date(){	
	
		if(norma == 1) {

			listBox1->Visible = true;
			label1->Text = "������ � "  + min_D.ToString("D2") + "-" + min_M.ToString("D2") + "-" + (2000+min_G).ToString("D4") + 
								 " �� " + max_D.ToString("D2") + "-" + max_M.ToString("D2") + "-" + (2000+max_G).ToString("D4");
		
			//--- ������ ��������� �� ��������� ���-��� -------
			monthCalendar1->MaxDate = System::DateTime( max_G+2000, max_M, max_D , 0, 0, 0, 0 );
			monthCalendar1->MinDate = System::DateTime( min_G+2000, min_M, min_D , 0, 0, 0, 0 );
					
			//--- �����  �� max --------
			monthCalendar1->SelectionStart = System::DateTime( max_G+2000, max_M, max_D , 0, 0, 0, 0 );		// ����� �������� 	
					
			//--- ������ ���������� -----							
			switch (vers)
			{
				case 2:
				label22->Text = "����.02";
				break;
				case 1:
				label22->Text = "����.01";				
				break;
				default:
				label22->Text = "-";						
			}			
			
			if(label21->Text!=""){		//-- ���� �� ������ ������� ����
			//--- ��������� ������ ----------
				button4->Enabled  = true;  // ������� ��� 
				button5->Enabled  = true;  // �������� ���
				button7->Enabled  = true;  // U����
			}
		}					
		else {
			label1->Text = "������ ���!";
			listBox1->Visible = false;

			//--- ����� ������ ----------
			button4->Enabled  = false;  // ������� ��� 
			button5->Enabled  = false;  // �������� ���
			button7->Enabled  = false;  // U����
		}
	}
	
	//--- power(1) = 2^0 ----
private: unsigned int power(unsigned int n){
		unsigned int result = 1;
		if (n==0) return 1;
		for(unsigned int i=0; i<(n-1); i++){ 
			result *= 2;
		}
		return result;
	}
	
	//--- �������� ������ ���� ��������� �� ������� � listBox1 ----
private: unsigned int date_exist(){
		if (listBox1->Items->Contains((monthCalendar1->SelectionStart.Day).ToString("D2")+"-"+(monthCalendar1->SelectionStart.Month).ToString("D2")+"-"+(monthCalendar1->SelectionStart.Year).ToString("D4")+" �")) 
		{		
			return 0;
		}
		else 	return 1;		
	}
	//-- ����� ������� �� ���� ����������, ���� ������� ������ ��������
private: String ^ privod(unsigned char nnn){	// - nnn-����� �������			
		
		switch (nnn){
			case 1:
				if(maska&power(1))	return ustavki(P_m1);				
				else	return ("");	
			break;
			case 2:
				if(maska&power(2))	return ustavki(P_m2);				
				else	return ("");	
			break;
			case 3:
				if(maska&power(3))	return ustavki(P_m3);				
				else	return ("");				
			break;
			case 4:
				if(maska&power(4))	return ustavki(P_m4);				
				else	return ("");	
			break;
			case 5:
				if(maska&power(5))	return ustavki(P_m5);				
				else	return ("");	
			break;
			case 6:
				if(maska&power(6))	return ustavki(P_m6);				
				else	return ("");	
			break;
			case 7:
				if(maska&power(7))	return ustavki(P_m7);				
				else	return ("");	
			break;
			default:
			return ("");
		}		
}

private: String ^ bkt1_2(unsigned char i){
		if(maska&power(i))	return "  ��� (�)" + "\n" + "  ���1" + "\n"  + "  ���2";				
		else	return ("");
}
	
	//-- ����� ������� �� ���� ���������� � ����������� ��
	//-- ������� ���������� ������� 660/1140, �������� ������� � ���������� ���������� 01/02
private: String ^ ustavki(unsigned char m){	// - m-�������� �������		
		
		String ^ i820_720  ;
		String ^ i820_470  ;
		String ^ i400_250  ;
		String ^ i400_195  ;	
	
		//--- ������ ���������� -----							
		switch (vers)
		{
			case 2:
			i820_720 = "820";
			i820_470 = "820";	// label22->Text = "����.02";
			i400_250 = "400";
			i400_195 = "400";
			break;
			
			case 1:
			i820_720 = "720";
			i820_470 = "470";	// label22->Text = "����.01";
			i400_250 = "250";
			i400_195 = "195";			
			break;
			
			default:
			i820_720 = "820";
			i820_470 = "820";	// label22->Text = "����.02";
			i400_250 = "400";
			i400_195 = "400";						
		}
		
		switch (ust_U){	
				case 660: //---  660 � ----------------------		
					switch (m){
						case 200:	// ���				
						return     ("P = "       + "200"  + " ���" + "\n" +
									"I��� = "    + "223"  + " A"   + "\n" +
									"I�.���. = " + "267"  + " A"   + "\n" +
									"I���. = "   + "557"  + " A"   + "\n" +
									"I����. = "  + "2676" + " A"		  );						
						break;				
						case 160:	// ���		
							return ("P = "       + "160"  + " ���" + "\n" +
									"I��� = "    + "176"  + " A"   + "\n" +
									"I�.���. = " + "211"  + " A"   + "\n" +
									"I���. = "   + "440"  + " A"   + "\n" +
									"I����. = "  + "2112" + " A"		  );				
						break;				
						case 132:	// ���	
							return ("P = "       + "132"  + " ���" + "\n" +
									"I��� = "    + "144"  + " A"   + "\n" +
									"I�.���. = " + "173"  + " A"   + "\n" +
									"I���. = "   + "360"  + " A"   + "\n" +
									"I����. = "  + "1730" + " A"		  );					
						break;	
						case 110:	// ���	
							return ("P = "       + "110"  + " ���" + "\n" +
									"I��� = "    + "121"  + " A"   + "\n" +
									"I�.���. = " + "145"  + " A"   + "\n" +
									"I���. = "   + "304"  + " A"   + "\n" +
									"I����. = "  + "1450" + " A"	  	 );						
						break;
						case 75:	// ���		
							return ("P = "       + "75"   + " ���" + "\n" +
									"I��� = "    + "82"   + " A"   + "\n" +
									"I�.���. = " + "99"   + " A"   + "\n" +
									"I���. = "   + "207"  + " A"   + "\n" +
									"I����. = "  + "1000" + " A"		  );							
						break;				
						case 55:	// ���	
							return ("P = "       + "55"  + " ���" + "\n" +
									"I��� = "    + "60"  + " A"   + "\n" +
									"I�.���. = " + "72"  + " A"   + "\n" +
									"I���. = "   + "151" + " A"   + "\n" +
									"I����. = "  + i820_720 + " A"		 );		//  01 ���� - 720 �	 02 ���� - 820 �			
						break;				
						case 37:
							return ("P = "       + "37"  + " ���" + "\n" +
									"I��� = "    + "43"  + " A"   + "\n" +
									"I�.���. = " + "52"  + " A"   + "\n" +
									"I���. = "   + "109" + " A"   + "\n" +
									"I����. = "  + "520" + " A"			 );		
						break;				
						case 30:
							return ("P = "       + "30"  + " ���" + "\n" +
									"I��� = "    + "31"  + " A"   + "\n" +
									"I�.���. = " + "37"  + " A"   + "\n" +
									"I���. = "   + "77"  + " A"   + "\n" +
									"I����. = "  + "370" + " A"			 );		
						break;	
						case 22:
							return ("P = "       + "22"  + " ���" + "\n" +
									"I��� = "    + "18"  + " A"   + "\n" +
									"I�.���. = " + "28"  + " A"   + "\n" +
									"I���. = "   + "58"  + " A"   + "\n" +
									"I����. = "  + i400_250 + " A"		 );		 //  01 ���� - 250 �
						break;			
						case 18:
							return ("P = "       + "18,5"  + " ���" + "\n" +
									"I��� = "    + "21"    + " A"   + "\n" +
									"I�.���. = " + "25"    + " A"   + "\n" +
									"I���. = "   + "53"    + " A"   + "\n" +
									"I����. = "  + i400_250   + " A"	   );	 //  01 ���� - 250 �			
						break;				
						case 15:
							return ("P = "       + "15"    + " ���" + "\n" +
									"I��� = "    + "17,5"  + " A"   + "\n" +
									"I�.���. = " + "21"    + " A"   + "\n" +
									"I���. = "   + "44"    + " A"   + "\n" +
									"I����. = "  + i400_250   + " A"	   );	 //  01 ���� - 250 �				
						break;	
						case 11:
							return ("P = "       + "11"    + " ���" + "\n" +
									"I��� = "    + "12,5"  + " A"   + "\n" +
									"I�.���. = " + "15"    + " A"   + "\n" +
									"I���. = "   + "31"    + " A"   + "\n" +
									"I����. = "  + i400_250   + " A"	   );	 //  01 ���� - 250 �			
						break;	
						case 5:
							return ("P = "       + "5,5"   + " ���" + "\n" +
									"I��� = "    + "6,6"   + " A"   + "\n" +
									"I�.���. = " + "7,9"   + " A"   + "\n" +
									"I���. = "   + "16,9"  + " A"   + "\n" +
									"I����. = "  + "79"    + " A"	  	   );			
						break;				
						default:
						return ("");			
					}
				break;	
				
				case 1140:	//---  1140 � ----------------------	
					switch (m){
						case 200:	// ���				
						return     ("P = "       + "200"  + " ���" + "\n" +
									"I��� = "    + "128"  + " A"   + "\n" +
									"I�.���. = " + "154"  + " A"   + "\n" +
									"I���. = "   + "332"  + " A"   + "\n" +
									"I����. = "  + "1694" + " A"		  );						
						break;				
						case 160:	// ���		
							return ("P = "       + "160"  + " ���" + "\n" +
									"I��� = "    + "100"  + " A"   + "\n" +
									"I�.���. = " + "121"  + " A"   + "\n" +
									"I���. = "   + "252"  + " A"   + "\n" +
									"I����. = "  + "1200" + " A"		  );				
						break;				
						case 132:	// ���	
							return ("P = "       + "132"  + " ���" + "\n" +
									"I��� = "    + "82"   + " A"   + "\n" +
									"I�.���. = " + "98"   + " A"   + "\n" +
									"I���. = "   + "205"  + " A"   + "\n" +
									"I����. = "  + "1012" + " A"		  );						
						break;	
						case 110:	// ���	
							return ("P = "       + "110" + " ���" + "\n" +
									"I��� = "    + "71"  + " A"   + "\n" +
									"I�.���. = " + "85"  + " A"   + "\n" +
									"I���. = "   + "176" + " A"   + "\n" +
									"I����. = "  + "870" + " A"			 );						
						break;
						case 75:	// ���		
							return ("P = "       + "75"  + " ���" + "\n" +
									"I��� = "    + "47"  + " A"   + "\n" +
									"I�.���. = " + "57"  + " A"   + "\n" +
									"I���. = "   + "120" + " A"   + "\n" +
									"I����. = "  + "570" + " A"			 );							
						break;				
						case 55:	// ���	
							return ("P = "       + "55"  + " ���" + "\n" +
									"I��� = "    + "35"  + " A"   + "\n" +
									"I�.���. = " + "42"  + " A"   + "\n" +
									"I���. = "   + "88"  + " A"   + "\n" +
									"I����. = "  + i820_470 + " A"		 );	   //  01 ���� - 470 �				
						break;				
						case 37:
							return ("P = "       + "37"  + " ���" + "\n" +
									"I��� = "    + "25"  + " A"   + "\n" +
									"I�.���. = " + "30"  + " A"   + "\n" +
									"I���. = "   + "63"  + " A"   + "\n" +
									"I����. = "  + "300" + " A"			 );		
						break;				
						case 30:
							return ("P = "       + "30"  + " ���" + "\n" +
									"I��� = "    + "18"  + " A"   + "\n" +
									"I�.���. = " + "22"  + " A"   + "\n" +
									"I���. = "   + "45"  + " A"   + "\n" +
									"I����. = "  + "220" + " A"			 );		
						break;				
						case 18:
							return ("P = "       + "18,5"  + " ���" + "\n" +
									"I��� = "    + "12,5"  + " A"   + "\n" +
									"I�.���. = " + "15"    + " A"   + "\n" +
									"I���. = "   + "31"    + " A"   + "\n" +
									"I����. = "  + i400_195   + " A"	   ); 	 //  01 ���� - 195  �				
						break;
						case 22:
							return ("P = "       + "22"   + " ���" + "\n" +
									"I��� = "    + "13"   + " A"   + "\n" +
									"I�.���. = " + "16"   + " A"   + "\n" +
									"I���. = "   + "34"   + " A"   + "\n" +
									"I����. = "  + i400_195  + " A"		  ); 	 //  01 ���� - 195  �				
						break;						
						case 15:
							return ("P = "       + "15"  + " ���" + "\n" +
									"I��� = "    + "10"  + " A"   + "\n" +
									"I�.���. = " + "12"  + " A"   + "\n" +
									"I���. = "   + "25"  + " A"   + "\n" +
									"I����. = "  + i400_195 + " A"		 );	//  01 ���� - 195 �			
						break;	
						case 11:
							return ("P = "       + "11"   + " ���" + "\n" +
									"I��� = "    + "7,5"  + " A"   + "\n" +
									"I�.���. = " + "9"    + " A"   + "\n" +
									"I���. = "   + "19"   + " A"   + "\n" +
									"I����. = "  + i400_195  + " A"		  );	//  01 ���� - 195 �				
						break;	
						case 5:
							return ("P = "       + "5,5"  + " ���" + "\n" +
									"I��� = "    + "3,8"  + " A"   + "\n" +
									"I�.���. = " + "4,6"  + " A"   + "\n" +
									"I���. = "   + "9,5"  + " A"   + "\n" +
									"I����. = "  + "46"   + " A"		  );			
						break;					
						default:
						return ("");			
					}
				break;

				default:
					return ("");				
			}
		}
		

	//--- ���������� ����� ���������� ������ � ������� ���� ������ ������� � ���� ������������ ������/����������	
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
				case 8:	//M�������
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", "", "", "", "", "", error);	
				break;
				case 9:	//M3 �4 - ���
				tabl->Rows->Add(my_time(my_hour, my_minute, my_second), "", "", error, "--", "", "", "", "");	
				break;
				default:
				break;
			}
		}
		//--- C�������� PDF -----------------------------
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	
		//--- ���������� ������ � ��. ------------		
		button1->Enabled=false;
		button2->Enabled=false;
		button3->Enabled=false;
		button4->Enabled=false;
		button5->Enabled=false;
		button6->Enabled=false;
		button7->Enabled=false;			
		
		//--- �������� ��������
		progressBar1->Visible=false;	
		 
		// � ��������� �������� 
		saveFileDialog1->ShowDialog();
		String^ file = saveFileDialog1->FileName; 
		//label23->Text = file;
		
		if(file!="")
		{
			if ( File::Exists( file )==true )	MessageBox::Show("���� ��� ���������� � ����� �����������!" );			
			else								MessageBox::Show("������ ����� ��������� � ����: " +  file);
			
			//--- ������ ���������� -------
			String^ vers_pdf;
			switch (vers){
				case 2:
				vers_pdf = "����.02";
				break;
				case 1:
				vers_pdf = "����.01";
				break;
				default:
				vers_pdf = "����";				
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

			//  ����� ������� 
			for (int j=0;j<n;j++)
			{	
				PdfPCell ^cell = gcnew PdfPCell(gcnew Phrase(dataGridView1->Columns[j]->Name, font));
				cell->BackgroundColor = gcnew iTextSharp::text::Color(240, 240, 240);

				tabl->AddCell(cell);	
			}
			// ���� �������
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
				document->Add(gcnew Phrase("����� ������ � ������ ������������� �������� � ����������� " + vers_pdf + " ���. �____ " + /*zav_N.ToString() + */ "\n" + "������������ ���� �� " + (monthCalendar1->SelectionStart.Day).ToString("D2") + "." + monthCalendar1->SelectionStart.Month.ToString("D2") + "." + monthCalendar1->SelectionStart.Year.ToString()  + " �. ����������� ���������� ���� " + label33->Text +".", font));
				document->Add(tabl);
				document->Close();
				stream->Close(); 
				MessageBox::Show( "���� ��������!" );
			}     
			catch (Exception^ e)
			{
				MessageBox::Show("������ ���������� �����! " + e->ToString() );
			}			
		}
		else MessageBox::Show("��� �������� ����� �� ������!");
		 
		//--- ����������� ������ � ��. ------------		
		button1->Enabled=true;
		button2->Enabled=true;
		button3->Enabled=true;
		button4->Enabled=true;
		button5->Enabled=true;
		button6->Enabled=true;
		button7->Enabled=true;				 
	}
	//--- ���� � ���� ----------------------------
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {	
	
		if ((folderBrowserDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)&&(folderBrowserDialog1->SelectedPath->Substring(0, 1) != "C"))
		{				
			String^ my_str = folderBrowserDialog1->SelectedPath;
			my_str = my_str->Substring(0, 1);	// �������� �� ���� ������ ��� �������
			
		//----- ������ � ������ --------------------------------------------
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
					
			// ���������� ��������� ���������� (������� �����).
			HANDLE partition = INVALID_HANDLE_VALUE;
			// �������� � �������.
			PARTITION_INFORMATION partitionInfo = {0};
			// �������� � ��������� �����, �� ������� ���������� ������.
			DISK_GEOMETRY diskGeometry = {0};
			// ���������� ����� ��� ���������� ������ �������.
			HANDLE file = INVALID_HANDLE_VALUE;
			// ����� ��� ������.
			BYTE* buffer = NULL;
			// ������ ������.
			DWORD bufferSize = 0;
			// ���������� ������������ ����.
			DWORD bytesReturned = 0;
			// ���������� ���������� ����.
			DWORD bytesWritten = 0;
			// ��������� ����������.
			BOOL result;
			// ��������� ������ ����� ������.
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
				// CreateFile() �� ��������
				MessageBox::Show("���������� ������� ���� " + my_str + ":");	 
				delete[] buffer;
				CloseHandle(partition);					
			}
			else 
			{							
			// ����������� �������� � ��������� �����, �� ������� ���������� ������.
				if (!DeviceIoControl(partition,
					IOCTL_DISK_GET_DRIVE_GEOMETRY,
					NULL,
					0,
					&diskGeometry,
					sizeof (DISK_GEOMETRY),
					&bytesReturned,
					(LPOVERLAPPED)NULL))
				{
					MessageBox::Show("������ ������� �������� � ��������� ����� "  + my_str + ":");
					CloseHandle(partition);
				}
				else
				{
				// ����������� �������� � �������.
					if (!DeviceIoControl(partition,
						IOCTL_DISK_GET_PARTITION_INFO,
						NULL,
						0,&partitionInfo,
							sizeof (PARTITION_INFORMATION),
						&bytesReturned,
						(LPOVERLAPPED)NULL))
					{
						MessageBox::Show("������ ������� �������� � �������" + my_str + ":");
						CloseHandle(partition);
					}
					else
					{	
						
					//--- � ������ � �������� ��� �� -----------	
							
						saveFileDialog2->ShowDialog();
						String^ file_dat = saveFileDialog2->FileName; 		
	
						if(file_dat!="")
						{
							if (File::Exists( file_dat )==true)	MessageBox::Show("���� ��� ���������� � ����� �����������!" );			
							else								MessageBox::Show("������ ����� ��������� � ����: " + file_dat);
							
				//--- ��� ��� ����� � ������� � ������� ---------	
					
					//-------- ������ � ������ ------- 	
					
						//	�� ����� - ��������	(������ 512)		| c ����� - ���������			
						//	121875 * 30								| 73125
						//	512										| 512 * 50
						//------------								|---------------------
						//  1 872 000 000							| 1 872 000 000

							int myBuf = 512 * 50   ;    // 121875*30;
							int zykl  = 73125  ;  		// 512;

							//-- ����� ���������� �������� ���������� --------
							panel1->Visible = false;
							SYSTEMTIME st;
							GetSystemTime(&st);
							//label24->Text = "00";  	// �������
							//label25->Text = "00";	// ������	
							DWORD start_sec = st.wSecond;
							DWORD start_min = st.wMinute;						
							//------------------------------------------------	
								
							// ��������� ������ ��� ������ ���������� �������.	
							bufferSize = myBuf;        						
							buffer = new BYTE[bufferSize+1];
								
							// ���������� ������ � ����	
							FileStream^ fs = gcnew FileStream(file_dat, FileMode::Create);	// ����� ��� ��������/�������������� �����       
							BinaryWriter^ w = gcnew BinaryWriter(fs);								// ����� ��� ������ � ����								
								
							progressBar1->Value=0;
							progressBar1->Maximum = zykl;
							progressBar1->Visible = true;
							
							for (int i=1; i<(zykl+1); i++)   // ���� 326 
							{	
								result = ReadFile(partition, buffer, bufferSize, &bytesReturned, NULL);			
								if (!result)
								{
									MessageBox::Show("������ ������ �������� � �������" + my_str + ":");
									delete[] buffer;
									
								}
								else
								{
									progressBar1->Value=i;
										
									//--- ����� ��������� ������ - ���� ��������� � ���� ---
									for (int nn=0; nn<(myBuf); nn++)
									{
										try	
										{
											w->Write(buffer[nn]);
										}
										catch (Exception^ e)
										{
											MessageBox::Show("������ ������ �����! " + e->ToString() );
										}
									}										
								}
							}						
						
					//------ / ������ � ������ ---------- 
						
							progressBar1->Visible = false;
							delete[] buffer;
								
							w->Close();				// ��������� ������ ����� ���������� ������
							fs->Close();
							CloseHandle(partition);
							CloseHandle(file);								
								
				//--- / ��� ��� ����� � ������� � ������� ---------		

							//-- c��� ���������� -------
							SYSTEMTIME st1;
							GetSystemTime(&st1);
							//- ������� ---
							if(st1.wSecond>start_sec)		label24->Text = (st1.wSecond-start_sec).ToString("D2");
							else{
								if(st1.wSecond<start_sec)	label24->Text = ((60-start_sec)+st1.wSecond).ToString("D2");
								else /* == */				label24->Text = "";
							}
							//- ������ ---
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
							MessageBox::Show("���� ��� ����� �� �����!" );
							CloseHandle(partition);							
						}					
					}
				}						
			}
		}
		else 
		{
			MessageBox::Show( "���� �� ������!" );	
			label21->Text= "";
		}			
	}

	//--- �������------------------
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//-- ������������� �������� ���� ������ pictureBox1----
/*		System::Drawing::Bitmap^ Mybmp = gcnew Bitmap(900,500);
		this->pictureBox1->Image=Mybmp;		
		Graphics^ g;
		g=Graphics::FromImage(Mybmp);
		
		//-- ��������� ---------------------------------------------
		Pen^ black_2 = gcnew Pen(System::Drawing::Color::Black, 2.0);
		
		//-- ��� ��������� -------------------------
		g->DrawLine(black_2,1,1,1,500);		//-��� Y
		g->DrawLine(black_2,1,500,900,500); //-��� X        */
	}

};
}