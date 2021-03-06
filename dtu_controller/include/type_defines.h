#ifndef TYPE_DEFINES_H
#define TYPE_DEFINES_H

enum CONTROL_STATUS_ENUM {
    STOP_CONTROLLER,
    RESET_CONTROLLERS,
    RUNNING
};

enum GLOBAL_POSITIONING {
    NONE,
    GPS,
    GUIDANCE,
    WALL_POSITION,
    WALL_WITH_GPS_Y,
    VISUAL_ODOMETRY,
    LAST_VALID
};

#endif