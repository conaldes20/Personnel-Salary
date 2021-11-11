#if !defined(AFX_EARNINGS_H__CDC118C9_558F_464D_8190_7D56CE43AF27__INCLUDED_)
#define AFX_EARNINGS_H__CDC118C9_558F_464D_8190_7D56CE43AF27__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Earnings.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Earnings recordset

class Earnings : public CRecordset
{
public:
	Earnings(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(Earnings)

// Field/Param Data
	//{{AFX_FIELD(Earnings, CRecordset)	
	long	m_pnum;
	long	m_pglev;
	long	m_pstep;
	long	m_nomth;		
	CString	m_pasay;
	long	m_nmhas;
	CString	m_pfsa;	
	long	m_nmoss;
	CString	m_ressa;	
	double	m_rate; 
	long	m_nhrs; 
	CString	m_otpay;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Earnings)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EARNINGS_H__CDC118C9_558F_464D_8190_7D56CE43AF27__INCLUDED_)
