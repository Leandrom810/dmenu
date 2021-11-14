/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 220;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Terminus:size=12"};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
        /*     fg         bg       */
        [SchemeNorm] = { "#bbbbbb", "#111119" },
        [SchemeSel] = { "#eeeeee", "#444444" },
        [SchemeOut] = { "#000000", "#00ffff" },
};

/* Alpha Patch */
static const unsigned int alphas[SchemeLast][2] = {
        [SchemeNorm] = { OPAQUE, alpha },
        [SchemeSel] = { OPAQUE, alpha },
        [SchemeOut] = { OPAQUE, alpha },
};
static const int border_width = 0;

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 *  * Characters not considered part of a word while deleting words
 *   * for example: " /?\"&[]"
 *    */
static const char worddelimiters[] = " ";

