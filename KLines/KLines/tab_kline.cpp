// tab_kline.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "KLines.h"
#include "tab_kline.h"
#include "afxdialogex.h"


// tab_kline �Ի���

IMPLEMENT_DYNAMIC(tab_kline, CDialogEx)

tab_kline::tab_kline(CWnd* pParent /*=NULL*/)
	: CDialogEx(tab_kline::IDD, pParent)
{

}

tab_kline::~tab_kline()
{
}

void tab_kline::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(tab_kline, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON3, &tab_kline::OnBnClickedButton3)
END_MESSAGE_MAP()


// tab_kline ��Ϣ�������


void tab_kline::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
