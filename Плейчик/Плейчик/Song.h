#pragma once
#include "bass.h"
#pragma comment (lib, "bass.lib")
using namespace System;

ref class Song
{
public:
	Song(void);
	String^ file_name;
	String^ file_path;
	static String^ alarm_song;
	static bool alarm_on;
};

