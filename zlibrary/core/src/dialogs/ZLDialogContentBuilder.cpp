/*
 * Copyright (C) 2004-2009 Geometer Plus <contact@geometerplus.com>
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

#include "ZLDialogContentBuilder.h"
#include "ZLOptionsDialog.h"

std::vector<shared_ptr<ZLDialogContentBuilder> > ZLOptionsDialog::ourPlatformDependentBuilders;

void ZLOptionsDialog::addPlatformDependentBuilder(shared_ptr<ZLDialogContentBuilder> builder) {
	ourPlatformDependentBuilders.push_back(builder);
}

void ZLOptionsDialog::createPlatformDependentTabs() {
	for (std::vector<shared_ptr<ZLDialogContentBuilder> >::const_iterator it = ourPlatformDependentBuilders.begin(); it != ourPlatformDependentBuilders.end(); ++it) {
		(*it)->buildTabs(*this);	
	}
}

ZLDialogContentBuilder::~ZLDialogContentBuilder() {
}
