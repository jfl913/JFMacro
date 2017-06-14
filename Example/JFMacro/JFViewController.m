//
//  JFViewController.m
//  JFMacro
//
//  Created by 李俊峰 on 06/14/2017.
//  Copyright (c) 2017 李俊峰. All rights reserved.
//

#import "JFViewController.h"
#import <JFMacro/JFMacro.h>

@interface JFViewController ()

@end

@implementation JFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    
}

- (IBAction)tapButton:(id)sender {
    JFLog(@"First macro by: %@", @"jfl");
    
    JFAssert(NO, @"The class of responseModel do not exist, check the responseModelName method of %@.", NSStringFromClass(self.class));
}

@end
