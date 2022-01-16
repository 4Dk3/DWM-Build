//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{":", "light -G",						        1,              50},

	{":", "cat /sys/class/power_supply/BAT0/capacity",                     10,             0},

	{":", "pamixer --get-volume-human",					1,              50},

	{":", "sensors | awk '/Core 0/{print $3}'",		        3,		1},

	{":", "date '+%b %d %X'",             					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
