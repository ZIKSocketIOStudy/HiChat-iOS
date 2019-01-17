//
//  ZIMLoginViewController.m
//  HiChat
//
//  Created by ZIKong on 2019/1/12.
//  Copyright © 2019 ZIKong. All rights reserved.
//

#import "ZIMLoginViewController.h"
#import "HiChatKit.h"

@interface ZIMLoginViewController ()

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;

@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;

@end

@implementation ZIMLoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    self.title = @"登录";
}

- (IBAction)loginButtonClick:(UIButton *)sender {
    NSString *name     = _nameTextField.text;
    NSString *password = _passwordTextField.text;
    [[ZIMSDK sharedSDK].loginManager login:name password:password completion:^(NSError * _Nullable error) {

    }];
}

- (IBAction)registerButtonClick:(UIButton *)sender {
    
}

@end
