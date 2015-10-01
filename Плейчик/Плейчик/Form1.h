#pragma once
#include "Alarm.h"
#include "About.h"
#include "help.h"
#include "bass.h"
#pragma comment (lib, "bass.lib")
#include "Song.h"
#include "Playl.h"
namespace Плейчик {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Collections::Generic;

	using namespace System::Runtime::Serialization;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::IO;

	bool isMouseDown = false;
	int xOffset, yOffset; //Координати форми
	
	/// <summary>
	/// Сводка для Form1
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
	private: System::Windows::Forms::Button^  Play;
	private: System::Windows::Forms::Panel^  Title;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>

	private: System::Windows::Forms::Button^  minimize;
	private: System::Windows::Forms::Button^  close;
	private: System::Windows::Forms::ListBox^  Playlist;
	private: System::Windows::Forms::Button^  Pause;

	private: System::Windows::Forms::Button^  Back;
	private: System::Windows::Forms::Button^  Stop;
	private: System::Windows::Forms::Button^  Next;
	private: System::Windows::Forms::Button^  Delete;
	private: System::Windows::Forms::Button^  Add;
	private: System::Windows::Forms::OpenFileDialog^  Open;
	private: System::Windows::Forms::TrackBar^  Rewind;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  Al;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  допомогаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  довідкаToolStripMenuItem;





