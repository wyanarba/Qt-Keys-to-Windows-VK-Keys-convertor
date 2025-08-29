#include "keysConv.h"

KeysConvector::KeysConvector() {
	SysKeyToQKey = {

	{ 0, Qt::Key_unknown}, //x00
	{ 1, Qt::Key_unknown},  //0x01   VK_LBUTTON          | Left mouse button
	{ 2, Qt::Key_unknown},  //0x02   VK_RBUTTON          | Right mouse button
	{ 3, Qt::Key_Cancel},  //0x03   VK_CANCEL           | Control-Break processing
	{ 4, Qt::Key_unknown},  //0x04   VK_MBUTTON          | Middle mouse button
	{ 5, Qt::Key_unknown},  //0x05   VK_XBUTTON1         | X1 mouse button
	{ 6, Qt::Key_unknown},  //0x06   VK_XBUTTON2         | X2 mouse button
	{ 7, Qt::Key_unknown},  //0x07   -- unassigned --
	{ 8, Qt::Key_Backspace},  //0x08   VK_BACK             | BackSpace key
	{ 9, Qt::Key_Tab},  //0x09   VK_TAB              | Tab key
	{ 10, Qt::Key_unknown},  //0x0A   -- reserved --
	{ 11, Qt::Key_unknown},  //0x0B   -- reserved --
	{ 12, Qt::Key_Clear},  //0x0C   VK_CLEAR            | Clear key
	{ 13, Qt::Key_Return},  //0x0D   VK_RETURN           | Enter key
	{ 14, Qt::Key_unknown},  //0x0E   -- unassigned --
	{ 15, Qt::Key_unknown},  //0x0F   -- unassigned --
	{ 16, Qt::Key_Shift},  //0x10   VK_SHIFT            | Shift key
	{ 17, Qt::Key_Control},  //0x11   VK_CONTROL          | Ctrl key
	{ 18, Qt::Key_Alt},  //0x12   VK_MENU             | Alt key
	{ 19, Qt::Key_Pause},  //0x13   VK_PAUSE            | Pause key
	{ 20, Qt::Key_CapsLock},  //0x14   VK_CAPITAL          | Caps-Lock
	{ 21, Qt::Key_unknown},  //0x15   VK_KANA / VK_HANGUL | IME Kana or Hangul mode
	{ 22, Qt::Key_unknown},  //0x16   -- unassigned --
	{ 23, Qt::Key_unknown},  //0x17   VK_JUNJA            | IME Junja mode
	{ 24, Qt::Key_unknown},  //0x18   VK_FINAL            | IME final mode
	{ 25, Qt::Key_unknown},  //0x19   VK_HANJA / VK_KANJI | IME Hanja or Kanji mode
	{ 26, Qt::Key_unknown},  //0x1A   -- unassigned --
	{ 27, Qt::Key_Escape},  //0x1B   VK_ESCAPE           | Esc key
	{ 28, Qt::Key_unknown},  //0x1C   VK_CONVERT          | IME convert
	{ 29, Qt::Key_unknown},  //0x1D   VK_NONCONVERT       | IME non-convert
	{ 30, Qt::Key_unknown},  //0x1E   VK_ACCEPT           | IME accept
	{ 31, Qt::Key_Mode_switch},  //0x1F   VK_MODECHANGE       | IME mode change request
	{ 32, Qt::Key_Space},  //0x20   VK_SPACE            | Spacebar
	{ 33, Qt::Key_PageUp},  //0x21   VK_PRIOR            | Page Up key
	{ 34, Qt::Key_PageDown},  //0x22   VK_NEXT             | Page Down key
	{ 35, Qt::Key_End},  //0x23   VK_END              | End key
	{ 36, Qt::Key_Home},  //0x24   VK_HOME             | Home key
	{ 37, Qt::Key_Left},  //0x25   VK_LEFT             | Left arrow key
	{ 38, Qt::Key_Up},  //0x26   VK_UP               | Up arrow key
	{ 39, Qt::Key_Right},  //0x27   VK_RIGHT            | Right arrow key
	{ 40, Qt::Key_Down},  //0x28   VK_DOWN             | Down arrow key
	{ 41, Qt::Key_Select},  //0x29   VK_SELECT           | Select key
	{ 42, Qt::Key_Printer},  //0x2A   VK_PRINT            | Print key
	{ 43, Qt::Key_Execute},  //0x2B   VK_EXECUTE          | Execute key
	{ 44, Qt::Key_Print},  //0x2C   VK_SNAPSHOT         | Print Screen key
	{ 45, Qt::Key_Insert},  //0x2D   VK_INSERT           | Ins key
	{ 46, Qt::Key_Delete},  //0x2E   VK_DELETE           | Del key
	{ 47, Qt::Key_Help},  //0x2F   VK_HELP             | Help key
	{ 48, Qt::Key_0},  //0x30   (VK_0)              | 0 key
	{ 49, Qt::Key_1},  //0x31   (VK_1)              | 1 key
	{ 50, Qt::Key_2},  //0x32   (VK_2)              | 2 key
	{ 51, Qt::Key_3},  //0x33   (VK_3)              | 3 key
	{ 52, Qt::Key_4},  //0x34   (VK_4)              | 4 key
	{ 53, Qt::Key_5},  //0x35   (VK_5)              | 5 key
	{ 54, Qt::Key_6},  //0x36   (VK_6)              | 6 key
	{ 55, Qt::Key_7},  //0x37   (VK_7)              | 7 key
	{ 56, Qt::Key_8},  //0x38   (VK_8)              | 8 key
	{ 57, Qt::Key_9},  //0x39   (VK_9)              | 9 key
	{ 58, Qt::Key_unknown},  //0x3A   -- unassigned --
	{ 59, Qt::Key_unknown},  //0x3B   -- unassigned --
	{ 60, Qt::Key_unknown},  //0x3C   -- unassigned --
	{ 61, Qt::Key_unknown},  //0x3D   -- unassigned --
	{ 62, Qt::Key_unknown},  //0x3E   -- unassigned --
	{ 63, Qt::Key_unknown},  //0x3F   -- unassigned --
	{ 64, Qt::Key_unknown},  //0x40   -- unassigned --
	{ 65, Qt::Key_A},  //0x41   (VK_A)              | A key
	{ 66, Qt::Key_B},  //0x42   (VK_B)              | B key
	{ 67, Qt::Key_C},  //0x43   (VK_C)              | C key
	{ 68, Qt::Key_D},  //0x44   (VK_D)              | D key
	{ 69, Qt::Key_E},  //0x45   (VK_E)              | E key
	{ 70, Qt::Key_F},  //0x46   (VK_F)              | F key
	{ 71, Qt::Key_G},  //0x47   (VK_G)              | G key
	{ 72, Qt::Key_H},  //0x48   (VK_H)              | H key
	{ 73, Qt::Key_I},  //0x49   (VK_I)              | I key
	{ 74, Qt::Key_J},  //0x4A   (VK_J)              | J key
	{ 75, Qt::Key_K},  //0x4B   (VK_K)              | K key
	{ 76, Qt::Key_L},  //0x4C   (VK_L)              | L key
	{ 77, Qt::Key_M},  //0x4D   (VK_M)              | M key
	{ 78, Qt::Key_N},  //0x4E   (VK_N)              | N key
	{ 79, Qt::Key_O},  //0x4F   (VK_O)              | O key
	{ 80, Qt::Key_P},  //0x50   (VK_P)              | P key
	{ 81, Qt::Key_Q},  //0x51   (VK_Q)              | Q key
	{ 82, Qt::Key_R},  //0x52   (VK_R)              | R key
	{ 83, Qt::Key_S},  //0x53   (VK_S)              | S key
	{ 84, Qt::Key_T},  //0x54   (VK_T)              | T key
	{ 85, Qt::Key_U},  //0x55   (VK_U)              | U key
	{ 86, Qt::Key_V},  //0x56   (VK_V)              | V key
	{ 87, Qt::Key_W},  //0x57   (VK_W)              | W key
	{ 88, Qt::Key_X},  //0x58   (VK_X)              | X key
	{ 89, Qt::Key_Y},  //0x59   (VK_Y)              | Y key
	{ 90, Qt::Key_Z},  //0x5A   (VK_Z)              | Z key
	{ 91, Qt::Key_Meta},  //0x5B   VK_LWIN             | Left Windows  - MS Natural kbd
	{ 92, Qt::Key_Meta},  //0x5C   VK_RWIN             | Right Windows - MS Natural kbd
	{ 93, Qt::Key_Menu},  //0x5D   VK_APPS             | Application key-MS Natural kbd
	{ 94, Qt::Key_unknown},  //0x5E   -- reserved --
	{ 95, Qt::Key_Sleep},  //0x5F   VK_SLEEP
	{ 96, Qt::Key_0},  //0x60   VK_NUMPAD0          | Numeric keypad 0 key
	{ 97, Qt::Key_1},  //0x61   VK_NUMPAD1          | Numeric keypad 1 key
	{ 98, Qt::Key_2},  //0x62   VK_NUMPAD2          | Numeric keypad 2 key
	{ 99, Qt::Key_3},  //0x63   VK_NUMPAD3          | Numeric keypad 3 key
	{ 100, Qt::Key_4},  //0x64   VK_NUMPAD4          | Numeric keypad 4 key
	{ 101, Qt::Key_5},  //0x65   VK_NUMPAD5          | Numeric keypad 5 key
	{ 102, Qt::Key_6},  //0x66   VK_NUMPAD6          | Numeric keypad 6 key
	{ 103, Qt::Key_7},  //0x67   VK_NUMPAD7          | Numeric keypad 7 key
	{ 104, Qt::Key_8},  //0x68   VK_NUMPAD8          | Numeric keypad 8 key
	{ 105, Qt::Key_9},  //0x69   VK_NUMPAD9          | Numeric keypad 9 key
	{ 106, Qt::Key_Asterisk},  //0x6A   VK_MULTIPLY         | Multiply key
	{ 107, Qt::Key_Plus},  //0x6B   VK_ADD              | Add key
	{ 108, Qt::Key_unknown},  //0x6C   VK_SEPARATOR        | Separator key (locale-dependent)
	{ 109, Qt::Key_Minus},  //0x6D   VK_SUBTRACT         | Subtract key
	{ 110, Qt::Key_unknown},  //0x6E   VK_DECIMAL          | Decimal key (locale-dependent)
	{ 111, Qt::Key_Slash},  //0x6F   VK_DIVIDE           | Divide key
	{ 112, Qt::Key_F1},  //0x70   VK_F1               | F1 key
	{ 113, Qt::Key_F2},  //0x71   VK_F2               | F2 key
	{ 114, Qt::Key_F3},  //0x72   VK_F3               | F3 key
	{ 115, Qt::Key_F4},  //0x73   VK_F4               | F4 key
	{ 116, Qt::Key_F5},  //0x74   VK_F5               | F5 key
	{ 117, Qt::Key_F6},  //0x75   VK_F6               | F6 key
	{ 118, Qt::Key_F7},  //0x76   VK_F7               | F7 key
	{ 119, Qt::Key_F8},  //0x77   VK_F8               | F8 key
	{ 120, Qt::Key_F9},  //0x78   VK_F9               | F9 key
	{ 121, Qt::Key_F10},  //0x79   VK_F10              | F10 key
	{ 122, Qt::Key_F11},  //0x7A   VK_F11              | F11 key
	{ 123, Qt::Key_F12},  //0x7B   VK_F12              | F12 key
	{ 124, Qt::Key_F13},  //0x7C   VK_F13              | F13 key
	{ 125, Qt::Key_F14},  //0x7D   VK_F14              | F14 key
	{ 126, Qt::Key_F15},  //0x7E   VK_F15              | F15 key
	{ 127, Qt::Key_F16},  //0x7F   VK_F16              | F16 key
	{ 128, Qt::Key_F17},  //0x80   VK_F17              | F17 key
	{ 129, Qt::Key_F18},  //0x81   VK_F18              | F18 key
	{ 130, Qt::Key_F19},  //0x82   VK_F19              | F19 key
	{ 131, Qt::Key_F20},  //0x83   VK_F20              | F20 key
	{ 132, Qt::Key_F21},  //0x84   VK_F21              | F21 key
	{ 133, Qt::Key_F22},  //0x85   VK_F22              | F22 key
	{ 134, Qt::Key_F23},  //0x86   VK_F23              | F23 key
	{ 135, Qt::Key_F24},  //0x87   VK_F24              | F24 key
	{ 136, Qt::Key_unknown},  //0x88   -- unassigned --
	{ 137, Qt::Key_unknown},  //0x89   -- unassigned --
	{ 138, Qt::Key_unknown},  //0x8A   -- unassigned --
	{ 139, Qt::Key_unknown},  //0x8B   -- unassigned --
	{ 140, Qt::Key_unknown},  //0x8C   -- unassigned --
	{ 141, Qt::Key_unknown},  //0x8D   -- unassigned --
	{ 142, Qt::Key_unknown},  //0x8E   -- unassigned --
	{ 143, Qt::Key_unknown},  //0x8F   -- unassigned --
	{ 144, Qt::Key_NumLock},  //0x90   VK_NUMLOCK          | Num Lock key
	{ 145, Qt::Key_ScrollLock},  //0x91   VK_SCROLL           | Scroll Lock key
	// Fujitsu/OASYS kbd --------------------
	//{  146, Qt::Key_Jisho},  //0x92   VK_OEM_FJ_JISHO     | 'Dictionary' key /
								//              VK_OEM_NEC_EQUAL  = key on numpad on NEC PC-9800 kbd
	{ 147, Qt::Key_Massyo},  //0x93   VK_OEM_FJ_MASSHOU   | 'Unregister word' key
	{ 148, Qt::Key_Touroku},  //0x94   VK_OEM_FJ_TOUROKU   | 'Register word' key
	//0, //Qt::Key_Oyayubi_Left,//149   0x95  VK_OEM_FJ_LOYA  | 'Left OYAYUBI' key
	//0, //Qt::Key_Oyayubi_Right,//150  0x96  VK_OEM_FJ_ROYA  | 'Right OYAYUBI' key
	{ 151, Qt::Key_unknown},  //0x97   -- unassigned --
	{ 152, Qt::Key_unknown},  //0x98   -- unassigned --
	{ 153, Qt::Key_unknown},  //0x99   -- unassigned --
	{ 154, Qt::Key_unknown},  //0x9A   -- unassigned --
	{ 155, Qt::Key_unknown},  //0x9B   -- unassigned --
	{ 156, Qt::Key_unknown},  //0x9C   -- unassigned --
	{ 157, Qt::Key_unknown},  //0x9D   -- unassigned --
	{ 158, Qt::Key_unknown},  //0x9E   -- unassigned --
	{ 159, Qt::Key_unknown},  //0x9F   -- unassigned --
	{ 160, Qt::Key_Shift},  //0xA0   VK_LSHIFT           | Left Shift key
	{ 161, Qt::Key_Shift},  //0xA1   VK_RSHIFT           | Right Shift key
	{ 162, Qt::Key_Control},  //0xA2   VK_LCONTROL         | Left Ctrl key
	{ 163, Qt::Key_Control},  //0xA3   VK_RCONTROL         | Right Ctrl key
	{ 164, Qt::Key_Alt},  //0xA4   VK_LMENU            | Left Menu key
	{ 165, Qt::Key_Alt},  //0xA5   VK_RMENU            | Right Menu key
	{ 166, Qt::Key_Back},  //0xA6   VK_BROWSER_BACK     | Browser Back key
	{ 167, Qt::Key_Forward},  //0xA7   VK_BROWSER_FORWARD  | Browser Forward key
	{ 168, Qt::Key_Refresh},  //0xA8   VK_BROWSER_REFRESH  | Browser Refresh key
	{ 169, Qt::Key_Stop},  //0xA9   VK_BROWSER_STOP     | Browser Stop key
	{ 170, Qt::Key_Search},  //0xAA   VK_BROWSER_SEARCH   | Browser Search key
	{ 171, Qt::Key_Favorites},  //0xAB   VK_BROWSER_FAVORITES| Browser Favorites key
	{ 172, Qt::Key_HomePage},  //0xAC   VK_BROWSER_HOME     | Browser Start and Home key
	{ 173, Qt::Key_VolumeMute},  //0xAD   VK_VOLUME_MUTE      | Volume Mute key
	{ 174, Qt::Key_VolumeDown},  //0xAE   VK_VOLUME_DOWN      | Volume Down key
	{ 175, Qt::Key_VolumeUp},  //0xAF   VK_VOLUME_UP        | Volume Up key
	{ 176, Qt::Key_MediaNext},  //0xB0   VK_MEDIA_NEXT_TRACK | Next Track key
	{ 177 ,  Qt::Key_MediaPrevious}, //177 0xB1   VK_MEDIA_PREV_TRACK | Previous Track key
	{ 178, Qt::Key_MediaStop},  //0xB2   VK_MEDIA_STOP       | Stop Media key
	{ 179, Qt::Key_MediaTogglePlayPause},  //0xB3   VK_MEDIA_PLAY_PAUSE | Play/Pause Media key
	{ 180, Qt::Key_LaunchMail},  //0xB4   VK_LAUNCH_MAIL      | Start Mail key
	{ 181, Qt::Key_LaunchMedia},  //0xB5   VK_LAUNCH_MEDIA_SELECT Select Media key
	{ 182, Qt::Key_Launch0},  //0xB6   VK_LAUNCH_APP1      | Start Application 1 key
	{ 183, Qt::Key_Launch1},  //0xB7   VK_LAUNCH_APP2      | Start Application 2 key
	{ 184, Qt::Key_unknown},  //0xB8   -- reserved --
	{ 185, Qt::Key_unknown},  //0xB9   -- reserved --
	{ 186, Qt::Key_Semicolon},  //0xBA   VK_OEM_1            | ';:' for US
	{ 187, Qt::Key_Equal},  //0xBB   VK_OEM_PLUS         | '+' any country
	{ 188, Qt::Key_Comma},  //0xBC   VK_OEM_COMMA        | ',' any country
	{ 189, Qt::Key_Minus},  //0xBD   VK_OEM_MINUS        | '-' any country
	{ 190, Qt::Key_Period},  //0xBE   VK_OEM_PERIOD       | '.' any country
	{ 191, Qt::Key_Slash},  //0xBF   VK_OEM_2            | '/?' for US
	{ 192, Qt::Key_QuoteLeft},  //0xC0   VK_OEM_3            | '`~' for US
	{ 193, Qt::Key_unknown},  //0xC1   -- reserved --
	{ 194, Qt::Key_unknown},  //0xC2   -- reserved --
	{ 195, Qt::Key_unknown},  //0xC3   -- reserved --
	{ 196, Qt::Key_unknown},  //0xC4   -- reserved --
	{ 197, Qt::Key_unknown},  //0xC5   -- reserved --
	{ 198, Qt::Key_unknown},  //0xC6   -- reserved --
	{ 199, Qt::Key_unknown},  //0xC7   -- reserved --
	{ 200, Qt::Key_unknown},  //0xC8   -- reserved --
	{ 201, Qt::Key_unknown},  //0xC9   -- reserved --
	{ 202, Qt::Key_unknown},  //0xCA   -- reserved --
	{ 203, Qt::Key_unknown},  //0xCB   -- reserved --
	{ 204, Qt::Key_unknown},  //0xCC   -- reserved --
	{ 205, Qt::Key_unknown},  //0xCD   -- reserved --
	{ 206, Qt::Key_unknown},  //0xCE   -- reserved --
	{ 207, Qt::Key_unknown},  //0xCF   -- reserved --
	{ 208, Qt::Key_unknown},  //0xD0   -- reserved --
	{ 209, Qt::Key_unknown},  //0xD1   -- reserved --
	{ 210, Qt::Key_unknown},  //0xD2   -- reserved --
	{ 211, Qt::Key_unknown},  //0xD3   -- reserved --
	{ 212, Qt::Key_unknown},  //0xD4   -- reserved --
	{ 213, Qt::Key_unknown},  //0xD5   -- reserved --
	{ 214, Qt::Key_unknown},  //0xD6   -- reserved --
	{ 215, Qt::Key_unknown},  //0xD7   -- reserved --
	{ 216, Qt::Key_unknown},  //0xD8   -- unassigned --
	{ 217, Qt::Key_unknown},  //0xD9   -- unassigned --
	{ 218, Qt::Key_unknown},  //0xDA   -- unassigned --
	{ 219 , Qt::Key_BracketLeft},  //0xDB   VK_OEM_4            | '[{' for US
	{ 220 , Qt::Key_Backslash},  //0xDC   VK_OEM_5            | '\|' for US
	{ 221 , Qt::Key_BracketRight},  //0xDD   VK_OEM_6            | ']}' for US
	{ 222 , Qt::Key_Apostrophe},  //0xDE   VK_OEM_7            | ''"' for US
	{ 223, Qt::Key_unknown},  //0xDF   VK_OEM_8
	{ 224, Qt::Key_unknown},  //0xE0   -- reserved --
	{ 225, Qt::Key_unknown},  //0xE1   VK_OEM_AX           | 'AX' key on Japanese AX kbd
	{ 226, Qt::Key_unknown},  //0xE2   VK_OEM_102          | "<>" or "\|" on RT 102-key kbd
	{ 227, Qt::Key_unknown},  //0xE3   VK_ICO_HELP         | Help key on ICO
	{ 228, Qt::Key_unknown},  //0xE4   VK_ICO_00           | 00 key on ICO
	{ 229, Qt::Key_unknown},  //0xE5   VK_PROCESSKEY       | IME Process key
	{ 230, Qt::Key_unknown},  //0xE6   VK_ICO_CLEAR        |
	{ 231, Qt::Key_unknown},  //0xE7   VK_PACKET           | Unicode char as keystrokes
	{ 232, Qt::Key_unknown},  //0xE8   -- unassigned --
	//Nokia Ericsson definitions ---------------
	{ 233, Qt::Key_unknown},  //0xE9   VK_OEM_RESET
	{ 234, Qt::Key_unknown},  //0xEA   VK_OEM_JUMP
	{ 235, Qt::Key_unknown},  //0xEB   VK_OEM_PA1
	{ 236, Qt::Key_unknown},  //0xEC   VK_OEM_PA2
	{ 237, Qt::Key_unknown},  //0xED   VK_OEM_PA3
	{ 238, Qt::Key_unknown},  //0xEE   VK_OEM_WSCTRL
	{ 239, Qt::Key_unknown},  //0xEF   VK_OEM_CUSEL
	{ 240, Qt::Key_unknown},  //0xF0   VK_OEM_ATTN
	{ 241, Qt::Key_unknown},  //0xF1   VK_OEM_FINISH
	{ 242, Qt::Key_unknown},  //0xF2   VK_OEM_COPY
	{ 243, Qt::Key_unknown},  //0xF3   VK_OEM_AUTO
	{ 244, Qt::Key_unknown},  //0xF4   VK_OEM_ENLW
	{ 245, Qt::Key_unknown},  //0xF5   VK_OEM_BACKTAB
	{ 246, Qt::Key_unknown},  //0xF6   VK_ATTN             | Attn key
	{ 247, Qt::Key_unknown},  //0xF7   VK_CRSEL            | CrSel key
	{ 248, Qt::Key_unknown},  //0xF8   VK_EXSEL            | ExSel key
	{ 249, Qt::Key_unknown},  //0xF9   VK_EREOF            | Erase EOF key
	{ 250, Qt::Key_Play},  //0xFA   VK_PLAY             | Play key
	{ 251, Qt::Key_Zoom},  //0xFB   VK_ZOOM             | Zoom key
	{ 252, Qt::Key_unknown},  //0xFC   VK_NONAME           | Reserved
	{ 253, Qt::Key_unknown},  //0xFD   VK_PA1              | PA1 key
	{ 254, Qt::Key_Clear}  //0xFE   VK_OEM_CLEAR        | Clear key
	};

	for (const auto& pair : SysKeyToQKey) {
		QKeyToSysKey.emplace(pair.second, pair.first);
	}
}

UINT KeysConvector::QModToSysMod(Qt::KeyboardModifiers mods)
{
	UINT winMods = 0;

	if (mods & Qt::ShiftModifier)
		winMods |= MOD_SHIFT;

	if (mods & Qt::ControlModifier)
		winMods |= MOD_CONTROL;

	if (mods & Qt::AltModifier)
		winMods |= MOD_ALT;

	if (mods & Qt::MetaModifier)  // Meta = Windows клавиша
		winMods |= MOD_WIN;

	return winMods;
}

Qt::KeyboardModifiers KeysConvector::SysModToQMod(UINT mods)
{
	Qt::KeyboardModifiers qtMods = Qt::NoModifier;

	if (mods & MOD_SHIFT)
		qtMods |= Qt::ShiftModifier;

	if (mods & MOD_CONTROL)
		qtMods |= Qt::ControlModifier;

	if (mods & MOD_ALT)
		qtMods |= Qt::AltModifier;

	if (mods & MOD_WIN)  // Meta = Windows клавиша
		qtMods |= Qt::MetaModifier;

	return qtMods;
}