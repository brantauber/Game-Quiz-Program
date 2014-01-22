//
//  QuizViewController.h
//  Quiz
//
//  Created by Brandon on 1/15/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizViewController : UIViewController

{
    int currentQuestionIndex;
 
    // The model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
 
    // The view objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end
