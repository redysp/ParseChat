//
//  ChatViewController.h
//  ParseChat
//
//  Created by powercarlos25 on 7/10/19.
//  Copyright © 2019 powercarlos25. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChatViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) NSMutableArray *messages;
-(void) onTimer; 

@end

NS_ASSUME_NONNULL_END
