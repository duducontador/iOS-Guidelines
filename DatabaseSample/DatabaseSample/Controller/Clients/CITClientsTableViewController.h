//
//  CITClientsTableViewController.h
//  DatabaseSample
//
//  Created by Henrique Gouveia on 12/1/15.
//  Copyright © 2015 Henrique Gouveia. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Client;

@interface CITClientsTableViewController : UITableViewController

- (void)addANewClient:(Client *)client;

@end
