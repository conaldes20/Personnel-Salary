// ActingCAP.cpp : implementation file
//

#include "stdafx.h"
#include "PSalaryDLL.h"
#include "ActingCAP.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ActingCAP

IMPLEMENT_DYNAMIC(ActingCAP, CRecordset)

ActingCAP::ActingCAP(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(ActingCAP)
	m_aalln = 0;
	m_pnum = 0;
	m_payal = _T("");
	m_tdcom = _T("");
	m_nFields = 4;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString ActingCAP::GetDefaultConnect()
{
	return _T("ODBC;DSN=payrol");
}

CString ActingCAP::GetDefaultSQL()
{
	return _T("[dbo].[ActAllow]");
}

void ActingCAP::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(ActingCAP)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[aalln]"), m_aalln);
	RFX_Long(pFX, _T("[pnum]"), m_pnum);
	RFX_Text(pFX, _T("[payal]"), m_payal);
	RFX_Text(pFX, _T("[tdcom]"), m_tdcom);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// ActingCAP diagnostics

#ifdef _DEBUG
void ActingCAP::AssertValid() const
{
	CRecordset::AssertValid();
}

void ActingCAP::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
