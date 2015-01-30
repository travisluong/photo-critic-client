//
//  PhotosTableViewController.h
//  PhotoCriticClient
//
//  Created by Travis Luong on 1/27/15.
//  Copyright (c) 2015 Travis Luong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotosTableViewController : UITableViewController
@property (strong, nonatomic) NSDictionary *authInfo;
@property (nonatomic) NSURLSession *session;
@end
