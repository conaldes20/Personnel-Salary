#if !defined(AFX_DDATA_H__DB15BD87_C5ED_4980_97A5_0626527F96FE__INCLUDED_)
#define AFX_DDATA_H__DB15BD87_C5ED_4980_97A5_0626527F96FE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DData.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DData recordset

class DData : public CRecordset
{
public:
	DData(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(DData)

// Field/Param Data
	//{{AFX_FIELD(DData, CRecordset)	
	long	m_blev;
	double	m_bstep1;
	double	m_bstep2;	
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DData)
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

#endif // !defined(AFX_DDATA_H__DB15BD87_C5ED_4980_97A5_0626527F96FE__INCLUDED_)