	private: Point mouseOffset;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Play = (gcnew System::Windows::Forms::Button());
			this->Title = (gcnew System::Windows::Forms::Panel());
			this->minimize = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->допомогаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Playlist = (gcnew System::Windows::Forms::ListBox());
			this->Pause = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Stop = (gcnew System::Windows::Forms::Button());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Open = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Rewind = (gcnew System::Windows::Forms::TrackBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Al = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Title->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rewind))->BeginInit();
			this->SuspendLayout();
			// 
			// Play
			// 
			this->Play->BackColor = System::Drawing::SystemColors::InfoText;
			this->Play->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Play.BackgroundImage")));
			this->Play->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Play->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->Play->FlatAppearance->BorderSize = 0;
			this->Play->Location = System::Drawing::Point(24, 129);
			this->Play->Name = L"Play";
			this->Play->Size = System::Drawing::Size(47, 44);
			this->Play->TabIndex = 0;
			this->Play->UseVisualStyleBackColor = false;
			this->Play->Click += gcnew System::EventHandler(this, &Form1::Play_Click);
			// 
			// Title
			// 
			this->Title->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Title->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Title.BackgroundImage")));
			this->Title->Controls->Add(this->minimize);
			this->Title->Controls->Add(this->close);
			this->Title->Controls->Add(this->menuStrip1);
			this->Title->Cursor = System::Windows::Forms::Cursors::Default;
			this->Title->Location = System::Drawing::Point(0, -1);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(332, 22);
			this->Title->TabIndex = 1;
			this->Title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Title_MouseDown);
			this->Title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Title_MouseMove);
			this->Title->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Title_MouseUp);
			// 
			// minimize
			// 
			this->minimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"minimize.BackgroundImage")));
			this->minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->minimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minimize->Location = System::Drawing::Point(279, 1);
			this->minimize->Name = L"minimize";
			this->minimize->Size = System::Drawing::Size(28, 23);
			this->minimize->TabIndex = 3;
			this->minimize->UseVisualStyleBackColor = true;
			this->minimize->Click += gcnew System::EventHandler(this, &Form1::minimize_Click);
			// 
			// close
			// 
			this->close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"close.BackgroundImage")));
			this->close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close->Location = System::Drawing::Point(304, 0);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(28, 23);
			this->close->TabIndex = 2;
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &Form1::close_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->допомогаToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(-9, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(37, 22);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// допомогаToolStripMenuItem
			// 
			this->допомогаToolStripMenuItem->AutoSize = false;
			this->допомогаToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"допомогаToolStripMenuItem.BackgroundImage")));
			this->допомогаToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->допомогаToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::None;
			this->допомогаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->проПрограмуToolStripMenuItem, 
				this->довідкаToolStripMenuItem});
			this->допомогаToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->допомогаToolStripMenuItem->Name = L"допомогаToolStripMenuItem";
			this->допомогаToolStripMenuItem->Padding = System::Windows::Forms::Padding(0);
			this->допомогаToolStripMenuItem->Size = System::Drawing::Size(30, 30);
			this->допомогаToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->допомогаToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->ShortcutKeyDisplayString = L"F1";
			this->проПрограмуToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::проПрограмуToolStripMenuItem_Click);
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->ShortcutKeyDisplayString = L"F2";
			this->довідкаToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			this->довідкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::довідкаToolStripMenuItem_Click);
			// 
			// Playlist
			// 
			this->Playlist->BackColor = System::Drawing::Color::MidnightBlue;
			this->Playlist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Playlist->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Playlist->ForeColor = System::Drawing::Color::Lime;
			this->Playlist->FormattingEnabled = true;
			this->Playlist->HorizontalScrollbar = true;
			this->Playlist->Location = System::Drawing::Point(1, 239);
			this->Playlist->Name = L"Playlist";
			this->Playlist->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->Playlist->Size = System::Drawing::Size(329, 182);
			this->Playlist->TabIndex = 2;
			this->Playlist->DoubleClick += gcnew System::EventHandler(this, &Form1::Playlist_DoubleClick);
			this->Playlist->MouseLeave += gcnew System::EventHandler(this, &Form1::Playlist_MouseLeave);
			this->Playlist->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Playlist_MouseMove);
			// 
			// Pause
			// 
			this->Pause->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Pause.BackgroundImage")));
			this->Pause->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pause->Location = System::Drawing::Point(77, 129);
			this->Pause->Name = L"Pause";
			this->Pause->Size = System::Drawing::Size(47, 44);
			this->Pause->TabIndex = 3;
			this->Pause->UseVisualStyleBackColor = true;
			this->Pause->Click += gcnew System::EventHandler(this, &Form1::Pause_Click);
			// 
			// Back
			// 
			this->Back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Back.BackgroundImage")));
			this->Back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Back->Location = System::Drawing::Point(183, 129);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(47, 44);
			this->Back->TabIndex = 5;
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &Form1::Back_Click);
			// 
			// Stop
			// 
			this->Stop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Stop.BackgroundImage")));
			this->Stop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Stop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stop->Location = System::Drawing::Point(130, 129);
			this->Stop->Name = L"Stop";
			this->Stop->Size = System::Drawing::Size(47, 44);
			this->Stop->TabIndex = 6;
			this->Stop->UseVisualStyleBackColor = true;
			this->Stop->Click += gcnew System::EventHandler(this, &Form1::Stop_Click);
			// 
			// Next
			// 
			this->Next->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Next.BackgroundImage")));
			this->Next->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Next->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Next->ForeColor = System::Drawing::Color::Black;
			this->Next->Location = System::Drawing::Point(236, 129);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(47, 44);
			this->Next->TabIndex = 7;
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &Form1::Next_Click);
			// 
			// Delete
			// 
			this->Delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Delete.BackgroundImage")));
			this->Delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete->Location = System::Drawing::Point(214, 438);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(40, 34);
			this->Delete->TabIndex = 10;
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &Form1::Delete_Click);
			// 
			// Add
			// 
			this->Add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Add.BackgroundImage")));
			this->Add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Add->Location = System::Drawing::Point(59, 438);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(40, 34);
			this->Add->TabIndex = 9;
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &Form1::Add_Click);
			// 
			// Open
			// 
			this->Open->Filter = L"Audio Files(*.mp3;*.wav;)|*.mp3;*.wav;";
			this->Open->Multiselect = true;
			this->Open->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::Open_FileOk);
			// 
			// Rewind
			// 
			this->Rewind->AutoSize = false;
			this->Rewind->BackColor = System::Drawing::Color::Indigo;
			this->Rewind->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Rewind->Enabled = false;
			this->Rewind->LargeChange = 10;
			this->Rewind->Location = System::Drawing::Point(0, 194);
			this->Rewind->Margin = System::Windows::Forms::Padding(1);
			this->Rewind->Maximum = 100;
			this->Rewind->Name = L"Rewind";
			this->Rewind->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Rewind->Size = System::Drawing::Size(332, 45);
			this->Rewind->SmallChange = 5;
			this->Rewind->TabIndex = 11;
			this->Rewind->Scroll += gcnew System::EventHandler(this, &Form1::Rewind_Scroll);
			this->Rewind->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Rewind_MouseDown);
			this->Rewind->MouseLeave += gcnew System::EventHandler(this, &Form1::Rewind_MouseLeave);
			this->Rewind->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Rewind_MouseMove);
			this->Rewind->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Rewind_MouseUp);
			this->Rewind->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Rewind_MouseWheel);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Al
			// 
			this->Al->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Al.BackgroundImage")));
			this->Al->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Al->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Al->Location = System::Drawing::Point(137, 438);
			this->Al->Name = L"Al";
			this->Al->Size = System::Drawing::Size(40, 34);
			this->Al->TabIndex = 12;
			this->Al->UseVisualStyleBackColor = true;
			this->Al->Click += gcnew System::EventHandler(this, &Form1::Al_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Indigo;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(71, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 51);
			this->label1->TabIndex = 13;
			this->label1->Text = L"00:00";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoEllipsis = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(12, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(296, 28);
			this->label2->TabIndex = 14;
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(330, 478);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Al);
			this->Controls->Add(this->Rewind);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->Stop);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Pause);
			this->Controls->Add(this->Playlist);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->Play);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TransparencyKey = System::Drawing::Color::Lavender;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Title->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Rewind))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	HSTREAM chan; //Канал
	Song song; //Клас для зберігання даних про пісню
	Playl^ playlist; //Клас для зберігання плейлиста
	String^ mode; //Режим відтворення
	String^ current; //Шлях поточної композиції
	int current_index; //Номер поточної композиції
	static bool  press; //Натискання на Rewind
	static bool rewind;  
	static bool time; //Для виведення часу відтворення

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 ToolTip^ t = gcnew ToolTip();
				 t->SetToolTip(Play, "Відтворити");
				 t->SetToolTip(Pause, "Пауза");
				 t->SetToolTip(Stop, "Стоп");
				 t->SetToolTip(Back, "Попередній трек");
				 t->SetToolTip(Next, "Наступний трек");
				 t->SetToolTip(Add, "Додати файл");
				 t->SetToolTip(Delete, "Видалити з плейлиста");
				 t->SetToolTip(Al, "Увімкнути будильник");
				 t->SetToolTip(close, "Вийти з програми");
				 t->SetToolTip(minimize, "Згорнути");
				 mode = " ";
				 time = false;
				 BASS_Init( -1,44100, BASS_DEVICE_3D,0,NULL); // -1 - пристрій вибраний за замовчуванням, частота дискретизації(в Гц), параметри роботи пристроя, 0 - поточне вікно, ідентифікатор DirectSound(для бібліотеки) 
				 playlist = gcnew Playl();
				 playlist->name = gcnew List<String^>();
				 playlist->path = gcnew List<String^>();
				 if(File::Exists("Playlist.txt"))
				 {
					FileStream ^fs = gcnew FileStream("Playlist.txt" , FileMode::Open, FileAccess::Read);
					BinaryFormatter ^bf = gcnew BinaryFormatter(); 
					try
					{
						playlist = (Playl^) bf->Deserialize(fs);
					}
					catch(...)
					{
						fs->Close();
						MessageBox::Show("Невдалося завантажити плейлист", "Файл пошкоджено", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
					fs->Close();
					for (int i = 0; i < playlist->name->Count; i++)
						{
							Playlist->Items->Add(playlist->name[i]);
						}
				 }
			 }
			 
	//---------------------Переміщення форми--------------------//
	private: System::Void Title_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (e->Button == Windows::Forms::MouseButtons::Left) 
					{
						xOffset = -e->X - SystemInformation::FrameBorderSize.Width;
						yOffset = -e->Y - SystemInformation::FrameBorderSize.Height;
						mouseOffset = System::Drawing::Point(xOffset, yOffset);
						isMouseDown = true;
					}   
			 }
	private: System::Void Title_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				  if (isMouseDown) 
					{
						Point mousePos = Control::MousePosition;
						mousePos.Offset(mouseOffset.X, mouseOffset.Y);
						Location = mousePos;
					}
			 }
