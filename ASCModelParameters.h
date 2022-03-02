/*======================
// 
// Parameter definition file for terminal definitions
//
// min, max values, grid orientation, area of Stacking crane transferpoints, area of QC transferpoints, blocked area's
//
//  Max Y coordinate              ------------------------------------------------------------------------------------------
//
//  QC transfer area's 
//  Y coordinates > QCStartGrid        .....................................................................................	
//
//
//
//
//                                                         North
//                                                        /
//                                                       /
//                                                      / grid orientation
//                                                     /-----------
//                                                   X = origin (0,0)
//
//         
//
//                                                                                       BA1-LU
//                                                                                             -------
//                                                                                             |     | 
//                                                                                             | BA-1|
//                                                                                             -------
//                                                                                                   BA1(-RD)
//
//  ASC transfer area's                 ...................................................................................
//  Y coordinates < ASCStartGrid        
//   Min Y coordinate              ------------------------------------------------------------------------------------------
//                                 |                                                                                        |
//
//                         Min X coordinate                                                                            Max X coordinate
*/
//
// GRID
//
#define maxAreaX  						500		// cm
#define minAreaX 						-500    // cm
#define maxAreaY  						300		// cm
#define minAreaY 						-200 	// cm
#define gridOrientationRelativeToNorth  60		// degrees
#define orientationVehicleAtStart        0      // degrees
#define startStackingTransferPoints   -130 		//  max y coordinates of stacking crane transfer areas
#define startQCTransferPoints          150		//  min Y coordinates of QC transfer areas
#define ZeroRadarX                    1400      // mm from (0,0) in X-direction
#define ZeroRadarY                    4000      // mm from (0,0) in Y-direction
//  
// blocked areas
//
//
// orientation parameters
//
#define angleMargin 				     3.0	// degrees
#define turnRadius                       57     // cm (x, y) coordinate delta after a turn: turnRadius cm in both dimensions
//
// Motor parameters
//
#define poleMotorSpeed 					7200	// micro seconds (original 3600)
#define compassMotorSpeed 				2700	// micro seconds (original 3600)
#define steeringMotorSpeed 				7200	// micro seconds (original 3600)
//
// steeringMotorCalibration
//
enum motorPosition
{
	none        = 0,
	leftFront   = 1,
	leftMiddle  = 2,
	leftRear    = 3,
	rightFront  = 4,
	rightMiddle = 5,
	rightRear   = 6
};

const int steeringCalibration[7] = {0, 0, 0, 5, 5, 0, 0};