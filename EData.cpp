// EData.cpp : implementation file
//

#include "stdafx.h"
#include "PSalaryDLL.h"
#include "EData.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// EData

IMPLEMENT_DYNAMIC(EData, CRecordset)

EData::EData(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(EData)
	m_blev = 0;
	m_bstep1 = 0.0; 
	m_bstep2 = 0.0;			
	m_nFields = 3;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString EData::GetDefaultConnect()
{
	return _T("ODBC;DSN=payrol");
}

CString EData::GetDefaultSQL()
{
	return _T("{CALL prEData}");
}

void EData::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(EData)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[blev]"), m_blev);
	RFX_Double(pFX, _T("[bstep1]"), m_bstep1);
	RFX_Double(pFX, _T("[bstep2]"), m_bstep2);		
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// EData diagnostics

#ifdef _DEBUG
void EData::AssertValid() const
{
	CRecordset::AssertValid();
}

void EData::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
