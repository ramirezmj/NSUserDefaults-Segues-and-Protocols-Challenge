//
//  ViewController.h
//  NSUserDefaults, Segues and Protocols Challenge
//
//  Created by Jose Manuel Ramirez Martinez on 30/09/14.
//  Copyright (c) 2014 Jose Manuel Ramírez Martínez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *usernameLabel;
@property (strong, nonatomic) IBOutlet UILabel *passwordLabel;

- (IBAction)logOutButtonPressed:(UIButton *)sender;

@end

