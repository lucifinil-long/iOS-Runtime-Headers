/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@class NSMutableDictionary, BluetoothAudioJack;

@interface BluetoothManager : NSObject {
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    BOOL _audioConnected;
    BluetoothAudioJack *_audioJack;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
    NSInteger _connectedState;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTPairingAgentImpl { } *_pairingAgent;
    BOOL _pairingEnabled;
    NSInteger _powerState;
    BOOL _scanningEnabled;
    struct BTSessionImpl { } *_session;
}

+ (void)initialize;
+ (NSInteger)lastInitError;
+ (id)sharedInstance;

- (struct BTAccessoryManagerImpl { }*)_accessoryManager;
- (void)_connectedStatusChanged;
- (BOOL)_isConnectedToNonSensorDevice;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (void)_powerChanged;
- (void)_removeDevice:(id)arg1;
- (void)_setup;
- (void)_setupAccessoryManager;
- (void)_setupLocalDevice;
- (void)_setupSession;
- (void)acceptSSP:(NSInteger)arg1 forDevice:(id)arg2;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { }*)arg1;
- (BOOL)airplaneMode;
- (BOOL)audioConnected;
- (id)audioJack;
- (BOOL)canBeConnected;
- (void)cancelPairing;
- (void)cleanup;
- (void)connectDevice:(id)arg1;
- (void)connectVisualVoicemailAudio;
- (BOOL)connectable;
- (id)connectableDevices;
- (BOOL)connected;
- (id)connectingDevices;
- (void)dealloc;
- (BOOL)devicePairingEnabled;
- (BOOL)deviceScanningEnabled;
- (void)disconnectVisualVoicemailAudio;
- (void)enableTestMode;
- (BOOL)enabled;
- (void)endVoiceCommand:(id)arg1;
- (NSUInteger)getAuthorizedServicesForDevice:(id)arg1;
- (id)init;
- (BOOL)isDiscoverable;
- (NSInteger)localDeviceSupportsService:(NSUInteger)arg1;
- (void)pairDevice:(id)arg1;
- (id)pairedDevices;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (BOOL)powered;
- (void)sendAllContactsToDevice:(id)arg1;
- (void)sendContact:(id)arg1 toDevice:(id)arg2;
- (void)serverTerminated;
- (void)setAirplaneMode:(BOOL)arg1;
- (void)setAudioConnected:(BOOL)arg1;
- (void)setConnectable:(BOOL)arg1;
- (void)setDevicePairingEnabled:(BOOL)arg1;
- (void)setDeviceScanningEnabled:(BOOL)arg1;
- (void)setDiscoverable:(BOOL)arg1;
- (BOOL)setEnabled:(BOOL)arg1;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (BOOL)setPowered:(BOOL)arg1;
- (void)setServiceAuthorization:(NSUInteger)arg1 authorized:(BOOL)arg2 forDevice:(id)arg3;
- (void)unpairDevice:(id)arg1;
- (BOOL)wasDeviceDiscovered:(id)arg1;

@end
