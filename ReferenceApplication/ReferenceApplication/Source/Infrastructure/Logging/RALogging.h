//
//  RALogging.h
//  ReferenceApplication
//
//  Created by SalmoJunior on 1/21/16.
//  Copyright © 2016 CI&T. All rights reserved.
//

#ifndef RALogging_h
#define RALogging_h

#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#   define DLog(...)
#endif

// ALog always displays output regardless of the DEBUG setting
#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#endif /* RALogging_h */
