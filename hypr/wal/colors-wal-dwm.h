static const char norm_fg[] = "#c3c3c2";
static const char norm_bg[] = "#110f0d";
static const char norm_border[] = "#6c6558";

static const char sel_fg[] = "#c3c3c2";
static const char sel_bg[] = "#46523E";
static const char sel_border[] = "#c3c3c2";

static const char urg_fg[] = "#c3c3c2";
static const char urg_bg[] = "#304837";
static const char urg_border[] = "#304837";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
