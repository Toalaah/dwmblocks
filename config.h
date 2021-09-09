static const Block blocks[] = {
	/*Icon*/	/*Command*/                                 /*Update Interval*/	/*Update Signal*/
	{"",       "~/.config/dwmblocks/blocks/updates",	 600,	           0},
	{"",       "~/.config/dwmblocks/blocks/time",	     1,		           0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 4;
