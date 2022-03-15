/*
 * Code generation for system model 'flightControlSystem'
 *
 * Model                      : flightControlSystem
 * Model version              : 3.2
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Thu Nov 25 18:51:54 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "flightControlSystem.h"
#include "flightControlSystem_private.h"
#include "rt_atan2d_snf.h"
#include "rt_powf_snf.h"

P_flightControlSystem_T flightControlSystem_P_g = {
  /* Expression: 0
   * Referenced by: '<S2>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition'
   */
  0.0,

  /* Start of '<Root>/Flight Control System' */
  {
    /* Mask Parameter: outlierBelowFloor_const
     * Referenced by: '<S254>/Constant'
     */
    0.0,

    /* Mask Parameter: outlierJump_const
     * Referenced by: '<S309>/Constant'
     */
    0.1,

    /* Mask Parameter: currentEstimateVeryOffFromPressure_const
     * Referenced by: '<S307>/Constant'
     */
    0.8,

    /* Mask Parameter: currentStateVeryOffsonarflt_const
     * Referenced by: '<S308>/Constant'
     */
    0.4,

    /* Mask Parameter: ComparewithStoptime_const
     * Referenced by: '<S244>/Constant'
     */
    5.0,

    /* Mask Parameter: Checkerrorcondition_const
     * Referenced by: '<S236>/Constant'
     */
    -1.0,

    /* Mask Parameter: u0continuousOFerrors_const
     * Referenced by: '<S235>/Constant'
     */
    50.0,

    /* Mask Parameter: Angularvelocitycontrolloop_D
     * Referenced by: '<S94>/Derivative Gain'
     */
    { 0.00012F, 9.72E-5F },

    /* Mask Parameter: Angularvelocitycontrolloop_I
     * Referenced by: '<S97>/Integral Gain'
     */
    { 0.006F, 0.00486F },

    /* Mask Parameter: Velocitycontroller_I
     * Referenced by: '<S198>/Integral Gain'
     */
    0.1F,

    /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
     * Referenced by: '<S444>/UD'
     */
    0.0F,

    /* Mask Parameter: Angularvelocitycontrolloop_InitialConditionForFilter
     * Referenced by: '<S95>/Filter'
     */
    0.0F,

    /* Mask Parameter: Velocitycontroller_InitialConditionForIntegrator
     * Referenced by: '<S201>/Integrator'
     */
    0.0F,

    /* Mask Parameter: Angularvelocitycontrolloop_InitialConditionForIntegrator
     * Referenced by: '<S100>/Integrator'
     */
    0.0F,

    /* Mask Parameter: Positioncontroller_LowerSaturationLimit
     * Referenced by: '<S158>/Saturation'
     */
    -0.25F,

    /* Mask Parameter: Velocitycontroller_LowerSaturationLimit
     * Referenced by:
     *   '<S208>/Saturation'
     *   '<S194>/DeadZone'
     */
    -0.34906584F,

    /* Mask Parameter: Angularvelocitycontrolloop_LowerSaturationLimit
     * Referenced by:
     *   '<S107>/Saturation'
     *   '<S93>/DeadZone'
     */
    -0.02F,

    /* Mask Parameter: Angularvelocitycontrolloop_N
     * Referenced by: '<S103>/Filter Coefficient'
     */
    { 70.0F, 70.0F },

    /* Mask Parameter: Positioncontroller_P
     * Referenced by: '<S156>/Proportional Gain'
     */
    0.7F,

    /* Mask Parameter: Velocitycontroller_P
     * Referenced by: '<S206>/Proportional Gain'
     */
    0.2F,

    /* Mask Parameter: Anglecontrolloop_P
     * Referenced by: '<S55>/Proportional Gain'
     */
    4.0F,

    /* Mask Parameter: Angularvelocitycontrolloop_P
     * Referenced by: '<S105>/Proportional Gain'
     */
    { 0.003F, 0.00243F },

    /* Mask Parameter: Positioncontroller_UpperSaturationLimit
     * Referenced by: '<S158>/Saturation'
     */
    0.25F,

    /* Mask Parameter: Velocitycontroller_UpperSaturationLimit
     * Referenced by:
     *   '<S208>/Saturation'
     *   '<S194>/DeadZone'
     */
    0.34906584F,

    /* Mask Parameter: Angularvelocitycontrolloop_UpperSaturationLimit
     * Referenced by:
     *   '<S107>/Saturation'
     *   '<S93>/DeadZone'
     */
    0.02F,

    /* Mask Parameter: Checkifthedroneis03maboveground_const
     * Referenced by: '<S234>/Constant'
     */
    -0.3F,

    /* Mask Parameter: CompareToConstant_const
     * Referenced by: '<S311>/Constant'
     */
    6.867F,

    /* Mask Parameter: CompareToConstant1_const
     * Referenced by: '<S312>/Constant'
     */
    12.753F,

    /* Mask Parameter: maxp_const
     * Referenced by: '<S447>/Constant'
     */
    0.6F,

    /* Mask Parameter: maxq_const
     * Referenced by: '<S449>/Constant'
     */
    0.6F,

    /* Mask Parameter: maxw1_const
     * Referenced by: '<S451>/Constant'
     */
    7.0F,

    /* Mask Parameter: maxw2_const
     * Referenced by: '<S452>/Constant'
     */
    7.0F,

    /* Mask Parameter: maxdw1_const
     * Referenced by: '<S445>/Constant'
     */
    80.0F,

    /* Mask Parameter: maxdw2_const
     * Referenced by: '<S446>/Constant'
     */
    80.0F,

    /* Mask Parameter: maxp2_const
     * Referenced by: '<S448>/Constant'
     */
    0.5F,

    /* Mask Parameter: maxq2_const
     * Referenced by: '<S450>/Constant'
     */
    0.5F,

    /* Mask Parameter: maxw3_const
     * Referenced by: '<S453>/Constant'
     */
    5.0F,

    /* Mask Parameter: maxw4_const
     * Referenced by: '<S454>/Constant'
     */
    5.0F,

    /* Mask Parameter: minHeightforOF_const
     * Referenced by: '<S455>/Constant'
     */
    -0.4F,

    /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
     * Referenced by: '<S439>/Constant'
     */
    -0.4F,

    /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
     * Referenced by: '<S441>/Constant'
     */
    0.0F,

    /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
     * Referenced by: '<S442>/Constant'
     */
    0.0F,

    /* Mask Parameter: CompareToConstant_const_m
     * Referenced by: '<S219>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant1_const_m
     * Referenced by: '<S220>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant2_const
     * Referenced by: '<S221>/Constant'
     */
    6.0F,

    /* Mask Parameter: CompareToConstant4_const
     * Referenced by: '<S223>/Constant'
     */
    0.01F,

    /* Mask Parameter: CompareToConstant3_const
     * Referenced by: '<S222>/Constant'
     */
    6.0F,

    /* Mask Parameter: CompareToConstant5_const
     * Referenced by: '<S224>/Constant'
     */
    0.01F,

    /* Mask Parameter: WrapToZero_Threshold
     * Referenced by: '<S233>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: WrapToZero_Threshold_l
     * Referenced by: '<S243>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: WrapToZero_Threshold_lm
     * Referenced by: '<S512>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: WrapToZero_Threshold_j
     * Referenced by: '<S431>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: CompareToConstant_const_p
     * Referenced by: '<S427>/Constant'
     */
    1U,

    /* Mask Parameter: CompareToConstant_const_mg
     * Referenced by: '<S509>/Constant'
     */
    800U,

    /* Mask Parameter: Wait5seconds_const
     * Referenced by: '<S240>/Constant'
     */
    1000U,

    /* Mask Parameter: WrapToZero_Threshold_f
     * Referenced by: '<S16>/FixPt Switch'
     */
    65535U,

    /* Mask Parameter: CompareToConstant_const_i
     * Referenced by: '<S13>/Constant'
     */
    100U,

    /* Expression: 0
     * Referenced by: '<S229>/ Disable OF check'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S229>/ '
     */
    0.0,

    /* Expression: [0 0 -1]
     * Referenced by: '<S5>/Startup Waypoints'
     */
    { 0.0, 0.0, -1.0 },

    /* Expression: [0 0 -1; 1.5 0 -1; 1.5 1.5 -1; 0 1.5 -1; 0 0 -1; 1.5 0 -1; 1.5 1.5 -1; 0 1.5 -1; 0 0 -1]
     * Referenced by: '<S241>/Waypoints'
     */
    { 0.0, 1.5, 1.5, 0.0, 0.0, 1.5, 1.5, 0.0, 0.0, 0.0, 0.0, 1.5, 1.5, 0.0, 0.0,
      1.5, 1.5, 0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0 },

    /* Expression: .25
     * Referenced by: '<S241>/Look ahead distance'
     */
    0.25,

    /* Expression: 0
     * Referenced by: '<S303>/L*(y[k]-yhat[k|k-1])'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S305>/deltax'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S425>/Constant'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S247>/Delay2'
     */
    0.0,

    /* Expression: pInitialization.X0
     * Referenced by: '<S251>/X0'
     */
    { -0.046, 0.0 },

    /* Expression: -inf
     * Referenced by: '<S252>/SaturationSonar'
     */
    0.0,

    /* Expression: Estimator.alt.filterSonarNum
     * Referenced by: '<S252>/sonarFilter_IIR'
     */
    { 3.756838019751262E-6, 1.1270514059253787E-5, 1.1270514059253787E-5,
      3.756838019751262E-6 },

    /* Expression: Estimator.alt.filterSonarDen
     * Referenced by: '<S252>/sonarFilter_IIR'
     */
    { 1.0, -2.9371707284498907, 2.8762997234793319, -0.939098940325283 },

    /* Expression: 0
     * Referenced by: '<S252>/sonarFilter_IIR'
     */
    0.0,

    /* Expression: pInitialization.M
     * Referenced by: '<S255>/KalmanGainM'
     */
    { 0.026241420641871824, 0.069776736071494413 },

    /* Expression: pInitialization.C
     * Referenced by: '<S251>/C'
     */
    { 1.0, 0.0 },

    /* Expression: pInitialization.M
     * Referenced by: '<S318>/KalmanGainM'
     */
    { 0.0011869299883620552, -3.2868164179443347E-5 },

    /* Expression: pInitialization.M
     * Referenced by: '<S372>/KalmanGainM'
     */
    { 0.0011869299883620552, -3.2868164179443347E-5 },

    /* Expression: pInitialization.M
     * Referenced by: '<S456>/KalmanGainM'
     */
    { 0.066408162001371715, 0.0, -0.021605460397771035, 0.0, 0.0,
      0.066408162001371715, 0.0, -0.021605460397771035 },

    /* Expression: pInitialization.L
     * Referenced by: '<S456>/KalmanGainL'
     */
    { 0.066516189303360562, -5.3094734897187146E-19, -0.021605460397771271,
      7.7674406668257917E-20, -1.4978034951024037E-18, 0.066516189303360548,
      1.68446714430961E-17, -0.021605460397771267 },

    /* Expression: [0 0 -g]
     * Referenced by: '<S434>/gravity'
     */
    { 0.0, 0.0, -9.81 },

    /* Expression: 1
     * Referenced by: '<S434>/gainaccinput1'
     */
    1.0,

    /* Expression: pInitialization.A
     * Referenced by: '<S251>/A'
     */
    { 1.0, 0.0, 0.005, 1.0 },

    /* Expression: [0 0 g]
     * Referenced by: '<S247>/gravity'
     */
    { 0.0, 0.0, 9.81 },

    /* Expression: pInitialization.L
     * Referenced by: '<S372>/KalmanGainL'
     */
    { 0.0011870943291829546, -3.2868164179443435E-5 },

    /* Expression: pInitialization.L
     * Referenced by: '<S318>/KalmanGainL'
     */
    { 0.0011870943291829546, -3.2868164179443435E-5 },

    /* Expression: pInitialization.B
     * Referenced by: '<S251>/B'
     */
    { 0.0, 0.005 },

    /* Expression: pInitialization.D
     * Referenced by: '<S251>/D'
     */
    0.0,

    /* Expression: pInitialization.L
     * Referenced by: '<S255>/KalmanGainL'
     */
    { 0.026590304322229273, 0.069776736071495565 },

    /* Expression: 200*3
     * Referenced by: '<S4>/Wait  3 Seconds'
     */
    600.0,

    /* Expression: 0.0
     * Referenced by: '<S229>/Delay One Step'
     */
    0.0,

    /* Expression: 0.5
     * Referenced by: '<S218>/0.5 meters'
     */
    0.5,

    /* Expression: pInitialization.Z
     * Referenced by: '<S456>/CovarianceZ'
     */
    { 1.3281632400274346, 0.0, -0.43210920795542068, 0.0, 0.0,
      1.3281632400274346, 0.0, -0.43210920795542068, -0.43210920795542068, 0.0,
      6.14734986237763, 0.0, 0.0, -0.43210920795542068, 0.0, 6.14734986237763 },

    /* Expression: pInitialization.Z
     * Referenced by: '<S255>/CovarianceZ'
     */
    { 0.0026241420641871824, 0.0069776736071494412, 0.0069776736071494412,
      0.03760769293505626 },

    /* Expression: pInitialization.P0
     * Referenced by: '<S251>/P0'
     */
    { 0.0026948589925820591, 0.0071657120718247331, 0.0071657120718247331,
      0.038107692935056295 },

    /* Expression: pInitialization.Z
     * Referenced by: '<S318>/CovarianceZ'
     */
    { 1097.3834951572255, -30.388465402591855, -30.388465402591851,
      7.2223686232128905 },

    /* Expression: pInitialization.Z
     * Referenced by: '<S372>/CovarianceZ'
     */
    { 1097.3834951572255, -30.388465402591855, -30.388465402591851,
      7.2223686232128905 },

    /* Expression: pInitialization.G
     * Referenced by: '<S251>/G'
     */
    { 0.0, 1.0 },

    /* Expression: pInitialization.H
     * Referenced by: '<S251>/H'
     */
    0.0,

    /* Expression: pInitialization.N
     * Referenced by: '<S251>/N'
     */
    0.0,

    /* Expression: pInitialization.Q
     * Referenced by: '<S251>/Q'
     */
    0.0005,

    /* Expression: pInitialization.R
     * Referenced by: '<S251>/R'
     */
    0.1,

    /* Expression: Controller.takeoffGain
     * Referenced by: '<S7>/takeoff_gain1'
     */
    0.45F,

    /* Computed Parameter: P_z1_Gain
     * Referenced by: '<S7>/P_z1'
     */
    0.8F,

    /* Computed Parameter: D_z1_Gain
     * Referenced by: '<S7>/D_z1'
     */
    0.5F,

    /* Computed Parameter: Pitchcorrection_Value
     * Referenced by: '<S9>/Pitch correction'
     */
    0.002F,

    /* Computed Parameter: zerocorrection_Value
     * Referenced by: '<S9>/zero correction'
     */
    0.0F,

    /* Computed Parameter: Gain_Gain
     * Referenced by: '<S10>/Gain'
     */
    { -1.0F, 1.0F },

    /* Computed Parameter: _Value_a
     * Referenced by: '<S218>/    '
     */
    0.0F,

    /* Computed Parameter: X_Y0
     * Referenced by: '<S245>/X'
     */
    0.0F,

    /* Computed Parameter: Y_Y0
     * Referenced by: '<S245>/Y'
     */
    0.0F,

    /* Computed Parameter: LandingLookaheaddistance_Value
     * Referenced by: '<S239>/Landing Look-ahead distance'
     */
    0.2F,

    /* Computed Parameter: Tocontroller_Y0
     * Referenced by: '<S241>/To controller'
     */
    0.0F,

    /* Computed Parameter: Gain_Gain_b
     * Referenced by: '<S425>/Gain'
     */
    0.00228F,

    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S429>/Out1'
     */
    0.0F,

    /* Computed Parameter: Lykyhatkk1_Y0_e
     * Referenced by: '<S506>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F,

    /* Computed Parameter: deltax_Y0_o
     * Referenced by: '<S508>/deltax'
     */
    0.0F,

    /* Computed Parameter: Gain_Gain_h
     * Referenced by: '<S438>/Gain'
     */
    -1.0F,

    /* Computed Parameter: opticalFlowErrorCorrect_Gain
     * Referenced by: '<S438>/opticalFlowErrorCorrect'
     */
    1.15F,

    /* Expression: Controller.Q2Ts
     * Referenced by: '<S9>/TorqueTotalThrustToThrustPerMotor'
     */
    { 0.25F, 0.25F, 0.25F, 0.25F, 103.573624F, -103.573624F, 103.573624F,
      -103.573624F, -5.66592F, -5.66592F, 5.66592F, 5.66592F, -5.66592F,
      5.66592F, 5.66592F, -5.66592F },

    /* Computed Parameter: A_Value_c
     * Referenced by: '<S437>/A'
     */
    { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, -0.005F, 0.0F, 1.0F, 0.0F,
      0.0F, -0.005F, 0.0F, 1.0F },

    /* Computed Parameter: SimplyIntegrateVelocity_gainval
     * Referenced by: '<S433>/SimplyIntegrateVelocity'
     */
    0.005F,

    /* Computed Parameter: SimplyIntegrateVelocity_IC
     * Referenced by: '<S433>/SimplyIntegrateVelocity'
     */
    0.0F,

    /* Computed Parameter: invertzaxisGain_Gain
     * Referenced by: '<S247>/invertzaxisGain'
     */
    -1.0F,

    /* Computed Parameter: prsToAltGain_Gain
     * Referenced by: '<S247>/prsToAltGain'
     */
    0.0832137167F,

    /* Computed Parameter: pressureFilter_IIR_NumCoef
     * Referenced by: '<S252>/pressureFilter_IIR'
     */
    { 3.75683794E-6F, 1.12705138E-5F, 1.12705138E-5F, 3.75683794E-6F },

    /* Computed Parameter: pressureFilter_IIR_DenCoef
     * Referenced by: '<S252>/pressureFilter_IIR'
     */
    { 1.0F, -2.93717074F, 2.87629962F, -0.939098954F },

    /* Computed Parameter: pressureFilter_IIR_InitialStates
     * Referenced by: '<S252>/pressureFilter_IIR'
     */
    0.0F,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S315>/Discrete-Time Integrator'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator_IC
     * Referenced by: '<S315>/Discrete-Time Integrator'
     */
    0.0F,

    /* Computed Parameter: X0_Value_f
     * Referenced by: '<S317>/X0'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bi
     * Referenced by: '<S249>/Assuming that the  preflight calibration was done at level orientation'
     */
    { 0.0F, 0.0F, 9.81F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: inverseIMU_gain_Gain
     * Referenced by: '<S249>/inverseIMU_gain'
     */
    { 0.994075298F, 0.996184587F, 1.00549F, 1.00139189F, 0.993601203F, 1.00003F
    },

    /* Computed Parameter: FIR_IMUaccel_InitialStates
     * Referenced by: '<S249>/FIR_IMUaccel'
     */
    0.0F,

    /* Computed Parameter: FIR_IMUaccel_Coefficients
     * Referenced by: '<S249>/FIR_IMUaccel'
     */
    { 0.0264077242F, 0.140531361F, 0.33306092F, 0.33306092F, 0.140531361F,
      0.0264077242F },

    /* Computed Parameter: Gain2_Gain
     * Referenced by: '<S313>/Gain2'
     */
    0.101936802F,

    /* Computed Parameter: Constant_Value_k
     * Referenced by: '<S316>/Constant'
     */
    2.0F,

    /* Computed Parameter: C_Value_j
     * Referenced by: '<S317>/C'
     */
    { 1.0F, 0.0F },

    /* Computed Parameter: X0_Value_fi
     * Referenced by: '<S371>/X0'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: C_Value_a
     * Referenced by: '<S371>/C'
     */
    { 1.0F, 0.0F },

    /* Computed Parameter: LPFFcutoff40Hz1_NumCoef
     * Referenced by: '<S249>/LPF Fcutoff = 40Hz1'
     */
    { 1.0F, 1.0F },

    /* Computed Parameter: LPFFcutoff40Hz1_DenCoef
     * Referenced by: '<S249>/LPF Fcutoff = 40Hz1'
     */
    { 2.5915494F, -0.591549456F },

    /* Computed Parameter: LPFFcutoff40Hz1_InitialStates
     * Referenced by: '<S249>/LPF Fcutoff = 40Hz1'
     */
    0.0F,

    /* Computed Parameter: LPFFcutoff40Hz_NumCoef
     * Referenced by: '<S249>/LPF Fcutoff = 40Hz'
     */
    { 1.0F, 1.0F },

    /* Computed Parameter: LPFFcutoff40Hz_DenCoef
     * Referenced by: '<S249>/LPF Fcutoff = 40Hz'
     */
    { 2.5915494F, -0.591549456F },

    /* Computed Parameter: LPFFcutoff40Hz_InitialStates
     * Referenced by: '<S249>/LPF Fcutoff = 40Hz'
     */
    0.0F,

    /* Computed Parameter: IIR_IMUgyro_r_NumCoef
     * Referenced by: '<S249>/IIR_IMUgyro_r'
     */
    { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
      0.282124132F },

    /* Computed Parameter: IIR_IMUgyro_r_DenCoef
     * Referenced by: '<S249>/IIR_IMUgyro_r'
     */
    { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

    /* Computed Parameter: IIR_IMUgyro_r_InitialStates
     * Referenced by: '<S249>/IIR_IMUgyro_r'
     */
    0.0F,

    /* Computed Parameter: Constant_Value_f
     * Referenced by: '<S315>/Constant'
     */
    0.0F,

    /* Computed Parameter: X0_Value_e
     * Referenced by: '<S437>/X0'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: C_Value_p
     * Referenced by: '<S437>/C'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Gain1_Gain
     * Referenced by: '<S435>/Gain1'
     */
    -1.0F,

    /* Computed Parameter: IIRgyroz_NumCoef
     * Referenced by: '<S436>/IIRgyroz'
     */
    { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
      0.282124132F },

    /* Computed Parameter: IIRgyroz_DenCoef
     * Referenced by: '<S436>/IIRgyroz'
     */
    { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

    /* Computed Parameter: IIRgyroz_InitialStates
     * Referenced by: '<S436>/IIRgyroz'
     */
    0.0F,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S444>/TSamp'
     */
    200.0F,

    /* Computed Parameter: Delay_InitialCondition
     * Referenced by: '<S432>/Delay'
     */
    0.0F,

    /* Computed Parameter: Delay1_InitialCondition
     * Referenced by: '<S6>/Delay1'
     */
    0.0F,

    /* Computed Parameter: B_Value_a
     * Referenced by: '<S437>/B'
     */
    { 0.005F, 0.0F, 0.0F, 0.0F, 0.0F, 0.005F, 0.0F, 0.0F },

    /* Computed Parameter: D_Value_k
     * Referenced by: '<S437>/D'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Integrator_gainval
     * Referenced by: '<S201>/Integrator'
     */
    0.005F,

    /* Computed Parameter: LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle
     * Referenced by: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
     */
    { 1.0F, 1.0F },

    /* Computed Parameter: LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_h
     * Referenced by: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
     */
    { 8.95774746F, -6.95774698F },

    /* Computed Parameter: LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_l
     * Referenced by: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
     */
    0.0F,

    /* Computed Parameter: Integrator_gainval_n
     * Referenced by: '<S100>/Integrator'
     */
    0.005F,

    /* Computed Parameter: Filter_gainval
     * Referenced by: '<S95>/Filter'
     */
    0.005F,

    /* Computed Parameter: w1_Value
     * Referenced by: '<S7>/w1'
     */
    -0.61803F,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval_h
     * Referenced by: '<S7>/Discrete-Time Integrator'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator_IC_m
     * Referenced by: '<S7>/Discrete-Time Integrator'
     */
    0.0F,

    /* Computed Parameter: DiscreteTimeIntegrator_UpperSat
     * Referenced by: '<S7>/Discrete-Time Integrator'
     */
    2.0F,

    /* Computed Parameter: DiscreteTimeIntegrator_LowerSat
     * Referenced by: '<S7>/Discrete-Time Integrator'
     */
    -2.0F,

    /* Computed Parameter: SaturationThrust1_UpperSat
     * Referenced by: '<S7>/SaturationThrust1'
     */
    1.20204329F,

    /* Computed Parameter: SaturationThrust1_LowerSat
     * Referenced by: '<S7>/SaturationThrust1'
     */
    -1.20204329F,

    /* Computed Parameter: Saturation_UpperSat
     * Referenced by: '<S11>/Saturation'
     */
    0.52359879F,

    /* Computed Parameter: Saturation_LowerSat
     * Referenced by: '<S11>/Saturation'
     */
    -0.52359879F,

    /* Computed Parameter: P_yaw_Gain
     * Referenced by: '<S11>/P_yaw'
     */
    0.004F,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval_f
     * Referenced by: '<S11>/Discrete-Time Integrator'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator_IC_p
     * Referenced by: '<S11>/Discrete-Time Integrator'
     */
    0.0F,

    /* Computed Parameter: D_yaw_Gain
     * Referenced by: '<S11>/D_yaw'
     */
    0.0012F,

    /* Computed Parameter: ThrustToMotorCommand_Gain
     * Referenced by: '<S12>/ThrustToMotorCommand'
     */
    -1530.72681F,

    /* Expression: Vehicle.Motor.maxLimit
     * Referenced by: '<S12>/Saturation5'
     */
    500.0F,

    /* Expression: Vehicle.Motor.minLimit
     * Referenced by: '<S12>/Saturation5'
     */
    10.0F,

    /* Computed Parameter: MotorDirections_Gain
     * Referenced by: '<S12>/MotorDirections'
     */
    { 1.0F, -1.0F, 1.0F, -1.0F },

    /* Computed Parameter: A_Value_h
     * Referenced by: '<S317>/A'
     */
    { 1.0F, 0.0F, -0.005F, 1.0F },

    /* Computed Parameter: A_Value_d
     * Referenced by: '<S371>/A'
     */
    { 1.0F, 0.0F, -0.005F, 1.0F },

    /* Computed Parameter: B_Value_n
     * Referenced by: '<S371>/B'
     */
    { 0.005F, 0.0F },

    /* Computed Parameter: D_Value_n
     * Referenced by: '<S371>/D'
     */
    0.0F,

    /* Computed Parameter: B_Value_j
     * Referenced by: '<S317>/B'
     */
    { 0.005F, 0.0F },

    /* Computed Parameter: D_Value_b
     * Referenced by: '<S317>/D'
     */
    0.0F,

    /* Computed Parameter: ZeroGain_Gain
     * Referenced by: '<S91>/ZeroGain'
     */
    0.0F,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S91>/Constant1'
     */
    0.0F,

    /* Computed Parameter: ZeroGain_Gain_i
     * Referenced by: '<S192>/ZeroGain'
     */
    0.0F,

    /* Computed Parameter: Constant1_Value_o
     * Referenced by: '<S192>/Constant1'
     */
    0.0F,

    /* Computed Parameter: I_yaw_Gain
     * Referenced by: '<S11>/I_yaw'
     */
    0.004F,

    /* Computed Parameter: I_pr_Gain
     * Referenced by: '<S7>/I_pr'
     */
    0.24F,

    /* Computed Parameter: Gain_Gain_f
     * Referenced by: '<S4>/Gain'
     */
    1.0F,

    /* Computed Parameter: Gain1_Gain_j
     * Referenced by: '<S4>/Gain1'
     */
    1.0F,

    /* Computed Parameter: P0_Value_l
     * Referenced by: '<S437>/P0'
     */
    { 1.42263806F, 0.0F, -0.462845951F, 0.0F, 0.0F, 1.42263806F, 0.0F,
      -0.462845951F, -0.462845951F, 0.0F, 6.15735F, 0.0F, 0.0F, -0.462845951F,
      0.0F, 6.15735F },

    /* Computed Parameter: G_Value_n
     * Referenced by: '<S437>/G'
     */
    { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F,
      0.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: Q_Value_b
     * Referenced by: '<S437>/Q'
     */
    { 0.09F, 0.0F, 0.0F, 0.0F, 0.0F, 0.09F, 0.0F, 0.0F, 0.0F, 0.0F, 0.01F, 0.0F,
      0.0F, 0.0F, 0.0F, 0.01F },

    /* Computed Parameter: H_Value_f
     * Referenced by: '<S437>/H'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: N_Value_e
     * Referenced by: '<S437>/N'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: P0_Value_j
     * Referenced by: '<S317>/P0'
     */
    { 1098.6875F, -30.4245777F, -30.4245777F, 7.22336864F },

    /* Computed Parameter: G_Value_i
     * Referenced by: '<S317>/G'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: Q_Value_f
     * Referenced by: '<S317>/Q'
     */
    { 1.0F, 0.0F, 0.0F, 0.001F },

    /* Computed Parameter: P0_Value_d
     * Referenced by: '<S371>/P0'
     */
    { 1098.6875F, -30.4245777F, -30.4245777F, 7.22336864F },

    /* Computed Parameter: G_Value_n5
     * Referenced by: '<S371>/G'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: Q_Value_c
     * Referenced by: '<S371>/Q'
     */
    { 1.0F, 0.0F, 0.0F, 0.001F },

    /* Computed Parameter: R_Value_f
     * Referenced by: '<S437>/R'
     */
    { 20.0F, 0.0F, 0.0F, 20.0F },

    /* Computed Parameter: H_Value_fr
     * Referenced by: '<S317>/H'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: N_Value_d
     * Referenced by: '<S317>/N'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: H_Value_j
     * Referenced by: '<S371>/H'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: N_Value_l
     * Referenced by: '<S371>/N'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: R_Value_ft
     * Referenced by: '<S317>/R'
     */
    924556.188F,

    /* Computed Parameter: R_Value_l
     * Referenced by: '<S371>/R'
     */
    924556.188F,

    /* Computed Parameter: Output_InitialCondition
     * Referenced by: '<S428>/Output'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_h
     * Referenced by: '<S510>/Output'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_e
     * Referenced by: '<S237>/Output'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_m
     * Referenced by: '<S225>/Output'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value
     * Referenced by: '<S232>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_d
     * Referenced by: '<S233>/Constant'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_a
     * Referenced by: '<S242>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_a
     * Referenced by: '<S243>/Constant'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_m
     * Referenced by: '<S511>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_i
     * Referenced by: '<S512>/Constant'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_f
     * Referenced by: '<S430>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_n
     * Referenced by: '<S431>/Constant'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_p
     * Referenced by: '<S14>/Output'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_o
     * Referenced by: '<S15>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_h
     * Referenced by: '<S16>/Constant'
     */
    0U,

    /* Computed Parameter: controlModePosVsOrient_Value
     * Referenced by: '<S1>/controlModePosVsOrient'
     */
    true,

    /* Expression: pInitialization.isSqrtUsed
     * Referenced by: '<S504>/isSqrtUsed'
     */
    false,

    /* Expression: pInitialization.isSqrtUsed
     * Referenced by: '<S301>/isSqrtUsed'
     */
    false,

    /* Expression: pInitialization.isSqrtUsed
     * Referenced by: '<S366>/isSqrtUsed'
     */
    false,

    /* Expression: pInitialization.isSqrtUsed
     * Referenced by: '<S420>/isSqrtUsed'
     */
    false,

    /* Computed Parameter: Landed_Value
     * Referenced by: '<S228>/Landed'
     */
    255U,

    /* Computed Parameter: No_error_Value
     * Referenced by: '<S228>/No_error'
     */
    0U,

    /* Computed Parameter: Out1_Y0_e
     * Referenced by: '<S246>/Out1'
     */
    0U,

    /* Computed Parameter: Disabletemperaturecompensation_CurrentSetting
     * Referenced by: '<S425>/Disable temperature compensation'
     */
    1U,

    /* Computed Parameter: ManualSwitch_CurrentSetting
     * Referenced by: '<S9>/Manual Switch'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S4>/Merge'
     */
    0U,

    /* Start of '<S398>/Enabled Subsystem' */
    {
      /* Computed Parameter: deltax_Y0
       * Referenced by: '<S424>/deltax'
       */
      0.0F
    }
    ,

    /* End of '<S398>/Enabled Subsystem' */

    /* Start of '<S391>/MeasurementUpdate' */
    {
      /* Computed Parameter: Lykyhatkk1_Y0
       * Referenced by: '<S422>/L*(y[k]-yhat[k|k-1])'
       */
      0.0F
    }
    ,

    /* End of '<S391>/MeasurementUpdate' */

    /* Start of '<S344>/Enabled Subsystem' */
    {
      /* Computed Parameter: deltax_Y0
       * Referenced by: '<S370>/deltax'
       */
      0.0F
    }
    ,

    /* End of '<S344>/Enabled Subsystem' */

    /* Start of '<S337>/MeasurementUpdate' */
    {
      /* Computed Parameter: Lykyhatkk1_Y0
       * Referenced by: '<S368>/L*(y[k]-yhat[k|k-1])'
       */
      0.0F
    }
    ,

    /* End of '<S337>/MeasurementUpdate' */

    /* Start of '<S4>/Ultrasound improper' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S230>/Constant'
       */
      88U
    }
    ,

    /* End of '<S4>/Ultrasound improper' */

    /* Start of '<S4>/No optical flow ' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S227>/Constant'
       */
      69U
    }
    ,

    /* End of '<S4>/No optical flow ' */

    /* Start of '<S4>/estimator//Optical flow error' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S231>/Constant'
       */
      99U
    }
    ,

    /* End of '<S4>/estimator//Optical flow error' */

    /* Start of '<S4>/Geofencing error' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S226>/Constant'
       */
      1U
    }
    /* End of '<S4>/Geofencing error' */
  }
  /* End of '<Root>/Flight Control System' */
};

