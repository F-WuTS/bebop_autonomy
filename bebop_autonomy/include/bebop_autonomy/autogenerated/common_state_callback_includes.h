/*
 * common_state_callback_includes.h
 * auto-generated from https://raw.githubusercontent.com/Parrot-Developers/libARCommands/7e2f55fafcd45ba2380ca2574a08b7359c005f47/Xml/common_commands.xml
 * Date: 2015-09-02
 * Generator: generate.py @ ebb47cc
 * Do not modify this file by hand. Check scripts/meta folder for generator files.
 */

#ifdef DEFINE_SHARED_PTRS
// Define all callback wrappers
boost::shared_ptr<cb::CommonCommonStateAllStatesChanged> common_commonstate_allstateschanged_ptr;
boost::shared_ptr<cb::CommonCommonStateBatteryStateChanged> common_commonstate_batterystatechanged_ptr;
boost::shared_ptr<cb::CommonCommonStateMassStorageStateListChanged> common_commonstate_massstoragestatelistchanged_ptr;
boost::shared_ptr<cb::CommonCommonStateMassStorageInfoStateListChanged> common_commonstate_massstorageinfostatelistchanged_ptr;
boost::shared_ptr<cb::CommonCommonStateCurrentDateChanged> common_commonstate_currentdatechanged_ptr;
boost::shared_ptr<cb::CommonCommonStateCurrentTimeChanged> common_commonstate_currenttimechanged_ptr;
boost::shared_ptr<cb::CommonCommonStateMassStorageInfoRemainingListChanged> common_commonstate_massstorageinforemaininglistchanged_ptr;
boost::shared_ptr<cb::CommonCommonStateWifiSignalChanged> common_commonstate_wifisignalchanged_ptr;
boost::shared_ptr<cb::CommonCommonStateSensorsStatesListChanged> common_commonstate_sensorsstateslistchanged_ptr;
boost::shared_ptr<cb::CommonCommonStateProductModel> common_commonstate_productmodel_ptr;
boost::shared_ptr<cb::CommonCommonStateCountryListKnown> common_commonstate_countrylistknown_ptr;
boost::shared_ptr<cb::CommonOverHeatStateOverHeatChanged> common_overheatstate_overheatchanged_ptr;
boost::shared_ptr<cb::CommonOverHeatStateOverHeatRegulationChanged> common_overheatstate_overheatregulationchanged_ptr;
boost::shared_ptr<cb::CommonControllerStateisPilotingChanged> common_controllerstate_ispilotingchanged_ptr;
boost::shared_ptr<cb::CommonMavlinkStateMavlinkFilePlayingStateChanged> common_mavlinkstate_mavlinkfileplayingstatechanged_ptr;
boost::shared_ptr<cb::CommonMavlinkStateMavlinkPlayErrorStateChanged> common_mavlinkstate_mavlinkplayerrorstatechanged_ptr;
boost::shared_ptr<cb::CommonCalibrationStateMagnetoCalibrationStateChanged> common_calibrationstate_magnetocalibrationstatechanged_ptr;
boost::shared_ptr<cb::CommonCalibrationStateMagnetoCalibrationRequiredState> common_calibrationstate_magnetocalibrationrequiredstate_ptr;
boost::shared_ptr<cb::CommonCalibrationStateMagnetoCalibrationAxisToCalibrateChanged> common_calibrationstate_magnetocalibrationaxistocalibratechanged_ptr;
boost::shared_ptr<cb::CommonCalibrationStateMagnetoCalibrationStartedChanged> common_calibrationstate_magnetocalibrationstartedchanged_ptr;
boost::shared_ptr<cb::CommonFlightPlanStateAvailabilityStateChanged> common_flightplanstate_availabilitystatechanged_ptr;
boost::shared_ptr<cb::CommonFlightPlanStateComponentStateListChanged> common_flightplanstate_componentstatelistchanged_ptr;
boost::shared_ptr<cb::CommonARLibsVersionsStateControllerLibARCommandsVersion> common_arlibsversionsstate_controllerlibarcommandsversion_ptr;
boost::shared_ptr<cb::CommonARLibsVersionsStateSkyControllerLibARCommandsVersion> common_arlibsversionsstate_skycontrollerlibarcommandsversion_ptr;
boost::shared_ptr<cb::CommonARLibsVersionsStateDeviceLibARCommandsVersion> common_arlibsversionsstate_devicelibarcommandsversion_ptr;
boost::shared_ptr<cb::CommonAudioStateAudioStreamingRunning> common_audiostate_audiostreamingrunning_ptr;
boost::shared_ptr<cb::CommonHeadlightsStateintensityChanged> common_headlightsstate_intensitychanged_ptr;
boost::shared_ptr<cb::CommonAnimationsStateList> common_animationsstate_list_ptr;
boost::shared_ptr<cb::CommonAccessoryStateSupportedAccessoriesListChanged> common_accessorystate_supportedaccessorieslistchanged_ptr;
boost::shared_ptr<cb::CommonAccessoryStateAccessoryConfigChanged> common_accessorystate_accessoryconfigchanged_ptr;
boost::shared_ptr<cb::CommonAccessoryStateAccessoryConfigModificationEnabled> common_accessorystate_accessoryconfigmodificationenabled_ptr;
boost::shared_ptr<cb::CommonChargerStateMaxChargeRateChanged> common_chargerstate_maxchargeratechanged_ptr;
boost::shared_ptr<cb::CommonChargerStateCurrentChargeStateChanged> common_chargerstate_currentchargestatechanged_ptr;
boost::shared_ptr<cb::CommonChargerStateLastChargeRateChanged> common_chargerstate_lastchargeratechanged_ptr;
boost::shared_ptr<cb::CommonChargerStateChargingInfo> common_chargerstate_charginginfo_ptr;
#endif  // DEFINE_SHARED_PTRS

