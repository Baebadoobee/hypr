const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#110f0d", /* black   */
  [1] = "#304837", /* red     */
  [2] = "#46523E", /* green   */
  [3] = "#4E6852", /* yellow  */
  [4] = "#985C3E", /* blue    */
  [5] = "#57966D", /* magenta */
  [6] = "#A49D6F", /* cyan    */
  [7] = "#c3c3c2", /* white   */

  /* 8 bright colors */
  [8]  = "#6c6558",  /* black   */
  [9]  = "#304837",  /* red     */
  [10] = "#46523E", /* green   */
  [11] = "#4E6852", /* yellow  */
  [12] = "#985C3E", /* blue    */
  [13] = "#57966D", /* magenta */
  [14] = "#A49D6F", /* cyan    */
  [15] = "#c3c3c2", /* white   */

  /* special colors */
  [256] = "#110f0d", /* background */
  [257] = "#c3c3c2", /* foreground */
  [258] = "#c3c3c2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
