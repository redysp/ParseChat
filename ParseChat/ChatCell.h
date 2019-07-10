//
//  ChatCell.h
//  ParseChat
//
//  Created by powercarlos25 on 7/10/19.
//  Copyright © 2019 powercarlos25. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChatCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *sentMessageLabel;
@property (weak, nonatomic) IBOutlet UILabel *loggedUserLabel;

@end

NS_ASSUME_NONNULL_END
