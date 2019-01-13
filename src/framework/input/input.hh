//
//  Ruvi - @ruvi-framework.git
//

// includes
#include "utils/rendering.hh"
#include "interfaces/interfaces.hh"

// structs
struct input_data {

	bool keys[256];
	bool pressed_keys[256];
	bool old_keys[256];
	point cursor;
	point cursor_ghost; // last frames cursor pos, used for getting cursor_delta
	point cursor_delta;
	bool can_click;
};

namespace input {

	void on_paint();

	bool get_can_click(); 
	void set_can_click(bool state);
	bool get_key_state(e_button_code key);
	bool get_key_press(e_button_code key);
	bool in_bounds(int x, int y, int x2, int y2, int width, int height);
	bool is_mouse_in_region(int x, int y, int width, int height);
}
