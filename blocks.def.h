//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static char fg0[] = "^C0^";
static char fg1[] = "^C1^";
static char fg2[] = "^C2^";
static char fg3[] = "^C3^";
static char fg4[] = "^C4^";
static char fg5[] = "^C5^";
static char fg6[] = "^C6^";
static char fg7[] = "^C7^";
static char fg8[] = "^C8^";

static char bg0[] = "^C0^^B0^ ";
static char bg1[] = "^C0^^B1^ ";
static char bg2[] = "^C0^^B2^ ";
static char bg3[] = "^C0^^B3^ ";
static char bg4[] = "^C0^^B4^ ";
static char bg5[] = "^C0^^B5^ ";
static char bg6[] = "^C0^^B6^ ";
static char bg7[] = "^C0^^B7^ ";
static char bg8[] = "^C0^^B8^ ";

static Block blocks[] =
  {
   // Sigs:
   //  5: network
   //  6: layout
   //  7: date/time
   //  8: diskspace
   //  9: battery
   // 10: memory
   // 11: mpd
   // 12: volume
   // 13: temperature
   // 14: weather
   // 15: brightness

   /*Icon*/ /*Command*/  /*Update Interval*/ /*Update Signal*/
   {fg2,  "sb-mpd",        0,     11},
   {fg4,  "sb-disk",     300,      8},
   {fg6,  "sb-mem",       30,     10},
   {fg2,  "sb-cpu",       10,      6},
   {fg6,  "sb-temp",      10,     13},
   {fg4,  "sb-bklt",       0,     15},
   {fg6,  "sb-bat",       30,      9},
   {fg2,  "sb-vol",        0,     12},
   {fg6,  "sb-wttr",    1800,     14},
   {fg4,  "sb-net",        0,      5},
   {fg6,  "sb-lt",         0,      6},
   {fg2,  "sb-date",      30,      7},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "^d^|";
static unsigned int delimLen = 4;
