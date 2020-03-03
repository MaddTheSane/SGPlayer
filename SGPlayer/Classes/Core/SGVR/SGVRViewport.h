//
//  SGVRViewport.h
//  SGPlayer
//
//  Created by Single on 2018/8/27.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SGVRViewport : NSObject

@property (NS_NONATOMIC_IOSONLY) Float64 degress;       //!< Default value is 60.
@property (NS_NONATOMIC_IOSONLY) Float64 x;             //!< Default value is 0, range is (-360, 360).
@property (NS_NONATOMIC_IOSONLY) Float64 y;             //!< Default value is 0, range is (-360, 360).
@property (NS_NONATOMIC_IOSONLY) BOOL flipX;            //!< Default value is NO.
@property (NS_NONATOMIC_IOSONLY) BOOL flipY;            //!< Default value is NO.
@property (NS_NONATOMIC_IOSONLY) BOOL sensorEnable;     //!< Default value is YES.

@end
