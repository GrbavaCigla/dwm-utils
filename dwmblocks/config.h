//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "/home/cigla/.bin/brightstatus.sh", 0, 11},
	{" ", "/home/cigla/.bin/volstatus.sh", 0, 10},
	{" ", "date +%d/%m/%Y", 120, 0},
	{" ", "/home/cigla/.bin/battery.sh", 5, 0},
	{" ", "date +%T", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "   ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
