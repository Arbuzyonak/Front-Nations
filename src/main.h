#ifndef FRONTNATIONS_MAIN_H
#define FRONTNATIONS_MAIN_H
#include <godot_cpp/core/class_db.hpp> //GDCLASS
#include <godot_cpp/variant/utility_functions.hpp> //UtilityFunctions::

//Useful ig
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/button.hpp>

namespace godot {
class FrontNations : public Node2D {
        GDCLASS(FrontNations, Node2D);
protected:
    static void _bind_methods();

public:
    FrontNations();
    ~FrontNations();

    void _ready() override;
};
}

#endif //FRONTNATIONS_MAIN_H