private: System::Void Title_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (e->Button == Windows::Forms::MouseButtons::Left) 
					{
						isMouseDown = false;
					}
		 }

	//----------------------------------------------//
private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(song.alarm_on)
				 if( MessageBox::Show("Будильник буде вимкнено, закрити програму?", "Будильник", 
					 MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
				 {
					 return;
				 }
			if(Playlist->Items->Count == 0)
			{
				playlist->name->Clear();
				playlist->path->Clear();
			}
			SetFileAttributesA("Playlist.txt", FILE_ATTRIBUTE_NORMAL);
			FileStream ^fs = gcnew FileStream("Playlist.txt", FileMode::Create, FileAccess::Write);           
			BinaryFormatter ^bf = gcnew BinaryFormatter(); 
			bf->Serialize(fs, playlist); 
			fs->Close();
			SetFileAttributesA("Playlist.txt", FILE_ATTRIBUTE_READONLY);
			Close();
		 }
private: System::Void minimize_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->WindowState = FormWindowState::Minimized; 
		 }

private: System::Void Add_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Open->ShowDialog();
		 }


private: System::Void Open_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 for each (String^ file in Open->SafeFileNames) 
			 {
				 song.file_name = file;
				 Playlist->Items->Add(song.file_name);
				 playlist->name->Add(song.file_name);	 
			 }
			 for each (String^ file in Open->FileNames) 
			 {
				 song.file_path = file;
				 playlist->path->Add(song.file_path);
			 }
		 }

 private: System::Void Play_Click(System::Object^  sender, System::EventArgs^  e) {
				    try
					{
						if((playlist->path[current_index] == current) && (rewind == false) && (mode != "pause")) //Починати відтворення з початку якщо це не пауза і не перемотування
						{
							Rewind->Value = 0;
							BASS_ChannelSetPosition(chan, 0, BASS_POS_BYTE);
						}
					}
					catch(ArgumentOutOfRangeException ^e) //При видаленні всіх елементів
					{
					}
					if(Playlist->SelectedItems->Count != 0 || rewind || mode=="pause") //Якщо ніякий елемент не вибраний - не програвати (крім перемотки)
					{
						if(mode=="pause")
							 BASS_ChannelPlay(chan, FALSE);
						else
						{
							song.file_path = playlist->path[Playlist->SelectedIndex];
							song.file_name = playlist->name[Playlist->SelectedIndex];
							if(File::Exists(song.file_path) == false)
							{
								if(BASS_ChannelIsActive(chan))
										BASS_ChannelStop(chan);
								if(MessageBox::Show("Бажаєте видалити цей файл з плейлиста?", "Файл не знайдено", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
								{
									playlist->name->RemoveAt(Playlist->SelectedIndex);
									playlist->path->RemoveAt(Playlist->SelectedIndex);
									Playlist->Items->RemoveAt(Playlist->SelectedIndex);
								}
								return;
							}

							char *a = (char*)(void*)Marshal::StringToHGlobalAnsi(song.file_path); //Переведення в масив char
							current_index = Playlist->SelectedIndex;

							if(!BASS_ChannelIsActive(chan))
							{
								BASS_StreamFree(chan);
								chan=BASS_StreamCreateFile(FALSE, a, 0, 0, 0);
								BASS_ChannelPlay(chan, FALSE);
							}
							else
							{
								BASS_ChannelStop(chan);
								BASS_StreamFree(chan);
								chan=BASS_StreamCreateFile(FALSE, a, 0, 0, 0);
								BASS_ChannelPlay(chan, FALSE);
							}
						}
					Rewind->Enabled = true;
					mode="play";
					timer1->Enabled= true;
					timer1->Start();
					current = song.file_path;
					label2->Text = song.file_name;
					label2->Text = label2->Text->Remove(label2->Text->Length-4);
					rewind = false;
					Playlist->ClearSelected();

					try
					{
						if(playlist->path[current_index] == current)
							 Playlist->SelectedIndex = current_index; 
					}
					catch(ArgumentOutOfRangeException ^e)
					{
					}
				}
		  }
private: System::Void Playlist_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 mode="stop";
			 Play_Click(sender, e);
		 }
private: System::Void Pause_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(mode!="stop")
			 {
				BASS_ChannelPause(chan);
				 mode="pause";
			 }
		 }
		
