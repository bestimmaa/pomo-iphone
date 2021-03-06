//
//  AppDelegate.m
//  gettext-ios-demo-objc
//
//  Created by Christoph Halang on 04/06/16.
//  Copyright © 2016 Klickrent GmbH. All rights reserved.
//

#import "AppDelegate.h"
// Import POMO-iPhone with Gettext helper methods
#import "GettextHelpers.h"

@interface AppDelegate ()

@end

static NSString* translatble = @"Hi, this is gettext!";

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    // Load default textdomain, TEXTDOMAIN constant defined in GettextHelpers.h
    // Make sure you created a default-xx.po file in your app resources
    // Call somewhere in -(BOOL)application:willFinishLaunchingWithOptions:
    [[TranslationCenter sharedCenter] loadTextDomain:DEFAULT_TEXTDOMAIN];
    
    //[[TranslationCenter sharedCenter]setLanguage:@"de-DE"];
    NSLog(@"Current language %@", [[TranslationCenter sharedCenter]language]);
    
    NSInteger numApples = 1;

    
    // Translate single string
    NSLog(@"Gettext translated string: %@", _("Hi, this is gettext!"));
    
    // Translate plural string
    NSLog(@"Gettext translated plural: %@", _n(@"%d apple", @"%d apples", numApples));
    
    // Translate and format altogether
    NSLog(@"Gettext translated plural: %@", [NSString stringWithFormat:_n(@"%d apple", @"%d apples", numApples), numApples]);
    
    // Also break the lines!
    NSLog(@"Gettext translated plural: %@",
          [NSString stringWithFormat:
           _n(@"%d apple",
              @"%d apples",
              numApples), numApples]);

    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
