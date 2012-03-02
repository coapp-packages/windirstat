// pageready.h	- Declaration of CPageReady
//
// WinDirStat - Directory Statistics
// Copyright (C) 2003-2004 Bernhard Seifert
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// Author: bseifert@users.sourceforge.net, bseifert@daccord.net
//
// Last modified: $Date: 2004/11/05 16:53:05 $

#pragma once

#include "mypropertypage.h"


//
// CPageReady. The "Ready to install" wizard page.
//
class CPageReady: public CMyPropertyPage
{
	DECLARE_DYNAMIC(CPageReady)
	enum { IDD = IDD_READY };

public:
	CPageReady();
	virtual ~CPageReady();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnSetActive();

	DECLARE_MESSAGE_MAP()
};

// $Log: PageReady.h,v $
// Revision 1.3  2004/11/05 16:53:05  assarbad
// Added Date and History tag where appropriate.
//
