
#ifndef _INPUT_H
#define _INPUT_H

enum INPUTS
{
	LEFTKEY, RIGHTKEY, UPKEY, DOWNKEY,
	JUMPKEY, FIREKEY,
	PREVWPNKEY, NEXTWPNKEY,
	INVENTORYKEY, MAPSYSTEMKEY,
	
	ESCKEY,
	F1KEY,
	F2KEY,
	F3KEY,
	F4KEY,
	F5KEY,
	F6KEY,
	F7KEY,
	F8KEY,
	F9KEY,
	F10KEY,
	F11KEY,
	F12KEY,
	
	FREEZE_FRAME_KEY,
	FRAME_ADVANCE_KEY,
	DEBUG_FLY_KEY,
	
	INPUT_COUNT
};

#define LASTCONTROLKEY		MAPSYSTEMKEY

#define DEBUG_GOD_KEY		F1KEY
#define DEBUG_MOVE_KEY		F2KEY
#define DEBUG_SAVE_KEY		F4KEY
#define FFWDKEY				F5KEY

extern bool inputs[INPUT_COUNT];
extern bool lastinputs[INPUT_COUNT];
extern int last_sdl_key;

bool input_init(void);
void input_poll(void);
void input_close(void);
void input_set_mappings(int *array);
int input_get_mapping(int keyindex);
bool buttondown(void);

#endif
