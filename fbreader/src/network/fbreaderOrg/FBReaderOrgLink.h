/*
 * Copyright (C) 2008-2009 Geometer Plus <contact@geometerplus.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef __FBREADERORGLINK_H__
#define __FBREADERORGLINK_H__

#include "../NetworkLink.h"

class FBReaderOrgLink : public NetworkLink {

public:
	FBReaderOrgLink();

	shared_ptr<ZLNetworkData> simpleSearchData(NetworkBookList &books, const std::string &pattern);
	shared_ptr<ZLNetworkData> advancedSearchData(NetworkBookList &books, const std::string &title, const std::string &author, const std::string &series, const std::string &tag, const std::string &annotation);

private:
	void addSubPattern(std::string &url, const std::string &name, const std::string &value);
};

#endif /* __FBREADERORGLINK_H__ */
