//
//  Task.h
//  quiz5
//
//  Created by Rachel Johnson on 3/15/14.
//  Copyright (c) 2014 Rachel Johnson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

@property (nonatomic) float urgency;
@property (nonatomic) NSDate *dueDate;
@property (nonatomic) NSString *taskName;

- (id)initWithTaskName:(NSString *)name
               urgency:(float)urgency
               dateDue:(NSDate *)dueDate;

@end
