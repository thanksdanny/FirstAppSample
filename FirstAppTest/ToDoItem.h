//
//  ToDoItem.h
//  FirstAppTest
//
//  Created by Danny Ho on 1/13/16.
//  Copyright © 2016 thanksdanny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoItem : UIViewController

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
