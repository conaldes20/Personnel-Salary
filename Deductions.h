#if !defined(AFX_DEDUCTIONS_H__5695242F_4B03_4816_90E6_B0D395635129__INCLUDED_)
#define AFX_DEDUCTIONS_H__5695242F_4B03_4816_90E6_B0D395635129__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Deductions.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Deductions recordset

class Deductions : public CRecordset
{
public:
	Deductions(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(Deductions)

// Field/Param Data
	//{{AFX_FIELD(Deductions, CRecordset)	
	long	m_pnum;
	long	m_pglev;
	long	m_pstep; 	
	double	m_cded;
	double	m_ramc;
	double	m_ramp;
	double	m_rins;
	double	m_hamc;
	double	m_hamp;
	double	m_hins;
	double	m_eamc;
	double	m_eamp;
	double	m_eins;
	long	m_nmthc;
	long	m_nmthp;
	double	m_mlded;
	double	m_mided;
	long	m_nmtpb;
	long	m_nmcov;
	double	m_tamc;
	double	m_tamp;
	double	m_tins;
	long	m_nomth;		
	CString	m_pasay;
	long	m_nmhas;
	CString	m_pfsa;	
	long	m_nmoss;
	CString	m_ressa;	
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Deductions)
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
// Microsoft Visual C++ will insert additional declarations  before the previous line.

#endif // !defined(AFX_DEDUCTIONS_H__5695242F_4B03_4816_90E6_B0D395635129__INCLUDED_)
