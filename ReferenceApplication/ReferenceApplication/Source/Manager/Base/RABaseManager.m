//
//  RABaseManager.m
//  ReferenceApplication
//
//  Created by SwatTeam on 1/21/16.
//  Copyright © 2016 CI&T. All rights reserved.
//

#import "RABaseManager.h"


@implementation RABaseManager

/**
 *  This Operation queue should be used whenever one view controller needs Pause Stop Resume or Cancel operations
 */
- (NSOperationQueue *)mainQueue {
    if (!_mainQueue) {
        _mainQueue = [NSOperationQueue new];
    }
    
    return _mainQueue;
}

@end
