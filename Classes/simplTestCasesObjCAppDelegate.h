//
//  simplTestCasesObjCAppDelegate.h
//  simplTestCasesObjC
//
//  Created by Nabeel Shahzad on 10/26/11.
//  Copyright 2011 Texas A&M University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class simplTestCasesObjCViewController;

@interface simplTestCasesObjCAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    simplTestCasesObjCViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet simplTestCasesObjCViewController *viewController;

@end

