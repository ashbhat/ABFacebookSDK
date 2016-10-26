//
//  ViewController.m
//  ABFacebookSDK
//
//  Created by Ash Bhat on 10/25/16.
//  Copyright © 2016 Ash Bhat. All rights reserved.
//

#import "ViewController.h"
#import "ABFacebookSDK.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIButton *login;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    if ([ABFacebookSDK isLoggedIn]) [self.login setHidden:YES];
}

- (IBAction)loginPressed:(id)sender {
    [ABFacebookSDK logIntoFacebookFromController:self withHandler:^(id result, NSError *error) {
        
    }];
}

- (IBAction)requestMePressed:(id)sender {
    [ABFacebookSDK requestMe:^(id result, NSError *error) {
        NSLog(@"%@",result);
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
