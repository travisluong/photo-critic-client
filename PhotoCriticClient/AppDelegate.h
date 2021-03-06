//
//  AppDelegate.h
//  PhotoCriticClient
//
//  Created by Travis Luong on 1/21/15.
//  Copyright (c) 2015 Travis Luong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSDictionary *authInfo;
@property (nonatomic) NSURLSession *session;

- (void) setRoots;

@end

