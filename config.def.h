/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
  { "black",      STRING,  &colorname[INIT] },
  { "color6",     STRING,  &colorname[INPUT] },
  { "#CC3333",    STRING,  &colorname[FAILED] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
