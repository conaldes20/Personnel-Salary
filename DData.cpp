// DData.cpp : implementation file
//

#include "stdafx.h"
#include "PSalaryDLL.h"
#include "DData.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DData

IMPLEMENT_DYNAMIC(DData, CRecordset)

DData::DData(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(DData)
	m_blev = 0;
	m_bstep1 = 0.0;
	m_bstep2 = 0.0;	
	m_nFields = 3;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString DData::GetDefaultConnect()
{
	return _T("ODBC;DSN=payrol");
}

CString DData::GetDefaultSQL()
{
	return _T("{CALL prDData}");
}

void DData::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(DData)
	pFX->SetFieldType(CFieldExchange::outputColumn);	
	RFX_Long(pFX, _T("[blev]"), m_blev);
	RFX_Double(pFX, _T("[bstep1]"), m_bstep1);
	RFX_Double(pFX, _T("[bstep2]"), m_bstep2);	
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// DData diagnostics

#ifdef _DEBUG
void DData::AssertValid() const
{
	CRecordset::AssertValid();
}

void DData::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
