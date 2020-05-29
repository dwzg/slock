/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT]   = "#282828",   /* after initialization */
	[INPUT]  = "#689d61",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
	[CAPS]   = "#b16286",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;

/* default message */
static const char * message = "LOCKED";

/* text color */
static const char * text_color = "#ebdbb2";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
