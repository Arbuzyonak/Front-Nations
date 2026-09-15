#include "main.h"

using namespace godot;

void FrontNations::_bind_methods() {}
FrontNations::FrontNations() {}
FrontNations::~FrontNations() {}

void FrontNations::_ready()
    {
        UtilityFunctions::print("Window Loaded!");
        LineEdit *textbox = get_node<LineEdit>("LineEdit");
        Label *label = get_node<Label>("Label");
        if (label)
        {
            label->set_text("Hi!");
        }
        if (textbox)
        {
            textbox->set_editable(true);
            textbox->set_text("Welcome to this");
            textbox->set_editable(false);
        }
    }