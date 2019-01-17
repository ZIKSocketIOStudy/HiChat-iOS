//
//  ZIMSDK.h
//  HiChatKit
//
//  Created by ZIKong on 2019/1/11.
//  Copyright © 2019 ZIKong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZIMSDKHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZIMSDK : NSObject

/**
 *  获取SDK实例
 *
 *  @return ZIMSDK实例
 */
+ (instancetype)sharedSDK;


/**
 *  登录管理类 负责登录,注销和相关操作的通知收发
 */
@property (nonatomic,strong,readonly)   id<ZIMLoginManagerProtocol>   loginManager;


@end

NS_ASSUME_NONNULL_END
