static const char norm_fg[] = "#c4c3c3";
static const char norm_bg[] = "#141210";
static const char norm_border[] = "#6e615a";

static const char sel_fg[] = "#c4c3c3";
static const char sel_bg[] = "#75B68D";
static const char sel_border[] = "#c4c3c3";

static const char urg_fg[] = "#c4c3c3";
static const char urg_bg[] = "#807B85";
static const char urg_border[] = "#807B85";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
