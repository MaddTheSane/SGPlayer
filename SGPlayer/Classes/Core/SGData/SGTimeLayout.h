//
//  SGTimeLayout.h
//  SGPlayer
//
//  Created by Single on 2018/11/15.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGTime.h"

NS_ASSUME_NONNULL_BEGIN

@interface SGTimeLayout : NSObject <NSCopying>

/**
 *
 */
- (instancetype)initWithScale:(CMTime)scale;

/**
 *
 */
- (instancetype)initWithOffset:(CMTime)offset;

/**
 *
 */
@property (NS_NONATOMIC_IOSONLY, readonly) CMTime scale;

/**
 *
 */
@property (NS_NONATOMIC_IOSONLY, readonly) CMTime offset;

/**
 *
 */
- (CMTime)convertDuration:(CMTime)duration;

/**
 *
 */
- (CMTime)convertTimeStamp:(CMTime)timeStamp;

/**
 *
 */
- (CMTime)reconvertTimeStamp:(CMTime)timeStamp;

/**
 *
 */
- (BOOL)isEqualToTimeLayout:(nullable SGTimeLayout *)timeLayout;

@end

NS_ASSUME_NONNULL_END
