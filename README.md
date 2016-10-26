# ABFacebookSDK
A easy to use wrapper around Facebook SDK. Making permissions / fields constants, easy login, you name it - its there

After installing with pod ABFacebookSDK <TODO make cocoapod> Setting up is as easy as 1,2,3

1. Create a FB App on developers.facebook.com and add your facebook APP id to your info.plist

2. Import <ABFacebookSDK/ABFacebookSDK.h> into your AppDelegate.m file and implement the following two lines
```objective-c
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [ABFacebookSDK setUpFBAppDelegateWith:application andLaunchOptions:launchOptions];
    return YES;
}

- (BOOL)application:(UIApplication *)application openURL:(nonnull NSURL *)url options:(nonnull NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options{
    return [ABFacebookSDK checkIfUrlHandledByFBForApplication:application openURL:url options:options];
}
```
3. Login by using ABFacebookSDK's +logIntoFacebookFromController method in your desired controller!
```objective-c
    [ABFacebookSDK logIntoFacebookFromController:self withHandler:^(id result, NSError *error) {
        
    }];
```

Once you're setup, requesting profile information is as easy as:
```objective-c
    [ABFacebookSDK requestMe:^(id result, NSError *error) {
        NSLog(@"%@",result);
    }];
```

ABFacebookSDK also offers custom calls with methods that let you choose permissions / fields / routes with the graph API.


To see what ABFacebookSDK offers, just look at the header of ABFacebookSDK!
```objective-c

+ (void)logIntoFacebookFromController:(id)controller
                          withHandler:(RequestHandler)handler;

+ (BOOL)checkIfUrlHandledByFBForApplication:(id)application openURL:(NSURL *)url options:(id)options;

+ (void)setUpFBAppDelegateWith:(id)application
              andLaunchOptions:(NSDictionary *)launchOptions;

+ (void)requestReadPermissions:(NSArray *)readPermissions
                fromController:(id)controller
                   withHandler:(RequestHandler)handler;

+ (void)requestPublishPermissions:(NSArray *)publishPermissions
                   fromController:(id)controller
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

```

Cheers!
