source 'https://github.com/CocoaPods/Specs.git'

platform :ios, '11.0'

plugin 'cocoapods-xcremotecache'

xcremotecache({
  'cache_addresses' => ['http://localhost:8080/cache'], 
  'primary_repo' => 'https://github.com/osmanyildirim/XCRemoteCache-Demo_1.git',
  'mode' => 'producer',
  'final_producer_target' => 'XCRemoteCache-Demo_1',
  'primary_branch' => 'main',
})

use_frameworks!
inhibit_all_warnings!

target 'XCRemoteCache-Demo_1' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  pod 'HeraSDK'
  pod 'Desk360'
  
  pod 'lottie-ios'
  pod 'IBAnimatable'
  pod 'KDCircularProgress'
  pod 'GooglePlaces'
  pod 'UICKeyChainStore'
  pod 'ContextMenu'

end
