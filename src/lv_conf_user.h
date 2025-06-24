#ifndef LV_CONF_USER_H_
#define LV_CONF_USER_H_

/** Build the demos */
#define LV_BUILD_DEMOS 1

#if LV_BUILD_DEMOS
    /** Show some widgets. This might be required to increase `LV_MEM_SIZE`. */
    #define LV_USE_DEMO_WIDGETS 1
#endif


#endif /* LV_CONF_USER_H_ */
