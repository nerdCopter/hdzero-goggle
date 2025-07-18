#include "media.h"

#include "adec2ao.h"
#include "awdmx.h"
#include "vdec2vo.h"

typedef struct
{
    Vdec2VoContext_t *vv;
    Adec2AoContext_t *aa;
    AwdmxContext_t *dmx;
    uint32_t state;
    pthread_mutex_t mutex;
    int playingTime; // ms
} PlayContext_t;

static int play_start(PlayContext_t *playCtx) { return -1; }
static int play_pause(PlayContext_t *playCtx) { return -1; }
static int play_stop(PlayContext_t *playCtx) { return -1; }
static int play_seekto(PlayContext_t *playCtx, int seekTime) { return -1; }
static void play_moveStatus(PlayContext_t *playCtx) {}
static void play_onDemuxEof(void *context) {}
void *thread_media(void *params) { return NULL; }
void media_control(media_t *media, player_cmd_t *cmd) {}
media_t *media_instantiate(char *filename, notify_cb_t notify) { return NULL; }
void media_exit(media_t *media) {}

#if HDZGOGGLE
void Display_HDZ(int mode, int is_43) {}
#elif HDZBOXPRO
void Display_720P90(int mode) {}
void Display_720P60_50(int mode, uint8_t is_43) {}
void Display_1080P30(int mode) {}
#endif
