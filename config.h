#ifndef CONFIG_H_
#define CONFIG_H

#include "consts.h"

  /* *
   * Optimisation
   * 
   * OPT_SPEED:   Optimize for speed, not memory (Default)
   * OPT_MEMORY:  Optimize for memory, not speed
   * */
  #define OPTIMIZE OPT_SPEED

   /* *
   * Working stack size
   * 
   * Maximum entries
   * Default:     32 entries (mem use: 64 bytes used)
   * */
  #define STACK_SIZE 32

  /* *
   * Variable stack size
   * 
   * Maximum variables allocated
   * Memory use:    3 (speed opt) or 5 (mem opt) bytes per var + actual data
   * Default:       96 variables (mem use: ~480 bytes [speed opt]; ~288 bytes [mem opt]) 
   * */
  #define VAR_STACK_SIZE 96
  
  /* *
   * Variable pool size
   * 
   * Size of the variable data pool
   * Default:       1024 bytes
   * */
  #define VAR_POOL_SIZE 1024
  
  /* *
   * Clear arrays on deletion to prevent the next created one from being dirty
   * and also clears the pool on startup
   * 
   * Default:       True
   * */
   #define VAR_POOL_CLEAN

#endif