//
//  AMRAd.h
//  AMRSDK
//
//  Created by Tolga Seremet on 31/08/16.
//  Copyright © 2016 Tolga Seremet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AMRTypes.h"

@interface AMRAd : NSObject
@property NSDictionary *networkData;
@property NSString *zoneId;
@property AMRNetworkType networkType;
@property NSString *networkName;
@property NSNumber *ecpm;
@property (readonly) NSString *tag;
@end