private: System::Void Stop_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Text = "00:00";
			 label2->Text = "";
			 BASS_ChannelStop(chan);
			 Rewind->Value=0;
			 timer1->Stop();
			 mode="stop";
			 Rewind->Enabled = false;
		 }
private: System::Void Rewind_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 float pos;
			 float size_p=BASS_ChannelGetLength(chan, BASS_POS_BYTE);
			 if(mode != "pause")
			 {
				Pause_Click(sender, e);
				mode = "rew";
			 }
			 pos=(Rewind->Value)*((size_p)/100);
			 BASS_ChannelSetPosition(chan, pos, BASS_POS_BYTE);
			 System::Windows::Forms::MouseEventArgs^  k;
			 if(press == false)
				Rewind_MouseWheel(sender,k);
			 
		 }

private: System::Void Rewind_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
				 press = false; 
				 rewind = true;
				 if(mode != "pause")
				 {
					mode = "pause";
				    Play_Click(sender, e);
				 }
		 }
private: System::Void Rewind_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			     press=true; 
		 }
private: System::Void Rewind_MouseWheel(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			      if(mode == "rew")
					{
					 mode="pause";
					 rewind = true;
					 Play_Click(sender, e);
					}
		 }
private: System::Void Rewind_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 Rewind->Focus();
		 }

