const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#080505", /* black   */
  [1] = "#724B4B", /* red     */
  [2] = "#9D2929", /* green   */
  [3] = "#996464", /* yellow  */
  [4] = "#946B6B", /* blue    */
  [5] = "#AD7F80", /* magenta */
  [6] = "#B48C8C", /* cyan    */
  [7] = "#c1c0c0", /* white   */

  /* 8 bright colors */
  [8]  = "#665353",  /* black   */
  [9]  = "#724B4B",  /* red     */
  [10] = "#9D2929", /* green   */
  [11] = "#996464", /* yellow  */
  [12] = "#946B6B", /* blue    */
  [13] = "#AD7F80", /* magenta */
  [14] = "#B48C8C", /* cyan    */
  [15] = "#c1c0c0", /* white   */

  /* special colors */
  [256] = "#080505", /* background */
  [257] = "#c1c0c0", /* foreground */
  [258] = "#c1c0c0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
