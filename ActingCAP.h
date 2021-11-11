#if !defined(AFX_ACTINGCAP_H__FC5D40F9_A634_47A0_A57B_BECAF27BA1CF__INCLUDED_)
#define AFX_ACTINGCAP_H__FC5D40F9_A634_47A0_A57B_BECAF27BA1CF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ActingCAP.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ActingCAP recordset

class ActingCAP : public CRecordset
{
public:
	ActingCAP(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(ActingCAP)

// Field/Param Data
	//{{AFX_FIELD(ActingCAP, CRecordset)
	long	m_aalln;
	long	m_pnum;
	CString	m_payal;
	CString	m_tdcom;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ActingCAP)
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

#endif // !defined(AFX_ACTINGCAP_H__FC5D40F9_A634_47A0_A57B_BECAF27BA1CF__INCLUDED_)
