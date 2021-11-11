// Deductions.cpp : implementation file
//

#include "stdafx.h"
#include "PSalaryDLL.h"
#include "Deductions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Deductions

IMPLEMENT_DYNAMIC(Deductions, CRecordset)

Deductions::Deductions(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(Deductions)	
	m_pnum = 0;
	m_pglev = 0;
	m_pstep = 0;	
	m_cded = 0.0;
	m_ramc = 0.0;
	m_ramp = 0.0;
	m_rins = 0.0;
	m_hamc = 0.0;
	m_hamp = 0.0;
	m_hins = 0.0;
	m_eamc = 0.0;
	m_eamp = 0.0;
	m_eins = 0.0;
	m_nmthc = 0;
	m_nmthp = 0;
	m_mlded = 0.0;
	m_mided = 0.0;
	m_nmtpb = 0;
	m_nmcov = 0;	
	m_tamc = 0.0;
	m_tamp = 0.0;
	m_tins = 0.0;
    m_nomth = 0;		
	m_pasay = _T("");
	m_nmhas = 0;
	m_pfsa = _T("");	
	m_nmoss = 0;
	m_ressa = _T("");	
	m_nFields = 28;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString Deductions::GetDefaultConnect()
{
	return _T("ODBC;DSN=payrol");
}

CString Deductions::GetDefaultSQL()
{
	return _T("{CALL prDeductions}");
}

void Deductions::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(Deductions)
	pFX->SetFieldType(CFieldExchange::outputColumn);	
	RFX_Long(pFX, _T("[pnum]"), m_pnum);
	RFX_Long(pFX, _T("[pglev]"), m_pglev);
	RFX_Long(pFX, _T("[pstep]"), m_pstep);
	RFX_Double(pFX, _T("[cded]"), m_cded);
	RFX_Double(pFX, _T("[ramc]"), m_ramc);
	RFX_Double(pFX, _T("[ramp]"), m_ramp);
	RFX_Double(pFX, _T("[rins]"), m_rins);
	RFX_Double(pFX, _T("[hamc]"), m_hamc);
	RFX_Double(pFX, _T("[hamp]"), m_hamp);
	RFX_Double(pFX, _T("[hins]"), m_hins);
	RFX_Double(pFX, _T("[eamc]"), m_eamc);
	RFX_Double(pFX, _T("[eamp]"), m_eamp);
	RFX_Double(pFX, _T("[eins]"), m_eins);
	RFX_Long(pFX, _T("[nmthc]"), m_nmthc);
	RFX_Long(pFX, _T("[nmthp]"), m_nmthp);
	RFX_Double(pFX, _T("[mlded]"), m_mlded);
	RFX_Double(pFX, _T("[mided]"), m_mided);
	RFX_Long(pFX, _T("[nmtpb]"), m_nmtpb);
	RFX_Long(pFX, _T("[nmcov]"), m_nmcov);	
	RFX_Double(pFX, _T("[tamc]"), m_tamc);
	RFX_Double(pFX, _T("[tamp]"), m_tamp);
	RFX_Double(pFX, _T("[tins]"), m_tins);
	RFX_Long(pFX, _T("[nomth]"), m_nomth);		
	RFX_Text(pFX, _T("[passy]"), m_pasay);
	RFX_Long(pFX, _T("[nmhsa]"), m_nmhas);
	RFX_Text(pFX, _T("[pfsa]"), m_pfsa);	
	RFX_Long(pFX, _T("[nmoss]"), m_nmoss);
	RFX_Text(pFX, _T("[ressa]"), m_ressa);	
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// Deductions diagnostics

#ifdef _DEBUG
void Deductions::AssertValid() const
{
	CRecordset::AssertValid();
}

void Deductions::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