MdlrefDW_flightControlSystem_T flightControlSystem_MdlrefDW;

/* Block signals (default storage) */
B_flightControlSystem_c_T flightControlSystem_B;

/* Block states (default storage) */
DW_flightControlSystem_f_T flightControlSystem_DW;

/* Previous zero-crossings (trigger) states */
ZCE_flightControlSystem_T flightControlSystem_PrevZCX;

/* Forward declaration for local functions */
static real_T flightControlSystem_norm(const real_T x[3],
  B_FlightControlSystem_flightControlSystem_T *localB);

/*
 * Output and update for action system:
 *    '<S4>/Geofencing error'
 *    '<S4>/estimator//Optical flow error'
 *    '<S4>/No optical flow '
 *    '<S4>/Ultrasound improper'
 */
void flightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_flightControlSystem_T *localP)
{
  /* SignalConversion generated from: '<S226>/Out1' incorporates:
   *  Constant: '<S226>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/*
 * Output and update for atomic system:
 *    '<S366>/SqrtUsedFcn'
 *    '<S420>/SqrtUsedFcn'
 */
void flightControlSystem_SqrtUsedFcn(const real32_T rtu_u[4], boolean_T
  rtu_isSqrtUsed)
{
  /* local block i/o variables */
  real32_T rtb_P_b[4];
  int32_T i;
  real32_T rtb_P_b_tmp;
  if (rtu_isSqrtUsed) {
    for (i = 0; i < 2; i++) {
      rtb_P_b_tmp = rtu_u[i + 2];
      rtb_P_b[i] = rtb_P_b_tmp * rtu_u[2] + rtu_u[i] * rtu_u[0];
      rtb_P_b[i + 2] = rtb_P_b_tmp * rtu_u[3] + rtu_u[i] * rtu_u[1];
    }
  } else {
    for (i = 0; i < 2; i++) {
      rtb_P_b[i] = rtu_u[i];
      rtb_P_b[i + 2] = rtu_u[i + 2];
    }
  }
}

/*
 * System initialize for enable system:
 *    '<S337>/MeasurementUpdate'
 *    '<S391>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate_Init
  (B_MeasurementUpdate_flightControlSystem_T *localB,
   P_MeasurementUpdate_flightControlSystem_T *localP)
{
  /* SystemInitialize for Product: '<S368>/Product3' incorporates:
   *  Outport: '<S368>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S337>/MeasurementUpdate'
 *    '<S391>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate_Disable
  (B_MeasurementUpdate_flightControlSystem_T *localB,
   DW_MeasurementUpdate_flightControlSystem_T *localDW,
   P_MeasurementUpdate_flightControlSystem_T *localP)
{
  /* Disable for Product: '<S368>/Product3' incorporates:
   *  Outport: '<S368>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Start for enable system:
 *    '<S337>/MeasurementUpdate'
 *    '<S391>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate_Start
  (DW_MeasurementUpdate_flightControlSystem_T *localDW)
{
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S337>/MeasurementUpdate'
 *    '<S391>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate(boolean_T rtu_Enable, const real32_T
  rtu_Lk[2], real32_T rtu_yk, const real32_T rtu_Ck[2], const real32_T
  rtu_xhatkk1[2], real32_T rtu_Dk, real32_T rtu_uk,
  B_MeasurementUpdate_flightControlSystem_T *localB,
  DW_MeasurementUpdate_flightControlSystem_T *localDW,
  P_MeasurementUpdate_flightControlSystem_T *localP)
{
  real32_T rtb_Sum;

  /* Outputs for Enabled SubSystem: '<S337>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S368>/Enable'
   */
  if (rtu_Enable) {
    localDW->MeasurementUpdate_MODE = true;

    /* Sum: '<S368>/Sum' incorporates:
     *  Product: '<S368>/C[k]*xhat[k|k-1]'
     *  Product: '<S368>/D[k]*u[k]'
     *  Sum: '<S368>/Add1'
     */
    rtb_Sum = rtu_yk - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[1] * rtu_xhatkk1[1])
                        + rtu_Dk * rtu_uk);

    /* Product: '<S368>/Product3' */
    localB->Product3[0] = rtu_Lk[0] * rtb_Sum;
    localB->Product3[1] = rtu_Lk[1] * rtb_Sum;
  } else if (localDW->MeasurementUpdate_MODE) {
    flightControlSystem_MeasurementUpdate_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S337>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S344>/Enabled Subsystem'
 *    '<S398>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem_Init
  (B_EnabledSubsystem_flightControlSystem_T *localB,
   P_EnabledSubsystem_flightControlSystem_T *localP)
{
  /* SystemInitialize for Product: '<S370>/Product2' incorporates:
   *  Outport: '<S370>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
}

/*
 * Disable for enable system:
 *    '<S344>/Enabled Subsystem'
 *    '<S398>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem_Disable
  (B_EnabledSubsystem_flightControlSystem_T *localB,
   DW_EnabledSubsystem_flightControlSystem_T *localDW,
   P_EnabledSubsystem_flightControlSystem_T *localP)
{
  /* Disable for Product: '<S370>/Product2' incorporates:
   *  Outport: '<S370>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S344>/Enabled Subsystem'
 *    '<S398>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem_Start
  (DW_EnabledSubsystem_flightControlSystem_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S344>/Enabled Subsystem'
 *    '<S398>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[2], const real32_T rtu_Ck[2], real32_T rtu_yk, const real32_T
  rtu_xhatkk1[2], B_EnabledSubsystem_flightControlSystem_T *localB,
  DW_EnabledSubsystem_flightControlSystem_T *localDW,
  P_EnabledSubsystem_flightControlSystem_T *localP)
{
  real32_T rtb_Add1;

  /* Outputs for Enabled SubSystem: '<S344>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S370>/Enable'
   */
  if (rtu_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S370>/Add1' incorporates:
     *  Product: '<S370>/Product'
     */
    rtb_Add1 = rtu_yk - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[1] * rtu_xhatkk1[1]);

    /* Product: '<S370>/Product2' */
    localB->Product2[0] = rtu_Mk[0] * rtb_Add1;
    localB->Product2[1] = rtu_Mk[1] * rtb_Add1;
  } else if (localDW->EnabledSubsystem_MODE) {
    flightControlSystem_EnabledSubsystem_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S344>/Enabled Subsystem' */
}

static real_T flightControlSystem_norm(const real_T x[3],
  B_FlightControlSystem_flightControlSystem_T *localB)
{
  real_T y;
  localB->scale = 3.3121686421112381E-170;
  localB->absxk = fabs(x[0]);
  if (localB->absxk > 3.3121686421112381E-170) {
    y = 1.0;
    localB->scale = localB->absxk;
  } else {
    localB->t = localB->absxk / 3.3121686421112381E-170;
    y = localB->t * localB->t;
  }

  localB->absxk = fabs(x[1]);
  if (localB->absxk > localB->scale) {
    localB->t = localB->scale / localB->absxk;
    y = y * localB->t * localB->t + 1.0;
    localB->scale = localB->absxk;
  } else {
    localB->t = localB->absxk / localB->scale;
    y += localB->t * localB->t;
  }

  localB->absxk = fabs(x[2]);
  if (localB->absxk > localB->scale) {
    localB->t = localB->scale / localB->absxk;
    y = y * localB->t * localB->t + 1.0;
    localB->scale = localB->absxk;
  } else {
    localB->t = localB->absxk / localB->scale;
    y += localB->t * localB->t;
  }

  return localB->scale * sqrt(y);
}

/* System initialize for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Init
  (B_FlightControlSystem_flightControlSystem_T *localB,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP,
   ZCE_FlightControlSystem_flightControlSystem_T *localZCE)
{
  int32_T i;

  /* InitializeConditions for DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_DSTATE[1] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Reshape: '<S251>/Reshapexhat' incorporates:
   *  Delay: '<S247>/Delay2'
   */
  localDW->Delay2_DSTATE = localP->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S251>/MemoryX' */
  localDW->icLoad = true;

  /* InitializeConditions for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteIntegrator: '<S315>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for Delay: '<S317>/MemoryX' */
  localDW->icLoad_a = true;

  /* InitializeConditions for DiscreteFir: '<S249>/FIR_IMUaccel' */
  localDW->FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    localDW->FIR_IMUaccel_states[i] = localP->FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S249>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S371>/MemoryX' */
  localDW->icLoad_n = true;

  /* InitializeConditions for DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localP->LPFFcutoff40Hz1_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localP->LPFFcutoff40Hz_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S249>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    localDW->IIR_IMUgyro_r_states[i] = localP->IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S249>/IIR_IMUgyro_r' */

  /* InitializeConditions for Sum: '<S430>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S428>/Output'
   */
  localDW->Output_DSTATE = localP->Output_InitialCondition;

  /* InitializeConditions for Delay: '<S437>/MemoryX' */
  localDW->icLoad_k = true;

  /* InitializeConditions for Sum: '<S511>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S510>/Output'
   */
  localDW->Output_DSTATE_i = localP->Output_InitialCondition_h;

  /* InitializeConditions for DiscreteFilter: '<S436>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    localDW->IIRgyroz_states[i] = localP->IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S436>/IIRgyroz' */

  /* InitializeConditions for Sum: '<S242>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S237>/Output'
   */
  localDW->Output_DSTATE_e = localP->Output_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S444>/UD' incorporates:
   *  Sum: '<S444>/Diff'
   */
  localDW->UD_DSTATE[0] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S432>/Delay' */
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[0] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S201>/Integrator' */
  localDW->Integrator_DSTATE[0] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_l;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  localDW->Integrator_DSTATE_h[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
  localDW->Filter_DSTATE[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* InitializeConditions for UnitDelay: '<S444>/UD' incorporates:
   *  Sum: '<S444>/Diff'
   */
  localDW->UD_DSTATE[1] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S432>/Delay' */
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[1] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S201>/Integrator' */
  localDW->Integrator_DSTATE[1] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_l;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  localDW->Integrator_DSTATE_h[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
  localDW->Filter_DSTATE[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* InitializeConditions for Sum: '<S15>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_f = localP->Output_InitialCondition_p;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_e = localP->DiscreteTimeIntegrator_IC_m;
  localDW->DiscreteTimeIntegrator_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_i = localP->DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for Sum: '<S232>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S225>/Output'
   */
  localDW->Output_DSTATE_ir = localP->Output_InitialCondition_m;

  /* InitializeConditions for Sum: '<S229>/Add' incorporates:
   *  Delay: '<S229>/Delay One Step'
   */
  localDW->DelayOneStep_DSTATE = localP->DelayOneStep_InitialCondition;

  /* SystemInitialize for Merge: '<S4>/Merge' */
  localB->Merge = localP->Merge_InitialOutput;

  /* SystemInitialize for Triggered SubSystem: '<S239>/Triggered Subsystem' */
  /* SystemInitialize for SignalConversion generated from: '<S245>/X' incorporates:
   *  Outport: '<S245>/X'
   */
  localB->BufferToMakeInportVirtual_InsertedFor_X_at_inport_0 = localP->X_Y0;

  /* SystemInitialize for SignalConversion generated from: '<S245>/Y' incorporates:
   *  Outport: '<S245>/Y'
   */
  localB->BufferToMakeInportVirtual_InsertedFor_Y_at_inport_0 = localP->Y_Y0;
  localZCE->TriggeredSubsystem_Trig_ZCE_p = ZERO_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S239>/Triggered Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S5>/Waypoint follower' */
  /* SystemInitialize for Triggered SubSystem: '<S241>/Latch the status' */
  /* SystemInitialize for Outport: '<S246>/Out1' incorporates:
   *  Inport: '<S246>/In1'
   */
  localB->In1_f = localP->Out1_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S241>/Latch the status' */

  /* InitializeConditions for MATLABSystem: '<S241>/UAV Waypoint Follower' */
  localDW->obj.WaypointIndex = 1.0;
  for (i = 0; i < 27; i++) {
    localDW->obj.WaypointsInternal[i] = (rtNaN);
  }

  /* End of InitializeConditions for MATLABSystem: '<S241>/UAV Waypoint Follower' */

  /* SystemInitialize for DataTypeConversion: '<S241>/Data Type  Conversion' incorporates:
   *  Outport: '<S241>/To controller'
   */
  localB->DataTypeConversion[0] = localP->Tocontroller_Y0;
  localB->DataTypeConversion[1] = localP->Tocontroller_Y0;
  localB->DataTypeConversion[2] = localP->Tocontroller_Y0;

  /* End of SystemInitialize for SubSystem: '<S5>/Waypoint follower' */

  /* SystemInitialize for Enabled SubSystem: '<S273>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S303>/Product3' incorporates:
   *  Outport: '<S303>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S273>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S279>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S305>/Product2' incorporates:
   *  Outport: '<S305>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S279>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S273>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S303>/Product3' incorporates:
   *  Outport: '<S303>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[1] = localP->Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S273>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S279>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S305>/Product2' incorporates:
   *  Outport: '<S305>/deltax'
   */
  localB->Product2[1] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S279>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S337>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Init(&localB->MeasurementUpdate_o,
    &localP->MeasurementUpdate_o);

  /* End of SystemInitialize for SubSystem: '<S337>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S344>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Init(&localB->EnabledSubsystem_k,
    &localP->EnabledSubsystem_k);

  /* End of SystemInitialize for SubSystem: '<S344>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S391>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Init(&localB->MeasurementUpdate_n,
    &localP->MeasurementUpdate_n);

  /* End of SystemInitialize for SubSystem: '<S391>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S398>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Init(&localB->EnabledSubsystem_j,
    &localP->EnabledSubsystem_j);

  /* End of SystemInitialize for SubSystem: '<S398>/Enabled Subsystem' */

  /* SystemInitialize for Triggered SubSystem: '<S425>/Triggered Subsystem' */
  /* SystemInitialize for Outport: '<S429>/Out1' incorporates:
   *  Inport: '<S429>/In1'
   */
  localB->In1 = localP->Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S425>/Triggered Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S475>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S506>/Product3' incorporates:
   *  Outport: '<S506>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_o[0] = localP->Lykyhatkk1_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S475>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S482>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S508>/Product2' incorporates:
   *  Outport: '<S508>/deltax'
   */
  localB->Product2_f[0] = localP->deltax_Y0_o;

  /* End of SystemInitialize for SubSystem: '<S482>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S475>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S506>/Product3' incorporates:
   *  Outport: '<S506>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_o[1] = localP->Lykyhatkk1_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S475>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S482>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S508>/Product2' incorporates:
   *  Outport: '<S508>/deltax'
   */
  localB->Product2_f[1] = localP->deltax_Y0_o;

  /* End of SystemInitialize for SubSystem: '<S482>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S475>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S506>/Product3' incorporates:
   *  Outport: '<S506>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_o[2] = localP->Lykyhatkk1_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S475>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S482>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S508>/Product2' incorporates:
   *  Outport: '<S508>/deltax'
   */
  localB->Product2_f[2] = localP->deltax_Y0_o;

  /* End of SystemInitialize for SubSystem: '<S482>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S475>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S506>/Product3' incorporates:
   *  Outport: '<S506>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_o[3] = localP->Lykyhatkk1_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S475>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S482>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S508>/Product2' incorporates:
   *  Outport: '<S508>/deltax'
   */
  localB->Product2_f[3] = localP->deltax_Y0_o;

  /* End of SystemInitialize for SubSystem: '<S482>/Enabled Subsystem' */
}

/* System reset for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Reset
  (DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP,
   ZCE_FlightControlSystem_flightControlSystem_T *localZCE)
{
  int32_T i;

  /* InitializeConditions for DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_DSTATE[1] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Reshape: '<S251>/Reshapexhat' incorporates:
   *  Delay: '<S247>/Delay2'
   */
  localDW->Delay2_DSTATE = localP->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S251>/MemoryX' */
  localDW->icLoad = true;

  /* InitializeConditions for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteIntegrator: '<S315>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for Delay: '<S317>/MemoryX' */
  localDW->icLoad_a = true;

  /* InitializeConditions for DiscreteFir: '<S249>/FIR_IMUaccel' */
  localDW->FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    localDW->FIR_IMUaccel_states[i] = localP->FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S249>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S371>/MemoryX' */
  localDW->icLoad_n = true;

  /* InitializeConditions for DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localP->LPFFcutoff40Hz1_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localP->LPFFcutoff40Hz_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S249>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    localDW->IIR_IMUgyro_r_states[i] = localP->IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S249>/IIR_IMUgyro_r' */

  /* InitializeConditions for Sum: '<S430>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S428>/Output'
   */
  localDW->Output_DSTATE = localP->Output_InitialCondition;

  /* InitializeConditions for Delay: '<S437>/MemoryX' */
  localDW->icLoad_k = true;

  /* InitializeConditions for Sum: '<S511>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S510>/Output'
   */
  localDW->Output_DSTATE_i = localP->Output_InitialCondition_h;

  /* InitializeConditions for DiscreteFilter: '<S436>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    localDW->IIRgyroz_states[i] = localP->IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S436>/IIRgyroz' */

  /* InitializeConditions for Sum: '<S242>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S237>/Output'
   */
  localDW->Output_DSTATE_e = localP->Output_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S444>/UD' incorporates:
   *  Sum: '<S444>/Diff'
   */
  localDW->UD_DSTATE[0] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S432>/Delay' */
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[0] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S201>/Integrator' */
  localDW->Integrator_DSTATE[0] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_l;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  localDW->Integrator_DSTATE_h[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
  localDW->Filter_DSTATE[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* InitializeConditions for UnitDelay: '<S444>/UD' incorporates:
   *  Sum: '<S444>/Diff'
   */
  localDW->UD_DSTATE[1] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S432>/Delay' */
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[1] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S201>/Integrator' */
  localDW->Integrator_DSTATE[1] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_l;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  localDW->Integrator_DSTATE_h[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
  localDW->Filter_DSTATE[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* InitializeConditions for Sum: '<S15>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_f = localP->Output_InitialCondition_p;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_e = localP->DiscreteTimeIntegrator_IC_m;
  localDW->DiscreteTimeIntegrator_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_i = localP->DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for Sum: '<S232>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S225>/Output'
   */
  localDW->Output_DSTATE_ir = localP->Output_InitialCondition_m;

  /* InitializeConditions for Sum: '<S229>/Add' incorporates:
   *  Delay: '<S229>/Delay One Step'
   */
  localDW->DelayOneStep_DSTATE = localP->DelayOneStep_InitialCondition;

  /* SystemReset for Triggered SubSystem: '<S239>/Triggered Subsystem' */
  localZCE->TriggeredSubsystem_Trig_ZCE_p = ZERO_ZCSIG;

  /* End of SystemReset for SubSystem: '<S239>/Triggered Subsystem' */
}

/* Disable for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Disable
  (B_FlightControlSystem_flightControlSystem_T *localB,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP)
{
  /* Disable for Enabled SubSystem: '<S279>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_MODE_g) {
    /* Disable for Product: '<S305>/Product2' incorporates:
     *  Outport: '<S305>/deltax'
     */
    localB->Product2[0] = localP->deltax_Y0;
    localB->Product2[1] = localP->deltax_Y0;
    localDW->EnabledSubsystem_MODE_g = false;
  }

  /* End of Disable for SubSystem: '<S279>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S344>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_k.EnabledSubsystem_MODE) {
    flightControlSystem_EnabledSubsystem_Disable(&localB->EnabledSubsystem_k,
      &localDW->EnabledSubsystem_k, &localP->EnabledSubsystem_k);
  }

  /* End of Disable for SubSystem: '<S344>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S398>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_j.EnabledSubsystem_MODE) {
    flightControlSystem_EnabledSubsystem_Disable(&localB->EnabledSubsystem_j,
      &localDW->EnabledSubsystem_j, &localP->EnabledSubsystem_j);
  }

  /* End of Disable for SubSystem: '<S398>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S482>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_MODE) {
    /* Disable for Product: '<S508>/Product2' incorporates:
     *  Outport: '<S508>/deltax'
     */
    localB->Product2_f[0] = localP->deltax_Y0_o;
    localB->Product2_f[1] = localP->deltax_Y0_o;
    localB->Product2_f[2] = localP->deltax_Y0_o;
    localB->Product2_f[3] = localP->deltax_Y0_o;
    localDW->EnabledSubsystem_MODE = false;
  }

  /* End of Disable for SubSystem: '<S482>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S475>/MeasurementUpdate' */
  if (localDW->MeasurementUpdate_MODE) {
    /* Disable for Product: '<S506>/Product3' incorporates:
     *  Outport: '<S506>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3_o[0] = localP->Lykyhatkk1_Y0_e;
    localB->Product3_o[1] = localP->Lykyhatkk1_Y0_e;
    localB->Product3_o[2] = localP->Lykyhatkk1_Y0_e;
    localB->Product3_o[3] = localP->Lykyhatkk1_Y0_e;
    localDW->MeasurementUpdate_MODE = false;
  }

  /* End of Disable for SubSystem: '<S475>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S391>/MeasurementUpdate' */
  if (localDW->MeasurementUpdate_n.MeasurementUpdate_MODE) {
    flightControlSystem_MeasurementUpdate_Disable(&localB->MeasurementUpdate_n,
      &localDW->MeasurementUpdate_n, &localP->MeasurementUpdate_n);
  }

  /* End of Disable for SubSystem: '<S391>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S337>/MeasurementUpdate' */
  if (localDW->MeasurementUpdate_o.MeasurementUpdate_MODE) {
    flightControlSystem_MeasurementUpdate_Disable(&localB->MeasurementUpdate_o,
      &localDW->MeasurementUpdate_o, &localP->MeasurementUpdate_o);
  }

  /* End of Disable for SubSystem: '<S337>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S273>/MeasurementUpdate' */
  if (localDW->MeasurementUpdate_MODE_p) {
    /* Disable for Product: '<S303>/Product3' incorporates:
     *  Outport: '<S303>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3[0] = localP->Lykyhatkk1_Y0;
    localB->Product3[1] = localP->Lykyhatkk1_Y0;
    localDW->MeasurementUpdate_MODE_p = false;
  }

  /* End of Disable for SubSystem: '<S273>/MeasurementUpdate' */
}

/* Start for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Start
  (DW_FlightControlSystem_flightControlSystem_T *localDW)
{
  int32_T i;

  /* Start for Enabled SubSystem: '<S279>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE_g = false;

  /* End of Start for SubSystem: '<S279>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S344>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Start(&localDW->EnabledSubsystem_k);

  /* End of Start for SubSystem: '<S344>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S398>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Start(&localDW->EnabledSubsystem_j);

  /* End of Start for SubSystem: '<S398>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S482>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S482>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S475>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE = false;

  /* End of Start for SubSystem: '<S475>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S5>/Waypoint follower' */
  /* Start for MATLABSystem: '<S241>/UAV Waypoint Follower' */
  localDW->obj.LastWaypointFlag = false;
  localDW->obj.StartFlag = true;
  localDW->obj.LookaheadFactor = 1.01;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  for (i = 0; i < 27; i++) {
    localDW->obj.WaypointsInternal[i] = (rtNaN);
  }

  /* End of Start for MATLABSystem: '<S241>/UAV Waypoint Follower' */
  /* End of Start for SubSystem: '<S5>/Waypoint follower' */

  /* Start for Enabled SubSystem: '<S391>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Start(&localDW->MeasurementUpdate_n);

  /* End of Start for SubSystem: '<S391>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S337>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Start(&localDW->MeasurementUpdate_o);

  /* End of Start for SubSystem: '<S337>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S273>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE_p = false;

  /* End of Start for SubSystem: '<S273>/MeasurementUpdate' */
}

/* Output and update for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem(const CommandBus
  *rtu_ReferenceValueServerCmds, const SensorsBus *rtu_Sensors,
  B_FlightControlSystem_flightControlSystem_T *localB,
  DW_FlightControlSystem_flightControlSystem_T *localDW,
  P_FlightControlSystem_flightControlSystem_T *localP,
  ZCE_FlightControlSystem_flightControlSystem_T *localZCE)
{
  /* local block i/o variables */
  real32_T rtb_Reshapey_i;
  real32_T rtb_Reshapey_k;
  real32_T rtb_Reshapeu_m;
  real32_T rtb_Reshapeu_e;
  uint8_T rtb_UAVWaypointFollower_o4;
  boolean_T rtb_DataTypeConversionEnable_k;
  boolean_T rtb_DataTypeConversionEnable_c;
  boolean_T rtb_Compare_lg;
  real32_T rtb_MathFunction_tmp;
  real32_T rtb_MathFunction_tmp_0;
  uint8_T status;
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T p;
  boolean_T rtb_Compare_cm;
  boolean_T rtb_Compare_hk;

  /* DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  if (localP->controlModePosVsOrient_Value &&
      (localDW->SimplyIntegrateVelocity_PrevResetState <= 0)) {
    localDW->SimplyIntegrateVelocity_DSTATE[0] =
      localP->SimplyIntegrateVelocity_IC;
    localDW->SimplyIntegrateVelocity_DSTATE[1] =
      localP->SimplyIntegrateVelocity_IC;
  }

  /* RelationalOperator: '<S254>/Compare' incorporates:
   *  Constant: '<S254>/Constant'
   *  Delay: '<S247>/Delay2'
   */
  localB->Compare = (localDW->Delay2_DSTATE > localP->outlierBelowFloor_const);

  /* Delay: '<S251>/MemoryX' incorporates:
   *  Constant: '<S251>/X0'
   *  DataTypeConversion: '<S251>/DataTypeConversionReset'
   *  Reshape: '<S251>/ReshapeX0'
   */
  localDW->icLoad = (localB->Compare || localDW->icLoad);
  if (localDW->icLoad) {
    localDW->MemoryX_DSTATE[0] = localP->X0_Value[0];
    localDW->MemoryX_DSTATE[1] = localP->X0_Value[1];
  }

  /* Gain: '<S247>/invertzaxisGain' */
  localB->invertzaxisGain = (real_T)localP->invertzaxisGain_Gain *
    rtu_Sensors->HALSensors.HAL_ultrasound_SI.altitude;

  /* DiscreteFilter: '<S252>/pressureFilter_IIR' incorporates:
   *  DataTypeConversion: '<S249>/Data Type Conversion'
   *  Gain: '<S247>/prsToAltGain'
   *  Sum: '<S249>/Sum2'
   */
  localDW->pressureFilter_IIR_tmp =
    ((((rtu_Sensors->HALSensors.HAL_pressure_SI.pressure -
        rtu_Sensors->SensorCalibration[6]) * localP->prsToAltGain_Gain -
       localDW->pressureFilter_IIR_states[0] *
       localP->pressureFilter_IIR_DenCoef[1]) -
      localDW->pressureFilter_IIR_states[1] * localP->
      pressureFilter_IIR_DenCoef[2]) - localDW->pressureFilter_IIR_states[2] *
     localP->pressureFilter_IIR_DenCoef[3]) / localP->
    pressureFilter_IIR_DenCoef[0];
  localB->numAccum = ((localP->pressureFilter_IIR_NumCoef[0] *
                       localDW->pressureFilter_IIR_tmp +
                       localDW->pressureFilter_IIR_states[0] *
                       localP->pressureFilter_IIR_NumCoef[1]) +
                      localDW->pressureFilter_IIR_states[1] *
                      localP->pressureFilter_IIR_NumCoef[2]) +
    localDW->pressureFilter_IIR_states[2] * localP->pressureFilter_IIR_NumCoef[3];

  /* DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_tmp = (((localB->invertzaxisGain -
    localDW->sonarFilter_IIR_states[0] * localP->sonarFilter_IIR_DenCoef[1]) -
    localDW->sonarFilter_IIR_states[1] * localP->sonarFilter_IIR_DenCoef[2]) -
    localDW->sonarFilter_IIR_states[2] * localP->sonarFilter_IIR_DenCoef[3]) /
    localP->sonarFilter_IIR_DenCoef[0];

  /* Saturate: '<S252>/SaturationSonar' */
  if (localB->invertzaxisGain > -rtP_Sensors.altSensorMin) {
    localB->b_c = -rtP_Sensors.altSensorMin;
  } else if (localB->invertzaxisGain < localP->SaturationSonar_LowerSat) {
    localB->b_c = localP->SaturationSonar_LowerSat;
  } else {
    localB->b_c = localB->invertzaxisGain;
  }

  /* End of Saturate: '<S252>/SaturationSonar' */

  /* Logic: '<S252>/nicemeasurementor newupdateneeded' incorporates:
   *  Abs: '<S252>/Absestdiff'
   *  Abs: '<S252>/Absestdiff1'
   *  Abs: '<S252>/Absestdiff2'
   *  Constant: '<S306>/Constant'
   *  Constant: '<S307>/Constant'
   *  Constant: '<S308>/Constant'
   *  Constant: '<S309>/Constant'
   *  Delay: '<S247>/Delay2'
   *  DiscreteFilter: '<S252>/pressureFilter_IIR'
   *  DiscreteFilter: '<S252>/sonarFilter_IIR'
   *  Logic: '<S252>/NOT'
   *  Logic: '<S252>/findingoutliers'
   *  Logic: '<S252>/newupdateneeded'
   *  RelationalOperator: '<S306>/Compare'
   *  RelationalOperator: '<S307>/Compare'
   *  RelationalOperator: '<S308>/Compare'
   *  RelationalOperator: '<S309>/Compare'
   *  Sum: '<S252>/Add'
   *  Sum: '<S252>/Add1'
   *  Sum: '<S252>/Add2'
   */
  localB->nicemeasurementornewupdateneeded = ((fabs(localDW->Delay2_DSTATE -
    localB->b_c) <= localP->outlierJump_const) && (localB->invertzaxisGain <
    -rtP_Sensors.altSensorMin) && ((!(fabs(localB->numAccum -
    localDW->Delay2_DSTATE) >= localP->currentEstimateVeryOffFromPressure_const))
    || (!(fabs((((localP->sonarFilter_IIR_NumCoef[0] *
                  localDW->sonarFilter_IIR_tmp + localDW->
                  sonarFilter_IIR_states[0] * localP->sonarFilter_IIR_NumCoef[1])
                 + localDW->sonarFilter_IIR_states[1] *
                 localP->sonarFilter_IIR_NumCoef[2]) +
                localDW->sonarFilter_IIR_states[2] *
                localP->sonarFilter_IIR_NumCoef[3]) - localDW->Delay2_DSTATE) >=
          localP->currentStateVeryOffsonarflt_const))));

  /* Outputs for Enabled SubSystem: '<S279>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S305>/Enable'
   */
  /* DataTypeConversion: '<S251>/DataTypeConversionEnable' */
  if (localB->nicemeasurementornewupdateneeded) {
    localDW->EnabledSubsystem_MODE_g = true;

    /* Sum: '<S305>/Add1' incorporates:
     *  Constant: '<S251>/C'
     *  Delay: '<S251>/MemoryX'
     *  Product: '<S305>/Product'
     *  Reshape: '<S251>/Reshapey'
     */
    localB->Switch1 = localB->invertzaxisGain - (localP->C_Value[0] *
      localDW->MemoryX_DSTATE[0] + localP->C_Value[1] * localDW->MemoryX_DSTATE
      [1]);

    /* Product: '<S305>/Product2' incorporates:
     *  Constant: '<S255>/KalmanGainM'
     *  DataTypeConversion: '<S296>/Conversion'
     */
    localB->Product2[0] = localP->KalmanGainM_Value[0] * localB->Switch1;
    localB->Product2[1] = localP->KalmanGainM_Value[1] * localB->Switch1;
  } else if (localDW->EnabledSubsystem_MODE_g) {
    /* Disable for Product: '<S305>/Product2' incorporates:
     *  Outport: '<S305>/deltax'
     */
    localB->Product2[0] = localP->deltax_Y0;
    localB->Product2[1] = localP->deltax_Y0;
    localDW->EnabledSubsystem_MODE_g = false;
  }

  /* End of Outputs for SubSystem: '<S279>/Enabled Subsystem' */

  /* Reshape: '<S251>/Reshapexhat' incorporates:
   *  Delay: '<S251>/MemoryX'
   *  Sum: '<S279>/Add'
   */
  localDW->Delay2_DSTATE = localB->Product2[0] + localDW->MemoryX_DSTATE[0];

  /* Sum: '<S279>/Add' incorporates:
   *  Delay: '<S251>/MemoryX'
   */
  localB->Switch1 = localB->Product2[1] + localDW->MemoryX_DSTATE[1];

  /* Delay: '<S317>/MemoryX' incorporates:
   *  Constant: '<S317>/X0'
   *  Reshape: '<S317>/ReshapeX0'
   */
  if (localDW->icLoad_a) {
    localDW->MemoryX_DSTATE_l[0] = localP->X0_Value_f[0];
    localDW->MemoryX_DSTATE_l[1] = localP->X0_Value_f[1];
  }

  /* Delay: '<S317>/MemoryX' */
  localB->MemoryX_b[0] = localDW->MemoryX_DSTATE_l[0];
  localB->MemoryX_b[1] = localDW->MemoryX_DSTATE_l[1];

  /* Bias: '<S249>/Assuming that the  preflight calibration was done at level orientation' incorporates:
   *  DataTypeConversion: '<S249>/Data Type Conversion'
   */
  for (localB->i = 0; localB->i < 6; localB->i++) {
    localB->Sum1_c[localB->i] = rtu_Sensors->SensorCalibration[localB->i] +
      localP->
      Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bi[localB->i];
  }

  /* End of Bias: '<S249>/Assuming that the  preflight calibration was done at level orientation' */

  /* Gain: '<S249>/inverseIMU_gain' incorporates:
   *  Sum: '<S249>/Sum1'
   */
  localB->inverseIMU_gain[0] = (rtu_Sensors->HALSensors.HAL_acc_SI.x -
    localB->Sum1_c[0]) * localP->inverseIMU_gain_Gain[0];
  localB->inverseIMU_gain[1] = (rtu_Sensors->HALSensors.HAL_acc_SI.y -
    localB->Sum1_c[1]) * localP->inverseIMU_gain_Gain[1];
  localB->inverseIMU_gain[2] = (rtu_Sensors->HALSensors.HAL_acc_SI.z -
    localB->Sum1_c[2]) * localP->inverseIMU_gain_Gain[2];
  localB->inverseIMU_gain[3] = (rtu_Sensors->HALSensors.HAL_gyro_SI.x -
    localB->Sum1_c[3]) * localP->inverseIMU_gain_Gain[3];
  localB->inverseIMU_gain[4] = (rtu_Sensors->HALSensors.HAL_gyro_SI.y -
    localB->Sum1_c[4]) * localP->inverseIMU_gain_Gain[4];
  localB->inverseIMU_gain[5] = (rtu_Sensors->HALSensors.HAL_gyro_SI.z -
    localB->Sum1_c[5]) * localP->inverseIMU_gain_Gain[5];

  /* DiscreteFir: '<S249>/FIR_IMUaccel' */
  localB->acc1 = localB->inverseIMU_gain[0] * localP->FIR_IMUaccel_Coefficients
    [0];
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->acc1 += localDW->FIR_IMUaccel_states[localB->j] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->acc1 += localDW->FIR_IMUaccel_states[localB->j] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[0] = localB->acc1;
  localB->acc1 = localP->FIR_IMUaccel_Coefficients[0] * localB->inverseIMU_gain
    [1];
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->acc1 += localDW->FIR_IMUaccel_states[localB->j + 5] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->acc1 += localDW->FIR_IMUaccel_states[localB->j + 5] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[1] = localB->acc1;
  localB->acc1 = localP->FIR_IMUaccel_Coefficients[0] * localB->inverseIMU_gain
    [2];
  localB->i = 1;
  localB->j = localDW->FIR_IMUaccel_circBuf;
  while (localB->j < 5) {
    localB->acc1 += localDW->FIR_IMUaccel_states[localB->j + 10] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->j = 0;
  while (localB->j < localDW->FIR_IMUaccel_circBuf) {
    localB->acc1 += localDW->FIR_IMUaccel_states[localB->j + 10] *
      localP->FIR_IMUaccel_Coefficients[localB->i];
    localB->i++;
    localB->j++;
  }

  localB->FIR_IMUaccel[2] = localB->acc1;

  /* Gain: '<S313>/Gain2' */
  localB->Add_gq = localP->Gain2_Gain * localB->FIR_IMUaccel[0];

  /* Trigonometry: '<S313>/Trigonometric Function1' */
  if (localB->Add_gq > 1.0F) {
    localB->Add_gq = 1.0F;
  } else if (localB->Add_gq < -1.0F) {
    localB->Add_gq = -1.0F;
  }

  /* Trigonometry: '<S313>/Trigonometric Function1' */
  localB->TrigonometricFunction1 = (real32_T)asin(localB->Add_gq);

  /* Reshape: '<S317>/Reshapey' */
  rtb_Reshapey_i = localB->TrigonometricFunction1;

  /* Math: '<S316>/Math Function' incorporates:
   *  Constant: '<S316>/Constant'
   *  DataTypeConversion: '<S316>/Data Type Conversion2'
   *  DiscreteFir: '<S249>/FIR_IMUaccel'
   */
  localB->rtb_Subtract_h_idx_1 = (real32_T)floor(localP->Constant_Value_k);
  if ((localB->FIR_IMUaccel[0] < 0.0F) && (localP->Constant_Value_k >
       localB->rtb_Subtract_h_idx_1)) {
    localB->Add_gq = -rt_powf_snf(-localB->FIR_IMUaccel[0],
      localP->Constant_Value_k);
  } else {
    localB->Add_gq = rt_powf_snf(localB->FIR_IMUaccel[0],
      localP->Constant_Value_k);
  }

  if ((localB->FIR_IMUaccel[1] < 0.0F) && (localP->Constant_Value_k >
       localB->rtb_Subtract_h_idx_1)) {
    localB->rtb_Subtract_h_idx_2 = -rt_powf_snf(-localB->FIR_IMUaccel[1],
      localP->Constant_Value_k);
  } else {
    localB->rtb_Subtract_h_idx_2 = rt_powf_snf(localB->FIR_IMUaccel[1],
      localP->Constant_Value_k);
  }

  if ((localB->acc1 < 0.0F) && (localP->Constant_Value_k >
       localB->rtb_Subtract_h_idx_1)) {
    localB->Gain_o = -rt_powf_snf(-localB->acc1, localP->Constant_Value_k);
  } else {
    localB->Gain_o = rt_powf_snf(localB->acc1, localP->Constant_Value_k);
  }

  /* End of Math: '<S316>/Math Function' */

  /* Sqrt: '<S316>/Sqrt' incorporates:
   *  Sum: '<S316>/Sum of Elements'
   */
  localB->Add_gq = (real32_T)sqrt((localB->Add_gq + localB->rtb_Subtract_h_idx_2)
    + localB->Gain_o);

  /* Logic: '<S248>/Logical Operator' incorporates:
   *  Constant: '<S311>/Constant'
   *  Constant: '<S312>/Constant'
   *  RelationalOperator: '<S311>/Compare'
   *  RelationalOperator: '<S312>/Compare'
   */
  localB->LogicalOperator = (int16_T)((localB->Add_gq >
    localP->CompareToConstant_const) && (localB->Add_gq <
    localP->CompareToConstant1_const));

  /* DataTypeConversion: '<S317>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_k = (localB->LogicalOperator != 0);

  /* DataTypeConversion: '<S361>/Conversion' incorporates:
   *  Constant: '<S318>/KalmanGainM'
   */
  localB->Conversion_n[0] = (real32_T)localP->KalmanGainM_Value_p[0];
  localB->Conversion_n[1] = (real32_T)localP->KalmanGainM_Value_p[1];

  /* Outputs for Enabled SubSystem: '<S344>/Enabled Subsystem' */
  /* Constant: '<S317>/C' */
  flightControlSystem_EnabledSubsystem(rtb_DataTypeConversionEnable_k,
    localB->Conversion_n, localP->C_Value_j, rtb_Reshapey_i, localB->MemoryX_b,
    &localB->EnabledSubsystem_k, &localDW->EnabledSubsystem_k,
    &localP->EnabledSubsystem_k);

  /* End of Outputs for SubSystem: '<S344>/Enabled Subsystem' */

  /* Delay: '<S371>/MemoryX' incorporates:
   *  Constant: '<S371>/X0'
   *  Reshape: '<S371>/ReshapeX0'
   */
  if (localDW->icLoad_n) {
    localDW->MemoryX_DSTATE_p[0] = localP->X0_Value_fi[0];
    localDW->MemoryX_DSTATE_p[1] = localP->X0_Value_fi[1];
  }

  /* Delay: '<S371>/MemoryX' */
  localB->MemoryX_m[0] = localDW->MemoryX_DSTATE_p[0];
  localB->MemoryX_m[1] = localDW->MemoryX_DSTATE_p[1];

  /* Trigonometry: '<S314>/Trigonometric Function' incorporates:
   *  DiscreteFir: '<S249>/FIR_IMUaccel'
   *  Product: '<S314>/Divide'
   */
  localB->TrigonometricFunction = (real32_T)atan(localB->FIR_IMUaccel[1] /
    localB->acc1);

  /* Reshape: '<S371>/Reshapey' */
  rtb_Reshapey_k = localB->TrigonometricFunction;

  /* DataTypeConversion: '<S371>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_c = (localB->LogicalOperator != 0);

  /* DataTypeConversion: '<S415>/Conversion' incorporates:
   *  Constant: '<S372>/KalmanGainM'
   */
  localB->Conversion_f[0] = (real32_T)localP->KalmanGainM_Value_e[0];
  localB->Conversion_f[1] = (real32_T)localP->KalmanGainM_Value_e[1];

  /* Outputs for Enabled SubSystem: '<S398>/Enabled Subsystem' */
  /* Constant: '<S371>/C' */
  flightControlSystem_EnabledSubsystem(rtb_DataTypeConversionEnable_c,
    localB->Conversion_f, localP->C_Value_a, rtb_Reshapey_k, localB->MemoryX_m,
    &localB->EnabledSubsystem_j, &localDW->EnabledSubsystem_j,
    &localP->EnabledSubsystem_j);

  /* End of Outputs for SubSystem: '<S398>/Enabled Subsystem' */

  /* DataTypeConversion: '<S248>/Data Type Conversion3' incorporates:
   *  Sum: '<S344>/Add'
   *  Sum: '<S398>/Add'
   */
  localB->rtb_DataTypeConversion3_b_idx_1 = localB->EnabledSubsystem_k.Product2
    [0] + localB->MemoryX_b[0];
  localB->rtb_DataTypeConversion3_b_idx_2 = localB->EnabledSubsystem_j.Product2
    [0] + localB->MemoryX_m[0];

  /* DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_tmp = (localB->inverseIMU_gain[3] -
    localP->LPFFcutoff40Hz1_DenCoef[1] * localDW->LPFFcutoff40Hz1_states) /
    localP->LPFFcutoff40Hz1_DenCoef[0];

  /* DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz1' */
  localB->p = localP->LPFFcutoff40Hz1_NumCoef[0] * localDW->LPFFcutoff40Hz1_tmp
    + localP->LPFFcutoff40Hz1_NumCoef[1] * localDW->LPFFcutoff40Hz1_states;

  /* DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_tmp = (localB->inverseIMU_gain[4] -
    localP->LPFFcutoff40Hz_DenCoef[1] * localDW->LPFFcutoff40Hz_states) /
    localP->LPFFcutoff40Hz_DenCoef[0];

  /* DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz' */
  localB->q = localP->LPFFcutoff40Hz_NumCoef[0] * localDW->LPFFcutoff40Hz_tmp +
    localP->LPFFcutoff40Hz_NumCoef[1] * localDW->LPFFcutoff40Hz_states;

  /* DiscreteFilter: '<S249>/IIR_IMUgyro_r' */
  localB->denAccum = localB->inverseIMU_gain[5];
  localB->denIdx = 1;
  for (localB->j = 0; localB->j < 5; localB->j++) {
    localB->denAccum -= localP->IIR_IMUgyro_r_DenCoef[localB->denIdx] *
      localDW->IIR_IMUgyro_r_states[localB->j];
    localB->denIdx++;
  }

  localDW->IIR_IMUgyro_r_tmp = localB->denAccum / localP->IIR_IMUgyro_r_DenCoef
    [0];
  localB->denAccum = localP->IIR_IMUgyro_r_NumCoef[0] *
    localDW->IIR_IMUgyro_r_tmp;
  localB->denIdx = 1;
  for (localB->j = 0; localB->j < 5; localB->j++) {
    localB->denAccum += localP->IIR_IMUgyro_r_NumCoef[localB->denIdx] *
      localDW->IIR_IMUgyro_r_states[localB->j];
    localB->denIdx++;
  }

  /* RelationalOperator: '<S427>/Compare' incorporates:
   *  Constant: '<S427>/Constant'
   *  UnitDelay: '<S428>/Output'
   */
  rtb_Compare_cm = (localDW->Output_DSTATE == localP->CompareToConstant_const_p);

  /* Outputs for Triggered SubSystem: '<S425>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S429>/Trigger'
   */
  if (((localZCE->TriggeredSubsystem_Trig_ZCE == 1) != (int32_T)rtb_Compare_cm) &&
      (localZCE->TriggeredSubsystem_Trig_ZCE != 3)) {
    /* Inport: '<S429>/In1' */
    localB->In1 = rtu_Sensors->HALSensors.HAL_gyro_SI.temperature;
  }

  localZCE->TriggeredSubsystem_Trig_ZCE = rtb_Compare_cm;

  /* End of Outputs for SubSystem: '<S425>/Triggered Subsystem' */

  /* ManualSwitch: '<S425>/Disable temperature compensation' incorporates:
   *  Constant: '<S425>/Constant'
   *  Gain: '<S425>/Gain'
   *  Sum: '<S425>/Subtract'
   */
  if (localP->Disabletemperaturecompensation_CurrentSetting == 1) {
    localB->b_c = (rtu_Sensors->HALSensors.HAL_gyro_SI.temperature - localB->In1)
      * localP->Gain_Gain_b;
  } else {
    localB->b_c = localP->Constant_Value;
  }

  /* End of ManualSwitch: '<S425>/Disable temperature compensation' */

  /* Sum: '<S425>/Subtract1' incorporates:
   *  DataTypeConversion: '<S425>/Data Type Conversion1'
   *  DiscreteFilter: '<S249>/IIR_IMUgyro_r'
   */
  localB->Add_gq = localB->denAccum - (real32_T)localB->b_c;

  /* Sum: '<S248>/Subtract' incorporates:
   *  Constant: '<S315>/Constant'
   *  Sum: '<S344>/Add'
   *  Sum: '<S398>/Add'
   */
  localB->rtb_Subtract_h_idx_0 = localB->p -
    (localB->EnabledSubsystem_j.Product2[1] + localB->MemoryX_m[1]);
  localB->rtb_Subtract_h_idx_1 = localB->q -
    (localB->EnabledSubsystem_k.Product2[1] + localB->MemoryX_b[1]);
  localB->rtb_Subtract_h_idx_2 = localB->Add_gq - localP->Constant_Value_f;

  /* Delay: '<S437>/MemoryX' incorporates:
   *  Constant: '<S437>/X0'
   *  Reshape: '<S437>/ReshapeX0'
   */
  if (localDW->icLoad_k) {
    localDW->MemoryX_DSTATE_a[0] = localP->X0_Value_e[0];
    localDW->MemoryX_DSTATE_a[1] = localP->X0_Value_e[1];
    localDW->MemoryX_DSTATE_a[2] = localP->X0_Value_e[2];
    localDW->MemoryX_DSTATE_a[3] = localP->X0_Value_e[3];
  }

  /* Switch: '<S438>/Switch' incorporates:
   *  Constant: '<S509>/Constant'
   *  Gain: '<S438>/opticalFlowErrorCorrect'
   *  Product: '<S438>/ '
   *  RelationalOperator: '<S509>/Compare'
   *  UnitDelay: '<S510>/Output'
   */
  if (localDW->Output_DSTATE_i < localP->CompareToConstant_const_mg) {
    localB->Switch_p[0] = rtu_Sensors->VisionSensors.opticalFlow_data[0];
    localB->Switch_p[1] = rtu_Sensors->VisionSensors.opticalFlow_data[1];
    localB->Switch_p[2] = rtu_Sensors->VisionSensors.opticalFlow_data[2];
  } else {
    /* Gain: '<S438>/Gain' incorporates:
     *  DataTypeConversion: '<S247>/Data Type Conversion'
     *  Reshape: '<S251>/Reshapexhat'
     */
    localB->Gain_o = localP->Gain_Gain_h * (real32_T)localDW->Delay2_DSTATE;
    localB->Switch_p[0] = rtu_Sensors->VisionSensors.opticalFlow_data[0] *
      localB->Gain_o * localP->opticalFlowErrorCorrect_Gain;
    localB->Switch_p[1] = rtu_Sensors->VisionSensors.opticalFlow_data[1] *
      localB->Gain_o * localP->opticalFlowErrorCorrect_Gain;
    localB->Switch_p[2] = rtu_Sensors->VisionSensors.opticalFlow_data[2] *
      localB->Gain_o * localP->opticalFlowErrorCorrect_Gain;
  }

  /* End of Switch: '<S438>/Switch' */

  /* Abs: '<S435>/Abs' incorporates:
   *  DataTypeConversion: '<S247>/Data Type Conversion'
   *  Reshape: '<S251>/Reshapexhat'
   */
  localB->Gain_o = (real32_T)fabs((real32_T)localDW->Delay2_DSTATE);

  /* DataTypeConversion: '<S435>/Data Type Conversion' incorporates:
   *  Gain: '<S435>/Gain1'
   *  Product: '<S435>/prod'
   */
  localB->Integrator_b[0] = localB->Gain_o * localB->rtb_Subtract_h_idx_1 *
    localP->Gain1_Gain;
  localB->Integrator_b[1] = localB->Gain_o * localB->rtb_Subtract_h_idx_0;

  /* SignalConversion generated from: '<S436>/IIRgyroz' */
  localB->Add_cu[0] = localB->p;
  localB->Add_cu[1] = localB->q;
  for (localB->i = 0; localB->i < 2; localB->i++) {
    /* Sum: '<S432>/angular velocity compensation' */
    localB->Gain_o = localB->Switch_p[localB->i];

    /* Sum: '<S432>/angular velocity compensation' */
    localB->angularvelocitycompensation[localB->i] = localB->Gain_o +
      localB->Integrator_b[localB->i];

    /* DiscreteFilter: '<S436>/IIRgyroz' */
    localB->i2 = localB->i * 5;
    localB->denAccum = localB->Add_cu[localB->i];
    localB->denIdx = 1;
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->denAccum -= localDW->IIRgyroz_states[localB->i2 + localB->j] *
        localP->IIRgyroz_DenCoef[localB->denIdx];
      localB->denIdx++;
    }

    localDW->IIRgyroz_tmp[localB->i] = localB->denAccum /
      localP->IIRgyroz_DenCoef[0];
    localB->denAccum = localP->IIRgyroz_NumCoef[0] * localDW->
      IIRgyroz_tmp[localB->i];
    localB->denIdx = 1;
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->denAccum += localDW->IIRgyroz_states[localB->i2 + localB->j] *
        localP->IIRgyroz_NumCoef[localB->denIdx];
      localB->denIdx++;
    }

    /* SampleTimeMath: '<S444>/TSamp' incorporates:
     *  DiscreteFilter: '<S436>/IIRgyroz'
     *
     * About '<S444>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    localB->denAccum *= localP->TSamp_WtEt;

    /* Sum: '<S444>/Diff' incorporates:
     *  UnitDelay: '<S444>/UD'
     */
    localDW->UD_DSTATE[localB->i] = localB->denAccum - localDW->UD_DSTATE
      [localB->i];

    /* SampleTimeMath: '<S444>/TSamp'
     *
     * About '<S444>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    localB->TSamp[localB->i] = localB->denAccum;

    /* DiscreteFilter: '<S436>/IIRgyroz' incorporates:
     *  Delay: '<S432>/Delay'
     *  Sum: '<S436>/Add'
     */
    localB->Integrator_b[localB->i] = localB->Gain_o - localDW->
      Delay_DSTATE[localB->i];
  }

  /* Abs: '<S436>/Abs' incorporates:
   *  Abs: '<S436>/Abs4'
   */
  localB->Gain_o = (real32_T)fabs(localB->p);

  /* Abs: '<S436>/Abs1' incorporates:
   *  Abs: '<S436>/Abs5'
   */
  localB->denAccum = (real32_T)fabs(localB->q);

  /* Logic: '<S436>/Logical Operator3' incorporates:
   *  Abs: '<S436>/Abs'
   *  Abs: '<S436>/Abs1'
   *  Abs: '<S436>/Abs2'
   *  Abs: '<S436>/Abs3'
   *  Abs: '<S436>/Abs6'
   *  Abs: '<S436>/Abs7'
   *  Abs: '<S436>/Abs8'
   *  Abs: '<S436>/Abs9'
   *  Constant: '<S445>/Constant'
   *  Constant: '<S446>/Constant'
   *  Constant: '<S447>/Constant'
   *  Constant: '<S448>/Constant'
   *  Constant: '<S449>/Constant'
   *  Constant: '<S450>/Constant'
   *  Constant: '<S451>/Constant'
   *  Constant: '<S452>/Constant'
   *  Constant: '<S453>/Constant'
   *  Constant: '<S454>/Constant'
   *  Constant: '<S455>/Constant'
   *  DataTypeConversion: '<S247>/Data Type Conversion'
   *  Logic: '<S436>/Logical Operator'
   *  Logic: '<S436>/Logical Operator1'
   *  Logic: '<S436>/Logical Operator2'
   *  RelationalOperator: '<S445>/Compare'
   *  RelationalOperator: '<S446>/Compare'
   *  RelationalOperator: '<S447>/Compare'
   *  RelationalOperator: '<S448>/Compare'
   *  RelationalOperator: '<S449>/Compare'
   *  RelationalOperator: '<S450>/Compare'
   *  RelationalOperator: '<S451>/Compare'
   *  RelationalOperator: '<S452>/Compare'
   *  RelationalOperator: '<S453>/Compare'
   *  RelationalOperator: '<S454>/Compare'
   *  RelationalOperator: '<S455>/Compare'
   *  Reshape: '<S251>/Reshapexhat'
   */
  localB->LogicalOperator3 = (((((real32_T)fabs
    (localB->rtb_DataTypeConversion3_b_idx_1) <= localP->maxp_const) &&
    ((real32_T)fabs(localB->rtb_DataTypeConversion3_b_idx_2) <=
     localP->maxq_const) && (localB->Gain_o <= localP->maxw1_const) &&
    (localB->denAccum <= localP->maxw2_const) && ((real32_T)fabs
    (localDW->UD_DSTATE[0]) <= localP->maxdw1_const) && ((real32_T)fabs
    (localDW->UD_DSTATE[1]) <= localP->maxdw2_const)) || ((localB->Gain_o <=
    localP->maxp2_const) && (localB->denAccum <= localP->maxq2_const))) &&
    ((real32_T)fabs(localB->Integrator_b[0]) <= localP->maxw3_const) &&
    ((real32_T)fabs(localB->Integrator_b[1]) <= localP->maxw4_const) &&
    ((real32_T)localDW->Delay2_DSTATE <= localP->minHeightforOF_const));

  /* Outputs for Enabled SubSystem: '<S482>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S508>/Enable'
   */
  /* DataTypeConversion: '<S437>/DataTypeConversionEnable' */
  if (localB->LogicalOperator3) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S508>/Add1' incorporates:
     *  Constant: '<S437>/C'
     *  Delay: '<S437>/MemoryX'
     *  Product: '<S508>/Product'
     *  Reshape: '<S437>/Reshapey'
     */
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->Add_cu[localB->j] = localB->angularvelocitycompensation[localB->j]
        - (((localP->C_Value_p[localB->j + 2] * localDW->MemoryX_DSTATE_a[1] +
             localP->C_Value_p[localB->j] * localDW->MemoryX_DSTATE_a[0]) +
            localP->C_Value_p[localB->j + 4] * localDW->MemoryX_DSTATE_a[2]) +
           localP->C_Value_p[localB->j + 6] * localDW->MemoryX_DSTATE_a[3]);
    }

    /* End of Sum: '<S508>/Add1' */
    for (localB->j = 0; localB->j < 4; localB->j++) {
      /* Product: '<S508>/Product2' incorporates:
       *  Constant: '<S456>/KalmanGainM'
       *  DataTypeConversion: '<S499>/Conversion'
       */
      localB->Product2_f[localB->j] = 0.0F;
      localB->Product2_f[localB->j] += (real32_T)localP->
        KalmanGainM_Value_d[localB->j] * localB->Add_cu[0];
      localB->Product2_f[localB->j] += (real32_T)localP->
        KalmanGainM_Value_d[localB->j + 4] * localB->Add_cu[1];
    }
  } else if (localDW->EnabledSubsystem_MODE) {
    /* Disable for Product: '<S508>/Product2' incorporates:
     *  Outport: '<S508>/deltax'
     */
    localB->Product2_f[0] = localP->deltax_Y0_o;
    localB->Product2_f[1] = localP->deltax_Y0_o;
    localB->Product2_f[2] = localP->deltax_Y0_o;
    localB->Product2_f[3] = localP->deltax_Y0_o;
    localDW->EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S482>/Enabled Subsystem' */

  /* Sum: '<S482>/Add' incorporates:
   *  Delay: '<S437>/MemoryX'
   */
  localB->Add_f[0] = localB->Product2_f[0] + localDW->MemoryX_DSTATE_a[0];
  localB->Add_f[1] = localB->Product2_f[1] + localDW->MemoryX_DSTATE_a[1];
  localB->Add_f[2] = localB->Product2_f[2] + localDW->MemoryX_DSTATE_a[2];
  localB->Add_f[3] = localB->Product2_f[3] + localDW->MemoryX_DSTATE_a[3];

  /* Trigonometry: '<S253>/sincos' incorporates:
   *  DiscreteIntegrator: '<S315>/Discrete-Time Integrator'
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   *  Trigonometry: '<S440>/sincos'
   *  Trigonometry: '<S513>/sincos'
   */
  localB->rtb_sincos_o2_idx_0_tmp = (real32_T)sin
    (localDW->DiscreteTimeIntegrator_DSTATE);
  localB->rtb_DataTypeConversion_i_idx_0_tmp = (real32_T)cos
    (localDW->DiscreteTimeIntegrator_DSTATE);
  localB->denAccum = (real32_T)sin(localB->rtb_DataTypeConversion3_b_idx_1);
  localB->rtb_DataTypeConversion_i_idx_1_tmp = (real32_T)cos
    (localB->rtb_DataTypeConversion3_b_idx_1);
  localB->rtb_sincos_o2_idx_2_tmp = (real32_T)sin
    (localB->rtb_DataTypeConversion3_b_idx_2);
  localB->rtb_DataTypeConversion_i_idx_2_tmp = (real32_T)cos
    (localB->rtb_DataTypeConversion3_b_idx_2);

  /* Fcn: '<S253>/Fcn11' incorporates:
   *  Fcn: '<S440>/Fcn11'
   *  Fcn: '<S513>/Fcn11'
   *  Trigonometry: '<S253>/sincos'
   */
  localB->rtb_MathFunction_tmp = localB->rtb_DataTypeConversion_i_idx_0_tmp *
    localB->rtb_DataTypeConversion_i_idx_1_tmp;
  localB->MathFunction[0] = localB->rtb_MathFunction_tmp;

  /* Fcn: '<S253>/Fcn21' incorporates:
   *  Fcn: '<S440>/Fcn21'
   *  Fcn: '<S513>/Fcn21'
   *  Trigonometry: '<S253>/sincos'
   */
  localB->rtb_Gain_o_tmp = localB->denAccum * localB->rtb_sincos_o2_idx_2_tmp;
  localB->rtb_MathFunction_tmp_b = localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_DataTypeConversion_i_idx_2_tmp;
  localB->MathFunction[1] = localB->rtb_Gain_o_tmp *
    localB->rtb_DataTypeConversion_i_idx_0_tmp - localB->rtb_MathFunction_tmp_b;

  /* Fcn: '<S253>/Fcn31' incorporates:
   *  Fcn: '<S440>/Fcn31'
   *  Fcn: '<S513>/Fcn31'
   *  Trigonometry: '<S253>/sincos'
   */
  localB->rtb_MathFunction_tmp_tmp = localB->denAccum *
    localB->rtb_DataTypeConversion_i_idx_2_tmp;
  localB->rtb_MathFunction_tmp_p = localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_sincos_o2_idx_2_tmp;
  localB->MathFunction[2] = localB->rtb_MathFunction_tmp_tmp *
    localB->rtb_DataTypeConversion_i_idx_0_tmp + localB->rtb_MathFunction_tmp_p;

  /* Fcn: '<S253>/Fcn12' incorporates:
   *  Fcn: '<S440>/Fcn12'
   *  Fcn: '<S513>/Fcn12'
   *  Trigonometry: '<S253>/sincos'
   */
  localB->rtb_MathFunction_tmp_c = localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_DataTypeConversion_i_idx_1_tmp;
  localB->MathFunction[3] = localB->rtb_MathFunction_tmp_c;

  /* Fcn: '<S253>/Fcn22' incorporates:
   *  Fcn: '<S253>/Fcn21'
   *  Fcn: '<S440>/Fcn22'
   *  Fcn: '<S513>/Fcn22'
   *  Trigonometry: '<S253>/sincos'
   */
  rtb_MathFunction_tmp = localB->rtb_DataTypeConversion_i_idx_0_tmp *
    localB->rtb_DataTypeConversion_i_idx_2_tmp;
  localB->MathFunction[4] = localB->rtb_Gain_o_tmp *
    localB->rtb_sincos_o2_idx_0_tmp + rtb_MathFunction_tmp;

  /* Fcn: '<S253>/Fcn32' incorporates:
   *  Fcn: '<S253>/Fcn31'
   *  Fcn: '<S440>/Fcn32'
   *  Fcn: '<S513>/Fcn32'
   *  Trigonometry: '<S253>/sincos'
   */
  rtb_MathFunction_tmp_0 = localB->rtb_DataTypeConversion_i_idx_0_tmp *
    localB->rtb_sincos_o2_idx_2_tmp;
  localB->MathFunction[5] = localB->rtb_MathFunction_tmp_tmp *
    localB->rtb_sincos_o2_idx_0_tmp - rtb_MathFunction_tmp_0;

  /* Fcn: '<S253>/Fcn13' incorporates:
   *  Trigonometry: '<S253>/sincos'
   */
  localB->MathFunction[6] = -localB->denAccum;

  /* Fcn: '<S253>/Fcn23' incorporates:
   *  Fcn: '<S440>/Fcn23'
   *  Fcn: '<S513>/Fcn23'
   *  Trigonometry: '<S253>/sincos'
   */
  localB->rtb_sincos_o2_idx_2_tmp *= localB->rtb_DataTypeConversion_i_idx_1_tmp;
  localB->MathFunction[7] = localB->rtb_sincos_o2_idx_2_tmp;

  /* Fcn: '<S253>/Fcn33' incorporates:
   *  Fcn: '<S440>/Fcn33'
   *  Fcn: '<S513>/Fcn33'
   *  Trigonometry: '<S253>/sincos'
   */
  localB->rtb_DataTypeConversion_i_idx_1_tmp *=
    localB->rtb_DataTypeConversion_i_idx_2_tmp;
  localB->MathFunction[8] = localB->rtb_DataTypeConversion_i_idx_1_tmp;

  /* DataTypeConversion: '<S247>/Data Type Conversion1' incorporates:
   *  Delay: '<S6>/Delay1'
   */
  localB->r_idx_1 = localDW->Delay1_DSTATE[0];
  localB->r_idx_2 = localDW->Delay1_DSTATE[1];

  /* Product: '<S247>/Product1' incorporates:
   *  DataTypeConversion: '<S247>/Data Type Conversion1'
   *  Math: '<S247>/Math Function'
   *  Reshape: '<S251>/Reshapexhat'
   *  SignalConversion generated from: '<S247>/Product1'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->rtb_MultiportSwitch_tmp = (localB->MathFunction[localB->j + 3] *
      localB->r_idx_2 + localB->MathFunction[localB->j] * localB->r_idx_1) +
      localB->MathFunction[localB->j + 6] * localB->Switch1;
    localB->MultiportSwitch[localB->j] = localB->rtb_MultiportSwitch_tmp;
    localB->rtb_MathFunction_c[localB->j] = localB->rtb_MultiportSwitch_tmp;
  }

  /* End of Product: '<S247>/Product1' */

  /* DataTypeConversion: '<S247>/Data Type Conversion2' */
  localB->Gain_o = (real32_T)localB->rtb_MathFunction_c[2];

  /* SignalConversion generated from: '<S1>/To Workspace' incorporates:
   *  DataTypeConversion: '<S247>/Data Type Conversion'
   *  DataTypeConversion: '<S247>/Data Type Conversion2'
   *  DiscreteIntegrator: '<S315>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
   *  Reshape: '<S251>/Reshapexhat'
   *  Reshape: '<S437>/Reshapexhat'
   */
  localB->TmpSignalConversionAtToWorkspaceInport1[0] =
    localDW->SimplyIntegrateVelocity_DSTATE[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[1] =
    localDW->SimplyIntegrateVelocity_DSTATE[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[2] = (real32_T)
    localDW->Delay2_DSTATE;
  localB->TmpSignalConversionAtToWorkspaceInport1[3] =
    localDW->DiscreteTimeIntegrator_DSTATE;
  localB->TmpSignalConversionAtToWorkspaceInport1[4] =
    localB->rtb_DataTypeConversion3_b_idx_1;
  localB->TmpSignalConversionAtToWorkspaceInport1[5] =
    localB->rtb_DataTypeConversion3_b_idx_2;
  localB->TmpSignalConversionAtToWorkspaceInport1[6] = localB->Add_f[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[7] = localB->Add_f[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[8] = (real32_T)
    localB->MultiportSwitch[2];
  localB->TmpSignalConversionAtToWorkspaceInport1[9] =
    localB->rtb_Subtract_h_idx_0;
  localB->TmpSignalConversionAtToWorkspaceInport1[10] =
    localB->rtb_Subtract_h_idx_1;
  localB->TmpSignalConversionAtToWorkspaceInport1[11] =
    localB->rtb_Subtract_h_idx_2;

  /* Math: '<S247>/Math Function' */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->rtb_MathFunction_m[3 * localB->j] = localB->MathFunction[localB->j];
    localB->rtb_MathFunction_m[3 * localB->j + 1] = localB->MathFunction
      [localB->j + 3];
    localB->rtb_MathFunction_m[3 * localB->j + 2] = localB->MathFunction
      [localB->j + 6];
  }

  for (localB->j = 0; localB->j < 9; localB->j++) {
    localB->MathFunction[localB->j] = localB->rtb_MathFunction_m[localB->j];
  }

  /* End of Math: '<S247>/Math Function' */

  /* Fcn: '<S440>/Fcn11' */
  localB->Reshape9to3x3columnmajor[0] = localB->rtb_MathFunction_tmp;

  /* Fcn: '<S440>/Fcn21' */
  localB->Reshape9to3x3columnmajor[1] = localB->rtb_Gain_o_tmp *
    localB->rtb_DataTypeConversion_i_idx_0_tmp - localB->rtb_MathFunction_tmp_b;

  /* Fcn: '<S440>/Fcn31' */
  localB->Reshape9to3x3columnmajor[2] = localB->rtb_MathFunction_tmp_tmp *
    localB->rtb_DataTypeConversion_i_idx_0_tmp + localB->rtb_MathFunction_tmp_p;

  /* Fcn: '<S440>/Fcn12' */
  localB->Reshape9to3x3columnmajor[3] = localB->rtb_MathFunction_tmp_c;

  /* Fcn: '<S440>/Fcn22' */
  localB->Reshape9to3x3columnmajor[4] = localB->rtb_Gain_o_tmp *
    localB->rtb_sincos_o2_idx_0_tmp + rtb_MathFunction_tmp;

  /* Fcn: '<S440>/Fcn32' */
  localB->Reshape9to3x3columnmajor[5] = localB->rtb_MathFunction_tmp_tmp *
    localB->rtb_sincos_o2_idx_0_tmp - rtb_MathFunction_tmp_0;

  /* Fcn: '<S440>/Fcn13' */
  localB->Reshape9to3x3columnmajor[6] = -localB->denAccum;

  /* Fcn: '<S440>/Fcn23' */
  localB->Reshape9to3x3columnmajor[7] = localB->rtb_sincos_o2_idx_2_tmp;

  /* Fcn: '<S440>/Fcn33' */
  localB->Reshape9to3x3columnmajor[8] =
    localB->rtb_DataTypeConversion_i_idx_1_tmp;

  /* Fcn: '<S513>/Fcn11' */
  localB->MathFunction_e[0] = localB->rtb_MathFunction_tmp;

  /* Fcn: '<S513>/Fcn21' */
  localB->MathFunction_e[1] = localB->rtb_Gain_o_tmp *
    localB->rtb_DataTypeConversion_i_idx_0_tmp - localB->rtb_MathFunction_tmp_b;

  /* Fcn: '<S513>/Fcn31' */
  localB->MathFunction_e[2] = localB->rtb_MathFunction_tmp_tmp *
    localB->rtb_DataTypeConversion_i_idx_0_tmp + localB->rtb_MathFunction_tmp_p;

  /* Fcn: '<S513>/Fcn12' */
  localB->MathFunction_e[3] = localB->rtb_MathFunction_tmp_c;

  /* Fcn: '<S513>/Fcn22' */
  localB->MathFunction_e[4] = localB->rtb_Gain_o_tmp *
    localB->rtb_sincos_o2_idx_0_tmp + rtb_MathFunction_tmp;

  /* Fcn: '<S513>/Fcn32' */
  localB->MathFunction_e[5] = localB->rtb_MathFunction_tmp_tmp *
    localB->rtb_sincos_o2_idx_0_tmp - rtb_MathFunction_tmp_0;

  /* Fcn: '<S513>/Fcn13' */
  localB->MathFunction_e[6] = -localB->denAccum;

  /* Fcn: '<S513>/Fcn23' */
  localB->MathFunction_e[7] = localB->rtb_sincos_o2_idx_2_tmp;

  /* Fcn: '<S513>/Fcn33' */
  localB->MathFunction_e[8] = localB->rtb_DataTypeConversion_i_idx_1_tmp;

  /* Math: '<S433>/Math Function' */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->rtb_MathFunction_m[3 * localB->j] = localB->MathFunction_e[localB->j];
    localB->rtb_MathFunction_m[3 * localB->j + 1] = localB->
      MathFunction_e[localB->j + 3];
    localB->rtb_MathFunction_m[3 * localB->j + 2] = localB->
      MathFunction_e[localB->j + 6];
  }

  for (localB->j = 0; localB->j < 9; localB->j++) {
    localB->MathFunction_e[localB->j] = localB->rtb_MathFunction_m[localB->j];
  }

  /* End of Math: '<S433>/Math Function' */

  /* RelationalOperator: '<S439>/Compare' incorporates:
   *  Constant: '<S439>/Constant'
   *  DataTypeConversion: '<S247>/Data Type Conversion'
   *  Reshape: '<S251>/Reshapexhat'
   */
  rtb_Compare_cm = ((real32_T)localDW->Delay2_DSTATE <=
                    localP->DeactivateAccelerationIfOFisnotusedduetolowaltitude_const);

  /* Logic: '<S434>/Logical Operator' incorporates:
   *  Constant: '<S441>/Constant'
   *  Constant: '<S442>/Constant'
   *  RelationalOperator: '<S441>/Compare'
   *  RelationalOperator: '<S442>/Compare'
   */
  rtb_Compare_hk = ((localB->Switch_p[0] !=
                     localP->donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con)
                    || (localB->Switch_p[1] !=
                        localP->donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co));

  /* Sum: '<S434>/Add' incorporates:
   *  Constant: '<S434>/gravity'
   *  Product: '<S434>/Product1'
   *  Reshape: '<S443>/Reshape (9) to [3x3] column-major'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->rtb_FIR_IMUaccel_k[localB->j] = localB->FIR_IMUaccel[localB->j] -
      ((localB->Reshape9to3x3columnmajor[localB->j + 3] * localP->gravity_Value
        [1] + localB->Reshape9to3x3columnmajor[localB->j] *
        localP->gravity_Value[0]) + localB->Reshape9to3x3columnmajor[localB->j +
       6] * localP->gravity_Value[2]);
  }

  /* End of Sum: '<S434>/Add' */

  /* Product: '<S434>/Product' incorporates:
   *  Gain: '<S434>/gainaccinput1'
   */
  localB->Product[0] = (real32_T)(localP->gainaccinput1_Gain *
    localB->rtb_FIR_IMUaccel_k[0]) * (real32_T)rtb_Compare_hk * (real32_T)
    rtb_Compare_cm;
  localB->Product[1] = (real32_T)(localP->gainaccinput1_Gain *
    localB->rtb_FIR_IMUaccel_k[1]) * (real32_T)rtb_Compare_hk * (real32_T)
    rtb_Compare_cm;

  /* Outputs for Enabled SubSystem: '<S475>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S506>/Enable'
   */
  /* DataTypeConversion: '<S437>/DataTypeConversionEnable' */
  if (localB->LogicalOperator3) {
    localDW->MeasurementUpdate_MODE = true;
    for (localB->j = 0; localB->j < 2; localB->j++) {
      /* Sum: '<S506>/Sum' incorporates:
       *  Constant: '<S437>/C'
       *  Constant: '<S437>/D'
       *  Delay: '<S437>/MemoryX'
       *  Product: '<S506>/C[k]*xhat[k|k-1]'
       *  Product: '<S506>/D[k]*u[k]'
       *  Reshape: '<S437>/Reshapeu'
       *  Reshape: '<S437>/Reshapey'
       *  Sum: '<S506>/Add1'
       */
      localB->Add_cu[localB->j] = localB->angularvelocitycompensation[localB->j]
        - ((((localP->C_Value_p[localB->j + 2] * localDW->MemoryX_DSTATE_a[1] +
              localP->C_Value_p[localB->j] * localDW->MemoryX_DSTATE_a[0]) +
             localP->C_Value_p[localB->j + 4] * localDW->MemoryX_DSTATE_a[2]) +
            localP->C_Value_p[localB->j + 6] * localDW->MemoryX_DSTATE_a[3]) +
           (localP->D_Value_k[localB->j + 2] * localB->Product[1] +
            localP->D_Value_k[localB->j] * localB->Product[0]));
    }

    for (localB->j = 0; localB->j < 4; localB->j++) {
      /* Product: '<S506>/Product3' incorporates:
       *  Constant: '<S456>/KalmanGainL'
       *  DataTypeConversion: '<S498>/Conversion'
       */
      localB->Product3_o[localB->j] = 0.0F;
      localB->Product3_o[localB->j] += (real32_T)localP->
        KalmanGainL_Value[localB->j] * localB->Add_cu[0];
      localB->Product3_o[localB->j] += (real32_T)localP->
        KalmanGainL_Value[localB->j + 4] * localB->Add_cu[1];
    }
  } else if (localDW->MeasurementUpdate_MODE) {
    /* Disable for Product: '<S506>/Product3' incorporates:
     *  Outport: '<S506>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3_o[0] = localP->Lykyhatkk1_Y0_e;
    localB->Product3_o[1] = localP->Lykyhatkk1_Y0_e;
    localB->Product3_o[2] = localP->Lykyhatkk1_Y0_e;
    localB->Product3_o[3] = localP->Lykyhatkk1_Y0_e;
    localDW->MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S475>/MeasurementUpdate' */

  /* RelationalOperator: '<S240>/Compare' incorporates:
   *  Constant: '<S240>/Constant'
   *  UnitDelay: '<S237>/Output'
   */
  rtb_Compare_cm = (localDW->Output_DSTATE_e > localP->Wait5seconds_const);

  /* Outputs for Enabled SubSystem: '<S5>/Waypoint follower' incorporates:
   *  EnablePort: '<S241>/Enable'
   */
  if (rtb_Compare_cm) {
    /* MATLABSystem: '<S241>/UAV Waypoint Follower' incorporates:
     *  Constant: '<S241>/Look ahead distance'
     *  Constant: '<S241>/Waypoints'
     *  DataTypeConversion: '<S241>/Data Type  Conversion3'
     *  DataTypeConversion: '<S247>/Data Type Conversion'
     *  DiscreteIntegrator: '<S315>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
     *  Reshape: '<S251>/Reshapexhat'
     */
    localB->Switch1 = localP->Lookaheaddistance_Value;
    localDW->obj.LookaheadDistFlag = 0U;
    if (localP->Lookaheaddistance_Value < 0.1) {
      localB->Switch1 = 0.1;
      localDW->obj.LookaheadDistFlag = 1U;
    }

    localDW->obj.InitialPose[0] = 0.0;
    localDW->obj.InitialPose[1] = 0.0;
    localDW->obj.InitialPose[2] = 0.0;
    localDW->obj.InitialPose[3] = 0.0;
    rtb_Compare_hk = false;
    p = true;
    localB->j = 0;
    exitg1 = false;
    while ((!exitg1) && (localB->j < 27)) {
      if ((localDW->obj.WaypointsInternal[localB->j] == localP->
           Waypoints_Value[localB->j]) || (rtIsNaN
           (localDW->obj.WaypointsInternal[localB->j]) && rtIsNaN
           (localP->Waypoints_Value[localB->j]))) {
        localB->j++;
      } else {
        p = false;
        exitg1 = true;
      }
    }

    if (p) {
      rtb_Compare_hk = true;
    }

    if (!rtb_Compare_hk) {
      memcpy(&localDW->obj.WaypointsInternal[0], &localP->Waypoints_Value[0],
             27U * sizeof(real_T));
      localDW->obj.WaypointIndex = 1.0;
    }

    for (localB->j = 0; localB->j < 3; localB->j++) {
      for (localB->i = 0; localB->i < 8; localB->i++) {
        localB->b_waypointsIn_data[localB->i + 9 * localB->j] =
          localP->Waypoints_Value[((localB->i + 2) + 9 * localB->j) - 1];
      }
    }

    localB->b_waypointsIn_data[8] = (rtNaN);
    localB->b_waypointsIn_data[17] = (rtNaN);
    localB->b_waypointsIn_data[26] = (rtNaN);
    for (localB->j = 0; localB->j < 27; localB->j++) {
      localB->x[localB->j] = (localP->Waypoints_Value[localB->j] !=
        localB->b_waypointsIn_data[localB->j]);
    }

    localB->i = 0;
    localB->i2 = 18;
    localB->denIdx = 0;
    for (localB->j = 0; localB->j < 9; localB->j++) {
      localB->b[localB->j] = false;
      localB->i++;
      localB->i2++;
      localB->ix = localB->i;
      exitg1 = false;
      while ((!exitg1) && (localB->ix <= localB->i2)) {
        if (localB->x[localB->ix - 1]) {
          localB->b[localB->j] = true;
          exitg1 = true;
        } else {
          localB->ix += 9;
        }
      }

      if (localB->b[localB->j]) {
        localB->denIdx++;
      }
    }

    localB->i = 0;
    for (localB->j = 0; localB->j < 9; localB->j++) {
      if (localB->b[localB->j]) {
        localB->c_data[localB->i] = (int8_T)(localB->j + 1);
        localB->i++;
      }
    }

    for (localB->j = 0; localB->j < 3; localB->j++) {
      for (localB->i = 0; localB->i < localB->denIdx; localB->i++) {
        localB->b_waypointsIn_data[localB->i + localB->denIdx * localB->j] =
          localP->Waypoints_Value[(9 * localB->j + localB->c_data[localB->i]) -
          1];
      }
    }

    localDW->obj.NumWaypoints = localB->denIdx;
    localDW->obj.LookaheadDistance = localB->Switch1;
    if (localB->denIdx == 0) {
      localB->Switch1 = localDW->SimplyIntegrateVelocity_DSTATE[0];
      localB->r_idx_1 = localDW->SimplyIntegrateVelocity_DSTATE[1];
      localB->r_idx_2 = (real32_T)localDW->Delay2_DSTATE;
      localB->b_c = localDW->DiscreteTimeIntegrator_DSTATE;

      /* MATLABSystem: '<S241>/UAV Waypoint Follower' incorporates:
       *  DataTypeConversion: '<S247>/Data Type Conversion'
       *  DiscreteIntegrator: '<S315>/Discrete-Time Integrator'
       *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
       *  Reshape: '<S251>/Reshapexhat'
       */
      localB->UAVWaypointFollower_o3 = localDW->DiscreteTimeIntegrator_DSTATE;
      status = 1U;
    } else {
      guard1 = false;
      if (localB->denIdx == 1) {
        if (localDW->obj.StartFlag) {
          localDW->obj.InitialPose[0] = localDW->SimplyIntegrateVelocity_DSTATE
            [0];
          localDW->obj.InitialPose[1] = localDW->SimplyIntegrateVelocity_DSTATE
            [1];
          localDW->obj.InitialPose[2] = (real32_T)localDW->Delay2_DSTATE;
          localDW->obj.InitialPose[3] = localDW->DiscreteTimeIntegrator_DSTATE;
        }

        localB->rtb_FIR_IMUaccel_k[0] = localB->b_waypointsIn_data[0] -
          localDW->SimplyIntegrateVelocity_DSTATE[0];
        localB->rtb_FIR_IMUaccel_k[1] = localB->b_waypointsIn_data[1] -
          localDW->SimplyIntegrateVelocity_DSTATE[1];
        localB->rtb_FIR_IMUaccel_k[2] = localB->b_waypointsIn_data[2] -
          (real32_T)localDW->Delay2_DSTATE;
        if (flightControlSystem_norm(localB->rtb_FIR_IMUaccel_k, localB) <
            1.4901161193847656E-8) {
          localB->Switch1 = localDW->SimplyIntegrateVelocity_DSTATE[0];
          localB->r_idx_1 = localDW->SimplyIntegrateVelocity_DSTATE[1];
          localB->r_idx_2 = (real32_T)localDW->Delay2_DSTATE;
          localB->b_c = localDW->DiscreteTimeIntegrator_DSTATE;

          /* MATLABSystem: '<S241>/UAV Waypoint Follower' incorporates:
           *  DataTypeConversion: '<S247>/Data Type Conversion'
           *  DiscreteIntegrator: '<S315>/Discrete-Time Integrator'
           *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
           *  Reshape: '<S251>/Reshapexhat'
           */
          localB->UAVWaypointFollower_o3 =
            localDW->DiscreteTimeIntegrator_DSTATE;
          status = 1U;
          localDW->obj.StartFlag = false;
        } else {
          localDW->obj.StartFlag = false;
          for (localB->j = 0; localB->j < 3; localB->j++) {
            localB->appendedWaypoints_data[localB->j << 1] =
              localDW->obj.InitialPose[localB->j];
            for (localB->i = 0; localB->i < localB->denIdx; localB->i++) {
              localB->appendedWaypoints_data[(localB->i + (localB->j << 1)) + 1]
                = localB->b_waypointsIn_data[localB->denIdx * localB->j +
                localB->i];
            }
          }

          localDW->obj.NumWaypoints = 2.0;
          localB->denIdx = 2;
          for (localB->j = 0; localB->j < 6; localB->j++) {
            localB->waypoints_data[localB->j] = localB->
              appendedWaypoints_data[localB->j];
          }

          guard1 = true;
        }
      } else {
        localB->i2 = localB->denIdx * 3;
        if (0 <= localB->i2 - 1) {
          memcpy(&localB->waypoints_data[0], &localB->b_waypointsIn_data[0],
                 localB->i2 * sizeof(real_T));
        }

        guard1 = true;
      }

      if (guard1) {
        rtb_Compare_hk = false;
        if (localDW->obj.WaypointIndex == localDW->obj.NumWaypoints) {
          rtb_Compare_hk = true;
        }

        if (rtb_Compare_hk) {
          localDW->obj.LastWaypointFlag = true;
          localDW->obj.WaypointIndex--;
        }

        localB->rtb_FIR_IMUaccel_k[0] = localDW->SimplyIntegrateVelocity_DSTATE
          [0] - localB->waypoints_data[(int32_T)(localDW->obj.WaypointIndex +
          1.0) - 1];
        localB->rtb_FIR_IMUaccel_k[1] = localDW->SimplyIntegrateVelocity_DSTATE
          [1] - localB->waypoints_data[((int32_T)(localDW->obj.WaypointIndex +
          1.0) + localB->denIdx) - 1];
        localB->rtb_FIR_IMUaccel_k[2] = (real32_T)localDW->Delay2_DSTATE -
          localB->waypoints_data[((int32_T)(localDW->obj.WaypointIndex + 1.0) +
          (localB->denIdx << 1)) - 1];
        guard2 = false;
        if (flightControlSystem_norm(localB->rtb_FIR_IMUaccel_k, localB) <= 0.3)
        {
          guard2 = true;
        } else {
          localB->b_c = localB->waypoints_data[(int32_T)
            (localDW->obj.WaypointIndex + 1.0) - 1];
          localB->MultiportSwitch[0] = localDW->SimplyIntegrateVelocity_DSTATE[0]
            - localB->b_c;
          localB->rtb_FIR_IMUaccel_k[0] = localB->b_c - localB->waypoints_data
            [(int32_T)localDW->obj.WaypointIndex - 1];
          localB->b_c = localB->waypoints_data[((int32_T)
            (localDW->obj.WaypointIndex + 1.0) + localB->denIdx) - 1];
          localB->MultiportSwitch[1] = localDW->SimplyIntegrateVelocity_DSTATE[1]
            - localB->b_c;
          localB->rtb_FIR_IMUaccel_k[1] = localB->b_c - localB->waypoints_data
            [((int32_T)localDW->obj.WaypointIndex + localB->denIdx) - 1];
          localB->r_idx_2 = localB->waypoints_data[((int32_T)
            (localDW->obj.WaypointIndex + 1.0) + (localB->denIdx << 1)) - 1];
          localB->MultiportSwitch[2] = (real32_T)localDW->Delay2_DSTATE -
            localB->r_idx_2;
          localB->dist = localB->waypoints_data[((localB->denIdx << 1) +
            (int32_T)localDW->obj.WaypointIndex) - 1];
          localB->rtb_FIR_IMUaccel_k[2] = localB->r_idx_2 - localB->dist;
          localB->b_c = flightControlSystem_norm(localB->rtb_FIR_IMUaccel_k,
            localB);
          localB->rtb_DataTypeConversion3_tmp = flightControlSystem_norm
            (localB->MultiportSwitch, localB);
          localB->rtb_MultiportSwitch_tmp = localB->waypoints_data[(int32_T)
            localDW->obj.WaypointIndex - 1];
          localB->Switch1 = localB->waypoints_data[(int32_T)
            (localDW->obj.WaypointIndex + 1.0) - 1];
          localB->waypoints_tmp = localB->waypoints_data[((int32_T)
            localDW->obj.WaypointIndex + localB->denIdx) - 1];
          localB->r_idx_1 = localB->waypoints_data[((int32_T)
            (localDW->obj.WaypointIndex + 1.0) + localB->denIdx) - 1];
          localB->b_c = ((localB->Switch1 - localB->rtb_MultiportSwitch_tmp) /
                         localB->b_c * (localB->MultiportSwitch[0] /
            localB->rtb_DataTypeConversion3_tmp) + (localB->r_idx_1 -
            localB->waypoints_tmp) / localB->b_c * (localB->MultiportSwitch[1] /
            localB->rtb_DataTypeConversion3_tmp)) + (localB->r_idx_2 -
            localB->dist) / localB->b_c * (localB->MultiportSwitch[2] /
            localB->rtb_DataTypeConversion3_tmp);
          if (localB->b_c < 0.0) {
            localB->b_c = -1.0;
          } else if (localB->b_c > 0.0) {
            localB->b_c = 1.0;
          } else if (localB->b_c == 0.0) {
            localB->b_c = 0.0;
          } else {
            localB->b_c = (rtNaN);
          }

          if (localB->b_c >= 0.0) {
            guard2 = true;
          } else {
            localB->MultiportSwitch[0] = localB->rtb_MultiportSwitch_tmp;
            localB->MultiportSwitch[1] = localB->waypoints_tmp;
            localB->MultiportSwitch[2] = localB->dist;
          }
        }

        if (guard2) {
          localDW->obj.WaypointIndex++;
          rtb_Compare_hk = false;
          if (localDW->obj.WaypointIndex == localDW->obj.NumWaypoints) {
            rtb_Compare_hk = true;
          }

          if (rtb_Compare_hk) {
            localDW->obj.LastWaypointFlag = true;
            localDW->obj.WaypointIndex--;
          }

          localB->MultiportSwitch[0] = localB->waypoints_data[(int32_T)
            localDW->obj.WaypointIndex - 1];
          localB->Switch1 = localB->waypoints_data[(int32_T)
            (localDW->obj.WaypointIndex + 1.0) - 1];
          localB->MultiportSwitch[1] = localB->waypoints_data[((int32_T)
            localDW->obj.WaypointIndex + localB->denIdx) - 1];
          localB->r_idx_1 = localB->waypoints_data[((int32_T)
            (localDW->obj.WaypointIndex + 1.0) + localB->denIdx) - 1];
          localB->MultiportSwitch[2] = localB->waypoints_data[((localB->denIdx <<
            1) + (int32_T)localDW->obj.WaypointIndex) - 1];
          localB->r_idx_2 = localB->waypoints_data[((int32_T)
            (localDW->obj.WaypointIndex + 1.0) + (localB->denIdx << 1)) - 1];
        }

        localB->b_c = localB->Switch1 - localB->MultiportSwitch[0];
        localB->waypoints_tmp_tmp = localDW->SimplyIntegrateVelocity_DSTATE[0] -
          localB->MultiportSwitch[0];
        localB->rtb_MultiportSwitch_tmp = localB->r_idx_1 -
          localB->MultiportSwitch[1];
        localB->rtb_DataTypeConversion3_tmp =
          localDW->SimplyIntegrateVelocity_DSTATE[1] - localB->MultiportSwitch[1];
        localB->waypoints_tmp = localB->r_idx_2 - localB->MultiportSwitch[2];
        localB->dist = (real32_T)localDW->Delay2_DSTATE -
          localB->MultiportSwitch[2];
        localB->lambda = ((localB->rtb_DataTypeConversion3_tmp *
                           localB->rtb_MultiportSwitch_tmp +
                           localB->waypoints_tmp_tmp * localB->b_c) +
                          localB->dist * localB->waypoints_tmp) /
          ((localB->rtb_MultiportSwitch_tmp * localB->rtb_MultiportSwitch_tmp +
            localB->b_c * localB->b_c) + localB->waypoints_tmp *
           localB->waypoints_tmp);
        if (localB->lambda < 0.0) {
          localB->rtb_FIR_IMUaccel_k[0] = localB->waypoints_tmp_tmp;
          localB->rtb_FIR_IMUaccel_k[1] = localB->rtb_DataTypeConversion3_tmp;
          localB->rtb_FIR_IMUaccel_k[2] = localB->dist;
          localB->dist = flightControlSystem_norm(localB->rtb_FIR_IMUaccel_k,
            localB);
        } else if (localB->lambda > 1.0) {
          localB->rtb_FIR_IMUaccel_k[0] =
            localDW->SimplyIntegrateVelocity_DSTATE[0] - localB->Switch1;
          localB->rtb_FIR_IMUaccel_k[1] =
            localDW->SimplyIntegrateVelocity_DSTATE[1] - localB->r_idx_1;
          localB->rtb_FIR_IMUaccel_k[2] = (real32_T)localDW->Delay2_DSTATE -
            localB->r_idx_2;
          localB->dist = flightControlSystem_norm(localB->rtb_FIR_IMUaccel_k,
            localB);
        } else {
          localB->rtb_FIR_IMUaccel_k[0] =
            localDW->SimplyIntegrateVelocity_DSTATE[0] - (localB->lambda *
            localB->b_c + localB->MultiportSwitch[0]);
          localB->rtb_FIR_IMUaccel_k[1] =
            localDW->SimplyIntegrateVelocity_DSTATE[1] - (localB->lambda *
            localB->rtb_MultiportSwitch_tmp + localB->MultiportSwitch[1]);
          localB->rtb_FIR_IMUaccel_k[2] = (real32_T)localDW->Delay2_DSTATE -
            (localB->lambda * localB->waypoints_tmp + localB->MultiportSwitch[2]);
          localB->dist = flightControlSystem_norm(localB->rtb_FIR_IMUaccel_k,
            localB);
        }

        if (localDW->obj.LastWaypointFlag) {
          localB->lambda = (((localDW->SimplyIntegrateVelocity_DSTATE[1] -
                              localB->MultiportSwitch[1]) * (localB->r_idx_1 -
            localB->MultiportSwitch[1]) + localB->waypoints_tmp_tmp *
                             localB->b_c) + ((real32_T)localDW->Delay2_DSTATE -
            localB->MultiportSwitch[2]) * (localB->r_idx_2 -
            localB->MultiportSwitch[2])) / (((localB->r_idx_1 -
            localB->MultiportSwitch[1]) * (localB->r_idx_1 -
            localB->MultiportSwitch[1]) + localB->b_c * localB->b_c) +
            (localB->r_idx_2 - localB->MultiportSwitch[2]) * (localB->r_idx_2 -
            localB->MultiportSwitch[2]));
          localB->rtb_FIR_IMUaccel_k[0] =
            localDW->SimplyIntegrateVelocity_DSTATE[0] - (localB->lambda *
            localB->b_c + localB->MultiportSwitch[0]);
          localB->rtb_FIR_IMUaccel_k[1] =
            localDW->SimplyIntegrateVelocity_DSTATE[1] - (localB->lambda *
            localB->rtb_MultiportSwitch_tmp + localB->MultiportSwitch[1]);
          localB->rtb_FIR_IMUaccel_k[2] = (real32_T)localDW->Delay2_DSTATE -
            (localB->lambda * localB->waypoints_tmp + localB->MultiportSwitch[2]);
          localB->dist = flightControlSystem_norm(localB->rtb_FIR_IMUaccel_k,
            localB);
        }

        localB->rtb_DataTypeConversion3_tmp = fabs(localB->dist);
        if ((!rtIsInf(localB->rtb_DataTypeConversion3_tmp)) && (!rtIsNaN
             (localB->rtb_DataTypeConversion3_tmp))) {
          if (localB->rtb_DataTypeConversion3_tmp <= 2.2250738585072014E-308) {
            localB->waypoints_tmp_tmp = 4.94065645841247E-324;
            localB->lambda = 4.94065645841247E-324;
          } else {
            frexp(localB->rtb_DataTypeConversion3_tmp, &localB->b_exponent);
            localB->waypoints_tmp_tmp = ldexp(1.0, localB->b_exponent - 53);
            frexp(localB->rtb_DataTypeConversion3_tmp, &localB->b_exponent_f);
            localB->lambda = ldexp(1.0, localB->b_exponent_f - 53);
          }
        } else {
          localB->waypoints_tmp_tmp = (rtNaN);
          localB->lambda = (rtNaN);
        }

        localB->rtb_DataTypeConversion3_tmp = sqrt(localB->waypoints_tmp_tmp);
        localB->waypoints_tmp_tmp = 5.0 * localB->lambda;
        if ((localB->rtb_DataTypeConversion3_tmp >= localB->waypoints_tmp_tmp) ||
            rtIsNaN(localB->waypoints_tmp_tmp)) {
          localB->waypoints_tmp_tmp = localB->rtb_DataTypeConversion3_tmp;
        }

        if (localDW->obj.LookaheadDistance <= localB->dist +
            localB->waypoints_tmp_tmp) {
          localDW->obj.LookaheadDistance = localDW->obj.LookaheadFactor *
            localB->dist;
        }

        localB->rtb_DataTypeConversion3_tmp = localB->MultiportSwitch[0] -
          localDW->SimplyIntegrateVelocity_DSTATE[0];
        localB->dist = localB->MultiportSwitch[1] -
          localDW->SimplyIntegrateVelocity_DSTATE[1];
        localB->waypoints_tmp_tmp = ((localB->Switch1 - localB->MultiportSwitch
          [0]) * (localB->Switch1 - localB->MultiportSwitch[0]) +
          (localB->r_idx_1 - localB->MultiportSwitch[1]) * (localB->r_idx_1 -
          localB->MultiportSwitch[1])) + (localB->r_idx_2 -
          localB->MultiportSwitch[2]) * (localB->r_idx_2 -
          localB->MultiportSwitch[2]);
        localB->lambda = localB->MultiportSwitch[2] - (real32_T)
          localDW->Delay2_DSTATE;
        localB->b_c = ((localB->b_c * localB->rtb_DataTypeConversion3_tmp +
                        localB->rtb_MultiportSwitch_tmp * localB->dist) +
                       localB->waypoints_tmp * localB->lambda) * 2.0;
        localB->rtb_MultiportSwitch_tmp = sqrt(localB->b_c * localB->b_c -
          (((localB->rtb_DataTypeConversion3_tmp *
             localB->rtb_DataTypeConversion3_tmp + localB->dist * localB->dist)
            + localB->lambda * localB->lambda) - localDW->obj.LookaheadDistance *
           localDW->obj.LookaheadDistance) * (4.0 * localB->waypoints_tmp_tmp));
        localB->rtb_DataTypeConversion3_tmp = (-localB->b_c +
          localB->rtb_MultiportSwitch_tmp) / 2.0 / localB->waypoints_tmp_tmp;
        localB->b_c = (-localB->b_c - localB->rtb_MultiportSwitch_tmp) / 2.0 /
          localB->waypoints_tmp_tmp;
        if ((localB->rtb_DataTypeConversion3_tmp >= localB->b_c) || rtIsNaN
            (localB->b_c)) {
          localB->b_c = localB->rtb_DataTypeConversion3_tmp;
        }

        localB->Switch1 = (1.0 - localB->b_c) * localB->MultiportSwitch[0] +
          localB->b_c * localB->Switch1;
        localB->r_idx_1 = (1.0 - localB->b_c) * localB->MultiportSwitch[1] +
          localB->b_c * localB->r_idx_1;
        localB->r_idx_2 = (1.0 - localB->b_c) * localB->MultiportSwitch[2] +
          localB->b_c * localB->r_idx_2;
        localB->b_c = rt_atan2d_snf(localB->r_idx_1 -
          localDW->SimplyIntegrateVelocity_DSTATE[1], localB->Switch1 -
          localDW->SimplyIntegrateVelocity_DSTATE[0]);

        /* MATLABSystem: '<S241>/UAV Waypoint Follower' incorporates:
         *  DataTypeConversion: '<S241>/Data Type  Conversion3'
         *  DataTypeConversion: '<S247>/Data Type Conversion'
         *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
         *  Reshape: '<S251>/Reshapexhat'
         */
        localB->UAVWaypointFollower_o3 = localB->b_c;
        status = 0U;
        rtb_Compare_hk = false;
        if (localDW->obj.LastWaypointFlag) {
          rtb_Compare_hk = true;
        }

        if (rtb_Compare_hk) {
          status = 1U;
        }

        localDW->obj.LastWaypointFlag = false;
      }
    }

    /* MATLABSystem: '<S241>/UAV Waypoint Follower' */
    localB->UAVWaypointFollower_o2 = localB->b_c;

    /* MATLABSystem: '<S241>/UAV Waypoint Follower' */
    rtb_UAVWaypointFollower_o4 = localDW->obj.LookaheadDistFlag;

    /* DataTypeConversion: '<S241>/Data Type  Conversion' incorporates:
     *  MATLABSystem: '<S241>/UAV Waypoint Follower'
     */
    localB->DataTypeConversion[0] = (real32_T)localB->Switch1;
    localB->DataTypeConversion[1] = (real32_T)localB->r_idx_1;
    localB->DataTypeConversion[2] = (real32_T)localB->r_idx_2;

    /* Outputs for Triggered SubSystem: '<S241>/Latch the status' incorporates:
     *  TriggerPort: '<S246>/Trigger'
     */
    /* MATLABSystem: '<S241>/UAV Waypoint Follower' incorporates:
     *  Inport: '<S246>/In1'
     */
    if ((status > 0) && (localZCE->Latchthestatus_Trig_ZCE != 1)) {
      localB->In1_f = 1U;
    }

    localZCE->Latchthestatus_Trig_ZCE = (ZCSigState)(status > 0);

    /* End of Outputs for SubSystem: '<S241>/Latch the status' */
  }

  /* End of Outputs for SubSystem: '<S5>/Waypoint follower' */

  /* Logic: '<S238>/OR' incorporates:
   *  BusAssignment: '<S1>/Control Mode Update'
   *  Constant: '<S244>/Constant'
   *  RelationalOperator: '<S244>/Compare'
   */
  rtb_Compare_hk = ((rtu_ReferenceValueServerCmds->time_remaining <=
                     localP->ComparewithStoptime_const) || (localB->In1_f != 0) ||
                    rtu_ReferenceValueServerCmds->land_drone);

  /* Outputs for Triggered SubSystem: '<S239>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S245>/Trigger'
   */
  if (rtb_Compare_hk && (localZCE->TriggeredSubsystem_Trig_ZCE_p != 1)) {
    /* SignalConversion generated from: '<S245>/X' incorporates:
     *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
     */
    localB->BufferToMakeInportVirtual_InsertedFor_X_at_inport_0 =
      localDW->SimplyIntegrateVelocity_DSTATE[0];

    /* SignalConversion generated from: '<S245>/Y' incorporates:
     *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
     */
    localB->BufferToMakeInportVirtual_InsertedFor_Y_at_inport_0 =
      localDW->SimplyIntegrateVelocity_DSTATE[1];
  }

  localZCE->TriggeredSubsystem_Trig_ZCE_p = rtb_Compare_hk;

  /* End of Outputs for SubSystem: '<S239>/Triggered Subsystem' */

  /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
   *  Constant: '<S239>/Landing Look-ahead distance'
   *  Constant: '<S5>/Startup Waypoints'
   *  DataTypeConversion: '<S247>/Data Type Conversion'
   *  Logic: '<S5>/NOT'
   *  Reshape: '<S251>/Reshapexhat'
   *  Sum: '<S239>/Add'
   *  Switch: '<S5>/Switch'
   */
  if (rtb_Compare_hk) {
    localB->MultiportSwitch[0] =
      localB->BufferToMakeInportVirtual_InsertedFor_X_at_inport_0;
    localB->MultiportSwitch[1] =
      localB->BufferToMakeInportVirtual_InsertedFor_Y_at_inport_0;
    localB->MultiportSwitch[2] = (real32_T)localDW->Delay2_DSTATE +
      localP->LandingLookaheaddistance_Value;
  } else if (rtb_Compare_cm) {
    /* Switch: '<S5>/Switch' incorporates:
     *  DataTypeConversion: '<S241>/Data Type  Conversion'
     *  MultiPortSwitch: '<S5>/Multiport Switch'
     */
    localB->MultiportSwitch[0] = localB->DataTypeConversion[0];
    localB->MultiportSwitch[1] = localB->DataTypeConversion[1];
    localB->MultiportSwitch[2] = localB->DataTypeConversion[2];
  } else {
    localB->MultiportSwitch[0] = localP->StartupWaypoints_Value[0];
    localB->MultiportSwitch[1] = localP->StartupWaypoints_Value[1];
    localB->MultiportSwitch[2] = localP->StartupWaypoints_Value[2];
  }

  /* End of MultiPortSwitch: '<S5>/Multiport Switch' */

  /* Sum: '<S10>/Sum1' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
   *  MultiPortSwitch: '<S5>/Multiport Switch'
   */
  localB->rtb_DataTypeConversion_i_idx_2_tmp = (real32_T)localB->
    MultiportSwitch[0] - localDW->SimplyIntegrateVelocity_DSTATE[0];
  localB->rtb_MathFunction_tmp = (real32_T)localB->MultiportSwitch[1] -
    localDW->SimplyIntegrateVelocity_DSTATE[1];

  /* Saturate: '<S158>/Saturation' incorporates:
   *  Gain: '<S156>/Proportional Gain'
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   */
  localB->rtb_sincos_o2_idx_2_tmp = (localB->rtb_DataTypeConversion_i_idx_0_tmp *
    localB->rtb_DataTypeConversion_i_idx_2_tmp + localB->rtb_sincos_o2_idx_0_tmp
    * localB->rtb_MathFunction_tmp) * localP->Positioncontroller_P;
  if (localB->rtb_sincos_o2_idx_2_tmp >
      localP->Positioncontroller_UpperSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Positioncontroller_UpperSaturationLimit;
  } else if (localB->rtb_sincos_o2_idx_2_tmp <
             localP->Positioncontroller_LowerSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Positioncontroller_LowerSaturationLimit;
  }

  /* Sum: '<S10>/Sum19' incorporates:
   *  Gain: '<S156>/Proportional Gain'
   *  Reshape: '<S437>/Reshapexhat'
   */
  localB->denAccum = localB->rtb_sincos_o2_idx_2_tmp - localB->Add_f[0];

  /* Sum: '<S210>/Sum' incorporates:
   *  DiscreteIntegrator: '<S201>/Integrator'
   *  Gain: '<S206>/Proportional Gain'
   */
  localB->rtb_DataTypeConversion_i_idx_1_tmp = localP->Velocitycontroller_P *
    localB->denAccum + localDW->Integrator_DSTATE[0];

  /* Saturate: '<S208>/Saturation' */
  if (localB->rtb_DataTypeConversion_i_idx_1_tmp >
      localP->Velocitycontroller_UpperSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_DataTypeConversion_i_idx_1_tmp <
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Velocitycontroller_LowerSaturationLimit;
  } else {
    localB->rtb_sincos_o2_idx_2_tmp = localB->rtb_DataTypeConversion_i_idx_1_tmp;
  }

  /* DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a[0] =
    (localB->rtb_sincos_o2_idx_2_tmp -
     localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0]
     * localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_h[1])
    / localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_h[0];

  /* Sum: '<S10>/Sum19' incorporates:
   *  Gain: '<S156>/Proportional Gain'
   */
  localB->Add_cu[0] = localB->denAccum;

  /* Sum: '<S210>/Sum' */
  localB->SignPreSat[0] = localB->rtb_DataTypeConversion_i_idx_1_tmp;

  /* Saturate: '<S158>/Saturation' incorporates:
   *  Gain: '<S156>/Proportional Gain'
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   */
  localB->rtb_sincos_o2_idx_2_tmp = (-localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_DataTypeConversion_i_idx_2_tmp +
    localB->rtb_DataTypeConversion_i_idx_0_tmp * localB->rtb_MathFunction_tmp) *
    localP->Positioncontroller_P;
  if (localB->rtb_sincos_o2_idx_2_tmp >
      localP->Positioncontroller_UpperSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Positioncontroller_UpperSaturationLimit;
  } else if (localB->rtb_sincos_o2_idx_2_tmp <
             localP->Positioncontroller_LowerSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Positioncontroller_LowerSaturationLimit;
  }

  /* Sum: '<S10>/Sum19' incorporates:
   *  Gain: '<S156>/Proportional Gain'
   *  Reshape: '<S437>/Reshapexhat'
   */
  localB->denAccum = localB->rtb_sincos_o2_idx_2_tmp - localB->Add_f[1];

  /* Sum: '<S210>/Sum' incorporates:
   *  DiscreteIntegrator: '<S201>/Integrator'
   *  Gain: '<S206>/Proportional Gain'
   */
  localB->rtb_DataTypeConversion_i_idx_1_tmp = localP->Velocitycontroller_P *
    localB->denAccum + localDW->Integrator_DSTATE[1];

  /* Saturate: '<S208>/Saturation' */
  if (localB->rtb_DataTypeConversion_i_idx_1_tmp >
      localP->Velocitycontroller_UpperSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_DataTypeConversion_i_idx_1_tmp <
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Velocitycontroller_LowerSaturationLimit;
  } else {
    localB->rtb_sincos_o2_idx_2_tmp = localB->rtb_DataTypeConversion_i_idx_1_tmp;
  }

  /* DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a[1] =
    (localB->rtb_sincos_o2_idx_2_tmp -
     localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_h[1] *
     localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1])
    / localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_h[0];

  /* Switch: '<S3>/Switch_refAtt' incorporates:
   *  BusAssignment: '<S1>/Control Mode Update'
   *  Constant: '<S1>/controlModePosVsOrient'
   *  DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
   *  Gain: '<S10>/Gain'
   */
  if (localP->controlModePosVsOrient_Value) {
    localB->Integrator_b[0] =
      (localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0]
       * localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a
       [0] +
       localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle
       [0] *
       localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1])
      * localP->Gain_Gain[0];
    localB->Integrator_b[1] =
      (localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0]
       * localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a
       [1] +
       localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1]
       * localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle
       [1]) * localP->Gain_Gain[1];
  } else {
    localB->Integrator_b[0] = rtu_ReferenceValueServerCmds->orient_ref[1];
    localB->Integrator_b[1] = rtu_ReferenceValueServerCmds->orient_ref[2];
  }

  /* End of Switch: '<S3>/Switch_refAtt' */

  /* Gain: '<S55>/Proportional Gain' incorporates:
   *  Sum: '<S8>/Sum19'
   */
  localB->rtb_sincos_o2_idx_0_tmp = (localB->Integrator_b[0] -
    localB->rtb_DataTypeConversion3_b_idx_1) * localP->Anglecontrolloop_P;
  localB->rtb_DataTypeConversion3_b_idx_2 = (localB->Integrator_b[1] -
    localB->rtb_DataTypeConversion3_b_idx_2) * localP->Anglecontrolloop_P;

  /* Sum: '<S8>/Sum1' */
  localB->Integrator_b[0] = localB->rtb_sincos_o2_idx_0_tmp -
    localB->rtb_Subtract_h_idx_1;
  localB->Integrator_b[1] = localB->rtb_DataTypeConversion3_b_idx_2 -
    localB->rtb_Subtract_h_idx_0;

  /* Gain: '<S103>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S95>/Filter'
   *  Gain: '<S94>/Derivative Gain'
   *  Sum: '<S95>/SumD'
   */
  localB->rtb_DataTypeConversion3_b_idx_2 =
    (localP->Angularvelocitycontrolloop_D[0] * localB->Integrator_b[0] -
     localDW->Filter_DSTATE[0]) * localP->Angularvelocitycontrolloop_N[0];

  /* Sum: '<S109>/Sum' incorporates:
   *  DiscreteIntegrator: '<S100>/Integrator'
   *  Gain: '<S105>/Proportional Gain'
   *  Gain: '<S94>/Derivative Gain'
   */
  localB->rtb_Subtract_h_idx_0 = (localP->Angularvelocitycontrolloop_P[0] *
    localB->Integrator_b[0] + localDW->Integrator_DSTATE_h[0]) +
    localB->rtb_DataTypeConversion3_b_idx_2;

  /* Saturate: '<S107>/Saturation' */
  if (localB->rtb_Subtract_h_idx_0 >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->rtb_DataTypeConversion_i_idx_0_tmp =
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Subtract_h_idx_0 <
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->rtb_DataTypeConversion_i_idx_0_tmp =
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  } else {
    localB->rtb_DataTypeConversion_i_idx_0_tmp = localB->rtb_Subtract_h_idx_0;
  }

  /* Gain: '<S103>/Filter Coefficient' */
  localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontr[0] =
    localB->rtb_DataTypeConversion3_b_idx_2;

  /* Sum: '<S109>/Sum' */
  localB->SignPreIntegrator[0] = localB->rtb_Subtract_h_idx_0;

  /* Gain: '<S103>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S95>/Filter'
   *  Gain: '<S94>/Derivative Gain'
   *  Sum: '<S95>/SumD'
   */
  localB->rtb_DataTypeConversion3_b_idx_2 =
    (localP->Angularvelocitycontrolloop_D[1] * localB->Integrator_b[1] -
     localDW->Filter_DSTATE[1]) * localP->Angularvelocitycontrolloop_N[1];

  /* Sum: '<S109>/Sum' incorporates:
   *  DiscreteIntegrator: '<S100>/Integrator'
   *  Gain: '<S105>/Proportional Gain'
   *  Gain: '<S94>/Derivative Gain'
   */
  localB->rtb_Subtract_h_idx_0 = (localP->Angularvelocitycontrolloop_P[1] *
    localB->Integrator_b[1] + localDW->Integrator_DSTATE_h[1]) +
    localB->rtb_DataTypeConversion3_b_idx_2;

  /* Saturate: '<S107>/Saturation' */
  if (localB->rtb_Subtract_h_idx_0 >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->rtb_sincos_o2_idx_0_tmp =
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Subtract_h_idx_0 <
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->rtb_sincos_o2_idx_0_tmp =
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  } else {
    localB->rtb_sincos_o2_idx_0_tmp = localB->rtb_Subtract_h_idx_0;
  }

  /* Gain: '<S103>/Filter Coefficient' */
  localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontr[1] =
    localB->rtb_DataTypeConversion3_b_idx_2;

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   *  UnitDelay: '<S14>/Output'
   */
  rtb_Compare_lg = (localDW->Output_DSTATE_f < localP->CompareToConstant_const_i);

  /* DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  if ((!rtb_Compare_lg) && (localDW->DiscreteTimeIntegrator_PrevResetState == 1))
  {
    localDW->DiscreteTimeIntegrator_DSTATE_e =
      localP->DiscreteTimeIntegrator_IC_m;
  }

  if (localDW->DiscreteTimeIntegrator_DSTATE_e >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_e =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE_e <=
             localP->DiscreteTimeIntegrator_LowerSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_e =
      localP->DiscreteTimeIntegrator_LowerSat;
  }

  /* Sum: '<S7>/Sum2' incorporates:
   *  DataTypeConversion: '<S247>/Data Type Conversion'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  MultiPortSwitch: '<S5>/Multiport Switch'
   *  Reshape: '<S251>/Reshapexhat'
   */
  localB->rtb_DataTypeConversion3_b_idx_2 = (real32_T)localB->MultiportSwitch[2]
    - (real32_T)localDW->Delay2_DSTATE;

  /* Sum: '<S11>/Sum1' incorporates:
   *  BusAssignment: '<S1>/Control Mode Update'
   *  DiscreteIntegrator: '<S315>/Discrete-Time Integrator'
   */
  localB->rtb_DataTypeConversion3_b_idx_1 =
    rtu_ReferenceValueServerCmds->orient_ref[0] -
    localDW->DiscreteTimeIntegrator_DSTATE;

  /* Saturate: '<S11>/Saturation' */
  if (localB->rtb_DataTypeConversion3_b_idx_1 > localP->Saturation_UpperSat) {
    localB->rtb_DataTypeConversion3_b_idx_1 = localP->Saturation_UpperSat;
  } else if (localB->rtb_DataTypeConversion3_b_idx_1 <
             localP->Saturation_LowerSat) {
    localB->rtb_DataTypeConversion3_b_idx_1 = localP->Saturation_LowerSat;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Switch: '<S7>/TakeoffOrControl_Switch1' incorporates:
   *  Constant: '<S7>/w1'
   *  DataTypeConversion: '<S247>/Data Type Conversion2'
   *  DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
   *  Gain: '<S7>/D_z1'
   *  Gain: '<S7>/P_z1'
   *  Gain: '<S7>/takeoff_gain1'
   *  Sum: '<S7>/Sum1'
   */
  if (rtb_Compare_lg) {
    localB->rtb_Subtract_h_idx_1 = localP->takeoff_gain1_Gain * localP->w1_Value;
  } else {
    localB->rtb_Subtract_h_idx_1 = (localP->P_z1_Gain *
      localB->rtb_DataTypeConversion3_b_idx_2 +
      localDW->DiscreteTimeIntegrator_DSTATE_e) - localP->D_z1_Gain * (real32_T)
      localB->rtb_MathFunction_c[2];
  }

  /* End of Switch: '<S7>/TakeoffOrControl_Switch1' */

  /* Sum: '<S7>/Sum5' incorporates:
   *  Constant: '<S7>/w1'
   */
  localB->rtb_sincos_o2_idx_2_tmp = localP->w1_Value +
    localB->rtb_Subtract_h_idx_1;

  /* Saturate: '<S7>/SaturationThrust1' */
  if (localB->rtb_sincos_o2_idx_2_tmp > localP->SaturationThrust1_UpperSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->SaturationThrust1_UpperSat;
  } else if (localB->rtb_sincos_o2_idx_2_tmp <
             localP->SaturationThrust1_LowerSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->SaturationThrust1_LowerSat;
  }

  /* SignalConversion generated from: '<S9>/Product' incorporates:
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
   *  Gain: '<S11>/D_yaw'
   *  Gain: '<S11>/P_yaw'
   *  Sum: '<S11>/Sum2'
   */
  localB->rtb_Subtract_h_idx_2 = (localP->P_yaw_Gain *
    localB->rtb_DataTypeConversion3_b_idx_1 +
    localDW->DiscreteTimeIntegrator_DSTATE_i) - localP->D_yaw_Gain *
    localB->rtb_Subtract_h_idx_2;

  /* Sum: '<S9>/Add' incorporates:
   *  Constant: '<S9>/Pitch correction'
   *  Constant: '<S9>/zero correction'
   *  ManualSwitch: '<S9>/Manual Switch'
   */
  if (localP->ManualSwitch_CurrentSetting == 1) {
    localB->rtb_Subtract_h_idx_1 = localP->Pitchcorrection_Value;
  } else {
    localB->rtb_Subtract_h_idx_1 = localP->zerocorrection_Value;
  }

  /* SignalConversion generated from: '<S9>/Product' incorporates:
   *  Saturate: '<S107>/Saturation'
   *  Sum: '<S9>/Add'
   */
  localB->rtb_Subtract_h_idx_1 += localB->rtb_DataTypeConversion_i_idx_0_tmp;

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/TorqueTotalThrustToThrustPerMotor'
   *  Saturate: '<S107>/Saturation'
   *  Saturate: '<S7>/SaturationThrust1'
   */
  for (localB->j = 0; localB->j < 4; localB->j++) {
    localB->fv[localB->j] = ((localP->
      TorqueTotalThrustToThrustPerMotor_Value[localB->j + 4] *
      localB->rtb_Subtract_h_idx_2 +
      localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j] *
      localB->rtb_sincos_o2_idx_2_tmp) +
      localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j + 8] *
      localB->rtb_Subtract_h_idx_1) +
      localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j + 12] *
      localB->rtb_sincos_o2_idx_0_tmp;
  }

  /* End of Product: '<S9>/Product' */

  /* Saturate: '<S12>/Saturation5' incorporates:
   *  Gain: '<S12>/MotorDirections'
   *  Gain: '<S12>/ThrustToMotorCommand'
   */
  localB->rtb_sincos_o2_idx_2_tmp = localP->ThrustToMotorCommand_Gain *
    localB->fv[0];
  if (localB->rtb_sincos_o2_idx_2_tmp > localP->Saturation5_UpperSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->Saturation5_UpperSat;
  } else if (localB->rtb_sincos_o2_idx_2_tmp < localP->Saturation5_LowerSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->Saturation5_LowerSat;
  }

  /* Gain: '<S12>/MotorDirections' */
  localB->MotorDirections[0] = localP->MotorDirections_Gain[0] *
    localB->rtb_sincos_o2_idx_2_tmp;

  /* Saturate: '<S12>/Saturation5' incorporates:
   *  Gain: '<S12>/MotorDirections'
   *  Gain: '<S12>/ThrustToMotorCommand'
   */
  localB->rtb_sincos_o2_idx_2_tmp = localP->ThrustToMotorCommand_Gain *
    localB->fv[1];
  if (localB->rtb_sincos_o2_idx_2_tmp > localP->Saturation5_UpperSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->Saturation5_UpperSat;
  } else if (localB->rtb_sincos_o2_idx_2_tmp < localP->Saturation5_LowerSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->Saturation5_LowerSat;
  }

  /* Gain: '<S12>/MotorDirections' */
  localB->MotorDirections[1] = localP->MotorDirections_Gain[1] *
    localB->rtb_sincos_o2_idx_2_tmp;

  /* Saturate: '<S12>/Saturation5' incorporates:
   *  Gain: '<S12>/MotorDirections'
   *  Gain: '<S12>/ThrustToMotorCommand'
   */
  localB->rtb_sincos_o2_idx_2_tmp = localP->ThrustToMotorCommand_Gain *
    localB->fv[2];
  if (localB->rtb_sincos_o2_idx_2_tmp > localP->Saturation5_UpperSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->Saturation5_UpperSat;
  } else if (localB->rtb_sincos_o2_idx_2_tmp < localP->Saturation5_LowerSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->Saturation5_LowerSat;
  }

  /* Gain: '<S12>/MotorDirections' */
  localB->MotorDirections[2] = localP->MotorDirections_Gain[2] *
    localB->rtb_sincos_o2_idx_2_tmp;

  /* Saturate: '<S12>/Saturation5' incorporates:
   *  Gain: '<S12>/MotorDirections'
   *  Gain: '<S12>/ThrustToMotorCommand'
   */
  localB->rtb_sincos_o2_idx_2_tmp = localP->ThrustToMotorCommand_Gain *
    localB->fv[3];
  if (localB->rtb_sincos_o2_idx_2_tmp > localP->Saturation5_UpperSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->Saturation5_UpperSat;
  } else if (localB->rtb_sincos_o2_idx_2_tmp < localP->Saturation5_LowerSat) {
    localB->rtb_sincos_o2_idx_2_tmp = localP->Saturation5_LowerSat;
  }

  /* Gain: '<S12>/MotorDirections' */
  localB->MotorDirections[3] = localP->MotorDirections_Gain[3] *
    localB->rtb_sincos_o2_idx_2_tmp;
  for (localB->j = 0; localB->j < 3; localB->j++) {
    /* Sum: '<S247>/Sum' incorporates:
     *  Constant: '<S247>/gravity'
     *  DiscreteFir: '<S249>/FIR_IMUaccel'
     *  Math: '<S247>/Math Function'
     *  Product: '<S247>/Product'
     */
    localB->Sum[localB->j] = ((localB->MathFunction[localB->j + 3] *
      localB->FIR_IMUaccel[1] + localB->MathFunction[localB->j] *
      localB->FIR_IMUaccel[0]) + localB->MathFunction[localB->j + 6] *
      localB->acc1) + localP->gravity_Value_o[localB->j];
  }

  /* DataTypeConversion: '<S248>/Data Type Conversion1' */
  localB->DataTypeConversion1[0] = localB->p;
  localB->DataTypeConversion1[1] = localB->q;
  localB->DataTypeConversion1[2] = localB->Add_gq;

  /* DataTypeConversion: '<S387>/Conversion' */
  localB->Conversion_lh[0] = localB->MemoryX_m[0];
  localB->Conversion_lh[1] = localB->MemoryX_m[1];

  /* Reshape: '<S371>/Reshapeu' */
  rtb_Reshapeu_m = localB->p;

  /* DataTypeConversion: '<S414>/Conversion' incorporates:
   *  Constant: '<S372>/KalmanGainL'
   */
  localB->Conversion_d[0] = (real32_T)localP->KalmanGainL_Value_p[0];
  localB->Conversion_d[1] = (real32_T)localP->KalmanGainL_Value_p[1];

  /* Outputs for Enabled SubSystem: '<S391>/MeasurementUpdate' */
  /* Constant: '<S371>/C' incorporates:
   *  Constant: '<S371>/D'
   */
  flightControlSystem_MeasurementUpdate(rtb_DataTypeConversionEnable_c,
    localB->Conversion_d, rtb_Reshapey_k, localP->C_Value_a,
    localB->Conversion_lh, localP->D_Value_n, rtb_Reshapeu_m,
    &localB->MeasurementUpdate_n, &localDW->MeasurementUpdate_n,
    &localP->MeasurementUpdate_n);

  /* End of Outputs for SubSystem: '<S391>/MeasurementUpdate' */

  /* DataTypeConversion: '<S333>/Conversion' */
  localB->Conversion_a[0] = localB->MemoryX_b[0];
  localB->Conversion_a[1] = localB->MemoryX_b[1];

  /* Reshape: '<S317>/Reshapeu' */
  rtb_Reshapeu_e = localB->q;

  /* DataTypeConversion: '<S360>/Conversion' incorporates:
   *  Constant: '<S318>/KalmanGainL'
   */
  localB->Conversion_e[0] = (real32_T)localP->KalmanGainL_Value_pv[0];
  localB->Conversion_e[1] = (real32_T)localP->KalmanGainL_Value_pv[1];

  /* Outputs for Enabled SubSystem: '<S337>/MeasurementUpdate' */
  /* Constant: '<S317>/C' incorporates:
   *  Constant: '<S317>/D'
   */
  flightControlSystem_MeasurementUpdate(rtb_DataTypeConversionEnable_k,
    localB->Conversion_e, rtb_Reshapey_i, localP->C_Value_j,
    localB->Conversion_a, localP->D_Value_b, rtb_Reshapeu_e,
    &localB->MeasurementUpdate_o, &localDW->MeasurementUpdate_o,
    &localP->MeasurementUpdate_o);

  /* End of Outputs for SubSystem: '<S337>/MeasurementUpdate' */

  /* Outputs for Enabled SubSystem: '<S273>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S303>/Enable'
   */
  /* DataTypeConversion: '<S251>/DataTypeConversionEnable' */
  if (localB->nicemeasurementornewupdateneeded) {
    localDW->MeasurementUpdate_MODE_p = true;

    /* Sum: '<S303>/Sum' incorporates:
     *  Constant: '<S251>/C'
     *  Constant: '<S251>/D'
     *  Delay: '<S251>/MemoryX'
     *  Product: '<S303>/C[k]*xhat[k|k-1]'
     *  Product: '<S303>/D[k]*u[k]'
     *  Reshape: '<S251>/Reshapeu'
     *  Reshape: '<S251>/Reshapey'
     *  Sum: '<S303>/Add1'
     */
    localB->Switch1 = localB->invertzaxisGain - ((localP->C_Value[0] *
      localDW->MemoryX_DSTATE[0] + localP->C_Value[1] * localDW->MemoryX_DSTATE
      [1]) + localP->D_Value * localB->Sum[2]);

    /* Product: '<S303>/Product3' incorporates:
     *  Constant: '<S255>/KalmanGainL'
     *  DataTypeConversion: '<S295>/Conversion'
     */
    localB->Product3[0] = localP->KalmanGainL_Value_pe[0] * localB->Switch1;
    localB->Product3[1] = localP->KalmanGainL_Value_pe[1] * localB->Switch1;
  } else if (localDW->MeasurementUpdate_MODE_p) {
    /* Disable for Product: '<S303>/Product3' incorporates:
     *  Outport: '<S303>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3[0] = localP->Lykyhatkk1_Y0;
    localB->Product3[1] = localP->Lykyhatkk1_Y0;
    localDW->MeasurementUpdate_MODE_p = false;
  }

  /* End of Outputs for SubSystem: '<S273>/MeasurementUpdate' */

  /* Gain: '<S91>/ZeroGain' */
  localB->Akxhatkk1_a[0] = localP->ZeroGain_Gain * localB->SignPreIntegrator[0];

  /* Gain: '<S192>/ZeroGain' */
  localB->ZeroGain_b[0] = localP->ZeroGain_Gain_i * localB->SignPreSat[0];

  /* DeadZone: '<S93>/DeadZone' incorporates:
   *  Gain: '<S91>/ZeroGain'
   */
  if (localB->SignPreIntegrator[0] >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->SignPreIntegrator[0] -=
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->SignPreIntegrator[0] >=
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->SignPreIntegrator[0] = 0.0F;
  } else {
    localB->SignPreIntegrator[0] -=
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  }

  /* Gain: '<S97>/Integral Gain' */
  localB->Integrator_b[0] *= localP->Angularvelocitycontrolloop_I[0];

  /* DeadZone: '<S194>/DeadZone' incorporates:
   *  Gain: '<S192>/ZeroGain'
   */
  if (localB->SignPreSat[0] > localP->Velocitycontroller_UpperSaturationLimit) {
    localB->SignPreSat[0] -= localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->SignPreSat[0] >=
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->SignPreSat[0] = 0.0F;
  } else {
    localB->SignPreSat[0] -= localP->Velocitycontroller_LowerSaturationLimit;
  }

  /* Gain: '<S198>/Integral Gain' */
  localB->Add_cu[0] *= localP->Velocitycontroller_I;

  /* Gain: '<S91>/ZeroGain' */
  localB->Akxhatkk1_a[1] = localP->ZeroGain_Gain * localB->rtb_Subtract_h_idx_0;

  /* Gain: '<S192>/ZeroGain' */
  localB->ZeroGain_b[1] = localP->ZeroGain_Gain_i *
    localB->rtb_DataTypeConversion_i_idx_1_tmp;

  /* DeadZone: '<S93>/DeadZone' */
  if (localB->rtb_Subtract_h_idx_0 >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->SignPreIntegrator[1] = localB->rtb_Subtract_h_idx_0 -
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Subtract_h_idx_0 >=
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->SignPreIntegrator[1] = 0.0F;
  } else {
    localB->SignPreIntegrator[1] = localB->rtb_Subtract_h_idx_0 -
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  }

  /* Gain: '<S97>/Integral Gain' */
  localB->Integrator_b[1] *= localP->Angularvelocitycontrolloop_I[1];

  /* DeadZone: '<S194>/DeadZone' */
  if (localB->rtb_DataTypeConversion_i_idx_1_tmp >
      localP->Velocitycontroller_UpperSaturationLimit) {
    localB->SignPreSat[1] = localB->rtb_DataTypeConversion_i_idx_1_tmp -
      localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_DataTypeConversion_i_idx_1_tmp >=
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->SignPreSat[1] = 0.0F;
  } else {
    localB->SignPreSat[1] = localB->rtb_DataTypeConversion_i_idx_1_tmp -
      localP->Velocitycontroller_LowerSaturationLimit;
  }

  /* Gain: '<S198>/Integral Gain' */
  localB->Add_cu[1] = localP->Velocitycontroller_I * localB->denAccum;

  /* Sum: '<S15>/FixPt Sum1' incorporates:
   *  Constant: '<S15>/FixPt Constant'
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_f = (uint16_T)((uint32_T)localDW->Output_DSTATE_f +
    localP->FixPtConstant_Value_o);

  /* RelationalOperator: '<S4>/GreaterThan' incorporates:
   *  Constant: '<S4>/Wait  3 Seconds'
   *  UnitDelay: '<S225>/Output'
   */
  rtb_Compare_cm = (localDW->Output_DSTATE_ir > localP->Wait3Seconds_Value);

  /* Switch: '<S229>/Switch' incorporates:
   *  Constant: '<S229>/ '
   */
  if (rtb_Compare_cm) {
    localB->Switch1 = rtu_Sensors->VisionSensors.opticalFlow_data[2];
    localB->r_idx_1 = rtu_Sensors->VisionSensors.opticalFlow_data[2];
  } else {
    localB->Switch1 = localP->_Value;
    localB->r_idx_1 = localP->_Value;
  }

  /* End of Switch: '<S229>/Switch' */

  /* Sum: '<S229>/Add' incorporates:
   *  Constant: '<S236>/Constant'
   *  DataTypeConversion: '<S229>/   '
   *  Delay: '<S229>/Delay One Step'
   *  Product: '<S229>/  '
   *  RelationalOperator: '<S236>/Compare'
   */
  localDW->DelayOneStep_DSTATE = (real_T)(localB->r_idx_1 ==
    localP->Checkerrorcondition_const) * localDW->DelayOneStep_DSTATE + (real_T)
    (localB->Switch1 == localP->Checkerrorcondition_const);

  /* Switch: '<S229>/Switch1' incorporates:
   *  Constant: '<S229>/ Disable OF check'
   *  Constant: '<S235>/Constant'
   *  RelationalOperator: '<S235>/Compare'
   */
  if (rtb_Compare_hk) {
    localB->Switch1 = localP->DisableOFcheck_Value;
  } else {
    localB->Switch1 = (localDW->DelayOneStep_DSTATE >
                       localP->u0continuousOFerrors_const);
  }

  /* End of Switch: '<S229>/Switch1' */

  /* If: '<S4>/If' incorporates:
   *  Abs: '<S218>/Abs  '
   *  Abs: '<S4>/Abs'
   *  Abs: '<S4>/Abs1'
   *  Abs: '<S4>/Abs2'
   *  Abs: '<S4>/Abs3'
   *  Abs: '<S4>/Abs4'
   *  Abs: '<S4>/Abs5'
   *  Constant: '<S218>/0.5 meters'
   *  Constant: '<S219>/Constant'
   *  Constant: '<S220>/Constant'
   *  Constant: '<S221>/Constant'
   *  Constant: '<S222>/Constant'
   *  Constant: '<S223>/Constant'
   *  Constant: '<S224>/Constant'
   *  Constant: '<S234>/Constant'
   *  DataTypeConversion: '<S229>/Data Type Conversion2'
   *  DataTypeConversion: '<S247>/Data Type Conversion'
   *  DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity'
   *  Gain: '<S4>/Gain'
   *  Gain: '<S4>/Gain1'
   *  Logic: '<S228>/AND'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator1'
   *  Logic: '<S4>/Logical Operator2'
   *  Logic: '<S4>/Logical Operator3'
   *  RelationalOperator: '<S218>/GreaterThan  '
   *  RelationalOperator: '<S219>/Compare'
   *  RelationalOperator: '<S220>/Compare'
   *  RelationalOperator: '<S221>/Compare'
   *  RelationalOperator: '<S222>/Compare'
   *  RelationalOperator: '<S223>/Compare'
   *  RelationalOperator: '<S224>/Compare'
   *  RelationalOperator: '<S234>/Compare'
   *  Reshape: '<S251>/Reshapexhat'
   *  Reshape: '<S437>/Reshapexhat'
   *  Sum: '<S4>/Subtract'
   *  Sum: '<S4>/Subtract1'
   *  Switch: '<S218>/         '
   *  Switch: '<S228>/Switch'
   */
  if (((real32_T)fabs(localDW->SimplyIntegrateVelocity_DSTATE[0]) >
       localP->CompareToConstant_const_m) || ((real32_T)fabs
       (localDW->SimplyIntegrateVelocity_DSTATE[1]) >
       localP->CompareToConstant1_const_m)) {
    /* Outputs for IfAction SubSystem: '<S4>/Geofencing error' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */
    flightControlSystem_Geofencingerror(&localB->Merge, &localP->Geofencingerror);

    /* End of Outputs for SubSystem: '<S4>/Geofencing error' */
  } else if ((((real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[0]) >
               localP->CompareToConstant4_const) && ((real32_T)fabs
               (localP->Gain_Gain_f *
                rtu_Sensors->VisionSensors.opticalFlow_data[0] - localB->Add_f[0])
    > localP->CompareToConstant2_const)) || (((real32_T)fabs
               (localP->Gain1_Gain_j *
                rtu_Sensors->VisionSensors.opticalFlow_data[1] - localB->Add_f[1])
    > localP->CompareToConstant3_const) && ((real32_T)fabs
               (rtu_Sensors->VisionSensors.opticalFlow_data[1]) >
               localP->CompareToConstant5_const))) {
    /* Outputs for IfAction SubSystem: '<S4>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S231>/Action Port'
     */
    flightControlSystem_Geofencingerror(&localB->Merge,
      &localP->estimatorOpticalflowerror);

    /* End of Outputs for SubSystem: '<S4>/estimator//Optical flow error' */
  } else {
    /* DataTypeConversion: '<S229>/Data Type Conversion2' */
    localB->r_idx_1 = fabs(localB->Switch1);
    if (localB->r_idx_1 < 4.503599627370496E+15) {
      if (localB->r_idx_1 >= 0.5) {
        localB->Switch1 = floor(localB->Switch1 + 0.5);
      } else {
        localB->Switch1 *= 0.0;
      }
    }

    if (rtIsNaN(localB->Switch1) || rtIsInf(localB->Switch1)) {
      localB->b_c = 0.0;
    } else {
      localB->b_c = fmod(localB->Switch1, 256.0);
    }

    if ((localB->b_c < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-localB->b_c :
         (int32_T)(uint8_T)localB->b_c) > 0) {
      /* Outputs for IfAction SubSystem: '<S4>/No optical flow ' incorporates:
       *  ActionPort: '<S227>/Action Port'
       */
      flightControlSystem_Geofencingerror(&localB->Merge, &localP->Noopticalflow);

      /* End of Outputs for SubSystem: '<S4>/No optical flow ' */
    } else {
      if (rtb_Compare_cm) {
        /* Switch: '<S218>/         ' incorporates:
         *  DataTypeConversion: '<S247>/Data Type Conversion'
         *  DiscreteFilter: '<S252>/pressureFilter_IIR'
         *  Reshape: '<S251>/Reshapexhat'
         *  Sum: '<S4>/Difference between  sonar and pressure'
         */
        localB->numAccum = (real32_T)localDW->Delay2_DSTATE - localB->numAccum;
      } else {
        /* Switch: '<S218>/         ' incorporates:
         *  Constant: '<S218>/    '
         */
        localB->numAccum = localP->_Value_a;
      }

      if ((real32_T)fabs(localB->numAccum) > localP->u5meters_Value) {
        /* Outputs for IfAction SubSystem: '<S4>/Ultrasound improper' incorporates:
         *  ActionPort: '<S230>/Action Port'
         */
        flightControlSystem_Geofencingerror(&localB->Merge,
          &localP->Ultrasoundimproper);

        /* End of Outputs for SubSystem: '<S4>/Ultrasound improper' */

        /* Outputs for IfAction SubSystem: '<S4>/Normal condition  and landing' incorporates:
         *  ActionPort: '<S228>/Action Port'
         */
      } else if (((real32_T)localDW->Delay2_DSTATE >
                  localP->Checkifthedroneis03maboveground_const) &&
                 rtb_Compare_hk) {
        /* Switch: '<S228>/Switch' incorporates:
         *  Constant: '<S228>/Landed'
         *  Merge: '<S4>/Merge'
         */
        localB->Merge = localP->Landed_Value;
      } else {
        /* Merge: '<S4>/Merge' incorporates:
         *  Constant: '<S228>/No_error'
         *  Switch: '<S228>/Switch'
         */
        localB->Merge = localP->No_error_Value;

        /* End of Outputs for SubSystem: '<S4>/Normal condition  and landing' */
      }
    }
  }

  /* End of If: '<S4>/If' */

  /* Sum: '<S232>/FixPt Sum1' incorporates:
   *  Constant: '<S232>/FixPt Constant'
   *  UnitDelay: '<S225>/Output'
   */
  localDW->Output_DSTATE_ir += localP->FixPtConstant_Value;

  /* Sum: '<S242>/FixPt Sum1' incorporates:
   *  Constant: '<S242>/FixPt Constant'
   *  UnitDelay: '<S237>/Output'
   */
  localDW->Output_DSTATE_e += localP->FixPtConstant_Value_a;

  /* Sum: '<S511>/FixPt Sum1' incorporates:
   *  Constant: '<S511>/FixPt Constant'
   *  UnitDelay: '<S510>/Output'
   */
  localDW->Output_DSTATE_i += localP->FixPtConstant_Value_m;

  /* Sum: '<S430>/FixPt Sum1' incorporates:
   *  Constant: '<S430>/FixPt Constant'
   *  UnitDelay: '<S428>/Output'
   */
  localDW->Output_DSTATE += localP->FixPtConstant_Value_f;

  /* DataTypeConversion: '<S501>/Conversion' incorporates:
   *  Constant: '<S456>/CovarianceZ'
   */
  for (localB->i = 0; localB->i < 16; localB->i++) {
    localB->Conversion_bl[localB->i] = (real32_T)localP->
      CovarianceZ_Value[localB->i];
  }

  /* End of DataTypeConversion: '<S501>/Conversion' */

  /* MATLAB Function: '<S504>/SqrtUsedFcn' incorporates:
   *  Constant: '<S504>/isSqrtUsed'
   *  DataTypeConversion: '<S501>/Conversion'
   */
  if (localP->isSqrtUsed_Value) {
    for (localB->j = 0; localB->j < 4; localB->j++) {
      for (localB->i = 0; localB->i < 4; localB->i++) {
        localB->P_h[localB->j + (localB->i << 2)] = ((localB->
          Conversion_bl[localB->j + 4] * localB->Conversion_bl[localB->i + 4] +
          localB->Conversion_bl[localB->j] * localB->Conversion_bl[localB->i]) +
          localB->Conversion_bl[localB->j + 8] * localB->Conversion_bl[localB->i
          + 8]) + localB->Conversion_bl[localB->j + 12] * localB->
          Conversion_bl[localB->i + 12];
      }
    }
  } else {
    for (localB->j = 0; localB->j < 4; localB->j++) {
      for (localB->i = 0; localB->i < 4; localB->i++) {
        localB->P_h[localB->j + (localB->i << 2)] = localB->Conversion_bl
          [(localB->i << 2) + localB->j];
      }
    }
  }

  /* End of MATLAB Function: '<S504>/SqrtUsedFcn' */

  /* MATLAB Function: '<S301>/SqrtUsedFcn' incorporates:
   *  Constant: '<S255>/CovarianceZ'
   *  Constant: '<S301>/isSqrtUsed'
   */
  if (localP->isSqrtUsed_Value_f) {
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->Switch1 = localP->CovarianceZ_Value_n[localB->j + 2];
      localB->P[localB->j] = localB->Switch1 * localP->CovarianceZ_Value_n[2] +
        localP->CovarianceZ_Value_n[localB->j] * localP->CovarianceZ_Value_n[0];
      localB->P[localB->j + 2] = localB->Switch1 * localP->CovarianceZ_Value_n[3]
        + localP->CovarianceZ_Value_n[localB->j] * localP->CovarianceZ_Value_n[1];
    }
  } else {
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->P[localB->j] = localP->CovarianceZ_Value_n[localB->j];
      localB->P[localB->j + 2] = localP->CovarianceZ_Value_n[localB->j + 2];
    }
  }

  /* End of MATLAB Function: '<S301>/SqrtUsedFcn' */

  /* DataTypeConversion: '<S363>/Conversion' incorporates:
   *  Constant: '<S318>/CovarianceZ'
   */
  localB->Conversion_j[0] = (real32_T)localP->CovarianceZ_Value_l[0];
  localB->Conversion_j[1] = (real32_T)localP->CovarianceZ_Value_l[1];
  localB->Conversion_j[2] = (real32_T)localP->CovarianceZ_Value_l[2];
  localB->Conversion_j[3] = (real32_T)localP->CovarianceZ_Value_l[3];

  /* MATLAB Function: '<S366>/SqrtUsedFcn' incorporates:
   *  Constant: '<S366>/isSqrtUsed'
   */
  flightControlSystem_SqrtUsedFcn(localB->Conversion_j,
    localP->isSqrtUsed_Value_j);

  /* DataTypeConversion: '<S417>/Conversion' incorporates:
   *  Constant: '<S372>/CovarianceZ'
   */
  localB->Conversion_pw[0] = (real32_T)localP->CovarianceZ_Value_o[0];
  localB->Conversion_pw[1] = (real32_T)localP->CovarianceZ_Value_o[1];
  localB->Conversion_pw[2] = (real32_T)localP->CovarianceZ_Value_o[2];
  localB->Conversion_pw[3] = (real32_T)localP->CovarianceZ_Value_o[3];

  /* MATLAB Function: '<S420>/SqrtUsedFcn' incorporates:
   *  Constant: '<S420>/isSqrtUsed'
   */
  flightControlSystem_SqrtUsedFcn(localB->Conversion_pw,
    localP->isSqrtUsed_Value_h);

  /* SignalConversion generated from: '<S433>/Product' incorporates:
   *  Reshape: '<S437>/Reshapexhat'
   */
  localB->numAccum = localB->Add_f[0];
  localB->acc1 = localB->Add_f[1];

  /* Product: '<S433>/Product' incorporates:
   *  Math: '<S433>/Math Function'
   *  SignalConversion generated from: '<S433>/Product'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->FIR_IMUaccel[localB->j] = (localB->MathFunction_e[localB->j + 3] *
      localB->acc1 + localB->MathFunction_e[localB->j] * localB->numAccum) +
      localB->MathFunction_e[localB->j + 6] * localB->Gain_o;
  }

  /* End of Product: '<S433>/Product' */

  /* Update for DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  localDW->SimplyIntegrateVelocity_PrevResetState = (int8_T)
    localP->controlModePosVsOrient_Value;

  /* Update for Delay: '<S251>/MemoryX' */
  localDW->icLoad = false;

  /* Update for DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] +=
    localP->SimplyIntegrateVelocity_gainval * localB->FIR_IMUaccel[0];

  /* Product: '<S273>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S251>/A'
   *  Delay: '<S251>/MemoryX'
   */
  localB->Switch1 = localP->A_Value[0] * localDW->MemoryX_DSTATE[0] +
    localDW->MemoryX_DSTATE[1] * localP->A_Value[2];

  /* Update for DiscreteIntegrator: '<S433>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[1] +=
    localP->SimplyIntegrateVelocity_gainval * localB->FIR_IMUaccel[1];

  /* Product: '<S273>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S251>/A'
   *  Delay: '<S251>/MemoryX'
   */
  localB->r_idx_1 = localDW->MemoryX_DSTATE[0] * localP->A_Value[1] +
    localDW->MemoryX_DSTATE[1] * localP->A_Value[3];

  /* Update for Delay: '<S251>/MemoryX' incorporates:
   *  Constant: '<S251>/B'
   *  Product: '<S273>/B[k]*u[k]'
   *  Product: '<S303>/Product3'
   *  Reshape: '<S251>/Reshapeu'
   *  Sum: '<S273>/Add'
   */
  localDW->MemoryX_DSTATE[0] = (localP->B_Value[0] * localB->Sum[2] +
    localB->Switch1) + localB->Product3[0];

  /* Update for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] = localDW->pressureFilter_IIR_states[1];

  /* Update for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localDW->sonarFilter_IIR_states[1];

  /* Update for Delay: '<S251>/MemoryX' incorporates:
   *  Constant: '<S251>/B'
   *  Product: '<S273>/B[k]*u[k]'
   *  Product: '<S303>/Product3'
   *  Reshape: '<S251>/Reshapeu'
   *  Sum: '<S273>/Add'
   */
  localDW->MemoryX_DSTATE[1] = (localP->B_Value[1] * localB->Sum[2] +
    localB->r_idx_1) + localB->Product3[1];

  /* Update for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] = localDW->pressureFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localDW->sonarFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S252>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] = localDW->pressureFilter_IIR_tmp;

  /* Update for DiscreteFilter: '<S252>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localDW->sonarFilter_IIR_tmp;

  /* Update for DiscreteIntegrator: '<S315>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * localB->Add_gq;

  /* Update for Delay: '<S317>/MemoryX' incorporates:
   *  Constant: '<S317>/A'
   *  Constant: '<S317>/B'
   *  Product: '<S337>/A[k]*xhat[k|k-1]'
   *  Product: '<S337>/B[k]*u[k]'
   *  Product: '<S368>/Product3'
   *  Sum: '<S337>/Add'
   */
  localDW->icLoad_a = false;
  localDW->MemoryX_DSTATE_l[0] = ((localP->A_Value_h[0] * localB->Conversion_a[0]
    + localB->Conversion_a[1] * localP->A_Value_h[2]) + localP->B_Value_j[0] *
    rtb_Reshapeu_e) + localB->MeasurementUpdate_o.Product3[0];
  localDW->MemoryX_DSTATE_l[1] = ((localB->Conversion_a[0] * localP->A_Value_h[1]
    + localB->Conversion_a[1] * localP->A_Value_h[3]) + localP->B_Value_j[1] *
    rtb_Reshapeu_e) + localB->MeasurementUpdate_o.Product3[1];

  /* Update for DiscreteFir: '<S249>/FIR_IMUaccel' */
  /* Update circular buffer index */
  localDW->FIR_IMUaccel_circBuf--;
  if (localDW->FIR_IMUaccel_circBuf < 0) {
    localDW->FIR_IMUaccel_circBuf = 4;
  }

  /* Update circular buffer */
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf] =
    localB->inverseIMU_gain[0];
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf + 5] =
    localB->inverseIMU_gain[1];
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf + 10] =
    localB->inverseIMU_gain[2];

  /* End of Update for DiscreteFir: '<S249>/FIR_IMUaccel' */

  /* Update for Delay: '<S371>/MemoryX' incorporates:
   *  Constant: '<S371>/A'
   *  Constant: '<S371>/B'
   *  Product: '<S391>/A[k]*xhat[k|k-1]'
   *  Product: '<S391>/B[k]*u[k]'
   *  Product: '<S422>/Product3'
   *  Sum: '<S391>/Add'
   */
  localDW->icLoad_n = false;
  localDW->MemoryX_DSTATE_p[0] = ((localP->A_Value_d[0] * localB->Conversion_lh
    [0] + localB->Conversion_lh[1] * localP->A_Value_d[2]) + localP->B_Value_n[0]
    * rtb_Reshapeu_m) + localB->MeasurementUpdate_n.Product3[0];
  localDW->MemoryX_DSTATE_p[1] = ((localB->Conversion_lh[0] * localP->A_Value_d
    [1] + localB->Conversion_lh[1] * localP->A_Value_d[3]) + localP->B_Value_n[1]
    * rtb_Reshapeu_m) + localB->MeasurementUpdate_n.Product3[1];

  /* Update for DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localDW->LPFFcutoff40Hz1_tmp;

  /* Update for DiscreteTransferFcn: '<S249>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localDW->LPFFcutoff40Hz_tmp;

  /* Update for DiscreteFilter: '<S249>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[4] = localDW->IIR_IMUgyro_r_states[3];
  localDW->IIR_IMUgyro_r_states[3] = localDW->IIR_IMUgyro_r_states[2];
  localDW->IIR_IMUgyro_r_states[2] = localDW->IIR_IMUgyro_r_states[1];
  localDW->IIR_IMUgyro_r_states[1] = localDW->IIR_IMUgyro_r_states[0];
  localDW->IIR_IMUgyro_r_states[0] = localDW->IIR_IMUgyro_r_tmp;

  /* Switch: '<S431>/FixPt Switch' */
  if (localDW->Output_DSTATE > localP->WrapToZero_Threshold_j) {
    /* Sum: '<S430>/FixPt Sum1' incorporates:
     *  Constant: '<S431>/Constant'
     *  UnitDelay: '<S428>/Output'
     */
    localDW->Output_DSTATE = localP->Constant_Value_n;
  }

  /* End of Switch: '<S431>/FixPt Switch' */

  /* Update for Delay: '<S437>/MemoryX' */
  localDW->icLoad_k = false;
  for (localB->j = 0; localB->j < 4; localB->j++) {
    /* Product: '<S475>/B[k]*u[k]' incorporates:
     *  Constant: '<S437>/B'
     *  Reshape: '<S437>/Reshapeu'
     */
    localB->fv[localB->j] = localP->B_Value_a[localB->j + 4] * localB->Product[1]
      + localP->B_Value_a[localB->j] * localB->Product[0];

    /* Product: '<S475>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S437>/A'
     *  Delay: '<S437>/MemoryX'
     */
    localB->fv1[localB->j] = ((localP->A_Value_c[localB->j + 4] *
      localDW->MemoryX_DSTATE_a[1] + localP->A_Value_c[localB->j] *
      localDW->MemoryX_DSTATE_a[0]) + localP->A_Value_c[localB->j + 8] *
      localDW->MemoryX_DSTATE_a[2]) + localP->A_Value_c[localB->j + 12] *
      localDW->MemoryX_DSTATE_a[3];
  }

  /* Update for Delay: '<S437>/MemoryX' incorporates:
   *  Sum: '<S475>/Add'
   */
  localDW->MemoryX_DSTATE_a[0] = (localB->fv[0] + localB->fv1[0]) +
    localB->Product3_o[0];
  localDW->MemoryX_DSTATE_a[1] = (localB->fv[1] + localB->fv1[1]) +
    localB->Product3_o[1];
  localDW->MemoryX_DSTATE_a[2] = (localB->fv[2] + localB->fv1[2]) +
    localB->Product3_o[2];
  localDW->MemoryX_DSTATE_a[3] = (localB->fv[3] + localB->fv1[3]) +
    localB->Product3_o[3];

  /* Switch: '<S512>/FixPt Switch' */
  if (localDW->Output_DSTATE_i > localP->WrapToZero_Threshold_lm) {
    /* Sum: '<S511>/FixPt Sum1' incorporates:
     *  Constant: '<S512>/Constant'
     *  UnitDelay: '<S510>/Output'
     */
    localDW->Output_DSTATE_i = localP->Constant_Value_i;
  }

  /* End of Switch: '<S512>/FixPt Switch' */

  /* Switch: '<S243>/FixPt Switch' */
  if (localDW->Output_DSTATE_e > localP->WrapToZero_Threshold_l) {
    /* Sum: '<S242>/FixPt Sum1' incorporates:
     *  Constant: '<S243>/Constant'
     *  UnitDelay: '<S237>/Output'
     */
    localDW->Output_DSTATE_e = localP->Constant_Value_a;
  }

  /* End of Switch: '<S243>/FixPt Switch' */
  for (localB->b_exponent = 0; localB->b_exponent < 2; localB->b_exponent++) {
    /* Signum: '<S91>/SignPreIntegrator' incorporates:
     *  DiscreteIntegrator: '<S100>/Integrator'
     */
    localB->rtb_sincos_o2_idx_0_tmp = localB->Integrator_b[localB->b_exponent];

    /* RelationalOperator: '<S91>/NotEqual' incorporates:
     *  DiscreteIntegrator: '<S100>/Integrator'
     */
    localB->rtb_Subtract_h_idx_0 = localB->SignPreIntegrator[localB->b_exponent];

    /* Signum: '<S192>/SignPreIntegrator' incorporates:
     *  DiscreteIntegrator: '<S201>/Integrator'
     */
    localB->denAccum = localB->Add_cu[localB->b_exponent];

    /* RelationalOperator: '<S192>/NotEqual' incorporates:
     *  DiscreteIntegrator: '<S201>/Integrator'
     */
    localB->rtb_DataTypeConversion_i_idx_1_tmp = localB->SignPreSat
      [localB->b_exponent];

    /* Reshape: '<S437>/Reshapexhat' */
    localB->numAccum = localB->Add_f[localB->b_exponent];

    /* Update for DiscreteFilter: '<S436>/IIRgyroz' */
    localB->i2 = localB->b_exponent * 5;
    localDW->IIRgyroz_states[localB->i2 + 4] = localDW->IIRgyroz_states
      [localB->i2 + 3];
    localDW->IIRgyroz_states[localB->i2 + 3] = localDW->IIRgyroz_states
      [localB->i2 + 2];
    localDW->IIRgyroz_states[localB->i2 + 2] = localDW->IIRgyroz_states
      [localB->i2 + 1];
    localDW->IIRgyroz_states[localB->i2 + 1] = localDW->IIRgyroz_states
      [localB->i2];
    localDW->IIRgyroz_states[localB->i2] = localDW->IIRgyroz_tmp
      [localB->b_exponent];

    /* Update for UnitDelay: '<S444>/UD' incorporates:
     *  Sum: '<S444>/Diff'
     */
    localDW->UD_DSTATE[localB->b_exponent] = localB->TSamp[localB->b_exponent];

    /* Update for Delay: '<S432>/Delay' */
    localDW->Delay_DSTATE[localB->b_exponent] = localB->numAccum;

    /* Update for Delay: '<S6>/Delay1' */
    localDW->Delay1_DSTATE[localB->b_exponent] = localB->numAccum;

    /* Signum: '<S192>/SignPreSat' */
    if (localB->rtb_DataTypeConversion_i_idx_1_tmp < 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = -1.0F;
    } else if (localB->rtb_DataTypeConversion_i_idx_1_tmp > 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = 1.0F;
    } else if (localB->rtb_DataTypeConversion_i_idx_1_tmp == 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = 0.0F;
    } else {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = (rtNaNF);
    }

    /* End of Signum: '<S192>/SignPreSat' */

    /* DataTypeConversion: '<S192>/DataTypeConv1' */
    if (rtIsNaNF(localB->rtb_DataTypeConversion_i_idx_0_tmp)) {
      localB->rtb_Subtract_h_idx_1 = 0.0F;
    } else {
      localB->rtb_Subtract_h_idx_1 = (real32_T)fmod
        (localB->rtb_DataTypeConversion_i_idx_0_tmp, 256.0);
    }

    /* Signum: '<S192>/SignPreIntegrator' */
    if (localB->denAccum < 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = -1.0F;
    } else if (localB->denAccum > 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = 1.0F;
    } else if (localB->denAccum == 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = 0.0F;
    } else {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = (rtNaNF);
    }

    /* DataTypeConversion: '<S192>/DataTypeConv2' */
    if (rtIsNaNF(localB->rtb_DataTypeConversion_i_idx_0_tmp)) {
      localB->numAccum = 0.0F;
    } else {
      localB->numAccum = (real32_T)fmod
        (localB->rtb_DataTypeConversion_i_idx_0_tmp, 256.0);
    }

    /* Switch: '<S192>/Switch' incorporates:
     *  Constant: '<S192>/Constant1'
     *  DataTypeConversion: '<S192>/DataTypeConv1'
     *  DataTypeConversion: '<S192>/DataTypeConv2'
     *  DiscreteIntegrator: '<S201>/Integrator'
     *  Logic: '<S192>/AND3'
     *  RelationalOperator: '<S192>/Equal1'
     *  RelationalOperator: '<S192>/NotEqual'
     */
    if ((localB->ZeroGain_b[localB->b_exponent] !=
         localB->rtb_DataTypeConversion_i_idx_1_tmp) &&
        ((localB->rtb_Subtract_h_idx_1 < 0.0F ? (int32_T)(int8_T)-(int8_T)
          (uint8_T)-localB->rtb_Subtract_h_idx_1 : (int32_T)(int8_T)(uint8_T)
          localB->rtb_Subtract_h_idx_1) == (localB->numAccum < 0.0F ? (int32_T)
          (int8_T)-(int8_T)(uint8_T)-localB->numAccum : (int32_T)(int8_T)
          (uint8_T)localB->numAccum))) {
      localB->denAccum = localP->Constant1_Value_o;
    }

    /* End of Switch: '<S192>/Switch' */

    /* Update for DiscreteIntegrator: '<S201>/Integrator' */
    localDW->Integrator_DSTATE[localB->b_exponent] += localP->Integrator_gainval
      * localB->denAccum;

    /* Update for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
    localDW->
      LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle
      [localB->b_exponent] =
      localDW->
      LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a
      [localB->b_exponent];

    /* Signum: '<S91>/SignPreSat' */
    if (localB->rtb_Subtract_h_idx_0 < 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = -1.0F;
    } else if (localB->rtb_Subtract_h_idx_0 > 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = 1.0F;
    } else if (localB->rtb_Subtract_h_idx_0 == 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = 0.0F;
    } else {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = (rtNaNF);
    }

    /* End of Signum: '<S91>/SignPreSat' */

    /* DataTypeConversion: '<S91>/DataTypeConv1' */
    if (rtIsNaNF(localB->rtb_DataTypeConversion_i_idx_0_tmp)) {
      localB->rtb_Subtract_h_idx_1 = 0.0F;
    } else {
      localB->rtb_Subtract_h_idx_1 = (real32_T)fmod
        (localB->rtb_DataTypeConversion_i_idx_0_tmp, 256.0);
    }

    /* Signum: '<S91>/SignPreIntegrator' */
    if (localB->rtb_sincos_o2_idx_0_tmp < 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = -1.0F;
    } else if (localB->rtb_sincos_o2_idx_0_tmp > 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = 1.0F;
    } else if (localB->rtb_sincos_o2_idx_0_tmp == 0.0F) {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = 0.0F;
    } else {
      localB->rtb_DataTypeConversion_i_idx_0_tmp = (rtNaNF);
    }

    /* DataTypeConversion: '<S91>/DataTypeConv2' */
    if (rtIsNaNF(localB->rtb_DataTypeConversion_i_idx_0_tmp)) {
      localB->numAccum = 0.0F;
    } else {
      localB->numAccum = (real32_T)fmod
        (localB->rtb_DataTypeConversion_i_idx_0_tmp, 256.0);
    }

    /* Switch: '<S91>/Switch' incorporates:
     *  Constant: '<S91>/Constant1'
     *  DataTypeConversion: '<S91>/DataTypeConv1'
     *  DataTypeConversion: '<S91>/DataTypeConv2'
     *  DiscreteIntegrator: '<S100>/Integrator'
     *  Logic: '<S91>/AND3'
     *  RelationalOperator: '<S91>/Equal1'
     *  RelationalOperator: '<S91>/NotEqual'
     */
    if ((localB->Akxhatkk1_a[localB->b_exponent] != localB->rtb_Subtract_h_idx_0)
        && ((localB->rtb_Subtract_h_idx_1 < 0.0F ? (int32_T)(int8_T)-(int8_T)
             (uint8_T)-localB->rtb_Subtract_h_idx_1 : (int32_T)(int8_T)(uint8_T)
             localB->rtb_Subtract_h_idx_1) == (localB->numAccum < 0.0F ?
          (int32_T)(int8_T)-(int8_T)(uint8_T)-localB->numAccum : (int32_T)
          (int8_T)(uint8_T)localB->numAccum))) {
      localB->rtb_sincos_o2_idx_0_tmp = localP->Constant1_Value;
    }

    /* End of Switch: '<S91>/Switch' */

    /* Update for DiscreteIntegrator: '<S100>/Integrator' */
    localDW->Integrator_DSTATE_h[localB->b_exponent] +=
      localP->Integrator_gainval_n * localB->rtb_sincos_o2_idx_0_tmp;

    /* Update for DiscreteIntegrator: '<S95>/Filter' */
    localDW->Filter_DSTATE[localB->b_exponent] += localP->Filter_gainval *
      localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontr
      [localB->b_exponent];
  }

  /* Switch: '<S16>/FixPt Switch' */
  if (localDW->Output_DSTATE_f > localP->WrapToZero_Threshold_f) {
    /* Sum: '<S15>/FixPt Sum1' incorporates:
     *  Constant: '<S16>/Constant'
     *  UnitDelay: '<S14>/Output'
     */
    localDW->Output_DSTATE_f = localP->Constant_Value_h;
  }

  /* End of Switch: '<S16>/FixPt Switch' */

  /* Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S7>/I_pr'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_e += localP->I_pr_Gain *
    localB->rtb_DataTypeConversion3_b_idx_2 *
    localP->DiscreteTimeIntegrator_gainval_h;
  if (localDW->DiscreteTimeIntegrator_DSTATE_e >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_e =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE_e <=
             localP->DiscreteTimeIntegrator_LowerSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_e =
      localP->DiscreteTimeIntegrator_LowerSat;
  }

  localDW->DiscreteTimeIntegrator_PrevResetState = (int8_T)rtb_Compare_lg;

  /* End of Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S11>/I_yaw'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_i += localP->I_yaw_Gain *
    localB->rtb_DataTypeConversion3_b_idx_1 *
    localP->DiscreteTimeIntegrator_gainval_f;

  /* Switch: '<S233>/FixPt Switch' */
  if (localDW->Output_DSTATE_ir > localP->WrapToZero_Threshold) {
    /* Sum: '<S232>/FixPt Sum1' incorporates:
     *  Constant: '<S233>/Constant'
     *  UnitDelay: '<S225>/Output'
     */
    localDW->Output_DSTATE_ir = localP->Constant_Value_d;
  }

  /* End of Switch: '<S233>/FixPt Switch' */
}

