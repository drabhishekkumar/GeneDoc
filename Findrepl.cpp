/*
    GeneDoc: Multiple Sequence Alignment Editing Utility
    Copyright (C) 2000, Karl Nicholas

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
// findrepl.cpp : implementation file
//

#include "stdafx.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFindReplaceDlg dialog


CFindReplaceDlg::CFindReplaceDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFindReplaceDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFindReplaceDlg)
	m_FindString = _T("");
	m_ReplaceString = _T("");
	//}}AFX_DATA_INIT
}

void CFindReplaceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFindReplaceDlg)
	DDX_Text(pDX, IDC_FINDSTRING, m_FindString);
	DDX_Text(pDX, IDC_REPLACE, m_ReplaceString);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CFindReplaceDlg, CDialog)
	//{{AFX_MSG_MAP(CFindReplaceDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CFindReplaceDlg message handlers

BOOL CFindReplaceDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	CenterWindow();
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
