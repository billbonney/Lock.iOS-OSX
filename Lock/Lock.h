//  Lock.h
//
// Copyright (c) 2014 Auth0 (http://auth0.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

//! Project version number for Lock.
FOUNDATION_EXPORT double LockVersionNumber;

//! Project version string for Lock.
FOUNDATION_EXPORT const unsigned char LockVersionString[];

#import "A0APIClient.h"
#import "A0Lock.h"
#import "A0Telemetry.h"
#import "A0UserAPIClient.h"
#import "A0Application.h"
#import "A0Strategy.h"
#import "A0Connection.h"
#import "A0Errors.h"
#import "A0Token.h"
#import "A0UserProfile.h"
#import "A0IdentityProviderCredentials.h"
#import "A0IdentityProviderAuthenticator.h"
#import "A0AuthParameters.h"
#import "A0UserIdentity.h"
#import "A0LockLogger.h"
#import "A0LockNotification.h"
#import "A0APIv1Router.h"
#import "A0APIClientProvider.h"

#ifdef TARGET_OS_IOS
#import "A0ServiceTheme.h"
#import "A0Theme.h"

#import "UI.h"

#import "A0WebViewAuthenticator.h"
#import "A0SafariAuthenticator.h"
#import "A0WebAuthenticable.h"
#import "A0WebKitViewController.h"
#import "A0WebViewController.h"

#import "A0SMSLockViewController.h"
#import "A0EmailLockViewController.h"
#import "A0TouchIDLockViewController.h"
#import "A0Lock+A0SMSLockViewController.h"
#import "A0Lock+A0TouchIDLockViewController.h"
#import "A0Lock+A0EmailLockViewController.h"
#endif