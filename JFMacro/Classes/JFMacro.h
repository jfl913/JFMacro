//
//  JFMacro.h
//  Pods
//
//  Created by junfeng.li on 2017/6/14.
//
//

#ifndef JFMacro_h
#define JFMacro_h

#ifndef __OPTIMIZE__
#define JFLog(format, ...) \
do { \
    fprintf(stderr, "--------------------------Log Begin--------------------------\n"); \
    fprintf(stderr, "<%s: %d> %s\n", \
            [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], \
            __LINE__, \
            __func__); \
    (NSLog)((format), ##__VA_ARGS__); \
    fprintf(stderr, "--------------------------Log End--------------------------\n"); \
} while (0) 
#else
#define JFLog(format, ...)
#endif

#ifndef __OPTIMIZE__
#define JFAssert(condition, desc, ...) NSAssert(condition, desc, __VA_ARGS__)
#else
#define JFAssert(condition, desc, ...)
#endif

#endif /* JFMacro_h */
