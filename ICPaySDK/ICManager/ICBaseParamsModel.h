//
//  ICBaseParamsModel.h
//  AFNetworking
//
//  Created by 万启鹏 on 2018/7/6.
//

#import <Foundation/Foundation.h>
#import "ICPaySDKAutoServiceProtocol.h"

@interface ICBaseParamsModel : NSObject


- (void)setData:(NSDictionary *)data service:(id<ICPaySDKAutoServiceProtocol>)service;

@end
