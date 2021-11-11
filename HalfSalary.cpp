// HalfSalary.cpp : implementation file
//

#include "stdafx.h"
#include "PSalaryDLL.h"
#include "HalfSalary.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// HalfSalary

IMPLEMENT_DYNAMIC(HalfSalary, CRecordset)

HalfSalary::HalfSalary(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(HalfSalary)
	m_hsaln = 0;
	m_pnum = 0;
	m_nmohs = 0;
	m_pfsa = _T("");	
	m_bgdat = _T("");	
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString HalfSalary::GetDefaultConnect()
{
	return _T("ODBC;DSN=payrol");
}

CString HalfSalary::GetDefaultSQL()
{
	return _T("[dbo].[HSalary]");
}

void HalfSalary::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(HalfSalary)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[hsaln]"), m_hsaln);
	RFX_Long(pFX, _T("[pnum]"), m_pnum);
	RFX_Long(pFX, _T("[nmohs]"), m_nmohs);
	RFX_Text(pFX, _T("[pfsa]"), m_pfsa);	
	RFX_Text(pFX, _T("[bgdat]"), m_bgdat);	
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// HalfSalary diagnostics

#ifdef _DEBUG
void HalfSalary::AssertValid() const
{
	CRecordset::AssertValid();
}

void HalfSalary::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
