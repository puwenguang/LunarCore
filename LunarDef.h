#pragma once

typedef struct _tagLunarInfo
{
	//阳历
	unsigned short	nYear;
	unsigned short	nMonth;
	unsigned short	nDay;
	unsigned short	nWeek;
	//农历
	unsigned short	nLunYear;
	unsigned short	nLunMonth;
	unsigned short	nLunDay;
	unsigned short  nLunDayCount;//所在农历月天数
	//天干地支
	unsigned short	nTGYear;
	unsigned short	nTGMonth;
	unsigned short	nTGDay;
	//节气
			short	nJQ;
	//生肖
	unsigned short	nSXYear;
	//闰月
	bool			bLeapMonth;
}LUNARINFO,*PLUNARINFO;

typedef struct _tagLONGTIME {
	unsigned short wYear;
	unsigned short wMonth;
	unsigned short wDayOfWeek;
	unsigned short wDay;
	unsigned short wHour;
	unsigned short wMinute;
	unsigned short wSecond;
	unsigned short wMilliseconds;
} LONGTIME,*PLONGTIME;

typedef struct _tagMONTHDAY
{
	int nYear;
	int nMonth;
	int nDay;
}MONTHDAY,*PMONTHDAY;

enum
{
	Type_Soli		= 1,	//公历
	Type_Lunar		= 2,	//农历
	Type_Buddhist	= 3,	//佛历
	Type_Tibetan	= 4,	//藏历
};
