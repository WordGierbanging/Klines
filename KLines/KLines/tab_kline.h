#pragma once


// tab_kline �Ի���

class tab_kline : public CDialogEx
{
	DECLARE_DYNAMIC(tab_kline)

public:
	tab_kline(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~tab_kline();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
};
