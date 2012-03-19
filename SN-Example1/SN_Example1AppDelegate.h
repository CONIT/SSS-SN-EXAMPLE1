//
//  SN_Example1AppDelegate.h
//  SN-Example1
//
//  Created by sasaki on 12/03/19.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SN_Example1ViewController;

@interface SN_Example1AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet SN_Example1ViewController *viewController;

@end
