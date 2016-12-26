#pragma once

typedef struct _tagLunarInfo
{
	//����
	unsigned short	nYear;
	unsigned short	nMonth;
	unsigned short	nDay;
	unsigned short	nWeek;
	//ũ��
	unsigned short	nLunYear;
	unsigned short	nLunMonth;
	unsigned short	nLunDay;
	unsigned short  nLunDayCount;//����ũ��������
	//��ɵ�֧
	unsigned short	nTGYear;
	unsigned short	nTGMonth;
	unsigned short	nTGDay;
	//����
			short	nJQ;
	//��Ф
	unsigned short	nSXYear;
	//����
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
	Type_Soli		= 1,	//����
	Type_Lunar		= 2,	//ũ��
	Type_Buddhist	= 3,	//����
	Type_Tibetan	= 4,	//����
};
