#import <UIKit/UIKit.h>



#pragma mark - WPWebViewController

@interface WPWebViewController : UIViewController<UIWebViewDelegate>

/**
 *	@brief		Represents the Endpoint URL to render
 */
@property (nonatomic, strong) NSURL     *url;

/**
 *	@brief		Login URL that should be used to authenticate the user.
 */
@property (nonatomic, strong) NSURL     *wpLoginURL;

/**
 *	@brief		Username. Optional, will be used in case the endpoint requires authentication.
 */
@property (nonatomic, strong) NSString  *username;

/**
 *	@brief		Password. Optional, will be used in case the endpoint requires authentication.
 */
@property (nonatomic, strong) NSString  *password;

/**
 *	@brief		Bearer Token. Optional, will be used in case the endpoint requires authentication.
 */
@property (nonatomic, strong) NSString  *authToken;

/**
 *	@brief		Optionally scrolls the endpoint to the bottom of the screen, automatically.
 */
@property (nonatomic, assign) BOOL      shouldScrollToBottom;

/**
 *	@brief		Optionally suppresses navigation and sharing
 */
@property (nonatomic, assign) BOOL      secureInteraction;

/**
 *  @brief  When true adds a custom referrer to NSURLRequest.
 */
@property (nonatomic, assign) BOOL addsWPComReferrer;

/**
 *	@brief		Dismiss modal presentation
 */
- (IBAction)dismiss;

/**
 *	@brief      Helper method to initialize a WebViewController Instance
 *
 *	@param		url         The URL that needs to be rendered
 *  @returns                A WPWebViewController instance ready to be pushed.
 */
+ (instancetype)webViewControllerWithURL:(NSURL *)url;

@end
