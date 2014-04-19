//
//  MasterViewController.h
//  ControlingSource
//
//  Created by Long Vinh Nguyen on 4/19/14.
//  Copyright (c) 2014 Home Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
