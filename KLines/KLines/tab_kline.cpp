// tab_kline.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "KLines.h"
#include "tab_kline.h"
#include "afxdialogex.h"
#include "CpwdVerify.h"


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
	DDX_Control(pDX, IDC_EDIT1, m_kline_searchBox);
	DDX_Control(pDX, IDC_BUTTON1, m_kline_searchButton);
	DDX_Control(pDX, IDC_BUTTON2, m_kline_dateSelectButton);
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_kline_startDateCalendar);
	DDX_Control(pDX, IDC_DATETIMEPICKER2, m_kline_endDateCalendar);
	DDX_Control(pDX, IDC_BUTTON3, m_kline_exportButton);
	DDX_Control(pDX, IDC_BUTTON4, m_kline_backgroundButton);
	DDX_Control(pDX, IDC_LIST1, m_kline_parameterList);
}


BEGIN_MESSAGE_MAP(tab_kline, CDialogEx)
	
	ON_BN_CLICKED(IDC_BUTTON1, &tab_kline::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &tab_kline::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &tab_kline::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &tab_kline::OnBnClickedButton4)
	ON_EN_SETFOCUS(IDC_EDIT1, &tab_kline::OnEnSetfocusEdit1)
	ON_EN_KILLFOCUS(IDC_EDIT1, &tab_kline::OnEnKillfocusEdit1)
END_MESSAGE_MAP()

void tab_kline::OnOK()
{
	// TODO: �ڴ����ר�ô����/����û���

	//CDialogEx::OnOK();
}


void tab_kline::OnBnClickedButton1()
{
	//ʵ�ֹ�Ʊ����
	CString inputINFO;
	m_kline_searchBox.GetWindowTextW(inputINFO);
	if(inputINFO.IsEmpty())
		AfxMessageBox(_T("��û�������κ���Ϣ"));
	else
	{//�����ݿ��н�������������ز���
		AfxMessageBox(_T("��ʼ����\""+inputINFO+"\"����"));
		//�����ݿ����õ���Ʊ����ʼ���ںͽ�ֹ���ڲ��ɴ����ö�Ӧ�����������ؼ���ǰ��ʾ��ʱ���ѡ��Χ
		CTime startTime=CTime(1999,12,01,12,00,00);
		CTime endTime=CTime(2000,01,01,12,00,00);
		//���õ�ǰ��ʾ
		m_kline_startDateCalendar.SetTime(&startTime);
		m_kline_endDateCalendar.SetTime(&endTime);
		//���ÿ�ѡ��Χ
		m_kline_startDateCalendar.SetRange(&startTime,&endTime);
		m_kline_endDateCalendar.SetRange(&startTime,&endTime);
		//�ڲ����б�����ʾ��Ʊ�Ĳ���

		//��ʾ�ù�Ʊ����ͼ

	}
}


void tab_kline::OnBnClickedButton2()
{
	//ʵ������ɸѡ
	//��ȡ���������ϵ�ʱ�䲢��һ��{��ֹ����>��ʼ����}�ĺϷ����жϣ�Ȼ��������ڸ��¸ù�Ʊ������ͼ
	AfxMessageBox(_T("����ɸѡ"));

}


void tab_kline::OnBnClickedButton3()
{
	//ʵ�ֹ�Ʊ���ݵĵ���
	AfxMessageBox(_T("��Ʊ����"));

}


void tab_kline::OnBnClickedButton4()
{
	//����������֤Ȼ������̨
	CpwdVerify verify;
	verify.DoModal();
}


void tab_kline::OnEnSetfocusEdit1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString inputINFO;
	m_kline_searchBox.GetWindowTextW(inputINFO);
	if (!inputINFO.IsEmpty())
		m_kline_searchBox.SetWindowTextW(TEXT(""));
}


void tab_kline::OnEnKillfocusEdit1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString inputINFO;
	m_kline_searchBox.GetWindowTextW(inputINFO);
	if (inputINFO.IsEmpty())
		m_kline_searchBox.SetWindowTextW(TEXT("��Ʊ������"));
}
