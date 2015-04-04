//
//  LandingTableViewController.h
//  Cascade-iOS-App
//
//  Created by iGuest on 3/28/15.
//  Copyright (c) 2015 Cascade. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGSwipeTableCell.h"


@interface LandingTableViewController : UITableViewController<MGSwipeTableCellDelegate>
@property (strong) NSMutableArray *routeArray;
-(void) executeParsing;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *detailButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *drawerButton;

@end
