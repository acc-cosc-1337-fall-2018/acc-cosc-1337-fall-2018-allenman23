#include "menu_bar.h"

MenuBar::MenuBar()
{
	auto menu_file = new wxMenu;
	menu_file->Append(ID_Hello, "&Hello...\t Ctrl-H",
		"Help string show in menu item status bar");
	menu_file->AppendSeparator();
	menu_file->Append(wxID_EXIT);

	auto menu_hello = new wxMenu;
	menu_hello->Append(wxID_ABORT, "Test");

	Append(menu_file, "&File");
	Append(menu_hello, "&Help");
}