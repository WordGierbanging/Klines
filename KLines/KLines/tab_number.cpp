// tab_number.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "KLines.h"
#include "tab_number.h"
#include "afxdialogex.h"


// tab_number �Ի���

IMPLEMENT_DYNAMIC(tab_number, CDialogEx)

tab_number::tab_number(CWnd* pParent /*=NULL*/)
	: CDialogEx(tab_number::IDD, pParent)
{

}

tab_number::~tab_number()
{
}

void tab_number::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(tab_number, CDialogEx)
	
END_MESSAGE_MAP()


// tab_number ��Ϣ�������


void tab_number::OnBnClickedRadio3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void tab_number::OnCbnSelchangeCombo3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
