
// KLinesDlg.h : ͷ�ļ�
//

#pragma once
#include "tabsheet.h"
#include "TabSheet.h"
#include "tab_kline.h"
#include "tab_number.h"

// CKLinesDlg �Ի���
class CKLinesDlg : public CDialogEx
{
// ����
public:
	CKLinesDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_KLINES_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CTabSheet m_tab;
	tab_kline m_tab_kline;
	tab_number m_tab_number;
};
