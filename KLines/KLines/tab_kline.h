#pragma once
#include "afxwin.h"
#include "afxdtctl.h"

// tab_kline �Ի���

class tab_kline : public CDialogEx
{
	DECLARE_DYNAMIC(tab_kline)
	friend class CKLinesDlg;

public:
	tab_kline(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~tab_kline();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	virtual void OnOK();
	// K��ͼ���ֵĹ�Ʊ������
	CEdit m_kline_searchBox;
	// K��ͼ���ֵĹ�Ʊ������ť
	CButton m_kline_searchButton;
	// K��ͼ���ֵĹ�Ʊ��ʼ����ѡ�������
	CDateTimeCtrl m_kline_startDateCalendar;
	// K��ͼ���ֵĹ�Ʊ��ֹ����ѡ�������
	CDateTimeCtrl m_kline_endDateCalendar;
	// K��ͼ���ֵ�����ɸѡ��ť
	CButton m_kline_dateSelectButton;
	// K��ͼ���ֵĵ�����ť
	CButton m_kline_exportButton;
	// K��ͼ���ֵĺ�̨��ť
	CButton m_kline_backgroundButton;
	// K��ͼ���ֵĲ����б�
	CListCtrl m_kline_parameterList;

	//��Ʊ������ť�ĵ���¼�
	afx_msg void OnBnClickedButton1();
	//��Ʊʱ��ɸѡ��ť�ĵ���¼�
	afx_msg void OnBnClickedButton2();
	//��Ʊ���ݵĵ�����ť�ĵ���¼�
	afx_msg void OnBnClickedButton3();
	//��̨��ť�ĵ���¼�
	afx_msg void OnBnClickedButton4();
	
public:
	afx_msg void OnEnSetfocusEdit1();
	afx_msg void OnEnKillfocusEdit1();
};
