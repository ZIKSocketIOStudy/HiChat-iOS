//
//  ZIMSocketManager.m
//  HiChatKit
//
//  Created by ZIKong on 2019/1/8.
//  Copyright © 2019 ZIKong. All rights reserved.
//

#import "ZIMSocketManager.h"
#import <HiChat-Swift.h>

static ZIMSocketManager * _manager = nil;

@implementation ZIMSocketManager

// 单例
+ (instancetype)sharedInstance {
    
    static dispatch_once_t onceT;
    dispatch_once(&onceT, ^{
        _manager = [[ZIMSocketManager alloc] init];
    });
    return _manager;
}

-(void)connect {
    
}



@end
