// 
//  Copyright 2012 MultiMC Contributors
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//

#pragma once
#include "listselectdialog.h"
#include "mcversionlist.h"
#include <vector>

class MinecraftVersionDialog : public ListSelectDialog
{
public:
	MinecraftVersionDialog(wxWindow *parent);
	MCVersion * GetSelectedVersion();

protected:
	void Refilter();
	virtual void LoadList();
	virtual bool DoLoadList();
	virtual wxString OnGetItemText(long item, long column);
	void OnSnapshots(wxCommandEvent& event);
	void OnNostalgia(wxCommandEvent& event);
	
	// data
	int typeColumnWidth;
	std::vector<unsigned> visibleIndexes;
	bool showOldSnapshots;
	bool showMCNostagia;
	
	DECLARE_EVENT_TABLE()
};
