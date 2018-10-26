#ifndef SRC_EMB_TEST_H_
#define SRC_EMB_TEST_H_

typedef enum {
    CTRL_STAT_OK,
    CTRL_STAT_ERR,
} ctrl_stat_t;

typedef enum {
    CTRL_FLAG_CLR,
    CTRL_FLAG_SET,
} ctrl_flag_t;

typedef enum {
    CTRL_PARITY_EVEN,
    CTRL_PARITY_ODD,
} ctrl_parity_t;

typedef struct {
    ctrl_stat_t status;
    ctrl_flag_t flag_a;
    ctrl_flag_t flag_b;
    ctrl_flag_t flag_c;
    ctrl_parity_t parity;
    uint8_t value;
} control_channel_t;

#endif