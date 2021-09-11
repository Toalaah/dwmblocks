static const Block blocks[] = {
	{"",       "~/.config/dwmblocks/blocks/kernelversion",	 3600, 0},
	{"",       "~/.config/dwmblocks/blocks/uptime",	         30,   0},
	{"",       "~/.config/dwmblocks/blocks/network-info",	   10,	 0},
	{"",       "~/.config/dwmblocks/blocks/volume",	         1,	   0},
	{"",       "~/.config/dwmblocks/blocks/updates",	       600,	 0},
	{"",       "~/.config/dwmblocks/blocks/time",	           1,		 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 4;