#ifdef UPDTAE_CALLBACK_MAP
// Instantiate state callback wrappers
common_commonstate_allstateschanged_ptr.reset(new cb::CommonCommonStateAllStatesChanged(nh, "states/common/CommonState/AllStatesChanged"));
common_commonstate_batterystatechanged_ptr.reset(new cb::CommonCommonStateBatteryStateChanged(nh, "states/common/CommonState/BatteryStateChanged"));
common_commonstate_massstoragestatelistchanged_ptr.reset(new cb::CommonCommonStateMassStorageStateListChanged(nh, "states/common/CommonState/MassStorageStateListChanged"));
common_commonstate_massstorageinfostatelistchanged_ptr.reset(new cb::CommonCommonStateMassStorageInfoStateListChanged(nh, "states/common/CommonState/MassStorageInfoStateListChanged"));
common_commonstate_currentdatechanged_ptr.reset(new cb::CommonCommonStateCurrentDateChanged(nh, "states/common/CommonState/CurrentDateChanged"));
common_commonstate_currenttimechanged_ptr.reset(new cb::CommonCommonStateCurrentTimeChanged(nh, "states/common/CommonState/CurrentTimeChanged"));
common_commonstate_massstorageinforemaininglistchanged_ptr.reset(new cb::CommonCommonStateMassStorageInfoRemainingListChanged(nh, "states/common/CommonState/MassStorageInfoRemainingListChanged"));
common_commonstate_wifisignalchanged_ptr.reset(new cb::CommonCommonStateWifiSignalChanged(nh, "states/common/CommonState/WifiSignalChanged"));
common_commonstate_sensorsstateslistchanged_ptr.reset(new cb::CommonCommonStateSensorsStatesListChanged(nh, "states/common/CommonState/SensorsStatesListChanged"));
common_commonstate_productmodel_ptr.reset(new cb::CommonCommonStateProductModel(nh, "states/common/CommonState/ProductModel"));
common_commonstate_countrylistknown_ptr.reset(new cb::CommonCommonStateCountryListKnown(nh, "states/common/CommonState/CountryListKnown"));
common_overheatstate_overheatchanged_ptr.reset(new cb::CommonOverHeatStateOverHeatChanged(nh, "states/common/OverHeatState/OverHeatChanged"));
common_overheatstate_overheatregulationchanged_ptr.reset(new cb::CommonOverHeatStateOverHeatRegulationChanged(nh, "states/common/OverHeatState/OverHeatRegulationChanged"));
common_controllerstate_ispilotingchanged_ptr.reset(new cb::CommonControllerStateisPilotingChanged(nh, "states/common/ControllerState/isPilotingChanged"));
common_mavlinkstate_mavlinkfileplayingstatechanged_ptr.reset(new cb::CommonMavlinkStateMavlinkFilePlayingStateChanged(nh, "states/common/MavlinkState/MavlinkFilePlayingStateChanged"));
common_mavlinkstate_mavlinkplayerrorstatechanged_ptr.reset(new cb::CommonMavlinkStateMavlinkPlayErrorStateChanged(nh, "states/common/MavlinkState/MavlinkPlayErrorStateChanged"));
common_calibrationstate_magnetocalibrationstatechanged_ptr.reset(new cb::CommonCalibrationStateMagnetoCalibrationStateChanged(nh, "states/common/CalibrationState/MagnetoCalibrationStateChanged"));
common_calibrationstate_magnetocalibrationrequiredstate_ptr.reset(new cb::CommonCalibrationStateMagnetoCalibrationRequiredState(nh, "states/common/CalibrationState/MagnetoCalibrationRequiredState"));
common_calibrationstate_magnetocalibrationaxistocalibratechanged_ptr.reset(new cb::CommonCalibrationStateMagnetoCalibrationAxisToCalibrateChanged(nh, "states/common/CalibrationState/MagnetoCalibrationAxisToCalibrateChanged"));
common_calibrationstate_magnetocalibrationstartedchanged_ptr.reset(new cb::CommonCalibrationStateMagnetoCalibrationStartedChanged(nh, "states/common/CalibrationState/MagnetoCalibrationStartedChanged"));
common_flightplanstate_availabilitystatechanged_ptr.reset(new cb::CommonFlightPlanStateAvailabilityStateChanged(nh, "states/common/FlightPlanState/AvailabilityStateChanged"));
common_flightplanstate_componentstatelistchanged_ptr.reset(new cb::CommonFlightPlanStateComponentStateListChanged(nh, "states/common/FlightPlanState/ComponentStateListChanged"));
common_arlibsversionsstate_controllerlibarcommandsversion_ptr.reset(new cb::CommonARLibsVersionsStateControllerLibARCommandsVersion(nh, "states/common/ARLibsVersionsState/ControllerLibARCommandsVersion"));
common_arlibsversionsstate_skycontrollerlibarcommandsversion_ptr.reset(new cb::CommonARLibsVersionsStateSkyControllerLibARCommandsVersion(nh, "states/common/ARLibsVersionsState/SkyControllerLibARCommandsVersion"));
common_arlibsversionsstate_devicelibarcommandsversion_ptr.reset(new cb::CommonARLibsVersionsStateDeviceLibARCommandsVersion(nh, "states/common/ARLibsVersionsState/DeviceLibARCommandsVersion"));
common_audiostate_audiostreamingrunning_ptr.reset(new cb::CommonAudioStateAudioStreamingRunning(nh, "states/common/AudioState/AudioStreamingRunning"));
common_headlightsstate_intensitychanged_ptr.reset(new cb::CommonHeadlightsStateintensityChanged(nh, "states/common/HeadlightsState/intensityChanged"));
common_animationsstate_list_ptr.reset(new cb::CommonAnimationsStateList(nh, "states/common/AnimationsState/List"));
common_accessorystate_supportedaccessorieslistchanged_ptr.reset(new cb::CommonAccessoryStateSupportedAccessoriesListChanged(nh, "states/common/AccessoryState/SupportedAccessoriesListChanged"));
common_accessorystate_accessoryconfigchanged_ptr.reset(new cb::CommonAccessoryStateAccessoryConfigChanged(nh, "states/common/AccessoryState/AccessoryConfigChanged"));
common_accessorystate_accessoryconfigmodificationenabled_ptr.reset(new cb::CommonAccessoryStateAccessoryConfigModificationEnabled(nh, "states/common/AccessoryState/AccessoryConfigModificationEnabled"));
common_chargerstate_maxchargeratechanged_ptr.reset(new cb::CommonChargerStateMaxChargeRateChanged(nh, "states/common/ChargerState/MaxChargeRateChanged"));
common_chargerstate_currentchargestatechanged_ptr.reset(new cb::CommonChargerStateCurrentChargeStateChanged(nh, "states/common/ChargerState/CurrentChargeStateChanged"));
common_chargerstate_lastchargeratechanged_ptr.reset(new cb::CommonChargerStateLastChargeRateChanged(nh, "states/common/ChargerState/LastChargeRateChanged"));
common_chargerstate_charginginfo_ptr.reset(new cb::CommonChargerStateChargingInfo(nh, "states/common/ChargerState/ChargingInfo"));

// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_allstateschanged_ptr->GetCommandKey(),
                      common_commonstate_allstateschanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_batterystatechanged_ptr->GetCommandKey(),
                      common_commonstate_batterystatechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_massstoragestatelistchanged_ptr->GetCommandKey(),
                      common_commonstate_massstoragestatelistchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_massstorageinfostatelistchanged_ptr->GetCommandKey(),
                      common_commonstate_massstorageinfostatelistchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_currentdatechanged_ptr->GetCommandKey(),
                      common_commonstate_currentdatechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_currenttimechanged_ptr->GetCommandKey(),
                      common_commonstate_currenttimechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_massstorageinforemaininglistchanged_ptr->GetCommandKey(),
                      common_commonstate_massstorageinforemaininglistchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_wifisignalchanged_ptr->GetCommandKey(),
                      common_commonstate_wifisignalchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_sensorsstateslistchanged_ptr->GetCommandKey(),
                      common_commonstate_sensorsstateslistchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_productmodel_ptr->GetCommandKey(),
                      common_commonstate_productmodel_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_commonstate_countrylistknown_ptr->GetCommandKey(),
                      common_commonstate_countrylistknown_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_overheatstate_overheatchanged_ptr->GetCommandKey(),
                      common_overheatstate_overheatchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_overheatstate_overheatregulationchanged_ptr->GetCommandKey(),
                      common_overheatstate_overheatregulationchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_controllerstate_ispilotingchanged_ptr->GetCommandKey(),
                      common_controllerstate_ispilotingchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_mavlinkstate_mavlinkfileplayingstatechanged_ptr->GetCommandKey(),
                      common_mavlinkstate_mavlinkfileplayingstatechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_mavlinkstate_mavlinkplayerrorstatechanged_ptr->GetCommandKey(),
                      common_mavlinkstate_mavlinkplayerrorstatechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_calibrationstate_magnetocalibrationstatechanged_ptr->GetCommandKey(),
                      common_calibrationstate_magnetocalibrationstatechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_calibrationstate_magnetocalibrationrequiredstate_ptr->GetCommandKey(),
                      common_calibrationstate_magnetocalibrationrequiredstate_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_calibrationstate_magnetocalibrationaxistocalibratechanged_ptr->GetCommandKey(),
                      common_calibrationstate_magnetocalibrationaxistocalibratechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_calibrationstate_magnetocalibrationstartedchanged_ptr->GetCommandKey(),
                      common_calibrationstate_magnetocalibrationstartedchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_flightplanstate_availabilitystatechanged_ptr->GetCommandKey(),
                      common_flightplanstate_availabilitystatechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_flightplanstate_componentstatelistchanged_ptr->GetCommandKey(),
                      common_flightplanstate_componentstatelistchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_arlibsversionsstate_controllerlibarcommandsversion_ptr->GetCommandKey(),
                      common_arlibsversionsstate_controllerlibarcommandsversion_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_arlibsversionsstate_skycontrollerlibarcommandsversion_ptr->GetCommandKey(),
                      common_arlibsversionsstate_skycontrollerlibarcommandsversion_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_arlibsversionsstate_devicelibarcommandsversion_ptr->GetCommandKey(),
                      common_arlibsversionsstate_devicelibarcommandsversion_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_audiostate_audiostreamingrunning_ptr->GetCommandKey(),
                      common_audiostate_audiostreamingrunning_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_headlightsstate_intensitychanged_ptr->GetCommandKey(),
                      common_headlightsstate_intensitychanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_animationsstate_list_ptr->GetCommandKey(),
                      common_animationsstate_list_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_accessorystate_supportedaccessorieslistchanged_ptr->GetCommandKey(),
                      common_accessorystate_supportedaccessorieslistchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_accessorystate_accessoryconfigchanged_ptr->GetCommandKey(),
                      common_accessorystate_accessoryconfigchanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_accessorystate_accessoryconfigmodificationenabled_ptr->GetCommandKey(),
                      common_accessorystate_accessoryconfigmodificationenabled_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_chargerstate_maxchargeratechanged_ptr->GetCommandKey(),
                      common_chargerstate_maxchargeratechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_chargerstate_currentchargestatechanged_ptr->GetCommandKey(),
                      common_chargerstate_currentchargestatechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_chargerstate_lastchargeratechanged_ptr->GetCommandKey(),
                      common_chargerstate_lastchargeratechanged_ptr));
// Add all wrappers to the callback map
callback_map_.insert(std::pair<eARCONTROLLER_DICTIONARY_KEY, boost::shared_ptr<cb::AbstractCommand> >(
                      common_chargerstate_charginginfo_ptr->GetCommandKey(),
                      common_chargerstate_charginginfo_ptr));
#endif  // UPDTAE_CALLBACK_MAP