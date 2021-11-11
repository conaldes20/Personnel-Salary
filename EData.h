#if !defined(AFX_EDATA_H__DB3B27C2_71A4_40E6_A7A3_04970B5FB30F__INCLUDED_)
#define AFX_EDATA_H__DB3B27C2_71A4_40E6_A7A3_04970B5FB30F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EData.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// EData recordset

class EData : public CRecordset
{
public:
	EData(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(EData)

// Field/Param Data
	//{{AFX_FIELD(EData, CRecordset)
	long	m_blev;
	double	m_bstep1; 
	double	m_bstep2;		
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(EData)
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

#endif // !defined(AFX_EDATA_H__DB3B27C2_71A4_40E6_A7A3_04970B5FB30F__INCLUDED_)
