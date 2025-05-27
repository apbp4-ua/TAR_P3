
"use strict";

let DigitalOutput = require('./DigitalOutput.js');
let VersionInfo = require('./VersionInfo.js');
let Sound = require('./Sound.js');
let ControllerInfo = require('./ControllerInfo.js');
let BumperEvent = require('./BumperEvent.js');
let WheelDropEvent = require('./WheelDropEvent.js');
let Led = require('./Led.js');
let DigitalInputEvent = require('./DigitalInputEvent.js');
let ExternalPower = require('./ExternalPower.js');
let ScanAngle = require('./ScanAngle.js');
let SensorState = require('./SensorState.js');
let MotorPower = require('./MotorPower.js');
let KeyboardInput = require('./KeyboardInput.js');
let CliffEvent = require('./CliffEvent.js');
let RobotStateEvent = require('./RobotStateEvent.js');
let DockInfraRed = require('./DockInfraRed.js');
let PowerSystemEvent = require('./PowerSystemEvent.js');
let ButtonEvent = require('./ButtonEvent.js');
let AutoDockingAction = require('./AutoDockingAction.js');
let AutoDockingGoal = require('./AutoDockingGoal.js');
let AutoDockingActionFeedback = require('./AutoDockingActionFeedback.js');
let AutoDockingFeedback = require('./AutoDockingFeedback.js');
let AutoDockingActionGoal = require('./AutoDockingActionGoal.js');
let AutoDockingResult = require('./AutoDockingResult.js');
let AutoDockingActionResult = require('./AutoDockingActionResult.js');

module.exports = {
  DigitalOutput: DigitalOutput,
  VersionInfo: VersionInfo,
  Sound: Sound,
  ControllerInfo: ControllerInfo,
  BumperEvent: BumperEvent,
  WheelDropEvent: WheelDropEvent,
  Led: Led,
  DigitalInputEvent: DigitalInputEvent,
  ExternalPower: ExternalPower,
  ScanAngle: ScanAngle,
  SensorState: SensorState,
  MotorPower: MotorPower,
  KeyboardInput: KeyboardInput,
  CliffEvent: CliffEvent,
  RobotStateEvent: RobotStateEvent,
  DockInfraRed: DockInfraRed,
  PowerSystemEvent: PowerSystemEvent,
  ButtonEvent: ButtonEvent,
  AutoDockingAction: AutoDockingAction,
  AutoDockingGoal: AutoDockingGoal,
  AutoDockingActionFeedback: AutoDockingActionFeedback,
  AutoDockingFeedback: AutoDockingFeedback,
  AutoDockingActionGoal: AutoDockingActionGoal,
  AutoDockingResult: AutoDockingResult,
  AutoDockingActionResult: AutoDockingActionResult,
};
