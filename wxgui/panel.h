#ifndef PANEL_H
#define PANEL_H
#include <wx/wx.h>
#include "frame.h"
#include <string>
#include <vector>


class Panel : public wxPanel
{
public:
	Panel(wxWindow* parent);
private:
	void OnDisplay(wxCommandEvent& event);
	void OnList(wxCommandEvent& event);
	wxTextCtrl* m_nameEntry;
	wxRadioBox* radio_box;
	wxListBox* list_box;
	std::vector<std::string> list_options{ "joe", "larry", "curly" };
};

#endif // ! PANEL_H