//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"",	"blank",	3600,	15}, */
	{"",	"pacpackages",	3600,	13},
	{"",	"music",	1,	11},
	// {"",	"stern",	1,	11},
	{"",	"weath",		3600,	12},
/*	{"",	"vpn",	5,	16}, */
	{"",	"mic",	5,	17},
  {"", "loadavg", 2, 18},
  {"", "cpu", 2, 19},
  {"", "memory", 2, 20},
	{"",	"gettime",		1,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "  |  ";
static char *basecolor = "^c#abb2bf^"; 
static char *basebackcolor = "^b#1e222a^"; 

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