private: System::Void Rewind_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 Title->Focus();
		 }

private: System::Void Playlist_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 Playlist->Focus();
		 }
private: System::Void Playlist_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 Title->Focus();
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			int pos;
			double size_p=0;
			double size_p1=0;
			float Tracklen = 0;
			float Trackpos = 0;
			int i;
			i=0;
			i = current_index+1;

			size_p = BASS_ChannelGetLength(chan, BASS_POS_BYTE);
			size_p1 = BASS_ChannelGetPosition(chan, BASS_POS_BYTE);
			Tracklen = BASS_ChannelBytes2Seconds(chan, size_p);
			Trackpos = BASS_ChannelBytes2Seconds(chan, size_p1);
			if(time)
			{
				if(((int)Math::Abs((Trackpos)-((int)(Trackpos)/60)*60) == 0) && (Math::Abs((int)(Trackpos)/60) == 0))
					label1->Text = "00:00";
				else
				{
					if(Math::Abs((int)(Trackpos)/60) < 10)
						label1->Text = "0";
					else
						label1->Text = "";
				if((int)Math::Abs((Trackpos)-((int)(Trackpos)/60)*60) >= 10)

					label1->Text +=  Convert::ToString(Math::Abs((int)(Trackpos)/60)) +":" + Convert::ToString((int)Math::Abs((Trackpos)-((int)(Trackpos)/60)*60));
				else
					label1->Text +=  Convert::ToString(Math::Abs((int)(Trackpos)/60)) +":0" + Convert::ToString((int)Math::Abs((Trackpos)-((int)(Trackpos)/60)*60));

				}
			}
			else
			{
				if(((int)Math::Abs((Trackpos - Tracklen)-((int)(Trackpos - Tracklen)/60)*60) == 0) && (Math::Abs((int)(Trackpos - Tracklen)/60) == 0))
					label1->Text = "00:00";
				else
				{
					if(Math::Abs((int)(Trackpos - Tracklen)/60) < 10)
						label1->Text = "-0";
					else
						label1->Text = "-";
				if((int)Math::Abs((Trackpos - Tracklen)-((int)(Trackpos - Tracklen)/60)*60) >= 10)
					label1->Text +=  Convert::ToString(Math::Abs((int)(Trackpos - Tracklen)/60)) +":" + Convert::ToString((int)Math::Abs((Trackpos - Tracklen)-((int)(Trackpos - Tracklen)/60)*60));
				else
					label1->Text +=  Convert::ToString(Math::Abs((int)(Trackpos - Tracklen)/60)) +":0" + Convert::ToString((int)Math::Abs((Trackpos - Tracklen)-((int)(Trackpos - Tracklen)/60)*60));
				}
			}
			pos=((size_p1)/(size_p/100));

			if(pos <= 100)
				Rewind->Value=pos;

			if((BASS_ChannelGetLength(chan, BASS_POS_BYTE) == BASS_ChannelGetPosition(chan, BASS_POS_BYTE)) && (i!=Playlist->Items->Count))
				{
					Playlist->ClearSelected();
					Playlist->SelectedIndex = current_index+1;
					Play_Click(sender, e);
				}

			if(!BASS_ChannelIsActive(chan))
			{
				 BASS_ChannelSetPosition(chan, 0, BASS_POS_BYTE);
				 Stop_Click(sender, e);
			}
		 }
