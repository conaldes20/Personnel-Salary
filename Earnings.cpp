// Earnings.cpp : implementation file
//

#include "stdafx.h"
#include "PSalaryDLL.h"
#include "Earnings.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Earnings

IMPLEMENT_DYNAMIC(Earnings, CRecordset)

Earnings::Earnings(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(Earnings)
	m_pnum = 0;	
	m_pglev = 0;
	m_pstep = 0; 
	m_nomth = 0;		
	m_pasay = _T("");
	m_nmhas = 0;
	m_pfsa = _T("");	
	m_nmoss = 0;
	m_ressa = _T("");	
	m_rate = 0.0; 
	m_nhrs = 0; 
	m_otpay = _T("");
	m_nFields = 12;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString Earnings::GetDefaultConnect()
{
	return _T("ODBC;DSN=payrol");
}

CString Earnings::GetDefaultSQL()
{
	return _T("{CALL prEarnings}");
}

void Earnings::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(Earnings)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[pnum]"), m_pnum);
	RFX_Long(pFX, _T("[pglev]"), m_pglev);
	RFX_Long(pFX, _T("[pstep]"), m_pstep);
	RFX_Long(pFX, _T("[nomth]"), m_nomth);		
	RFX_Text(pFX, _T("[passy]"), m_pasay);
	RFX_Long(pFX, _T("[nmhsa]"), m_nmhas);
	RFX_Text(pFX, _T("[pfsa]"), m_pfsa);	
	RFX_Long(pFX, _T("[nmoss]"), m_nmoss);
	RFX_Text(pFX, _T("[ressa]"), m_ressa);	
	RFX_Double(pFX, _T("[rate]"), m_rate);
	RFX_Long(pFX, _T("[nhrs]"), m_nhrs);
	RFX_Text(pFX, _T("[otpay]"), m_otpay);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// Earnings diagnostics

#ifdef _DEBUG
void Earnings::AssertValid() const
{
	CRecordset::AssertValid();
}

void Earnings::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