/* System initialize for referenced model: 'flightControlSystem' */
void flightControlSystem_Init(void)
{
  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[0] =
    flightControlSystem_P_g.RateTransition_InitialCondition;
  flightControlSystem_DW.RateTransition_ActiveBufIdx = 0;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem_Init
    (&flightControlSystem_B.FlightControlSystem,
     &flightControlSystem_DW.FlightControlSystem,
     &flightControlSystem_P_g.FlightControlSystem,
     &flightControlSystem_PrevZCX.FlightControlSystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Flight Control System' */

  /* SystemInitialize for SignalConversion generated from: '<Root>/Flight Control System' */
  flag_outport = flightControlSystem_B.FlightControlSystem.Merge;
}

/* System reset for referenced model: 'flightControlSystem' */
void flightControlSystem_Reset(void)
{
  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[0] =
    flightControlSystem_P_g.RateTransition_InitialCondition;
  flightControlSystem_DW.RateTransition_ActiveBufIdx = 0;

  /* SystemReset for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem_Reset
    (&flightControlSystem_DW.FlightControlSystem,
     &flightControlSystem_P_g.FlightControlSystem,
     &flightControlSystem_PrevZCX.FlightControlSystem);

  /* End of SystemReset for SubSystem: '<Root>/Flight Control System' */
}

/* Disable for referenced model: 'flightControlSystem' */
void flightControlSystem_Disable(void)
{
  /* Disable for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem_Disable
    (&flightControlSystem_B.FlightControlSystem,
     &flightControlSystem_DW.FlightControlSystem,
     &flightControlSystem_P_g.FlightControlSystem);

  /* End of Disable for SubSystem: '<Root>/Flight Control System' */
}

/* Start for referenced model: 'flightControlSystem' */
void flightControlSystem_Start(void)
{
  /* Start for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem_Start
    (&flightControlSystem_DW.FlightControlSystem);

  /* End of Start for SubSystem: '<Root>/Flight Control System' */

  /* Start for Atomic SubSystem: '<Root>/Image Processing System' */
  /* Start for MATLABSystem: '<S2>/PARROT Image Conversion' */
  flightControlSystem_DW.objisempty = true;
  flightControlSystem_DW.obj.isInitialized = 1;

  /* End of Start for SubSystem: '<Root>/Image Processing System' */
}

/* Output and update for referenced model: 'flightControlSystem' */
void flightControlSystemTID0(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Flight Control System' */

  /* Inport: '<Root>/AC cmd' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  flightControlSystem_FlightControlSystem(&cmd_inport, &sensor_inport,
    &flightControlSystem_B.FlightControlSystem,
    &flightControlSystem_DW.FlightControlSystem,
    &flightControlSystem_P_g.FlightControlSystem,
    &flightControlSystem_PrevZCX.FlightControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Flight Control System' */

  /* SignalConversion generated from: '<Root>/Flight Control System' */
  motors_outport[0] = flightControlSystem_B.FlightControlSystem.MotorDirections
    [0];
  motors_outport[1] = flightControlSystem_B.FlightControlSystem.MotorDirections
    [1];
  motors_outport[2] = flightControlSystem_B.FlightControlSystem.MotorDirections
    [2];
  motors_outport[3] = flightControlSystem_B.FlightControlSystem.MotorDirections
    [3];

  /* SignalConversion generated from: '<Root>/Flight Control System' */
  flag_outport = flightControlSystem_B.FlightControlSystem.Merge;

  /* RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_B.RateTransition =
    flightControlSystem_DW.RateTransition_Buffer[flightControlSystem_DW.RateTransition_ActiveBufIdx];
}

/* Output and update for referenced model: 'flightControlSystem' */
void flightControlSystemTID1(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Image Processing System' */
  /* MATLABSystem: '<S2>/PARROT Image Conversion' incorporates:
   *  Inport: '<Root>/Image Data'
   */
  MW_Build_RGB(&imRGB[0], &flightControlSystem_B.imageBuff_1[0],
               &flightControlSystem_B.imageBuff_2[0],
               &flightControlSystem_B.imageBuff_3[0]);

  /* MATLABSystem: '<S2>/PARROT Image Conversion' */
  memcpy(&flightControlSystem_B.PARROTImageConversion_o1[0],
         &flightControlSystem_B.imageBuff_1[0], 19200U * sizeof(uint8_T));

  /* MATLABSystem: '<S2>/PARROT Image Conversion' */
  memcpy(&flightControlSystem_B.PARROTImageConversion_o2[0],
         &flightControlSystem_B.imageBuff_2[0], 19200U * sizeof(uint8_T));

  /* MATLABSystem: '<S2>/PARROT Image Conversion' */
  memcpy(&flightControlSystem_B.PARROTImageConversion_o3[0],
         &flightControlSystem_B.imageBuff_3[0], 19200U * sizeof(uint8_T));

  /* End of Outputs for SubSystem: '<Root>/Image Processing System' */

  /* RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[flightControlSystem_DW.RateTransition_ActiveBufIdx
    == 0] = flightControlSystem_P_g.Constant_Value;
  flightControlSystem_DW.RateTransition_ActiveBufIdx = (int8_T)
    (flightControlSystem_DW.RateTransition_ActiveBufIdx == 0);
}

/* Model initialize function */
void flightControlSystem_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_flightControlSystem_T *const flightControlSystem_M =
    &(flightControlSystem_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  flightControlSystem_P_g.FlightControlSystem.SaturationSonar_LowerSat =
    rtMinusInf;

  /* initialize error status */
  rtmSetErrorStatusPointer(flightControlSystem_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &flightControlSystem_B), 0,
                sizeof(B_flightControlSystem_c_T));

  /* states (dwork) */
  (void) memset((void *)&flightControlSystem_DW, 0,
                sizeof(DW_flightControlSystem_f_T));
  flightControlSystem_PrevZCX.FlightControlSystem.Latchthestatus_Trig_ZCE =
    POS_ZCSIG;
  flightControlSystem_PrevZCX.FlightControlSystem.TriggeredSubsystem_Trig_ZCE =
    UNINITIALIZED_ZCSIG;
}
