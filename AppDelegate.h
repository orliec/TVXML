//
//  AppDelegate.h
//  TVXML
//
//  Created by Orlando Carneiro on 8/18/21.
//

#import <UIKit/UIKit.h>
#import <TVMLKit/TVMLKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) TVApplicationController *appController;

@end

