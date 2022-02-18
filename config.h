typedef struct Block {
	const char* icon;
	const char* command;
	unsigned int interval;
	unsigned int signal;
} Block;

static const Block blocks[] = {
  {"",       "~/.config/dwmblocks/blocks/kernelversion",   3600, 0},
  {"",       "~/.config/dwmblocks/blocks/memory",          5,    0},
  {"",       "~/.config/dwmblocks/blocks/storage",         60,   0},
  {"",       "~/.config/dwmblocks/blocks/uptime",          60,   0},
  {"",       "~/.config/dwmblocks/blocks/vpn-status",      5,    0},
  // {"",       "~/.config/dwmblocks/blocks/network-info",    5,    0},
  {"",       "~/.config/dwmblocks/blocks/volume",          1,    1},
  {"",       "~/.config/dwmblocks/blocks/updates",         600,  0},
  {"",       "~/.config/dwmblocks/blocks/time",            1,    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 4;
