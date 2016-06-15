//
//  InterfaceController.h
//  Apple Watch Test WatchKit Extension
//
//  Created by Sidhant Uthra on 11/19/14.
//  Copyright (c) 2014 Sidhant Uthra. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface InterfaceController : WKInterfaceController
@property (weak, nonatomic) IBOutlet WKInterfaceLabel *myLabel;

@end
