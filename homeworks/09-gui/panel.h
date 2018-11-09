#ifndef PANEL_H
#define PANEL_H
#include <wx/wx.h>
#include "frame.h"
#include "tic_tac_toe_manager.h"
#include <string>
#include <vector>

class Panel : public wxPanel
{
public:
	Panel(wxWindow* parent);
private:
	void OnButtonClick(wxCommandEvent& event);
	void OnList(wxCommandEvent& event);
	wxTextCtrl* m_nameEntry;
	wxRadioBox* radio_box;
	wxListBox* list_box;
	std::vector<std::string> list_options{ "joe", "larry", "curly" };
	Tic_Tac_Toe_Manager ttt_manager;
};

#endif // ! PANEL_H