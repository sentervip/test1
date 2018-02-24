
#ifndef _FM_CONFIG_H_
#define _FM__CONFIG_H_
#include <stdio.h>




/** MACRO define */
//#define  FM_JNI      0
#define  FM_DEBUG    1
//#define  FM_DBG_CREAT_YUVFILES 0


/** typedef  */
#ifndef strIdr2Jpg
typedef struct  strIdr2Jpg{
	FILE * pfileIn;
	FILE * pfileOut;
	int iniFlg;
}strIdr2Jpg,*pstrIdr2Jpg;
#endif

#ifndef InputStreamType
typedef enum OpenStreamType{
	FM_STREAM_RTSP = 1,
	FM_STREAM_FILES,
	FM_STREAM_RTMP,
	FM_STREAM_HTTP
}OpenStreamType,*pOpenStreamType;
#endif


/** var */
extern OpenStreamType g_open_stream_types;
extern strIdr2Jpg g_idr2jpg;


/** function */
extern void fm_dbg_log(void* avcl, int level, const char *fmt, ...);
extern int fm_ffmpeg(int argc, char **argv);
int fm_stream2jpg(const char *in_streamName,const char *out_fileName); 



#endif//_FM__CONFIG_H_

