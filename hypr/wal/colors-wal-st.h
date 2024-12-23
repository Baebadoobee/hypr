const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#141210", /* black   */
  [1] = "#807B85", /* red     */
  [2] = "#75B68D", /* green   */
  [3] = "#ADA09F", /* yellow  */
  [4] = "#D4BEA0", /* blue    */
  [5] = "#86D69B", /* magenta */
  [6] = "#B3D58F", /* cyan    */
  [7] = "#c4c3c3", /* white   */

  /* 8 bright colors */
  [8]  = "#6e615a",  /* black   */
  [9]  = "#807B85",  /* red     */
  [10] = "#75B68D", /* green   */
  [11] = "#ADA09F", /* yellow  */
  [12] = "#D4BEA0", /* blue    */
  [13] = "#86D69B", /* magenta */
  [14] = "#B3D58F", /* cyan    */
  [15] = "#c4c3c3", /* white   */

  /* special colors */
  [256] = "#141210", /* background */
  [257] = "#c4c3c3", /* foreground */
  [258] = "#c4c3c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
