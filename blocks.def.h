//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 					/* Update Interval*/	/*Update Signal*/
	{"",     	"~/.config/dwmblocks/scripts/backupicon",		3600,			14},

	{"",     	"~/.config/dwmblocks/scripts/mpd",			10,			11},

	{" 🎤 ", 	"~/.config/dwmblocks/scripts/jackd",			3600,			9},
	
	{" π ", 	"~/.config/dwmblocks/scripts/sonic-pi",			3600,			8},

	{" 🔊 ", 	"~/.config/dwmblocks/scripts/volume",			2,			10},

	{"",     	"~/.config/dwmblocks/scripts/weather",			3600,			0},

	{"",     	"~/.config/dwmblocks/scripts/wifi",			20,			0},

	{"",     	"~/.config/dwmblocks/scripts/battery",			10,			0},
	
	{" 📦 ", 	"~/.config/dwmblocks/scripts/pacupdate",		360,			9},
	
	{"", 		"~/.config/dwmblocks/scripts/time",			5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
