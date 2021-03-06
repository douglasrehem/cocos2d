#import "cocos2d.h"

@class CCLabel;

//CLASS INTERFACE
@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
	UIWindow	*window;
}
@end

@interface TextLayer: CCLayer
{}
-(NSString*) title;
-(NSString*) subtitle;
@end

@interface Effect1 : TextLayer
{}
@end

@interface Effect2 : TextLayer
{}
@end

@interface Effect3 : TextLayer
{}
@end

@interface Effect4 : TextLayer
{}
@end

@interface Effect5 : TextLayer
{}
@end

@interface Issue631 : TextLayer
{}
@end

