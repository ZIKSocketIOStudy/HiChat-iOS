//
//  ZIMSDK.m
//  HiChatKit
//
//  Created by ZIKong on 2019/1/11.
//  Copyright © 2019 ZIKong. All rights reserved.
//

#import "ZIMSDK.h"

#import "ZIMLoginManager.h"

@implementation ZIMSDK

+ (instancetype)sharedSDK {
    static ZIMSDK *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ZIMSDK alloc] init];
    });
    return instance;
}

-(instancetype)init {
    if (self = [super init]) {
        _loginManager = [[ZIMLoginManager alloc] init];
    }
    return self;
}

@end
