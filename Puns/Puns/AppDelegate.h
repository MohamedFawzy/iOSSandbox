//
//  AppDelegate.h
//  Puns
//
//  Created by Onur Baykal on 25.11.2012.
//  Copyright (c) 2012 Onur Baykal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (readonly, strong, nonatomic) NSManagedObjectContext * managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel * managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator * persistentStoreCoordinator;

@end