private: System::Void Delete_Click(System::Object^  sender, System::EventArgs^  e) {
			while( Playlist->SelectedItems->Count > 0)
			{
				try
				 {
					if(Playlist->SelectedIndex < current_index)
						current_index -=1;
					playlist->name->RemoveAt(Playlist->SelectedIndex);
					playlist->path->RemoveAt(Playlist->SelectedIndex);
					Playlist->Items->RemoveAt(Playlist->SelectedIndex);
				 }
				catch(...)
				{
				}
			}
		 }
private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
			 mode = "play";
			 try
				{
					if(playlist->path->Count != 0)
					{
					 if(current == playlist->path[current_index] && Playlist->Items->Count!=0 && playlist->path->Count == Playlist->Items->Count)
						{
						 if(current_index > 0)
							{
							 current_index-=1;
							 Playlist->ClearSelected();
							 Playlist->SelectedIndex = current_index;
							 Play_Click(sender, e);
							}
						}
					}
				}
				catch(...)
				{
				}
		 }
private: System::Void Next_Click(System::Object^  sender, System::EventArgs^  e) {
			    mode = "play";
				try
				{
			     if(playlist->path->Count != 0)
				 {
					int a = playlist->path->Count;
					int b = Playlist->Items->Count;
					if(current == playlist->path[current_index] && playlist->path->Count == Playlist->Items->Count)
					 {
						if(current_index != Playlist->Items->Count-1)
						{
							 current_index+=1;
							 Playlist->ClearSelected();
							 Playlist->SelectedIndex = current_index;
							 Play_Click(sender, e);
						}
					 }
				}
				}
				catch(...)
				{
				}
				
		 }
private: System::Void Al_Click(System::Object^  sender, System::EventArgs^  e) {
			 Alarm^ Alm = gcnew Alarm(chan); 
			 Alm->ShowDialog(this);
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(time)
				time = false;
			 else
				 time = true;
		 }


private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  About^ inf = gcnew About(); 
			  inf->Show(this);
		 }

private: System::Void довідкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(File::Exists("help.txt"))
				 {
					FileInfo^ fi = gcnew FileInfo("help.txt");
					SetFileAttributesA("help.txt", FILE_ATTRIBUTE_READONLY);
					int file_size = fi->Length;
					if(file_size == 1580)
					{
						 help^ h = gcnew help(); 
						 h->Show(this);
					}
					else
						MessageBox::Show("Невдалося завантажити довідку", "Файл пошкоджено", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 else
			   MessageBox::Show("Невдалося завантажити довідку", "Файл не знайдено", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }
};
}

