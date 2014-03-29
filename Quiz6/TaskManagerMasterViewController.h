//
//  TaskManagerMasterViewController.h
//  Quiz6
//
//  Created by Rachel Johnson on 3/28/14.
//  Copyright (c) 2014 Rachel Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TaskManagerDetailViewController;

@interface TaskManagerMasterViewController : UITableViewController

@property (strong, nonatomic) TaskManagerDetailViewController *detailViewController;

@end
