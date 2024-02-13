#ifndef _cfe_msgids_
#define _cfe_msgids_

#include "cfe_mission_cfg.h"

#define CFE_EVS_CMD_MID         CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_EVS_CMD_MSG         /* 0x1a01 */
                                                       /* Message ID 0x1a02 is available  */
#define CFE_SB_CMD_MID          CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_SB_CMD_MSG          /* 0x1a03 */
#define CFE_TBL_CMD_MID         CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_TBL_CMD_MSG         /* 0x1a04 */
#define CFE_TIME_CMD_MID        CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_TIME_CMD_MSG        /* 0x1a05 */
#define CFE_ES_CMD_MID          CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_ES_CMD_MSG          /* 0x1a06 */

#define CFE_ES_SEND_HK_MID      CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_ES_SEND_HK_MSG      /* 0x1a08 */
#define CFE_EVS_SEND_HK_MID     CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_EVS_SEND_HK_MSG     /* 0x1a09 */
                                                       /* Message ID 0x1a0A is available  */
#define CFE_SB_SEND_HK_MID      CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_SB_SEND_HK_MSG      /* 0x1a0B */
#define CFE_TBL_SEND_HK_MID     CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_TBL_SEND_HK_MSG     /* 0x1a0C */
#define CFE_TIME_SEND_HK_MID    CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_TIME_SEND_HK_MSG    /* 0x1a0D */

#define CFE_SB_SUB_RPT_CTRL_MID CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_SB_SUB_RPT_CTRL_MSG /* 0x1a0E */

#define CFE_TIME_TONE_CMD_MID   CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_TIME_TONE_CMD_MSG   /* 0x1a10 */
#define CFE_TIME_1HZ_CMD_MID    CFE_MISSION_CMD_MID_BASE3 + CFE_MISSION_TIME_1HZ_CMD_MSG    /* 0x1a11 */


/*
** cFE Global Command Message Id's
*/
#define CFE_TIME_DATA_CMD_MID   CFE_MISSION_CMD_MID_BASE_GLOB + CFE_MISSION_TIME_DATA_CMD_MSG   /* 0x1a60 */
#define CFE_TIME_SEND_CMD_MID   CFE_MISSION_CMD_MID_BASE_GLOB + CFE_MISSION_TIME_SEND_CMD_MSG   /* 0x1a62 */


/*
** CFE Telemetry Message Id's
*/
#define CFE_ES_HK_TLM_MID           CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_ES_HK_TLM_MSG       /* 0x0a00 */
#define CFE_EVS_HK_TLM_MID          CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_EVS_HK_TLM_MSG      /* 0x0a01 */
                                                       /* Message ID 0x0a02 is available  */
#define CFE_SB_HK_TLM_MID           CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_SB_HK_TLM_MSG       /* 0x0a03 */
#define CFE_TBL_HK_TLM_MID          CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_TBL_HK_TLM_MSG      /* 0x0a04 */
#define CFE_TIME_HK_TLM_MID         CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_TIME_HK_TLM_MSG     /* 0x0a05 */
#define CFE_TIME_DIAG_TLM_MID       CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_TIME_DIAG_TLM_MSG   /* 0x0a06 */
#define CFE_EVS_LONG_EVENT_MSG_MID  CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_EVS_LONG_EVENT_MSG_MSG   /* 0x0a08 */
#define CFE_EVS_SHORT_EVENT_MSG_MID CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_EVS_SHORT_EVENT_MSG_MSG  /* 0x0a09 */
#define CFE_SB_STATS_TLM_MID        CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_SB_STATS_TLM_MSG    /* 0x0a0A */
#define CFE_ES_APP_TLM_MID          CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_ES_APP_TLM_MSG      /* 0x0a0B */
#define CFE_TBL_REG_TLM_MID         CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_TBL_REG_TLM_MSG     /* 0x0a0C */
#define CFE_SB_ALLSUBS_TLM_MID      CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_SB_ALLSUBS_TLM_MSG  /* 0x0a0D */
#define CFE_SB_ONESUB_TLM_MID       CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_SB_ONESUB_TLM_MSG   /* 0x0a0E */

#ifndef CFE_OMIT_DEPRECATED_6_7
  #define CFE_ES_SHELL_TLM_MID        CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_ES_SHELL_TLM_MSG    /* 0x0a0F */
#endif

#define CFE_ES_MEMSTATS_TLM_MID     CFE_MISSION_TLM_MID_BASE3 + CFE_MISSION_ES_MEMSTATS_TLM_MSG /* 0x0a10 */

/*
 * MID definitions by these older names are required to make some existing apps compile
 * These are deprecated and should be removed after CFE 6.6
 */
#ifndef CFE_OMIT_DEPRECATED_6_6

#define CFE_EVS_EVENT_MSG_MID        CFE_EVS_LONG_EVENT_MSG_MID

#endif

#endif