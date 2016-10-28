//
//  ABFacebookSDK.m
//  ABFacebookSDK
//
//  Created by Ash Bhat on 10/25/16.
//  Copyright © 2016 Ash Bhat. All rights reserved.
//

#import "ABFacebookSDK.h"
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>

@implementation ABFacebookSDK
+ (BOOL)checkIfUrlHandledByFBForApplication:(id)application openURL:(NSURL *)url options:(id)options{
    return [[FBSDKApplicationDelegate sharedInstance] application:application
                                                                  openURL:url
                                                        sourceApplication:options[UIApplicationOpenURLOptionsSourceApplicationKey]
                                                               annotation:options[UIApplicationOpenURLOptionsAnnotationKey]];
}

+ (void)setUpFBAppDelegateWith:(id)application
              andLaunchOptions:(NSDictionary *)launchOptions{
    [[FBSDKApplicationDelegate sharedInstance] application:application
                             didFinishLaunchingWithOptions:launchOptions];
}

+ (void)requestReadPermissions:(NSArray *)readPermissions
                fromController:(id)controller
                   withHandler:(RequestHandler)handler{
    FBSDKLoginManager *login = [[FBSDKLoginManager alloc] init];
    [login logInWithReadPermissions:readPermissions fromViewController:controller handler:^(FBSDKLoginManagerLoginResult *result, NSError *error) {
        if (error) {
            handler(nil, error);
        } else if (result.isCancelled) {
            handler(nil, error);
        } else {
            handler(nil, nil);
        }
    }];
}

+ (void)requestPublishPermissions:(NSArray *)publishPermissions
                   fromController:(id)controller
                     withHandler:(RequestHandler)handler{
    FBSDKLoginManager *login = [[FBSDKLoginManager alloc] init];
    [login logInWithPublishPermissions:publishPermissions fromViewController:controller handler:^(FBSDKLoginManagerLoginResult *result, NSError *error) {
        if (error) {
            handler(nil, error);
        } else if (result.isCancelled) {
            handler(nil, error);
        } else {
            handler(nil, nil);
        }
    }];

}

+ (void)logIntoFacebookFromController:(id)controller
                          withHandler:(RequestHandler)handler{
    FBSDKLoginManager *login = [[FBSDKLoginManager alloc] init];
    [login logInWithReadPermissions: @[@"public_profile", @"email"] fromViewController:controller handler:^(FBSDKLoginManagerLoginResult *result, NSError *error) {
                                if (error) {
                                    handler(nil, error);
                                } else if (result.isCancelled) {
                                    handler(nil, error);
                                } else {
                                    handler(nil, nil);
                                }
                            }];
}

+ (void)requestMe:(RequestHandler)handler{
    NSArray *fields = @[kFB_email,kFB_name,kFB_id,kFB_cover,kFB_first_name,kFB_last_name,kFB_age_range,kFB_link,kFB_gender,kFB_locale,kFB_picture, kFB_timezone,kFB_updated_time, kFB_verified]
    ;
    [[[FBSDKGraphRequest alloc] initWithGraphPath:@"me" parameters:@{@"fields" : [fields componentsJoinedByString:@","]}]
     startWithCompletionHandler:^(FBSDKGraphRequestConnection *connection, id result, NSError *error) {
         handler(result,error);
     }];
}

+ (void)requestWithFields:(NSArray *)fields
               andHandler:(RequestHandler)handler{
    [[[FBSDKGraphRequest alloc] initWithGraphPath:@"me" parameters:@{@"fields" : [fields componentsJoinedByString:@","]}]
     startWithCompletionHandler:^(FBSDKGraphRequestConnection *connection, id result, NSError *error) {
         handler(result,error);
     }];
}

+ (void)requestWithPath:(NSString *)path
             withFields:(NSArray *)fields
            withHandler:(RequestHandler)handler{
    [[[FBSDKGraphRequest alloc] initWithGraphPath:path parameters:@{@"fields" : [fields componentsJoinedByString:@","]}]
     startWithCompletionHandler:^(FBSDKGraphRequestConnection *connection, id result, NSError *error) {
         handler(result,error);
     }];
}

+ (BOOL)isLoggedIn{
    if ([FBSDKAccessToken currentAccessToken] && [[FBSDKAccessToken currentAccessToken] hasGranted:@"public_profile"] && [[FBSDKAccessToken currentAccessToken] hasGranted:@"email"]) {
        return YES;
    }
    else{
        return NO;
    }
}

+ (void)publishToWallWithMessage:(NSString *)message
                     WithHandler:(RequestHandler)handler{
    [[[FBSDKGraphRequest alloc] initWithGraphPath:@"me/feed"
                                       parameters:@{ @"message" : message }
                                       HTTPMethod:@"POST"]
     startWithCompletionHandler:^(FBSDKGraphRequestConnection *connection, id result, NSError *error) {
         handler(result, error);
     }];
}

@end
