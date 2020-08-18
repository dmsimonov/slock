/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2E3440",     /* after initialization */
	[INPUT] =  "#3B4252",   /* during input */
	[FAILED] = "#2E3440",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
