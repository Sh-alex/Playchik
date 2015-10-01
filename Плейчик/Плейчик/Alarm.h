#pragma once
#include "bass.h"
#pragma comment (lib, "bass.lib")
#include "Song.h"

namespace Плейчик {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Сводка для Alarm
	/// </summary>
	public ref class Alarm : public System::Windows::Forms::Form
	{
	public:
		Alarm(HSTREAM A)
		{
			InitializeComponent();
			this->chan = A;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Alarm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  Time;
	private: System::Windows::Forms::RadioButton^  Intime;
	private: System::Windows::Forms::RadioButton^  Aftertime;
	private: System::Windows::Forms::TextBox^  Pathfile;

	private: System::Windows::Forms::Button^  Self;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  check;
	private: System::Windows::Forms::Button^  OK;
	private: System::Windows::Forms::Button^  cancel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Alarm::typeid));
			this->Time = (gcnew System::Windows::Forms::DateTimePicker());
			this->Intime = (gcnew System::Windows::Forms::RadioButton());
			this->Aftertime = (gcnew System::Windows::Forms::RadioButton());
			this->Pathfile = (gcnew System::Windows::Forms::TextBox());
			this->Self = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->check = (gcnew System::Windows::Forms::CheckBox());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Time
			// 
			this->Time->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Time->CustomFormat = L"";
			this->Time->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->Time->Location = System::Drawing::Point(338, 112);
			this->Time->MaxDate = System::DateTime(3000, 1, 1, 0, 0, 0, 0);
			this->Time->MinDate = System::DateTime(2014, 5, 25, 0, 0, 0, 0);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(82, 20);
			this->Time->TabIndex = 0;
			this->Time->Value = System::DateTime(2014, 5, 26, 0, 0, 0, 0);
			// 
			// Intime
			// 
			this->Intime->AutoSize = true;
			this->Intime->BackColor = System::Drawing::Color::Transparent;
			this->Intime->Checked = true;
			this->Intime->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Intime->ForeColor = System::Drawing::Color::Silver;
			this->Intime->Location = System::Drawing::Point(12, 88);
			this->Intime->Name = L"Intime";
			this->Intime->Size = System::Drawing::Size(97, 17);
			this->Intime->TabIndex = 1;
			this->Intime->TabStop = true;
			this->Intime->Text = L"В заданий час";
			this->Intime->UseVisualStyleBackColor = false;
			// 
			// Aftertime
			// 
			this->Aftertime->AutoSize = true;
			this->Aftertime->BackColor = System::Drawing::Color::Transparent;
			this->Aftertime->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Aftertime->ForeColor = System::Drawing::Color::Silver;
			this->Aftertime->Location = System::Drawing::Point(12, 116);
			this->Aftertime->Name = L"Aftertime";
			this->Aftertime->Size = System::Drawing::Size(122, 17);
			this->Aftertime->TabIndex = 2;
			this->Aftertime->Text = L"Через заданий час";
			this->Aftertime->UseVisualStyleBackColor = false;
			// 
			// Pathfile
			// 
			this->Pathfile->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Pathfile->Location = System::Drawing::Point(12, 184);
			this->Pathfile->Name = L"Pathfile";
			this->Pathfile->ReadOnly = true;
			this->Pathfile->Size = System::Drawing::Size(220, 20);
			this->Pathfile->TabIndex = 3;
			// 
			// Self
			// 
			this->Self->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Self->Location = System::Drawing::Point(229, 184);
			this->Self->Name = L"Self";
			this->Self->Size = System::Drawing::Size(30, 20);
			this->Self->TabIndex = 4;
			this->Self->Text = L". . .";
			this->Self->UseVisualStyleBackColor = true;
			this->Self->Click += gcnew System::EventHandler(this, &Alarm::Self_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->Intime);
			this->panel1->Controls->Add(this->Self);
			this->panel1->Controls->Add(this->Time);
			this->panel1->Controls->Add(this->Pathfile);
			this->panel1->Controls->Add(this->Aftertime);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(-2, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(452, 239);
			this->panel1->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(9, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Виберіть об\'єкт для відтворення:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(158, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 27);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Будильник";
			// 
			// check
			// 
			this->check->BackColor = System::Drawing::Color::Transparent;
			this->check->Cursor = System::Windows::Forms::Cursors::Hand;
			this->check->ForeColor = System::Drawing::Color::Silver;
			this->check->Location = System::Drawing::Point(29, 16);
			this->check->Margin = System::Windows::Forms::Padding(0);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(19, 20);
			this->check->TabIndex = 5;
			this->check->UseVisualStyleBackColor = false;
			this->check->CheckStateChanged += gcnew System::EventHandler(this, &Alarm::check_CheckStateChanged);
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(245, 294);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(75, 23);
			this->OK->TabIndex = 10;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &Alarm::OK_Click);
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(344, 294);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(75, 23);
			this->cancel->TabIndex = 11;
			this->cancel->Text = L"Закрити";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &Alarm::cancel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(51, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Увімкнути";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Alarm::timer1_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Alarm::openFileDialog1_FileOk);
			// 
			// Alarm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(450, 329);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->check);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Alarm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Будильник";
			this->Load += gcnew System::EventHandler(this, &Alarm::Alarm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	static DateTime Date;
	HSTREAM chan; //Канал
	HSTREAM chan1; //Канал
	static char *a;
	bool select; //Чи вибрана композиція
	Song song;
private: System::Void Alarm_Load(System::Object^  sender, System::EventArgs^  e) {
			 ToolTip^ t = gcnew ToolTip();
			 t->SetToolTip(Self, "Вибрати файл");
			  Time->Format = DateTimePickerFormat::Time;
			  if(song.alarm_on)
			  {
				  check->CheckState = CheckState::Checked;
				  Time->Value = Date;
				  Pathfile->Text = song.alarm_song;
			  }
			  else
				  Time->Value = DateTime::Now;
		 }

private: System::Void check_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(check->CheckState == CheckState::Checked)
					 panel1->Enabled = true;
				 else
					 panel1->Enabled = false;
					
				 select = false;
		 }

private: System::Void Self_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->openFileDialog1->ShowDialog();
		 }

private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(check->CheckState == CheckState::Checked)
					 song.alarm_on = true;
				 else
				 {
					 song.alarm_on = false;
					 timer1->Stop();
				 }

			   if(select == false && check->CheckState == CheckState::Checked && Pathfile->Text =="")
				 {
					 MessageBox::Show("Виберіть файл для відтворення", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					 song.alarm_on = false;
					 return;
				 }
			 if((check->CheckState == CheckState::Checked && (select || Pathfile->Text != "")) || check->CheckState == CheckState::Unchecked)
			 {
				if(Intime->Checked == true)
				{
					Date = Time->Value;
				}
				if(Aftertime->Checked == true)
				{
					Date = DateTime::Now;
					Date = Date.AddHours(Time->Value.Hour);
					Date = Date.AddMinutes(Time->Value.Minute);
					Date = Date.AddSeconds(Time->Value.Second);
				}
				
				if(Date <= DateTime::Now && song.alarm_on)
				{
					song.alarm_on = false;
					MessageBox::Show("Введено неправильний час", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					return;
				}
				
				if(check->CheckState == CheckState::Checked)
					timer1->Start();
				else
					timer1->Stop();
				Close();									
			 }
		 }

private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 song.alarm_song = openFileDialog1->FileName;
			 Pathfile->Text = song.alarm_song;
			 a = (char*)(void*)Marshal::StringToHGlobalAnsi(song.alarm_song);
			 chan1 = BASS_StreamCreateFile(FALSE, a, 0, 0, 0);
			 select = true;
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				DateTime now = DateTime::Now;
				if(now >= Date)
				{
					timer1->Stop();
					if(song.alarm_on)
					{
						BASS_ChannelStop(chan);
						BASS_ChannelPlay(chan1, FALSE);
						song.alarm_on = false;
						if(MessageBox::Show("Вимкнути", "Будильник") == System::Windows::Forms::DialogResult::OK)
							BASS_ChannelStop(chan1);
					}
				}	 
		 }



private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
