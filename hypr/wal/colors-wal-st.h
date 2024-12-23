const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f1011", /* black   */
  [1] = "#A38974", /* red     */
  [2] = "#7E7F81", /* green   */
  [3] = "#838383", /* yellow  */
  [4] = "#B0A68F", /* blue    */
  [5] = "#DAC2A1", /* magenta */
  [6] = "#D8C8A6", /* cyan    */
  [7] = "#c3c3c3", /* white   */

  /* 8 bright colors */
  [8]  = "#59596d",  /* black   */
  [9]  = "#A38974",  /* red     */
  [10] = "#7E7F81", /* green   */
  [11] = "#838383", /* yellow  */
  [12] = "#B0A68F", /* blue    */
  [13] = "#DAC2A1", /* magenta */
  [14] = "#D8C8A6", /* cyan    */
  [15] = "#c3c3c3", /* white   */

  /* special colors */
  [256] = "#0f1011", /* background */
  [257] = "#c3c3c3", /* foreground */
  [258] = "#c3c3c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
