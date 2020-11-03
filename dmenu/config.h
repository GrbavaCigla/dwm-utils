/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static int dmx = 18;
static int dmy = 18;
static unsigned int dmw = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:style=Regular:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d0c9be", "#18140d" },
	[SchemeSel] = { "#d0c9be", "#929F25" },
	[SchemeOut] = { "#d0c9be", "#BCC14E" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 33;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
