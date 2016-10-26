//
//  ABFacebookSDK.h
//  ABFacebookSDK
//
//  Created by Ash Bhat on 10/25/16.
//  Copyright © 2016 Ash Bhat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"

@interface ABFacebookSDK : NSObject

+ (BOOL)checkIfUrlHandledByFBForApplication:(id)application openURL:(NSURL *)url options:(id)options;

+ (void)setUpFBAppDelegateWith:(id)application
              andLaunchOptions:(NSDictionary *)launchOptions;

+ (void)requestReadPermissions:(NSArray *)readPermissions
                fromController:(id)controller
                   withHandler:(RequestHandler)handler;

+ (void)requestPublishPermissions:(NSArray *)publishPermissions
                   fromController:(id)controller
                      withHandler:(RequestHandler)handler;

+ (void)logIntoFacebookFromController:(id)controller
                          withHandler:(RequestHandler)handler;

+ (void)requestMe:(RequestHandler)handler;

+ (void)requestWithFields:(NSArray *)fields
              andHandler:(RequestHandler)handler;

+ (void)requestWithPath:(NSString *)path
            withFields:(NSArray *)fields
           withHandler:(RequestHandler)handler;

+ (BOOL)isLoggedIn;

+ (void)publishToWallWithMessage:(NSString *)message
                     WithHandler:(RequestHandler)handler;

@end
