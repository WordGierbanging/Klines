#pragma once


// tab_number �Ի���

class tab_number : public CDialogEx
{
	DECLARE_DYNAMIC(tab_number)

public:
	tab_number(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~tab_number();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnCbnSelchangeCombo3();
};
