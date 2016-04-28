Pod::Spec.new do |s|
  s.name         		= "ActorSDK-iOS"
  s.version      		= "1.0.200"
  s.summary      		= "Actor SDK for intergration Actor Messaging to your apps"
  s.homepage        = "https://actor.im/"
  s.license         = { :type => 'MIT', :file => 'LICENSE' }
  s.author       		= { "Actor LLC" => "steve@actor.im" }
  s.source          = { :git => "https://github.com/actorapp/ActorSDK-iOS.git", :tag => "v#{s.version}" }

  s.platform     		= :ios, "8.0"
  s.requires_arc 		= true

  # Core
  s.dependency 'RegexKitLite'
  s.dependency 'CocoaAsyncSocket'
  s.dependency 'zipzap'
  s.dependency 'J2ObjC-Framework'

  # UI
  s.dependency 'TTTAttributedLabel'
  s.dependency 'VBFPopFlatButton'
  s.dependency 'JDStatusBarNotification'
  s.dependency 'YYImage', '0.9.3'
  s.dependency 'YYCategories'
  s.dependency 'DZNWebViewController'
  s.dependency 'DZNPhotoPickerController'
  s.dependency 'SZTextView'
  s.dependency 'RSKImageCropper'

  s.dependency 'RMUniversalAlert'
  s.dependency 'M13ProgressSuite'
  s.dependency 'MBProgressHUD'
  s.dependency 'libjingle_peerconnection'

  s.preserve_paths = 'Frameworks/ActorSDK.framework'
  s.vendored_framework = 'Frameworks/ActorSDK.framework'
end
