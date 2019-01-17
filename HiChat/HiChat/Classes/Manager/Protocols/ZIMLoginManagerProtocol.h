//
//  ZIMLoginManagerProtocol.h
//  HiChatKit
//
//  Created by ZIKong on 2019/1/11.
//  Copyright © 2019 ZIKong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  登录服务相关Block
 *
 *  @param error 执行结果,如果成功error为nil
 */
typedef void(^ZIMLoginHandler)(NSError * __nullable error);

/**
 *  登录协议
 */
@protocol ZIMLoginManagerProtocol <NSObject>

/**
 *  登录
 *
 *  @param account    帐号
 *  @param password   密码
 *  @param completion 完成回调
 */
- (void)login:(NSString *)account
     password:(NSString *)password
   completion:(ZIMLoginHandler)completion;


/**
 登出

 @param completion 完成回调
 */
- (void)logout:(ZIMLoginHandler)completion;

@end

NS_ASSUME_NONNULL_END
