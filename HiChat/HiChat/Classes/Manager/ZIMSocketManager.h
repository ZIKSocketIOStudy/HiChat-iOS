//
//  ZIMSocketManager.h
//  HiChatKit
//
//  Created by ZIKong on 2019/1/8.
//  Copyright © 2019 ZIKong. All rights reserved.
//

#import <Foundation/Foundation.h>
@import SocketIO;

NS_ASSUME_NONNULL_BEGIN

@interface ZIMSocketManager : NSObject

@property (nonatomic, strong) SocketIOClient *socketClient;
@property (nonatomic, strong) SocketManager  *socketManager;

// 单例
+ (instancetype)sharedInstance;

//连接socket
- (void)connect;

//断开socket
- (void)disconnect;

//发送链接
-(void)sendWebsocketConnetMessage;

//发送聊天消息
-(void)sendChatMessageWithMessage:(NSDictionary *)message;

//心跳致电(发送心跳包)
- (void)sendHeartBeat;
@end

NS_ASSUME_NONNULL_END
