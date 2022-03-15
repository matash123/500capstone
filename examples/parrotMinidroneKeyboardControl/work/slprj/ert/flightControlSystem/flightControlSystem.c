/*
 * Code generation for system model 'flightControlSystem'
 *
 * Model                      : flightControlSystem
 * Model version              : 3.1
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Mon Nov 29 15:54:57 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "flightControlSystem.h"
#include "flightControlSystem_private.h"
#include "rt_powf_snf.h"
#include "rt_roundd_snf.h"

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
     * Referenced by: '<S258>/Constant'
     */
    0.0,

    /* Mask Parameter: outlierJump_const
     * Referenced by: '<S313>/Constant'
     */
    0.1,

    /* Mask Parameter: currentEstimateVeryOffFromPressure_const
     * Referenced by: '<S311>/Constant'
     */
    0.8,

    /* Mask Parameter: currentStateVeryOffsonarflt_const
     * Referenced by: '<S312>/Constant'
     */
    0.4,

    /* Mask Parameter: ComparewithStoptime_const
     * Referenced by: '<S249>/Constant'
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
     * Referenced by: '<S448>/UD'
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
     * Referenced by: '<S315>/Constant'
     */
    6.867F,

    /* Mask Parameter: CompareToConstant1_const
     * Referenced by: '<S316>/Constant'
     */
    12.753F,

    /* Mask Parameter: maxp_const
     * Referenced by: '<S451>/Constant'
     */
    0.6F,

    /* Mask Parameter: maxq_const
     * Referenced by: '<S453>/Constant'
     */
    0.6F,

    /* Mask Parameter: maxw1_const
     * Referenced by: '<S455>/Constant'
     */
    7.0F,

    /* Mask Parameter: maxw2_const
     * Referenced by: '<S456>/Constant'
     */
    7.0F,

    /* Mask Parameter: maxdw1_const
     * Referenced by: '<S449>/Constant'
     */
    80.0F,

    /* Mask Parameter: maxdw2_const
     * Referenced by: '<S450>/Constant'
     */
    80.0F,

    /* Mask Parameter: maxp2_const
     * Referenced by: '<S452>/Constant'
     */
    0.5F,

    /* Mask Parameter: maxq2_const
     * Referenced by: '<S454>/Constant'
     */
    0.5F,

    /* Mask Parameter: maxw3_const
     * Referenced by: '<S457>/Constant'
     */
    5.0F,

    /* Mask Parameter: maxw4_const
     * Referenced by: '<S458>/Constant'
     */
    5.0F,

    /* Mask Parameter: minHeightforOF_const
     * Referenced by: '<S459>/Constant'
     */
    -0.4F,

    /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
     * Referenced by: '<S443>/Constant'
     */
    -0.4F,

    /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
     * Referenced by: '<S445>/Constant'
     */
    0.0F,

    /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
     * Referenced by: '<S446>/Constant'
     */
    0.0F,

    /* Mask Parameter: CompareToConstant_const_m
     * Referenced by: '<S219>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant1_const_g
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

    /* Mask Parameter: WrapToZero_Threshold_c
     * Referenced by: '<S516>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: WrapToZero_Threshold_l
     * Referenced by: '<S435>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: CompareToConstant_const_j
     * Referenced by: '<S431>/Constant'
     */
    1U,

    /* Mask Parameter: CompareToConstant_const_d
     * Referenced by: '<S513>/Constant'
     */
    800U,

    /* Mask Parameter: WrapToZero_Threshold_cj
     * Referenced by: '<S16>/FixPt Switch'
     */
    65535U,

    /* Mask Parameter: CompareToConstant_const_dk
     * Referenced by: '<S13>/Constant'
     */
    100U,

    /* Mask Parameter: Comparetow_const
     * Referenced by: '<S248>/Constant'
     */
    119U,

    /* Mask Parameter: Comparetos_const
     * Referenced by: '<S246>/Constant'
     */
    115U,

    /* Mask Parameter: Comparetoa_const
     * Referenced by: '<S241>/Constant'
     */
    97U,

    /* Mask Parameter: Comparetod_const
     * Referenced by: '<S243>/Constant'
     */
    100U,

    /* Mask Parameter: Comparetov_const
     * Referenced by: '<S247>/Constant'
     */
    118U,

    /* Mask Parameter: Comparetob_const
     * Referenced by: '<S242>/Constant'
     */
    98U,

    /* Mask Parameter: Comparetog_const
     * Referenced by: '<S244>/Constant'
     */
    103U,

    /* Mask Parameter: Comparetoh_const
     * Referenced by: '<S245>/Constant'
     */
    104U,

    /* Expression: 0
     * Referenced by: '<S229>/ Disable OF check'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S229>/ '
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S307>/L*(y[k]-yhat[k|k-1])'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S309>/deltax'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S429>/Constant'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S251>/Delay2'
     */
    0.0,

    /* Expression: pInitialization.X0
     * Referenced by: '<S255>/X0'
     */
    { -0.046, 0.0 },

    /* Expression: -inf
     * Referenced by: '<S256>/SaturationSonar'
     */
    0.0,

    /* Expression: Estimator.alt.filterSonarNum
     * Referenced by: '<S256>/sonarFilter_IIR'
     */
    { 3.756838019751262E-6, 1.1270514059253787E-5, 1.1270514059253787E-5,
      3.756838019751262E-6 },

    /* Expression: Estimator.alt.filterSonarDen
     * Referenced by: '<S256>/sonarFilter_IIR'
     */
    { 1.0, -2.9371707284498907, 2.8762997234793319, -0.939098940325283 },

    /* Expression: 0
     * Referenced by: '<S256>/sonarFilter_IIR'
     */
    0.0,

    /* Expression: pInitialization.M
     * Referenced by: '<S259>/KalmanGainM'
     */
    { 0.026241420641871824, 0.069776736071494413 },

    /* Expression: pInitialization.C
     * Referenced by: '<S255>/C'
     */
    { 1.0, 0.0 },

    /* Expression: pInitialization.M
     * Referenced by: '<S322>/KalmanGainM'
     */
    { 0.0011869299883620552, -3.2868164179443347E-5 },

    /* Expression: pInitialization.M
     * Referenced by: '<S376>/KalmanGainM'
     */
    { 0.0011869299883620552, -3.2868164179443347E-5 },

    /* Expression: pInitialization.M
     * Referenced by: '<S460>/KalmanGainM'
     */
    { 0.066408162001371715, 0.0, -0.021605460397771035, 0.0, 0.0,
      0.066408162001371715, 0.0, -0.021605460397771035 },

    /* Expression: pInitialization.L
     * Referenced by: '<S460>/KalmanGainL'
     */
    { 0.066516189303360562, -5.3094734897187146E-19, -0.021605460397771271,
      7.7674406668257917E-20, -1.4978034951024037E-18, 0.066516189303360548,
      1.68446714430961E-17, -0.021605460397771267 },

    /* Expression: [0 0 -g]
     * Referenced by: '<S438>/gravity'
     */
    { 0.0, 0.0, -9.81 },

    /* Expression: 1
     * Referenced by: '<S438>/gainaccinput1'
     */
    1.0,

    /* Expression: pInitialization.A
     * Referenced by: '<S255>/A'
     */
    { 1.0, 0.0, 0.005, 1.0 },

    /* Expression: [0 0 g]
     * Referenced by: '<S251>/gravity'
     */
    { 0.0, 0.0, 9.81 },

    /* Expression: pInitialization.L
     * Referenced by: '<S376>/KalmanGainL'
     */
    { 0.0011870943291829546, -3.2868164179443435E-5 },

    /* Expression: pInitialization.L
     * Referenced by: '<S322>/KalmanGainL'
     */
    { 0.0011870943291829546, -3.2868164179443435E-5 },

    /* Expression: pInitialization.B
     * Referenced by: '<S255>/B'
     */
    { 0.0, 0.005 },

    /* Expression: pInitialization.D
     * Referenced by: '<S255>/D'
     */
    0.0,

    /* Expression: pInitialization.L
     * Referenced by: '<S259>/KalmanGainL'
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
     * Referenced by: '<S460>/CovarianceZ'
     */
    { 1.3281632400274346, 0.0, -0.43210920795542068, 0.0, 0.0,
      1.3281632400274346, 0.0, -0.43210920795542068, -0.43210920795542068, 0.0,
      6.14734986237763, 0.0, 0.0, -0.43210920795542068, 0.0, 6.14734986237763 },

    /* Expression: pInitialization.Z
     * Referenced by: '<S259>/CovarianceZ'
     */
    { 0.0026241420641871824, 0.0069776736071494412, 0.0069776736071494412,
      0.03760769293505626 },

    /* Expression: pInitialization.P0
     * Referenced by: '<S255>/P0'
     */
    { 0.0026948589925820591, 0.0071657120718247331, 0.0071657120718247331,
      0.038107692935056295 },

    /* Expression: pInitialization.Z
     * Referenced by: '<S322>/CovarianceZ'
     */
    { 1097.3834951572255, -30.388465402591855, -30.388465402591851,
      7.2223686232128905 },

    /* Expression: pInitialization.Z
     * Referenced by: '<S376>/CovarianceZ'
     */
    { 1097.3834951572255, -30.388465402591855, -30.388465402591851,
      7.2223686232128905 },

    /* Expression: pInitialization.G
     * Referenced by: '<S255>/G'
     */
    { 0.0, 1.0 },

    /* Expression: pInitialization.H
     * Referenced by: '<S255>/H'
     */
    0.0,

    /* Expression: pInitialization.N
     * Referenced by: '<S255>/N'
     */
    0.0,

    /* Expression: pInitialization.Q
     * Referenced by: '<S255>/Q'
     */
    0.0005,

    /* Expression: pInitialization.R
     * Referenced by: '<S255>/R'
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

    /* Computed Parameter: _Value_p
     * Referenced by: '<S218>/    '
     */
    0.0F,

    /* Computed Parameter: X_Y0
     * Referenced by: '<S250>/X'
     */
    0.0F,

    /* Computed Parameter: Y_Y0
     * Referenced by: '<S250>/Y'
     */
    0.0F,

    /* Computed Parameter: Landinglookaheaddistance_Value
     * Referenced by: '<S240>/Landing look-ahead distance'
     */
    0.2F,

    /* Computed Parameter: Constant_Value_j
     * Referenced by: '<S237>/Constant'
     */
    -1.0F,

    /* Computed Parameter: Gain_Gain_k
     * Referenced by: '<S429>/Gain'
     */
    0.00228F,

    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S433>/Out1'
     */
    0.0F,

    /* Computed Parameter: Lykyhatkk1_Y0_a
     * Referenced by: '<S510>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F,

    /* Computed Parameter: deltax_Y0_e
     * Referenced by: '<S512>/deltax'
     */
    0.0F,

    /* Computed Parameter: Gain_Gain_j
     * Referenced by: '<S442>/Gain'
     */
    -1.0F,

    /* Computed Parameter: opticalFlowErrorCorrect_Gain
     * Referenced by: '<S442>/opticalFlowErrorCorrect'
     */
    1.15F,

    /* Expression: Controller.Q2Ts
     * Referenced by: '<S9>/TorqueTotalThrustToThrustPerMotor'
     */
    { 0.25F, 0.25F, 0.25F, 0.25F, 103.573624F, -103.573624F, 103.573624F,
      -103.573624F, -5.66592F, -5.66592F, 5.66592F, 5.66592F, -5.66592F,
      5.66592F, 5.66592F, -5.66592F },

    /* Computed Parameter: A_Value_l
     * Referenced by: '<S441>/A'
     */
    { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, -0.005F, 0.0F, 1.0F, 0.0F,
      0.0F, -0.005F, 0.0F, 1.0F },

    /* Computed Parameter: SimplyIntegrateVelocity_gainval
     * Referenced by: '<S437>/SimplyIntegrateVelocity'
     */
    0.005F,

    /* Computed Parameter: SimplyIntegrateVelocity_IC
     * Referenced by: '<S437>/SimplyIntegrateVelocity'
     */
    0.0F,

    /* Computed Parameter: invertzaxisGain_Gain
     * Referenced by: '<S251>/invertzaxisGain'
     */
    -1.0F,

    /* Computed Parameter: prsToAltGain_Gain
     * Referenced by: '<S251>/prsToAltGain'
     */
    0.0832137167F,

    /* Computed Parameter: pressureFilter_IIR_NumCoef
     * Referenced by: '<S256>/pressureFilter_IIR'
     */
    { 3.75683794E-6F, 1.12705138E-5F, 1.12705138E-5F, 3.75683794E-6F },

    /* Computed Parameter: pressureFilter_IIR_DenCoef
     * Referenced by: '<S256>/pressureFilter_IIR'
     */
    { 1.0F, -2.93717074F, 2.87629962F, -0.939098954F },

    /* Computed Parameter: pressureFilter_IIR_InitialStates
     * Referenced by: '<S256>/pressureFilter_IIR'
     */
    0.0F,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S319>/Discrete-Time Integrator'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator_IC
     * Referenced by: '<S319>/Discrete-Time Integrator'
     */
    0.0F,

    /* Computed Parameter: X0_Value_h
     * Referenced by: '<S321>/X0'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bi
     * Referenced by: '<S253>/Assuming that the  preflight calibration was done at level orientation'
     */
    { 0.0F, 0.0F, 9.81F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: inverseIMU_gain_Gain
     * Referenced by: '<S253>/inverseIMU_gain'
     */
    { 0.994075298F, 0.996184587F, 1.00549F, 1.00139189F, 0.993601203F, 1.00003F
    },

    /* Computed Parameter: FIR_IMUaccel_InitialStates
     * Referenced by: '<S253>/FIR_IMUaccel'
     */
    0.0F,

    /* Computed Parameter: FIR_IMUaccel_Coefficients
     * Referenced by: '<S253>/FIR_IMUaccel'
     */
    { 0.0264077242F, 0.140531361F, 0.33306092F, 0.33306092F, 0.140531361F,
      0.0264077242F },

    /* Computed Parameter: Gain2_Gain
     * Referenced by: '<S317>/Gain2'
     */
    0.101936802F,

    /* Computed Parameter: Constant_Value_k
     * Referenced by: '<S320>/Constant'
     */
    2.0F,

    /* Computed Parameter: C_Value_d
     * Referenced by: '<S321>/C'
     */
    { 1.0F, 0.0F },

    /* Computed Parameter: X0_Value_f
     * Referenced by: '<S375>/X0'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: C_Value_k
     * Referenced by: '<S375>/C'
     */
    { 1.0F, 0.0F },

    /* Computed Parameter: LPFFcutoff40Hz1_NumCoef
     * Referenced by: '<S253>/LPF Fcutoff = 40Hz1'
     */
    { 1.0F, 1.0F },

    /* Computed Parameter: LPFFcutoff40Hz1_DenCoef
     * Referenced by: '<S253>/LPF Fcutoff = 40Hz1'
     */
    { 2.5915494F, -0.591549456F },

    /* Computed Parameter: LPFFcutoff40Hz1_InitialStates
     * Referenced by: '<S253>/LPF Fcutoff = 40Hz1'
     */
    0.0F,

    /* Computed Parameter: LPFFcutoff40Hz_NumCoef
     * Referenced by: '<S253>/LPF Fcutoff = 40Hz'
     */
    { 1.0F, 1.0F },

    /* Computed Parameter: LPFFcutoff40Hz_DenCoef
     * Referenced by: '<S253>/LPF Fcutoff = 40Hz'
     */
    { 2.5915494F, -0.591549456F },

    /* Computed Parameter: LPFFcutoff40Hz_InitialStates
     * Referenced by: '<S253>/LPF Fcutoff = 40Hz'
     */
    0.0F,

    /* Computed Parameter: IIR_IMUgyro_r_NumCoef
     * Referenced by: '<S253>/IIR_IMUgyro_r'
     */
    { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
      0.282124132F },

    /* Computed Parameter: IIR_IMUgyro_r_DenCoef
     * Referenced by: '<S253>/IIR_IMUgyro_r'
     */
    { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

    /* Computed Parameter: IIR_IMUgyro_r_InitialStates
     * Referenced by: '<S253>/IIR_IMUgyro_r'
     */
    0.0F,

    /* Computed Parameter: Constant_Value_i
     * Referenced by: '<S319>/Constant'
     */
    0.0F,

    /* Computed Parameter: X0_Value_j
     * Referenced by: '<S441>/X0'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: C_Value_c
     * Referenced by: '<S441>/C'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Gain1_Gain
     * Referenced by: '<S439>/Gain1'
     */
    -1.0F,

    /* Computed Parameter: IIRgyroz_NumCoef
     * Referenced by: '<S440>/IIRgyroz'
     */
    { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
      0.282124132F },

    /* Computed Parameter: IIRgyroz_DenCoef
     * Referenced by: '<S440>/IIRgyroz'
     */
    { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

    /* Computed Parameter: IIRgyroz_InitialStates
     * Referenced by: '<S440>/IIRgyroz'
     */
    0.0F,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S448>/TSamp'
     */
    200.0F,

    /* Computed Parameter: Delay_InitialCondition
     * Referenced by: '<S436>/Delay'
     */
    0.0F,

    /* Computed Parameter: Delay1_InitialCondition
     * Referenced by: '<S6>/Delay1'
     */
    0.0F,

    /* Computed Parameter: B_Value_d
     * Referenced by: '<S441>/B'
     */
    { 0.005F, 0.0F, 0.0F, 0.0F, 0.0F, 0.005F, 0.0F, 0.0F },

    /* Computed Parameter: D_Value_k
     * Referenced by: '<S441>/D'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Delay_InitialCondition_l
     * Referenced by: '<S237>/Delay'
     */
    0.0F,

    /* Computed Parameter: Delay1_InitialCondition_g
     * Referenced by: '<S237>/Delay1'
     */
    0.0F,

    /* Computed Parameter: Delay2_InitialCondition_i
     * Referenced by: '<S237>/Delay2'
     */
    0.0F,

    /* Computed Parameter: Delay3_InitialCondition
     * Referenced by: '<S237>/Delay3'
     */
    0.0F,

    /* Computed Parameter: RollandPitch_Value
     * Referenced by: '<S5>/Roll and Pitch'
     */
    0.0F,

    /* Computed Parameter: Integrator_gainval
     * Referenced by: '<S201>/Integrator'
     */
    0.005F,

    /* Computed Parameter: LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle
     * Referenced by: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
     */
    { 1.0F, 1.0F },

    /* Computed Parameter: LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_g
     * Referenced by: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
     */
    { 8.95774746F, -6.95774698F },

    /* Computed Parameter: LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_n
     * Referenced by: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
     */
    0.0F,

    /* Computed Parameter: Integrator_gainval_h
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

    /* Computed Parameter: DiscreteTimeIntegrator_gainval_e
     * Referenced by: '<S7>/Discrete-Time Integrator'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator_IC_g
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

    /* Computed Parameter: DiscreteTimeIntegrator_gainval_h
     * Referenced by: '<S11>/Discrete-Time Integrator'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator_IC_h
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

    /* Computed Parameter: A_Value_d
     * Referenced by: '<S321>/A'
     */
    { 1.0F, 0.0F, -0.005F, 1.0F },

    /* Computed Parameter: A_Value_f
     * Referenced by: '<S375>/A'
     */
    { 1.0F, 0.0F, -0.005F, 1.0F },

    /* Computed Parameter: B_Value_m
     * Referenced by: '<S375>/B'
     */
    { 0.005F, 0.0F },

    /* Computed Parameter: D_Value_m
     * Referenced by: '<S375>/D'
     */
    0.0F,

    /* Computed Parameter: B_Value_n
     * Referenced by: '<S321>/B'
     */
    { 0.005F, 0.0F },

    /* Computed Parameter: D_Value_c
     * Referenced by: '<S321>/D'
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

    /* Computed Parameter: ZeroGain_Gain_p
     * Referenced by: '<S192>/ZeroGain'
     */
    0.0F,

    /* Computed Parameter: Constant1_Value_b
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

    /* Computed Parameter: Gain_Gain_i
     * Referenced by: '<S4>/Gain'
     */
    1.0F,

    /* Computed Parameter: Gain1_Gain_l
     * Referenced by: '<S4>/Gain1'
     */
    1.0F,

    /* Computed Parameter: P0_Value_b
     * Referenced by: '<S441>/P0'
     */
    { 1.42263806F, 0.0F, -0.462845951F, 0.0F, 0.0F, 1.42263806F, 0.0F,
      -0.462845951F, -0.462845951F, 0.0F, 6.15735F, 0.0F, 0.0F, -0.462845951F,
      0.0F, 6.15735F },

    /* Computed Parameter: G_Value_i
     * Referenced by: '<S441>/G'
     */
    { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F,
      0.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: Q_Value_j
     * Referenced by: '<S441>/Q'
     */
    { 0.09F, 0.0F, 0.0F, 0.0F, 0.0F, 0.09F, 0.0F, 0.0F, 0.0F, 0.0F, 0.01F, 0.0F,
      0.0F, 0.0F, 0.0F, 0.01F },

    /* Computed Parameter: H_Value_o
     * Referenced by: '<S441>/H'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: N_Value_g
     * Referenced by: '<S441>/N'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: P0_Value_c
     * Referenced by: '<S321>/P0'
     */
    { 1098.6875F, -30.4245777F, -30.4245777F, 7.22336864F },

    /* Computed Parameter: G_Value_e
     * Referenced by: '<S321>/G'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: Q_Value_jp
     * Referenced by: '<S321>/Q'
     */
    { 1.0F, 0.0F, 0.0F, 0.001F },

    /* Computed Parameter: P0_Value_k
     * Referenced by: '<S375>/P0'
     */
    { 1098.6875F, -30.4245777F, -30.4245777F, 7.22336864F },

    /* Computed Parameter: G_Value_i4
     * Referenced by: '<S375>/G'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: Q_Value_a
     * Referenced by: '<S375>/Q'
     */
    { 1.0F, 0.0F, 0.0F, 0.001F },

    /* Computed Parameter: R_Value_f
     * Referenced by: '<S441>/R'
     */
    { 20.0F, 0.0F, 0.0F, 20.0F },

    /* Computed Parameter: H_Value_k
     * Referenced by: '<S321>/H'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: N_Value_gr
     * Referenced by: '<S321>/N'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: H_Value_h
     * Referenced by: '<S375>/H'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: N_Value_d
     * Referenced by: '<S375>/N'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: R_Value_c
     * Referenced by: '<S321>/R'
     */
    924556.188F,

    /* Computed Parameter: R_Value_g
     * Referenced by: '<S375>/R'
     */
    924556.188F,

    /* Computed Parameter: Gain_Gain_m
     * Referenced by: '<S237>/Gain'
     */
    3435973837U,

    /* Computed Parameter: Gain1_Gain_g
     * Referenced by: '<S237>/Gain1'
     */
    3435973837U,

    /* Computed Parameter: Gain2_Gain_l
     * Referenced by: '<S237>/Gain2'
     */
    3435973837U,

    /* Computed Parameter: Gain3_Gain
     * Referenced by: '<S237>/Gain3'
     */
    3435973837U,

    /* Computed Parameter: Gain4_Gain
     * Referenced by: '<S237>/Gain4'
     */
    3435973837U,

    /* Computed Parameter: Gain5_Gain
     * Referenced by: '<S237>/Gain5'
     */
    3435973837U,

    /* Computed Parameter: Gain6_Gain
     * Referenced by: '<S237>/Gain6'
     */
    3435973837U,

    /* Computed Parameter: Gain7_Gain
     * Referenced by: '<S237>/Gain7'
     */
    3435973837U,

    /* Computed Parameter: Output_InitialCondition
     * Referenced by: '<S432>/Output'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_b
     * Referenced by: '<S514>/Output'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_c
     * Referenced by: '<S225>/Output'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value
     * Referenced by: '<S232>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_l
     * Referenced by: '<S233>/Constant'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_c
     * Referenced by: '<S515>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_a
     * Referenced by: '<S516>/Constant'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_i
     * Referenced by: '<S434>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_c
     * Referenced by: '<S435>/Constant'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_h
     * Referenced by: '<S14>/Output'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_f
     * Referenced by: '<S15>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_ld
     * Referenced by: '<S16>/Constant'
     */
    0U,

    /* Computed Parameter: controlModePosVsOrient_Value
     * Referenced by: '<S1>/controlModePosVsOrient'
     */
    true,

    /* Expression: pInitialization.isSqrtUsed
     * Referenced by: '<S508>/isSqrtUsed'
     */
    false,

    /* Expression: pInitialization.isSqrtUsed
     * Referenced by: '<S305>/isSqrtUsed'
     */
    false,

    /* Expression: pInitialization.isSqrtUsed
     * Referenced by: '<S370>/isSqrtUsed'
     */
    false,

    /* Expression: pInitialization.isSqrtUsed
     * Referenced by: '<S424>/isSqrtUsed'
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

    /* Computed Parameter: Disabletemperaturecompensation_CurrentSetting
     * Referenced by: '<S429>/Disable temperature compensation'
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

    /* Start of '<S402>/Enabled Subsystem' */
    {
      /* Computed Parameter: deltax_Y0
       * Referenced by: '<S428>/deltax'
       */
      0.0F
    }
    ,

    /* End of '<S402>/Enabled Subsystem' */

    /* Start of '<S395>/MeasurementUpdate' */
    {
      /* Computed Parameter: Lykyhatkk1_Y0
       * Referenced by: '<S426>/L*(y[k]-yhat[k|k-1])'
       */
      0.0F
    }
    ,

    /* End of '<S395>/MeasurementUpdate' */

    /* Start of '<S348>/Enabled Subsystem' */
    {
      /* Computed Parameter: deltax_Y0
       * Referenced by: '<S374>/deltax'
       */
      0.0F
    }
    ,

    /* End of '<S348>/Enabled Subsystem' */

    /* Start of '<S341>/MeasurementUpdate' */
    {
      /* Computed Parameter: Lykyhatkk1_Y0
       * Referenced by: '<S372>/L*(y[k]-yhat[k|k-1])'
       */
      0.0F
    }
    ,

    /* End of '<S341>/MeasurementUpdate' */

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
static void flightControlSystem_SystemCore_setup
  (parrot_TCPReceive_flightControlSystem_T *obj);

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
 *    '<S370>/SqrtUsedFcn'
 *    '<S424>/SqrtUsedFcn'
 */
void flightControlSystem_SqrtUsedFcn(const real32_T rtu_u[4], boolean_T
  rtu_isSqrtUsed)
{
  /* local block i/o variables */
  real32_T rtb_P_h[4];
  int32_T i;
  real32_T rtb_P_h_tmp;
  if (rtu_isSqrtUsed) {
    for (i = 0; i < 2; i++) {
      rtb_P_h_tmp = rtu_u[i + 2];
      rtb_P_h[i] = rtb_P_h_tmp * rtu_u[2] + rtu_u[i] * rtu_u[0];
      rtb_P_h[i + 2] = rtb_P_h_tmp * rtu_u[3] + rtu_u[i] * rtu_u[1];
    }
  } else {
    for (i = 0; i < 2; i++) {
      rtb_P_h[i] = rtu_u[i];
      rtb_P_h[i + 2] = rtu_u[i + 2];
    }
  }
}

/*
 * System initialize for enable system:
 *    '<S341>/MeasurementUpdate'
 *    '<S395>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate_Init
  (B_MeasurementUpdate_flightControlSystem_T *localB,
   P_MeasurementUpdate_flightControlSystem_T *localP)
{
  /* SystemInitialize for Product: '<S372>/Product3' incorporates:
   *  Outport: '<S372>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S341>/MeasurementUpdate'
 *    '<S395>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate_Disable
  (B_MeasurementUpdate_flightControlSystem_T *localB,
   DW_MeasurementUpdate_flightControlSystem_T *localDW,
   P_MeasurementUpdate_flightControlSystem_T *localP)
{
  /* Disable for Product: '<S372>/Product3' incorporates:
   *  Outport: '<S372>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Start for enable system:
 *    '<S341>/MeasurementUpdate'
 *    '<S395>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate_Start
  (DW_MeasurementUpdate_flightControlSystem_T *localDW)
{
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S341>/MeasurementUpdate'
 *    '<S395>/MeasurementUpdate'
 */
void flightControlSystem_MeasurementUpdate(boolean_T rtu_Enable, const real32_T
  rtu_Lk[2], real32_T rtu_yk, const real32_T rtu_Ck[2], const real32_T
  rtu_xhatkk1[2], real32_T rtu_Dk, real32_T rtu_uk,
  B_MeasurementUpdate_flightControlSystem_T *localB,
  DW_MeasurementUpdate_flightControlSystem_T *localDW,
  P_MeasurementUpdate_flightControlSystem_T *localP)
{
  real32_T rtb_Sum;

  /* Outputs for Enabled SubSystem: '<S341>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S372>/Enable'
   */
  if (rtu_Enable) {
    localDW->MeasurementUpdate_MODE = true;

    /* Sum: '<S372>/Sum' incorporates:
     *  Product: '<S372>/C[k]*xhat[k|k-1]'
     *  Product: '<S372>/D[k]*u[k]'
     *  Sum: '<S372>/Add1'
     */
    rtb_Sum = rtu_yk - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[1] * rtu_xhatkk1[1])
                        + rtu_Dk * rtu_uk);

    /* Product: '<S372>/Product3' */
    localB->Product3[0] = rtu_Lk[0] * rtb_Sum;
    localB->Product3[1] = rtu_Lk[1] * rtb_Sum;
  } else if (localDW->MeasurementUpdate_MODE) {
    flightControlSystem_MeasurementUpdate_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S341>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S348>/Enabled Subsystem'
 *    '<S402>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem_Init
  (B_EnabledSubsystem_flightControlSystem_T *localB,
   P_EnabledSubsystem_flightControlSystem_T *localP)
{
  /* SystemInitialize for Product: '<S374>/Product2' incorporates:
   *  Outport: '<S374>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
}

/*
 * Disable for enable system:
 *    '<S348>/Enabled Subsystem'
 *    '<S402>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem_Disable
  (B_EnabledSubsystem_flightControlSystem_T *localB,
   DW_EnabledSubsystem_flightControlSystem_T *localDW,
   P_EnabledSubsystem_flightControlSystem_T *localP)
{
  /* Disable for Product: '<S374>/Product2' incorporates:
   *  Outport: '<S374>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S348>/Enabled Subsystem'
 *    '<S402>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem_Start
  (DW_EnabledSubsystem_flightControlSystem_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S348>/Enabled Subsystem'
 *    '<S402>/Enabled Subsystem'
 */
void flightControlSystem_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[2], const real32_T rtu_Ck[2], real32_T rtu_yk, const real32_T
  rtu_xhatkk1[2], B_EnabledSubsystem_flightControlSystem_T *localB,
  DW_EnabledSubsystem_flightControlSystem_T *localDW,
  P_EnabledSubsystem_flightControlSystem_T *localP)
{
  real32_T rtb_Add1_b;

  /* Outputs for Enabled SubSystem: '<S348>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S374>/Enable'
   */
  if (rtu_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S374>/Add1' incorporates:
     *  Product: '<S374>/Product'
     */
    rtb_Add1_b = rtu_yk - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[1] * rtu_xhatkk1
      [1]);

    /* Product: '<S374>/Product2' */
    localB->Product2[0] = rtu_Mk[0] * rtb_Add1_b;
    localB->Product2[1] = rtu_Mk[1] * rtb_Add1_b;
  } else if (localDW->EnabledSubsystem_MODE) {
    flightControlSystem_EnabledSubsystem_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S348>/Enabled Subsystem' */
}

static void flightControlSystem_SystemCore_setup
  (parrot_TCPReceive_flightControlSystem_T *obj)
{
  real_T tmp;
  int32_T i;
  int16_T errorNo;
  uint16_T tmp_0;
  char_T ipaddr[7];
  uint8_T isLittleEndian;
  static const char_T tmp_1[7] = "Server";
  obj->isInitialized = 1;
  obj->isServer_ = 1.0;
  for (i = 0; i < 7; i++) {
    ipaddr[i] = tmp_1[i];
  }

  tmp = rt_roundd_snf(obj->isServer_);
  if (tmp < 65536.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamSetup(26061, 0, &obj->connStream_, tmp_0, 0.0, &errorNo, &ipaddr[0]);
  littleEndianCheck(&isLittleEndian);
}

/* System initialize for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Init
  (B_FlightControlSystem_flightControlSystem_T *localB,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP,
   ZCE_FlightControlSystem_flightControlSystem_T *localZCE)
{
  int32_T i;

  /* InitializeConditions for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_DSTATE[1] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Reshape: '<S255>/Reshapexhat' incorporates:
   *  Delay: '<S251>/Delay2'
   */
  localDW->Delay2_DSTATE = localP->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S255>/MemoryX' */
  localDW->icLoad = true;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteIntegrator: '<S319>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for Delay: '<S321>/MemoryX' */
  localDW->icLoad_b = true;

  /* InitializeConditions for DiscreteFir: '<S253>/FIR_IMUaccel' */
  localDW->FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    localDW->FIR_IMUaccel_states[i] = localP->FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S253>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S375>/MemoryX' */
  localDW->icLoad_i = true;

  /* InitializeConditions for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localP->LPFFcutoff40Hz1_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localP->LPFFcutoff40Hz_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    localDW->IIR_IMUgyro_r_states[i] = localP->IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */

  /* InitializeConditions for Sum: '<S434>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S432>/Output'
   */
  localDW->Output_DSTATE = localP->Output_InitialCondition;

  /* InitializeConditions for Delay: '<S441>/MemoryX' */
  localDW->icLoad_g = true;

  /* InitializeConditions for Sum: '<S515>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S514>/Output'
   */
  localDW->Output_DSTATE_o = localP->Output_InitialCondition_b;

  /* InitializeConditions for DiscreteFilter: '<S440>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    localDW->IIRgyroz_states[i] = localP->IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S440>/IIRgyroz' */

  /* InitializeConditions for Sum: '<S237>/Add' incorporates:
   *  Delay: '<S237>/Delay'
   */
  localDW->Delay_DSTATE_j = localP->Delay_InitialCondition_l;

  /* InitializeConditions for Sum: '<S237>/Add1' incorporates:
   *  Delay: '<S237>/Delay1'
   */
  localDW->Delay1_DSTATE_l = localP->Delay1_InitialCondition_g;

  /* InitializeConditions for Sum: '<S237>/Add2' incorporates:
   *  Delay: '<S237>/Delay2'
   */
  localDW->Delay2_DSTATE_o = localP->Delay2_InitialCondition_i;

  /* InitializeConditions for Sum: '<S237>/Add3' incorporates:
   *  Delay: '<S237>/Delay3'
   */
  localDW->Delay3_DSTATE = localP->Delay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S448>/UD' incorporates:
   *  Sum: '<S448>/Diff'
   */
  localDW->UD_DSTATE[0] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S436>/Delay' */
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[0] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S201>/Integrator' */
  localDW->Integrator_DSTATE[0] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_n;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  localDW->Integrator_DSTATE_d[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
  localDW->Filter_DSTATE[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* InitializeConditions for UnitDelay: '<S448>/UD' incorporates:
   *  Sum: '<S448>/Diff'
   */
  localDW->UD_DSTATE[1] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S436>/Delay' */
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[1] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S201>/Integrator' */
  localDW->Integrator_DSTATE[1] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_n;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  localDW->Integrator_DSTATE_d[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
  localDW->Filter_DSTATE[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* InitializeConditions for Sum: '<S15>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_ar = localP->Output_InitialCondition_h;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_o = localP->DiscreteTimeIntegrator_IC_g;
  localDW->DiscreteTimeIntegrator_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_i = localP->DiscreteTimeIntegrator_IC_h;

  /* InitializeConditions for Sum: '<S232>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S225>/Output'
   */
  localDW->Output_DSTATE_a = localP->Output_InitialCondition_c;

  /* InitializeConditions for Sum: '<S229>/Add' incorporates:
   *  Delay: '<S229>/Delay One Step'
   */
  localDW->DelayOneStep_DSTATE = localP->DelayOneStep_InitialCondition;

  /* SystemInitialize for Merge: '<S4>/Merge' */
  localB->Merge = localP->Merge_InitialOutput;

  /* SystemInitialize for Triggered SubSystem: '<S240>/Triggered Subsystem' */
  /* SystemInitialize for SignalConversion generated from: '<S250>/X' incorporates:
   *  Outport: '<S250>/X'
   */
  localB->BufferToMakeInportVirtual_InsertedFor_X_at_inport_0 = localP->X_Y0;

  /* SystemInitialize for SignalConversion generated from: '<S250>/Y' incorporates:
   *  Outport: '<S250>/Y'
   */
  localB->BufferToMakeInportVirtual_InsertedFor_Y_at_inport_0 = localP->Y_Y0;
  localZCE->TriggeredSubsystem_Trig_ZCE_k = ZERO_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S240>/Triggered Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S277>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S307>/Product3' incorporates:
   *  Outport: '<S307>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S277>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S283>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S309>/Product2' incorporates:
   *  Outport: '<S309>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S283>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S277>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S307>/Product3' incorporates:
   *  Outport: '<S307>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[1] = localP->Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S277>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S283>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S309>/Product2' incorporates:
   *  Outport: '<S309>/deltax'
   */
  localB->Product2[1] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S283>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S341>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Init(&localB->MeasurementUpdate_k,
    &localP->MeasurementUpdate_k);

  /* End of SystemInitialize for SubSystem: '<S341>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S348>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Init(&localB->EnabledSubsystem_j,
    &localP->EnabledSubsystem_j);

  /* End of SystemInitialize for SubSystem: '<S348>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S395>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Init(&localB->MeasurementUpdate_i,
    &localP->MeasurementUpdate_i);

  /* End of SystemInitialize for SubSystem: '<S395>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S402>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Init(&localB->EnabledSubsystem_h,
    &localP->EnabledSubsystem_h);

  /* End of SystemInitialize for SubSystem: '<S402>/Enabled Subsystem' */

  /* SystemInitialize for Triggered SubSystem: '<S429>/Triggered Subsystem' */
  /* SystemInitialize for Outport: '<S433>/Out1' incorporates:
   *  Inport: '<S433>/In1'
   */
  localB->In1 = localP->Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S429>/Triggered Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S510>/Product3' incorporates:
   *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_c[0] = localP->Lykyhatkk1_Y0_a;

  /* End of SystemInitialize for SubSystem: '<S479>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S512>/Product2' incorporates:
   *  Outport: '<S512>/deltax'
   */
  localB->Product2_c[0] = localP->deltax_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S486>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S510>/Product3' incorporates:
   *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_c[1] = localP->Lykyhatkk1_Y0_a;

  /* End of SystemInitialize for SubSystem: '<S479>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S512>/Product2' incorporates:
   *  Outport: '<S512>/deltax'
   */
  localB->Product2_c[1] = localP->deltax_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S486>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S510>/Product3' incorporates:
   *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_c[2] = localP->Lykyhatkk1_Y0_a;

  /* End of SystemInitialize for SubSystem: '<S479>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S512>/Product2' incorporates:
   *  Outport: '<S512>/deltax'
   */
  localB->Product2_c[2] = localP->deltax_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S486>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S510>/Product3' incorporates:
   *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3_c[3] = localP->Lykyhatkk1_Y0_a;

  /* End of SystemInitialize for SubSystem: '<S479>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S512>/Product2' incorporates:
   *  Outport: '<S512>/deltax'
   */
  localB->Product2_c[3] = localP->deltax_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S486>/Enabled Subsystem' */
}

/* System reset for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Reset
  (DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP,
   ZCE_FlightControlSystem_flightControlSystem_T *localZCE)
{
  int32_T i;

  /* InitializeConditions for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_DSTATE[1] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Reshape: '<S255>/Reshapexhat' incorporates:
   *  Delay: '<S251>/Delay2'
   */
  localDW->Delay2_DSTATE = localP->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S255>/MemoryX' */
  localDW->icLoad = true;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localP->sonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteIntegrator: '<S319>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for Delay: '<S321>/MemoryX' */
  localDW->icLoad_b = true;

  /* InitializeConditions for DiscreteFir: '<S253>/FIR_IMUaccel' */
  localDW->FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    localDW->FIR_IMUaccel_states[i] = localP->FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S253>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S375>/MemoryX' */
  localDW->icLoad_i = true;

  /* InitializeConditions for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localP->LPFFcutoff40Hz1_InitialStates;

  /* InitializeConditions for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localP->LPFFcutoff40Hz_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    localDW->IIR_IMUgyro_r_states[i] = localP->IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */

  /* InitializeConditions for Sum: '<S434>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S432>/Output'
   */
  localDW->Output_DSTATE = localP->Output_InitialCondition;

  /* InitializeConditions for Delay: '<S441>/MemoryX' */
  localDW->icLoad_g = true;

  /* InitializeConditions for Sum: '<S515>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S514>/Output'
   */
  localDW->Output_DSTATE_o = localP->Output_InitialCondition_b;

  /* InitializeConditions for DiscreteFilter: '<S440>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    localDW->IIRgyroz_states[i] = localP->IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S440>/IIRgyroz' */

  /* InitializeConditions for Sum: '<S237>/Add' incorporates:
   *  Delay: '<S237>/Delay'
   */
  localDW->Delay_DSTATE_j = localP->Delay_InitialCondition_l;

  /* InitializeConditions for Sum: '<S237>/Add1' incorporates:
   *  Delay: '<S237>/Delay1'
   */
  localDW->Delay1_DSTATE_l = localP->Delay1_InitialCondition_g;

  /* InitializeConditions for Sum: '<S237>/Add2' incorporates:
   *  Delay: '<S237>/Delay2'
   */
  localDW->Delay2_DSTATE_o = localP->Delay2_InitialCondition_i;

  /* InitializeConditions for Sum: '<S237>/Add3' incorporates:
   *  Delay: '<S237>/Delay3'
   */
  localDW->Delay3_DSTATE = localP->Delay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S448>/UD' incorporates:
   *  Sum: '<S448>/Diff'
   */
  localDW->UD_DSTATE[0] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S436>/Delay' */
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[0] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S201>/Integrator' */
  localDW->Integrator_DSTATE[0] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_n;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  localDW->Integrator_DSTATE_d[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
  localDW->Filter_DSTATE[0] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* InitializeConditions for UnitDelay: '<S448>/UD' incorporates:
   *  Sum: '<S448>/Diff'
   */
  localDW->UD_DSTATE[1] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S436>/Delay' */
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[1] = localP->Delay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S201>/Integrator' */
  localDW->Integrator_DSTATE[1] =
    localP->Velocitycontroller_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1] =
    localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_n;

  /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
  localDW->Integrator_DSTATE_d[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForIntegrator;

  /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
  localDW->Filter_DSTATE[1] =
    localP->Angularvelocitycontrolloop_InitialConditionForFilter;

  /* InitializeConditions for Sum: '<S15>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_ar = localP->Output_InitialCondition_h;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_o = localP->DiscreteTimeIntegrator_IC_g;
  localDW->DiscreteTimeIntegrator_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_i = localP->DiscreteTimeIntegrator_IC_h;

  /* InitializeConditions for Sum: '<S232>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S225>/Output'
   */
  localDW->Output_DSTATE_a = localP->Output_InitialCondition_c;

  /* InitializeConditions for Sum: '<S229>/Add' incorporates:
   *  Delay: '<S229>/Delay One Step'
   */
  localDW->DelayOneStep_DSTATE = localP->DelayOneStep_InitialCondition;

  /* SystemReset for Triggered SubSystem: '<S240>/Triggered Subsystem' */
  localZCE->TriggeredSubsystem_Trig_ZCE_k = ZERO_ZCSIG;

  /* End of SystemReset for SubSystem: '<S240>/Triggered Subsystem' */
}

/* Disable for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Disable
  (B_FlightControlSystem_flightControlSystem_T *localB,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP)
{
  /* Disable for Enabled SubSystem: '<S283>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_MODE_g) {
    /* Disable for Product: '<S309>/Product2' incorporates:
     *  Outport: '<S309>/deltax'
     */
    localB->Product2[0] = localP->deltax_Y0;
    localB->Product2[1] = localP->deltax_Y0;
    localDW->EnabledSubsystem_MODE_g = false;
  }

  /* End of Disable for SubSystem: '<S283>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S348>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_j.EnabledSubsystem_MODE) {
    flightControlSystem_EnabledSubsystem_Disable(&localB->EnabledSubsystem_j,
      &localDW->EnabledSubsystem_j, &localP->EnabledSubsystem_j);
  }

  /* End of Disable for SubSystem: '<S348>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S402>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_h.EnabledSubsystem_MODE) {
    flightControlSystem_EnabledSubsystem_Disable(&localB->EnabledSubsystem_h,
      &localDW->EnabledSubsystem_h, &localP->EnabledSubsystem_h);
  }

  /* End of Disable for SubSystem: '<S402>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  if (localDW->EnabledSubsystem_MODE) {
    /* Disable for Product: '<S512>/Product2' incorporates:
     *  Outport: '<S512>/deltax'
     */
    localB->Product2_c[0] = localP->deltax_Y0_e;
    localB->Product2_c[1] = localP->deltax_Y0_e;
    localB->Product2_c[2] = localP->deltax_Y0_e;
    localB->Product2_c[3] = localP->deltax_Y0_e;
    localDW->EnabledSubsystem_MODE = false;
  }

  /* End of Disable for SubSystem: '<S486>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  if (localDW->MeasurementUpdate_MODE) {
    /* Disable for Product: '<S510>/Product3' incorporates:
     *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3_c[0] = localP->Lykyhatkk1_Y0_a;
    localB->Product3_c[1] = localP->Lykyhatkk1_Y0_a;
    localB->Product3_c[2] = localP->Lykyhatkk1_Y0_a;
    localB->Product3_c[3] = localP->Lykyhatkk1_Y0_a;
    localDW->MeasurementUpdate_MODE = false;
  }

  /* End of Disable for SubSystem: '<S479>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S395>/MeasurementUpdate' */
  if (localDW->MeasurementUpdate_i.MeasurementUpdate_MODE) {
    flightControlSystem_MeasurementUpdate_Disable(&localB->MeasurementUpdate_i,
      &localDW->MeasurementUpdate_i, &localP->MeasurementUpdate_i);
  }

  /* End of Disable for SubSystem: '<S395>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S341>/MeasurementUpdate' */
  if (localDW->MeasurementUpdate_k.MeasurementUpdate_MODE) {
    flightControlSystem_MeasurementUpdate_Disable(&localB->MeasurementUpdate_k,
      &localDW->MeasurementUpdate_k, &localP->MeasurementUpdate_k);
  }

  /* End of Disable for SubSystem: '<S341>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S277>/MeasurementUpdate' */
  if (localDW->MeasurementUpdate_MODE_n) {
    /* Disable for Product: '<S307>/Product3' incorporates:
     *  Outport: '<S307>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3[0] = localP->Lykyhatkk1_Y0;
    localB->Product3[1] = localP->Lykyhatkk1_Y0;
    localDW->MeasurementUpdate_MODE_n = false;
  }

  /* End of Disable for SubSystem: '<S277>/MeasurementUpdate' */
}

/* Start for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Start
  (DW_FlightControlSystem_flightControlSystem_T *localDW)
{
  /* Start for Enabled SubSystem: '<S283>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE_g = false;

  /* End of Start for SubSystem: '<S283>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S348>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Start(&localDW->EnabledSubsystem_j);

  /* End of Start for SubSystem: '<S348>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S402>/Enabled Subsystem' */
  flightControlSystem_EnabledSubsystem_Start(&localDW->EnabledSubsystem_h);

  /* End of Start for SubSystem: '<S402>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S486>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S486>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S479>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE = false;

  /* End of Start for SubSystem: '<S479>/MeasurementUpdate' */

  /* Start for MATLABSystem: '<S238>/TCP//IP Receive' */
  localDW->obj.isInitialized = 0;
  localDW->objisempty = true;
  flightControlSystem_SystemCore_setup(&localDW->obj);

  /* Start for Enabled SubSystem: '<S395>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Start(&localDW->MeasurementUpdate_i);

  /* End of Start for SubSystem: '<S395>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S341>/MeasurementUpdate' */
  flightControlSystem_MeasurementUpdate_Start(&localDW->MeasurementUpdate_k);

  /* End of Start for SubSystem: '<S341>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S277>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE_n = false;

  /* End of Start for SubSystem: '<S277>/MeasurementUpdate' */
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
  real32_T rtb_Reshapey_g;
  real32_T rtb_Reshapey_a;
  real32_T rtb_Reshapeu_c;
  real32_T rtb_Reshapeu_o;
  int8_T rtb_TCPIPReceive_o2;
  boolean_T rtb_DataTypeConversionEnable_c;
  boolean_T rtb_DataTypeConversionEnable_f;
  boolean_T rtb_Compare_ot;
  real32_T rtb_MathFunction_tmp;
  int16_T errorNo;
  uint16_T tmp;
  uint8_T b_varargout_1;
  boolean_T rtb_Compare_a;
  boolean_T rtb_Compare_fl;

  /* DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  if (localP->controlModePosVsOrient_Value &&
      (localDW->SimplyIntegrateVelocity_PrevResetState <= 0)) {
    localDW->SimplyIntegrateVelocity_DSTATE[0] =
      localP->SimplyIntegrateVelocity_IC;
    localDW->SimplyIntegrateVelocity_DSTATE[1] =
      localP->SimplyIntegrateVelocity_IC;
  }

  /* RelationalOperator: '<S258>/Compare' incorporates:
   *  Constant: '<S258>/Constant'
   *  Delay: '<S251>/Delay2'
   */
  localB->Compare = (localDW->Delay2_DSTATE > localP->outlierBelowFloor_const);

  /* Delay: '<S255>/MemoryX' incorporates:
   *  Constant: '<S255>/X0'
   *  DataTypeConversion: '<S255>/DataTypeConversionReset'
   *  Reshape: '<S255>/ReshapeX0'
   */
  localDW->icLoad = (localB->Compare || localDW->icLoad);
  if (localDW->icLoad) {
    localDW->MemoryX_DSTATE[0] = localP->X0_Value[0];
    localDW->MemoryX_DSTATE[1] = localP->X0_Value[1];
  }

  /* Gain: '<S251>/invertzaxisGain' */
  localB->invertzaxisGain = (real_T)localP->invertzaxisGain_Gain *
    rtu_Sensors->HALSensors.HAL_ultrasound_SI.altitude;

  /* DiscreteFilter: '<S256>/pressureFilter_IIR' incorporates:
   *  DataTypeConversion: '<S253>/Data Type Conversion'
   *  Gain: '<S251>/prsToAltGain'
   *  Sum: '<S253>/Sum2'
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

  /* DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_tmp = (((localB->invertzaxisGain -
    localDW->sonarFilter_IIR_states[0] * localP->sonarFilter_IIR_DenCoef[1]) -
    localDW->sonarFilter_IIR_states[1] * localP->sonarFilter_IIR_DenCoef[2]) -
    localDW->sonarFilter_IIR_states[2] * localP->sonarFilter_IIR_DenCoef[3]) /
    localP->sonarFilter_IIR_DenCoef[0];

  /* Saturate: '<S256>/SaturationSonar' */
  if (localB->invertzaxisGain > -rtP_Sensors.altSensorMin) {
    localB->unnamed_idx_0_tmp = -rtP_Sensors.altSensorMin;
  } else if (localB->invertzaxisGain < localP->SaturationSonar_LowerSat) {
    localB->unnamed_idx_0_tmp = localP->SaturationSonar_LowerSat;
  } else {
    localB->unnamed_idx_0_tmp = localB->invertzaxisGain;
  }

  /* End of Saturate: '<S256>/SaturationSonar' */

  /* Logic: '<S256>/nicemeasurementor newupdateneeded' incorporates:
   *  Abs: '<S256>/Absestdiff'
   *  Abs: '<S256>/Absestdiff1'
   *  Abs: '<S256>/Absestdiff2'
   *  Constant: '<S310>/Constant'
   *  Constant: '<S311>/Constant'
   *  Constant: '<S312>/Constant'
   *  Constant: '<S313>/Constant'
   *  Delay: '<S251>/Delay2'
   *  DiscreteFilter: '<S256>/pressureFilter_IIR'
   *  DiscreteFilter: '<S256>/sonarFilter_IIR'
   *  Logic: '<S256>/NOT'
   *  Logic: '<S256>/findingoutliers'
   *  Logic: '<S256>/newupdateneeded'
   *  RelationalOperator: '<S310>/Compare'
   *  RelationalOperator: '<S311>/Compare'
   *  RelationalOperator: '<S312>/Compare'
   *  RelationalOperator: '<S313>/Compare'
   *  Sum: '<S256>/Add'
   *  Sum: '<S256>/Add1'
   *  Sum: '<S256>/Add2'
   */
  localB->nicemeasurementornewupdateneeded = ((fabs(localDW->Delay2_DSTATE -
    localB->unnamed_idx_0_tmp) <= localP->outlierJump_const) &&
    (localB->invertzaxisGain < -rtP_Sensors.altSensorMin) && ((!(fabs
    (localB->numAccum - localDW->Delay2_DSTATE) >=
    localP->currentEstimateVeryOffFromPressure_const)) || (!(fabs
    ((((localP->sonarFilter_IIR_NumCoef[0] * localDW->sonarFilter_IIR_tmp +
        localDW->sonarFilter_IIR_states[0] * localP->sonarFilter_IIR_NumCoef[1])
       + localDW->sonarFilter_IIR_states[1] * localP->sonarFilter_IIR_NumCoef[2])
      + localDW->sonarFilter_IIR_states[2] * localP->sonarFilter_IIR_NumCoef[3])
     - localDW->Delay2_DSTATE) >= localP->currentStateVeryOffsonarflt_const))));

  /* Outputs for Enabled SubSystem: '<S283>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S309>/Enable'
   */
  /* DataTypeConversion: '<S255>/DataTypeConversionEnable' */
  if (localB->nicemeasurementornewupdateneeded) {
    localDW->EnabledSubsystem_MODE_g = true;

    /* Sum: '<S309>/Add1' incorporates:
     *  Constant: '<S255>/C'
     *  Delay: '<S255>/MemoryX'
     *  Product: '<S309>/Product'
     *  Reshape: '<S255>/Reshapey'
     */
    localB->Switch1 = localB->invertzaxisGain - (localP->C_Value[0] *
      localDW->MemoryX_DSTATE[0] + localP->C_Value[1] * localDW->MemoryX_DSTATE
      [1]);

    /* Product: '<S309>/Product2' incorporates:
     *  Constant: '<S259>/KalmanGainM'
     *  DataTypeConversion: '<S300>/Conversion'
     */
    localB->Product2[0] = localP->KalmanGainM_Value[0] * localB->Switch1;
    localB->Product2[1] = localP->KalmanGainM_Value[1] * localB->Switch1;
  } else if (localDW->EnabledSubsystem_MODE_g) {
    /* Disable for Product: '<S309>/Product2' incorporates:
     *  Outport: '<S309>/deltax'
     */
    localB->Product2[0] = localP->deltax_Y0;
    localB->Product2[1] = localP->deltax_Y0;
    localDW->EnabledSubsystem_MODE_g = false;
  }

  /* End of Outputs for SubSystem: '<S283>/Enabled Subsystem' */

  /* Reshape: '<S255>/Reshapexhat' incorporates:
   *  Delay: '<S255>/MemoryX'
   *  Sum: '<S283>/Add'
   */
  localDW->Delay2_DSTATE = localB->Product2[0] + localDW->MemoryX_DSTATE[0];

  /* Sum: '<S283>/Add' incorporates:
   *  Delay: '<S255>/MemoryX'
   */
  localB->Switch1 = localB->Product2[1] + localDW->MemoryX_DSTATE[1];

  /* Delay: '<S321>/MemoryX' incorporates:
   *  Constant: '<S321>/X0'
   *  Reshape: '<S321>/ReshapeX0'
   */
  if (localDW->icLoad_b) {
    localDW->MemoryX_DSTATE_c[0] = localP->X0_Value_h[0];
    localDW->MemoryX_DSTATE_c[1] = localP->X0_Value_h[1];
  }

  /* Delay: '<S321>/MemoryX' */
  localB->MemoryX_d[0] = localDW->MemoryX_DSTATE_c[0];
  localB->MemoryX_d[1] = localDW->MemoryX_DSTATE_c[1];

  /* Bias: '<S253>/Assuming that the  preflight calibration was done at level orientation' incorporates:
   *  DataTypeConversion: '<S253>/Data Type Conversion'
   */
  for (localB->i = 0; localB->i < 6; localB->i++) {
    localB->Sum1_k[localB->i] = rtu_Sensors->SensorCalibration[localB->i] +
      localP->
      Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bi[localB->i];
  }

  /* End of Bias: '<S253>/Assuming that the  preflight calibration was done at level orientation' */

  /* Gain: '<S253>/inverseIMU_gain' incorporates:
   *  Sum: '<S253>/Sum1'
   */
  localB->inverseIMU_gain[0] = (rtu_Sensors->HALSensors.HAL_acc_SI.x -
    localB->Sum1_k[0]) * localP->inverseIMU_gain_Gain[0];
  localB->inverseIMU_gain[1] = (rtu_Sensors->HALSensors.HAL_acc_SI.y -
    localB->Sum1_k[1]) * localP->inverseIMU_gain_Gain[1];
  localB->inverseIMU_gain[2] = (rtu_Sensors->HALSensors.HAL_acc_SI.z -
    localB->Sum1_k[2]) * localP->inverseIMU_gain_Gain[2];
  localB->inverseIMU_gain[3] = (rtu_Sensors->HALSensors.HAL_gyro_SI.x -
    localB->Sum1_k[3]) * localP->inverseIMU_gain_Gain[3];
  localB->inverseIMU_gain[4] = (rtu_Sensors->HALSensors.HAL_gyro_SI.y -
    localB->Sum1_k[4]) * localP->inverseIMU_gain_Gain[4];
  localB->inverseIMU_gain[5] = (rtu_Sensors->HALSensors.HAL_gyro_SI.z -
    localB->Sum1_k[5]) * localP->inverseIMU_gain_Gain[5];

  /* DiscreteFir: '<S253>/FIR_IMUaccel' */
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

  /* Gain: '<S317>/Gain2' */
  localB->Saturation_i = localP->Gain2_Gain * localB->FIR_IMUaccel[0];

  /* Trigonometry: '<S317>/Trigonometric Function1' */
  if (localB->Saturation_i > 1.0F) {
    localB->Saturation_i = 1.0F;
  } else if (localB->Saturation_i < -1.0F) {
    localB->Saturation_i = -1.0F;
  }

  /* Trigonometry: '<S317>/Trigonometric Function1' */
  localB->TrigonometricFunction1 = (real32_T)asin(localB->Saturation_i);

  /* Reshape: '<S321>/Reshapey' */
  rtb_Reshapey_g = localB->TrigonometricFunction1;

  /* Math: '<S320>/Math Function' incorporates:
   *  Constant: '<S320>/Constant'
   *  DataTypeConversion: '<S320>/Data Type Conversion2'
   *  DiscreteFir: '<S253>/FIR_IMUaccel'
   */
  localB->rtb_Subtract_p_idx_1 = (real32_T)floor(localP->Constant_Value_k);
  if ((localB->FIR_IMUaccel[0] < 0.0F) && (localP->Constant_Value_k >
       localB->rtb_Subtract_p_idx_1)) {
    localB->r = -rt_powf_snf(-localB->FIR_IMUaccel[0], localP->Constant_Value_k);
  } else {
    localB->r = rt_powf_snf(localB->FIR_IMUaccel[0], localP->Constant_Value_k);
  }

  if ((localB->FIR_IMUaccel[1] < 0.0F) && (localP->Constant_Value_k >
       localB->rtb_Subtract_p_idx_1)) {
    localB->rtb_Subtract_p_idx_2 = -rt_powf_snf(-localB->FIR_IMUaccel[1],
      localP->Constant_Value_k);
  } else {
    localB->rtb_Subtract_p_idx_2 = rt_powf_snf(localB->FIR_IMUaccel[1],
      localP->Constant_Value_k);
  }

  if ((localB->acc1 < 0.0F) && (localP->Constant_Value_k >
       localB->rtb_Subtract_p_idx_1)) {
    localB->Gain_b = -rt_powf_snf(-localB->acc1, localP->Constant_Value_k);
  } else {
    localB->Gain_b = rt_powf_snf(localB->acc1, localP->Constant_Value_k);
  }

  /* End of Math: '<S320>/Math Function' */

  /* Sqrt: '<S320>/Sqrt' incorporates:
   *  Sum: '<S320>/Sum of Elements'
   */
  localB->Saturation_i = (real32_T)sqrt((localB->r +
    localB->rtb_Subtract_p_idx_2) + localB->Gain_b);

  /* Logic: '<S252>/Logical Operator' incorporates:
   *  Constant: '<S315>/Constant'
   *  Constant: '<S316>/Constant'
   *  RelationalOperator: '<S315>/Compare'
   *  RelationalOperator: '<S316>/Compare'
   */
  localB->LogicalOperator = (int16_T)((localB->Saturation_i >
    localP->CompareToConstant_const) && (localB->Saturation_i <
    localP->CompareToConstant1_const));

  /* DataTypeConversion: '<S321>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_c = (localB->LogicalOperator != 0);

  /* DataTypeConversion: '<S365>/Conversion' incorporates:
   *  Constant: '<S322>/KalmanGainM'
   */
  localB->Conversion_fg[0] = (real32_T)localP->KalmanGainM_Value_e[0];
  localB->Conversion_fg[1] = (real32_T)localP->KalmanGainM_Value_e[1];

  /* Outputs for Enabled SubSystem: '<S348>/Enabled Subsystem' */
  /* Constant: '<S321>/C' */
  flightControlSystem_EnabledSubsystem(rtb_DataTypeConversionEnable_c,
    localB->Conversion_fg, localP->C_Value_d, rtb_Reshapey_g, localB->MemoryX_d,
    &localB->EnabledSubsystem_j, &localDW->EnabledSubsystem_j,
    &localP->EnabledSubsystem_j);

  /* End of Outputs for SubSystem: '<S348>/Enabled Subsystem' */

  /* Delay: '<S375>/MemoryX' incorporates:
   *  Constant: '<S375>/X0'
   *  Reshape: '<S375>/ReshapeX0'
   */
  if (localDW->icLoad_i) {
    localDW->MemoryX_DSTATE_d[0] = localP->X0_Value_f[0];
    localDW->MemoryX_DSTATE_d[1] = localP->X0_Value_f[1];
  }

  /* Delay: '<S375>/MemoryX' */
  localB->MemoryX_p[0] = localDW->MemoryX_DSTATE_d[0];
  localB->MemoryX_p[1] = localDW->MemoryX_DSTATE_d[1];

  /* Trigonometry: '<S318>/Trigonometric Function' incorporates:
   *  DiscreteFir: '<S253>/FIR_IMUaccel'
   *  Product: '<S318>/Divide'
   */
  localB->TrigonometricFunction = (real32_T)atan(localB->FIR_IMUaccel[1] /
    localB->acc1);

  /* Reshape: '<S375>/Reshapey' */
  rtb_Reshapey_a = localB->TrigonometricFunction;

  /* DataTypeConversion: '<S375>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_f = (localB->LogicalOperator != 0);

  /* DataTypeConversion: '<S419>/Conversion' incorporates:
   *  Constant: '<S376>/KalmanGainM'
   */
  localB->Conversion_d[0] = (real32_T)localP->KalmanGainM_Value_a[0];
  localB->Conversion_d[1] = (real32_T)localP->KalmanGainM_Value_a[1];

  /* Outputs for Enabled SubSystem: '<S402>/Enabled Subsystem' */
  /* Constant: '<S375>/C' */
  flightControlSystem_EnabledSubsystem(rtb_DataTypeConversionEnable_f,
    localB->Conversion_d, localP->C_Value_k, rtb_Reshapey_a, localB->MemoryX_p,
    &localB->EnabledSubsystem_h, &localDW->EnabledSubsystem_h,
    &localP->EnabledSubsystem_h);

  /* End of Outputs for SubSystem: '<S402>/Enabled Subsystem' */

  /* DataTypeConversion: '<S252>/Data Type Conversion3' incorporates:
   *  Sum: '<S348>/Add'
   *  Sum: '<S402>/Add'
   */
  localB->rtb_DataTypeConversion3_idx_1 = localB->EnabledSubsystem_j.Product2[0]
    + localB->MemoryX_d[0];
  localB->Saturation_i = localB->EnabledSubsystem_h.Product2[0] +
    localB->MemoryX_p[0];

  /* DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_tmp = (localB->inverseIMU_gain[3] -
    localP->LPFFcutoff40Hz1_DenCoef[1] * localDW->LPFFcutoff40Hz1_states) /
    localP->LPFFcutoff40Hz1_DenCoef[0];

  /* DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localB->p = localP->LPFFcutoff40Hz1_NumCoef[0] * localDW->LPFFcutoff40Hz1_tmp
    + localP->LPFFcutoff40Hz1_NumCoef[1] * localDW->LPFFcutoff40Hz1_states;

  /* DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_tmp = (localB->inverseIMU_gain[4] -
    localP->LPFFcutoff40Hz_DenCoef[1] * localDW->LPFFcutoff40Hz_states) /
    localP->LPFFcutoff40Hz_DenCoef[0];

  /* DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localB->q = localP->LPFFcutoff40Hz_NumCoef[0] * localDW->LPFFcutoff40Hz_tmp +
    localP->LPFFcutoff40Hz_NumCoef[1] * localDW->LPFFcutoff40Hz_states;

  /* DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
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

  /* RelationalOperator: '<S431>/Compare' incorporates:
   *  Constant: '<S431>/Constant'
   *  UnitDelay: '<S432>/Output'
   */
  rtb_Compare_fl = (localDW->Output_DSTATE == localP->CompareToConstant_const_j);

  /* Outputs for Triggered SubSystem: '<S429>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S433>/Trigger'
   */
  if (((localZCE->TriggeredSubsystem_Trig_ZCE == 1) != (int32_T)rtb_Compare_fl) &&
      (localZCE->TriggeredSubsystem_Trig_ZCE != 3)) {
    /* Inport: '<S433>/In1' */
    localB->In1 = rtu_Sensors->HALSensors.HAL_gyro_SI.temperature;
  }

  localZCE->TriggeredSubsystem_Trig_ZCE = rtb_Compare_fl;

  /* End of Outputs for SubSystem: '<S429>/Triggered Subsystem' */

  /* ManualSwitch: '<S429>/Disable temperature compensation' incorporates:
   *  Constant: '<S429>/Constant'
   *  Gain: '<S429>/Gain'
   *  Sum: '<S429>/Subtract'
   */
  if (localP->Disabletemperaturecompensation_CurrentSetting == 1) {
    localB->unnamed_idx_0_tmp = (rtu_Sensors->HALSensors.HAL_gyro_SI.temperature
      - localB->In1) * localP->Gain_Gain_k;
  } else {
    localB->unnamed_idx_0_tmp = localP->Constant_Value;
  }

  /* End of ManualSwitch: '<S429>/Disable temperature compensation' */

  /* Sum: '<S429>/Subtract1' incorporates:
   *  DataTypeConversion: '<S429>/Data Type Conversion1'
   *  DiscreteFilter: '<S253>/IIR_IMUgyro_r'
   */
  localB->r = localB->denAccum - (real32_T)localB->unnamed_idx_0_tmp;

  /* Sum: '<S252>/Subtract' incorporates:
   *  Constant: '<S319>/Constant'
   *  Sum: '<S348>/Add'
   *  Sum: '<S402>/Add'
   */
  localB->rtb_Subtract_p_idx_0 = localB->p -
    (localB->EnabledSubsystem_h.Product2[1] + localB->MemoryX_p[1]);
  localB->rtb_Subtract_p_idx_1 = localB->q -
    (localB->EnabledSubsystem_j.Product2[1] + localB->MemoryX_d[1]);
  localB->rtb_Subtract_p_idx_2 = localB->r - localP->Constant_Value_i;

  /* Delay: '<S441>/MemoryX' incorporates:
   *  Constant: '<S441>/X0'
   *  Reshape: '<S441>/ReshapeX0'
   */
  if (localDW->icLoad_g) {
    localDW->MemoryX_DSTATE_g[0] = localP->X0_Value_j[0];
    localDW->MemoryX_DSTATE_g[1] = localP->X0_Value_j[1];
    localDW->MemoryX_DSTATE_g[2] = localP->X0_Value_j[2];
    localDW->MemoryX_DSTATE_g[3] = localP->X0_Value_j[3];
  }

  /* Switch: '<S442>/Switch' incorporates:
   *  Constant: '<S513>/Constant'
   *  Gain: '<S442>/opticalFlowErrorCorrect'
   *  Product: '<S442>/ '
   *  RelationalOperator: '<S513>/Compare'
   *  UnitDelay: '<S514>/Output'
   */
  if (localDW->Output_DSTATE_o < localP->CompareToConstant_const_d) {
    localB->Switch_a[0] = rtu_Sensors->VisionSensors.opticalFlow_data[0];
    localB->Switch_a[1] = rtu_Sensors->VisionSensors.opticalFlow_data[1];
    localB->Switch_a[2] = rtu_Sensors->VisionSensors.opticalFlow_data[2];
  } else {
    /* Gain: '<S442>/Gain' incorporates:
     *  DataTypeConversion: '<S251>/Data Type Conversion'
     *  Reshape: '<S255>/Reshapexhat'
     */
    localB->Gain_b = localP->Gain_Gain_j * (real32_T)localDW->Delay2_DSTATE;
    localB->Switch_a[0] = rtu_Sensors->VisionSensors.opticalFlow_data[0] *
      localB->Gain_b * localP->opticalFlowErrorCorrect_Gain;
    localB->Switch_a[1] = rtu_Sensors->VisionSensors.opticalFlow_data[1] *
      localB->Gain_b * localP->opticalFlowErrorCorrect_Gain;
    localB->Switch_a[2] = rtu_Sensors->VisionSensors.opticalFlow_data[2] *
      localB->Gain_b * localP->opticalFlowErrorCorrect_Gain;
  }

  /* End of Switch: '<S442>/Switch' */

  /* Abs: '<S439>/Abs' incorporates:
   *  DataTypeConversion: '<S251>/Data Type Conversion'
   *  Reshape: '<S255>/Reshapexhat'
   */
  localB->Gain_b = (real32_T)fabs((real32_T)localDW->Delay2_DSTATE);

  /* DataTypeConversion: '<S439>/Data Type Conversion' incorporates:
   *  Gain: '<S439>/Gain1'
   *  Product: '<S439>/prod'
   */
  localB->Integrator_n[0] = localB->Gain_b * localB->rtb_Subtract_p_idx_1 *
    localP->Gain1_Gain;
  localB->Integrator_n[1] = localB->Gain_b * localB->rtb_Subtract_p_idx_0;

  /* SignalConversion generated from: '<S440>/IIRgyroz' */
  localB->Add_j[0] = localB->p;
  localB->Add_j[1] = localB->q;
  for (localB->i = 0; localB->i < 2; localB->i++) {
    /* Sum: '<S436>/angular velocity compensation' */
    localB->Gain_b = localB->Switch_a[localB->i];

    /* Sum: '<S436>/angular velocity compensation' */
    localB->angularvelocitycompensation[localB->i] = localB->Gain_b +
      localB->Integrator_n[localB->i];

    /* DiscreteFilter: '<S440>/IIRgyroz' */
    localB->memOffset = localB->i * 5;
    localB->denAccum = localB->Add_j[localB->i];
    localB->denIdx = 1;
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->denAccum -= localDW->IIRgyroz_states[localB->memOffset + localB->j]
        * localP->IIRgyroz_DenCoef[localB->denIdx];
      localB->denIdx++;
    }

    localDW->IIRgyroz_tmp[localB->i] = localB->denAccum /
      localP->IIRgyroz_DenCoef[0];
    localB->denAccum = localP->IIRgyroz_NumCoef[0] * localDW->
      IIRgyroz_tmp[localB->i];
    localB->denIdx = 1;
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->denAccum += localDW->IIRgyroz_states[localB->memOffset + localB->j]
        * localP->IIRgyroz_NumCoef[localB->denIdx];
      localB->denIdx++;
    }

    /* SampleTimeMath: '<S448>/TSamp' incorporates:
     *  DiscreteFilter: '<S440>/IIRgyroz'
     *
     * About '<S448>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    localB->denAccum *= localP->TSamp_WtEt;

    /* Sum: '<S448>/Diff' incorporates:
     *  UnitDelay: '<S448>/UD'
     */
    localDW->UD_DSTATE[localB->i] = localB->denAccum - localDW->UD_DSTATE
      [localB->i];

    /* SampleTimeMath: '<S448>/TSamp'
     *
     * About '<S448>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    localB->TSamp[localB->i] = localB->denAccum;

    /* DiscreteFilter: '<S440>/IIRgyroz' incorporates:
     *  Delay: '<S436>/Delay'
     *  Sum: '<S440>/Add'
     */
    localB->Integrator_n[localB->i] = localB->Gain_b - localDW->
      Delay_DSTATE[localB->i];
  }

  /* Abs: '<S440>/Abs' incorporates:
   *  Abs: '<S440>/Abs4'
   */
  localB->Gain_b = (real32_T)fabs(localB->p);

  /* Abs: '<S440>/Abs1' incorporates:
   *  Abs: '<S440>/Abs5'
   */
  localB->denAccum = (real32_T)fabs(localB->q);

  /* Logic: '<S440>/Logical Operator3' incorporates:
   *  Abs: '<S440>/Abs'
   *  Abs: '<S440>/Abs1'
   *  Abs: '<S440>/Abs2'
   *  Abs: '<S440>/Abs3'
   *  Abs: '<S440>/Abs6'
   *  Abs: '<S440>/Abs7'
   *  Abs: '<S440>/Abs8'
   *  Abs: '<S440>/Abs9'
   *  Constant: '<S449>/Constant'
   *  Constant: '<S450>/Constant'
   *  Constant: '<S451>/Constant'
   *  Constant: '<S452>/Constant'
   *  Constant: '<S453>/Constant'
   *  Constant: '<S454>/Constant'
   *  Constant: '<S455>/Constant'
   *  Constant: '<S456>/Constant'
   *  Constant: '<S457>/Constant'
   *  Constant: '<S458>/Constant'
   *  Constant: '<S459>/Constant'
   *  DataTypeConversion: '<S251>/Data Type Conversion'
   *  Logic: '<S440>/Logical Operator'
   *  Logic: '<S440>/Logical Operator1'
   *  Logic: '<S440>/Logical Operator2'
   *  RelationalOperator: '<S449>/Compare'
   *  RelationalOperator: '<S450>/Compare'
   *  RelationalOperator: '<S451>/Compare'
   *  RelationalOperator: '<S452>/Compare'
   *  RelationalOperator: '<S453>/Compare'
   *  RelationalOperator: '<S454>/Compare'
   *  RelationalOperator: '<S455>/Compare'
   *  RelationalOperator: '<S456>/Compare'
   *  RelationalOperator: '<S457>/Compare'
   *  RelationalOperator: '<S458>/Compare'
   *  RelationalOperator: '<S459>/Compare'
   *  Reshape: '<S255>/Reshapexhat'
   */
  localB->LogicalOperator3 = (((((real32_T)fabs
    (localB->rtb_DataTypeConversion3_idx_1) <= localP->maxp_const) && ((real32_T)
    fabs(localB->Saturation_i) <= localP->maxq_const) && (localB->Gain_b <=
    localP->maxw1_const) && (localB->denAccum <= localP->maxw2_const) &&
    ((real32_T)fabs(localDW->UD_DSTATE[0]) <= localP->maxdw1_const) &&
    ((real32_T)fabs(localDW->UD_DSTATE[1]) <= localP->maxdw2_const)) ||
    ((localB->Gain_b <= localP->maxp2_const) && (localB->denAccum <=
    localP->maxq2_const))) && ((real32_T)fabs(localB->Integrator_n[0]) <=
    localP->maxw3_const) && ((real32_T)fabs(localB->Integrator_n[1]) <=
    localP->maxw4_const) && ((real32_T)localDW->Delay2_DSTATE <=
    localP->minHeightforOF_const));

  /* Outputs for Enabled SubSystem: '<S486>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S512>/Enable'
   */
  /* DataTypeConversion: '<S441>/DataTypeConversionEnable' */
  if (localB->LogicalOperator3) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S512>/Add1' incorporates:
     *  Constant: '<S441>/C'
     *  Delay: '<S441>/MemoryX'
     *  Product: '<S512>/Product'
     *  Reshape: '<S441>/Reshapey'
     */
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->Add_j[localB->j] = localB->angularvelocitycompensation[localB->j]
        - (((localP->C_Value_c[localB->j + 2] * localDW->MemoryX_DSTATE_g[1] +
             localP->C_Value_c[localB->j] * localDW->MemoryX_DSTATE_g[0]) +
            localP->C_Value_c[localB->j + 4] * localDW->MemoryX_DSTATE_g[2]) +
           localP->C_Value_c[localB->j + 6] * localDW->MemoryX_DSTATE_g[3]);
    }

    /* End of Sum: '<S512>/Add1' */
    for (localB->j = 0; localB->j < 4; localB->j++) {
      /* Product: '<S512>/Product2' incorporates:
       *  Constant: '<S460>/KalmanGainM'
       *  DataTypeConversion: '<S503>/Conversion'
       */
      localB->Product2_c[localB->j] = 0.0F;
      localB->Product2_c[localB->j] += (real32_T)localP->
        KalmanGainM_Value_h[localB->j] * localB->Add_j[0];
      localB->Product2_c[localB->j] += (real32_T)localP->
        KalmanGainM_Value_h[localB->j + 4] * localB->Add_j[1];
    }
  } else if (localDW->EnabledSubsystem_MODE) {
    /* Disable for Product: '<S512>/Product2' incorporates:
     *  Outport: '<S512>/deltax'
     */
    localB->Product2_c[0] = localP->deltax_Y0_e;
    localB->Product2_c[1] = localP->deltax_Y0_e;
    localB->Product2_c[2] = localP->deltax_Y0_e;
    localB->Product2_c[3] = localP->deltax_Y0_e;
    localDW->EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S486>/Enabled Subsystem' */

  /* Sum: '<S486>/Add' incorporates:
   *  Delay: '<S441>/MemoryX'
   */
  localB->Add_e[0] = localB->Product2_c[0] + localDW->MemoryX_DSTATE_g[0];
  localB->Add_e[1] = localB->Product2_c[1] + localDW->MemoryX_DSTATE_g[1];
  localB->Add_e[2] = localB->Product2_c[2] + localDW->MemoryX_DSTATE_g[2];
  localB->Add_e[3] = localB->Product2_c[3] + localDW->MemoryX_DSTATE_g[3];

  /* Trigonometry: '<S257>/sincos' incorporates:
   *  DiscreteIntegrator: '<S319>/Discrete-Time Integrator'
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   *  Trigonometry: '<S444>/sincos'
   *  Trigonometry: '<S517>/sincos'
   */
  localB->rtb_sincos_o2_idx_0_tmp = (real32_T)sin
    (localDW->DiscreteTimeIntegrator_DSTATE);
  localB->rtb_DataTypeConversion_g_idx_0_tmp = (real32_T)cos
    (localDW->DiscreteTimeIntegrator_DSTATE);
  localB->denAccum = (real32_T)sin(localB->rtb_DataTypeConversion3_idx_1);
  localB->rtb_DataTypeConversion_g_idx_1_tmp = (real32_T)cos
    (localB->rtb_DataTypeConversion3_idx_1);
  localB->rtb_sincos_o2_idx_2_tmp = (real32_T)sin(localB->Saturation_i);
  localB->rtb_DataTypeConversion_g_idx_2 = (real32_T)cos(localB->Saturation_i);

  /* Fcn: '<S257>/Fcn11' incorporates:
   *  Fcn: '<S444>/Fcn11'
   *  Fcn: '<S517>/Fcn11'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->rtb_DataTypeConversion_g_idx_0 =
    localB->rtb_DataTypeConversion_g_idx_0_tmp *
    localB->rtb_DataTypeConversion_g_idx_1_tmp;
  localB->MathFunction[0] = localB->rtb_DataTypeConversion_g_idx_0;

  /* Fcn: '<S257>/Fcn21' incorporates:
   *  Fcn: '<S444>/Fcn21'
   *  Fcn: '<S517>/Fcn21'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->rtb_DataTypeConversion_g_idx_1 = localB->denAccum *
    localB->rtb_sincos_o2_idx_2_tmp;
  localB->rtb_MathFunction_tmp = localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_DataTypeConversion_g_idx_2;
  localB->MathFunction[1] = localB->rtb_DataTypeConversion_g_idx_1 *
    localB->rtb_DataTypeConversion_g_idx_0_tmp - localB->rtb_MathFunction_tmp;

  /* Fcn: '<S257>/Fcn31' incorporates:
   *  Fcn: '<S444>/Fcn31'
   *  Fcn: '<S517>/Fcn31'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->rtb_DataTypeConversion_g_idx_0_tmp_k = localB->denAccum *
    localB->rtb_DataTypeConversion_g_idx_2;
  localB->rtb_MathFunction_tmp_c = localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_sincos_o2_idx_2_tmp;
  localB->MathFunction[2] = localB->rtb_DataTypeConversion_g_idx_0_tmp_k *
    localB->rtb_DataTypeConversion_g_idx_0_tmp + localB->rtb_MathFunction_tmp_c;

  /* Fcn: '<S257>/Fcn12' incorporates:
   *  Fcn: '<S444>/Fcn12'
   *  Fcn: '<S517>/Fcn12'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->rtb_MathFunction_tmp_b = localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_DataTypeConversion_g_idx_1_tmp;
  localB->MathFunction[3] = localB->rtb_MathFunction_tmp_b;

  /* Fcn: '<S257>/Fcn22' incorporates:
   *  Fcn: '<S257>/Fcn21'
   *  Fcn: '<S444>/Fcn22'
   *  Fcn: '<S517>/Fcn22'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->rtb_MathFunction_tmp_p = localB->rtb_DataTypeConversion_g_idx_0_tmp *
    localB->rtb_DataTypeConversion_g_idx_2;
  localB->MathFunction[4] = localB->rtb_DataTypeConversion_g_idx_1 *
    localB->rtb_sincos_o2_idx_0_tmp + localB->rtb_MathFunction_tmp_p;

  /* Fcn: '<S257>/Fcn32' incorporates:
   *  Fcn: '<S257>/Fcn31'
   *  Fcn: '<S444>/Fcn32'
   *  Fcn: '<S517>/Fcn32'
   *  Trigonometry: '<S257>/sincos'
   */
  rtb_MathFunction_tmp = localB->rtb_DataTypeConversion_g_idx_0_tmp *
    localB->rtb_sincos_o2_idx_2_tmp;
  localB->MathFunction[5] = localB->rtb_DataTypeConversion_g_idx_0_tmp_k *
    localB->rtb_sincos_o2_idx_0_tmp - rtb_MathFunction_tmp;

  /* Fcn: '<S257>/Fcn13' incorporates:
   *  Trigonometry: '<S257>/sincos'
   */
  localB->MathFunction[6] = -localB->denAccum;

  /* Fcn: '<S257>/Fcn23' incorporates:
   *  Fcn: '<S444>/Fcn23'
   *  Fcn: '<S517>/Fcn23'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->rtb_sincos_o2_idx_2_tmp *= localB->rtb_DataTypeConversion_g_idx_1_tmp;
  localB->MathFunction[7] = localB->rtb_sincos_o2_idx_2_tmp;

  /* Fcn: '<S257>/Fcn33' incorporates:
   *  Fcn: '<S444>/Fcn33'
   *  Fcn: '<S517>/Fcn33'
   *  Trigonometry: '<S257>/sincos'
   */
  localB->rtb_DataTypeConversion_g_idx_1_tmp *=
    localB->rtb_DataTypeConversion_g_idx_2;
  localB->MathFunction[8] = localB->rtb_DataTypeConversion_g_idx_1_tmp;

  /* DataTypeConversion: '<S251>/Data Type Conversion1' incorporates:
   *  Delay: '<S6>/Delay1'
   */
  localB->unnamed_idx_0_tmp = localDW->Delay1_DSTATE[0];
  localB->unnamed_idx_1_tmp = localDW->Delay1_DSTATE[1];

  /* Product: '<S251>/Product1' incorporates:
   *  DataTypeConversion: '<S251>/Data Type Conversion1'
   *  Math: '<S251>/Math Function'
   *  Reshape: '<S255>/Reshapexhat'
   *  SignalConversion generated from: '<S251>/Product1'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->rtb_Product1_tmp = (localB->MathFunction[localB->j + 3] *
      localB->unnamed_idx_1_tmp + localB->MathFunction[localB->j] *
      localB->unnamed_idx_0_tmp) + localB->MathFunction[localB->j + 6] *
      localB->Switch1;
    localB->Product1[localB->j] = localB->rtb_Product1_tmp;
    localB->rtb_MathFunction_c[localB->j] = localB->rtb_Product1_tmp;
  }

  /* End of Product: '<S251>/Product1' */

  /* DataTypeConversion: '<S251>/Data Type Conversion2' */
  localB->Gain_b = (real32_T)localB->rtb_MathFunction_c[2];

  /* SignalConversion generated from: '<S1>/To Workspace' incorporates:
   *  DataTypeConversion: '<S251>/Data Type Conversion'
   *  DataTypeConversion: '<S251>/Data Type Conversion2'
   *  DiscreteIntegrator: '<S319>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity'
   *  Reshape: '<S255>/Reshapexhat'
   *  Reshape: '<S441>/Reshapexhat'
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
    localB->rtb_DataTypeConversion3_idx_1;
  localB->TmpSignalConversionAtToWorkspaceInport1[5] = localB->Saturation_i;
  localB->TmpSignalConversionAtToWorkspaceInport1[6] = localB->Add_e[0];
  localB->TmpSignalConversionAtToWorkspaceInport1[7] = localB->Add_e[1];
  localB->TmpSignalConversionAtToWorkspaceInport1[8] = (real32_T)
    localB->Product1[2];
  localB->TmpSignalConversionAtToWorkspaceInport1[9] =
    localB->rtb_Subtract_p_idx_0;
  localB->TmpSignalConversionAtToWorkspaceInport1[10] =
    localB->rtb_Subtract_p_idx_1;
  localB->TmpSignalConversionAtToWorkspaceInport1[11] =
    localB->rtb_Subtract_p_idx_2;

  /* Math: '<S251>/Math Function' */
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

  /* End of Math: '<S251>/Math Function' */

  /* Fcn: '<S444>/Fcn11' */
  localB->Reshape9to3x3columnmajor[0] = localB->rtb_DataTypeConversion_g_idx_0;

  /* Fcn: '<S444>/Fcn21' */
  localB->Reshape9to3x3columnmajor[1] = localB->rtb_DataTypeConversion_g_idx_1 *
    localB->rtb_DataTypeConversion_g_idx_0_tmp - localB->rtb_MathFunction_tmp;

  /* Fcn: '<S444>/Fcn31' */
  localB->Reshape9to3x3columnmajor[2] =
    localB->rtb_DataTypeConversion_g_idx_0_tmp_k *
    localB->rtb_DataTypeConversion_g_idx_0_tmp + localB->rtb_MathFunction_tmp_c;

  /* Fcn: '<S444>/Fcn12' */
  localB->Reshape9to3x3columnmajor[3] = localB->rtb_MathFunction_tmp_b;

  /* Fcn: '<S444>/Fcn22' */
  localB->Reshape9to3x3columnmajor[4] = localB->rtb_DataTypeConversion_g_idx_1 *
    localB->rtb_sincos_o2_idx_0_tmp + localB->rtb_MathFunction_tmp_p;

  /* Fcn: '<S444>/Fcn32' */
  localB->Reshape9to3x3columnmajor[5] =
    localB->rtb_DataTypeConversion_g_idx_0_tmp_k *
    localB->rtb_sincos_o2_idx_0_tmp - rtb_MathFunction_tmp;

  /* Fcn: '<S444>/Fcn13' */
  localB->Reshape9to3x3columnmajor[6] = -localB->denAccum;

  /* Fcn: '<S444>/Fcn23' */
  localB->Reshape9to3x3columnmajor[7] = localB->rtb_sincos_o2_idx_2_tmp;

  /* Fcn: '<S444>/Fcn33' */
  localB->Reshape9to3x3columnmajor[8] =
    localB->rtb_DataTypeConversion_g_idx_1_tmp;

  /* Fcn: '<S517>/Fcn11' */
  localB->MathFunction_f[0] = localB->rtb_DataTypeConversion_g_idx_0;

  /* Fcn: '<S517>/Fcn21' */
  localB->MathFunction_f[1] = localB->rtb_DataTypeConversion_g_idx_1 *
    localB->rtb_DataTypeConversion_g_idx_0_tmp - localB->rtb_MathFunction_tmp;

  /* Fcn: '<S517>/Fcn31' */
  localB->MathFunction_f[2] = localB->rtb_DataTypeConversion_g_idx_0_tmp_k *
    localB->rtb_DataTypeConversion_g_idx_0_tmp + localB->rtb_MathFunction_tmp_c;

  /* Fcn: '<S517>/Fcn12' */
  localB->MathFunction_f[3] = localB->rtb_MathFunction_tmp_b;

  /* Fcn: '<S517>/Fcn22' */
  localB->MathFunction_f[4] = localB->rtb_DataTypeConversion_g_idx_1 *
    localB->rtb_sincos_o2_idx_0_tmp + localB->rtb_MathFunction_tmp_p;

  /* Fcn: '<S517>/Fcn32' */
  localB->MathFunction_f[5] = localB->rtb_DataTypeConversion_g_idx_0_tmp_k *
    localB->rtb_sincos_o2_idx_0_tmp - rtb_MathFunction_tmp;

  /* Fcn: '<S517>/Fcn13' */
  localB->MathFunction_f[6] = -localB->denAccum;

  /* Fcn: '<S517>/Fcn23' */
  localB->MathFunction_f[7] = localB->rtb_sincos_o2_idx_2_tmp;

  /* Fcn: '<S517>/Fcn33' */
  localB->MathFunction_f[8] = localB->rtb_DataTypeConversion_g_idx_1_tmp;

  /* Math: '<S437>/Math Function' */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->rtb_MathFunction_m[3 * localB->j] = localB->MathFunction_f[localB->j];
    localB->rtb_MathFunction_m[3 * localB->j + 1] = localB->
      MathFunction_f[localB->j + 3];
    localB->rtb_MathFunction_m[3 * localB->j + 2] = localB->
      MathFunction_f[localB->j + 6];
  }

  for (localB->j = 0; localB->j < 9; localB->j++) {
    localB->MathFunction_f[localB->j] = localB->rtb_MathFunction_m[localB->j];
  }

  /* End of Math: '<S437>/Math Function' */

  /* RelationalOperator: '<S443>/Compare' incorporates:
   *  Constant: '<S443>/Constant'
   *  DataTypeConversion: '<S251>/Data Type Conversion'
   *  Reshape: '<S255>/Reshapexhat'
   */
  rtb_Compare_fl = ((real32_T)localDW->Delay2_DSTATE <=
                    localP->DeactivateAccelerationIfOFisnotusedduetolowaltitude_const);

  /* Logic: '<S438>/Logical Operator' incorporates:
   *  Constant: '<S445>/Constant'
   *  Constant: '<S446>/Constant'
   *  RelationalOperator: '<S445>/Compare'
   *  RelationalOperator: '<S446>/Compare'
   */
  rtb_Compare_a = ((localB->Switch_a[0] !=
                    localP->donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con)
                   || (localB->Switch_a[1] !=
                       localP->donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co));

  /* Sum: '<S438>/Add' incorporates:
   *  Constant: '<S438>/gravity'
   *  Product: '<S438>/Product1'
   *  Reshape: '<S447>/Reshape (9) to [3x3] column-major'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->Product1[localB->j] = localB->FIR_IMUaccel[localB->j] -
      ((localB->Reshape9to3x3columnmajor[localB->j + 3] * localP->gravity_Value
        [1] + localB->Reshape9to3x3columnmajor[localB->j] *
        localP->gravity_Value[0]) + localB->Reshape9to3x3columnmajor[localB->j +
       6] * localP->gravity_Value[2]);
  }

  /* End of Sum: '<S438>/Add' */

  /* Product: '<S438>/Product' incorporates:
   *  Gain: '<S438>/gainaccinput1'
   */
  localB->Product[0] = (real32_T)(localP->gainaccinput1_Gain * localB->Product1
    [0]) * (real32_T)rtb_Compare_a * (real32_T)rtb_Compare_fl;
  localB->Product[1] = (real32_T)(localP->gainaccinput1_Gain * localB->Product1
    [1]) * (real32_T)rtb_Compare_a * (real32_T)rtb_Compare_fl;

  /* Outputs for Enabled SubSystem: '<S479>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S510>/Enable'
   */
  /* DataTypeConversion: '<S441>/DataTypeConversionEnable' */
  if (localB->LogicalOperator3) {
    localDW->MeasurementUpdate_MODE = true;
    for (localB->j = 0; localB->j < 2; localB->j++) {
      /* Sum: '<S510>/Sum' incorporates:
       *  Constant: '<S441>/C'
       *  Constant: '<S441>/D'
       *  Delay: '<S441>/MemoryX'
       *  Product: '<S510>/C[k]*xhat[k|k-1]'
       *  Product: '<S510>/D[k]*u[k]'
       *  Reshape: '<S441>/Reshapeu'
       *  Reshape: '<S441>/Reshapey'
       *  Sum: '<S510>/Add1'
       */
      localB->Add_j[localB->j] = localB->angularvelocitycompensation[localB->j]
        - ((((localP->C_Value_c[localB->j + 2] * localDW->MemoryX_DSTATE_g[1] +
              localP->C_Value_c[localB->j] * localDW->MemoryX_DSTATE_g[0]) +
             localP->C_Value_c[localB->j + 4] * localDW->MemoryX_DSTATE_g[2]) +
            localP->C_Value_c[localB->j + 6] * localDW->MemoryX_DSTATE_g[3]) +
           (localP->D_Value_k[localB->j + 2] * localB->Product[1] +
            localP->D_Value_k[localB->j] * localB->Product[0]));
    }

    for (localB->j = 0; localB->j < 4; localB->j++) {
      /* Product: '<S510>/Product3' incorporates:
       *  Constant: '<S460>/KalmanGainL'
       *  DataTypeConversion: '<S502>/Conversion'
       */
      localB->Product3_c[localB->j] = 0.0F;
      localB->Product3_c[localB->j] += (real32_T)localP->
        KalmanGainL_Value[localB->j] * localB->Add_j[0];
      localB->Product3_c[localB->j] += (real32_T)localP->
        KalmanGainL_Value[localB->j + 4] * localB->Add_j[1];
    }
  } else if (localDW->MeasurementUpdate_MODE) {
    /* Disable for Product: '<S510>/Product3' incorporates:
     *  Outport: '<S510>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3_c[0] = localP->Lykyhatkk1_Y0_a;
    localB->Product3_c[1] = localP->Lykyhatkk1_Y0_a;
    localB->Product3_c[2] = localP->Lykyhatkk1_Y0_a;
    localB->Product3_c[3] = localP->Lykyhatkk1_Y0_a;
    localDW->MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S479>/MeasurementUpdate' */

  /* Logic: '<S239>/OR' incorporates:
   *  BusAssignment: '<S1>/Control Mode Update'
   *  Constant: '<S249>/Constant'
   *  RelationalOperator: '<S249>/Compare'
   */
  rtb_Compare_fl = ((rtu_ReferenceValueServerCmds->time_remaining <=
                     localP->ComparewithStoptime_const) ||
                    rtu_ReferenceValueServerCmds->land_drone);

  /* Outputs for Triggered SubSystem: '<S240>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S250>/Trigger'
   */
  if (rtb_Compare_fl && (localZCE->TriggeredSubsystem_Trig_ZCE_k != 1)) {
    /* SignalConversion generated from: '<S250>/X' incorporates:
     *  DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity'
     */
    localB->BufferToMakeInportVirtual_InsertedFor_X_at_inport_0 =
      localDW->SimplyIntegrateVelocity_DSTATE[0];

    /* SignalConversion generated from: '<S250>/Y' incorporates:
     *  DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity'
     */
    localB->BufferToMakeInportVirtual_InsertedFor_Y_at_inport_0 =
      localDW->SimplyIntegrateVelocity_DSTATE[1];
  }

  localZCE->TriggeredSubsystem_Trig_ZCE_k = rtb_Compare_fl;

  /* End of Outputs for SubSystem: '<S240>/Triggered Subsystem' */

  /* MATLABSystem: '<S238>/TCP//IP Receive' */
  localB->unnamed_idx_0_tmp = rt_roundd_snf(localDW->obj.isServer_);
  if (localB->unnamed_idx_0_tmp < 65536.0) {
    if (localB->unnamed_idx_0_tmp >= 0.0) {
      tmp = (uint16_T)localB->unnamed_idx_0_tmp;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint16_T;
  }

  /* MATLABSystem: '<S238>/TCP//IP Receive' */
  TCPStreamStepRecv(&b_varargout_1, &rtb_TCPIPReceive_o2, 1,
                    localDW->obj.connStream_, &errorNo, tmp);

  /* Sum: '<S237>/Add' incorporates:
   *  Constant: '<S246>/Constant'
   *  Constant: '<S248>/Constant'
   *  Delay: '<S237>/Delay'
   *  Gain: '<S237>/Gain'
   *  Gain: '<S237>/Gain1'
   *  MATLABSystem: '<S238>/TCP//IP Receive'
   *  RelationalOperator: '<S246>/Compare'
   *  RelationalOperator: '<S248>/Compare'
   */
  localDW->Delay_DSTATE_j += (b_varargout_1 == localP->Comparetow_const ?
    (real32_T)localP->Gain_Gain_m * 2.91038305E-11F : 0.0F) - (b_varargout_1 ==
    localP->Comparetos_const ? (real32_T)localP->Gain1_Gain_g * 2.91038305E-11F :
    0.0F);

  /* Sum: '<S237>/Add1' incorporates:
   *  Constant: '<S241>/Constant'
   *  Constant: '<S243>/Constant'
   *  Delay: '<S237>/Delay1'
   *  Gain: '<S237>/Gain2'
   *  Gain: '<S237>/Gain3'
   *  MATLABSystem: '<S238>/TCP//IP Receive'
   *  RelationalOperator: '<S241>/Compare'
   *  RelationalOperator: '<S243>/Compare'
   */
  localDW->Delay1_DSTATE_l += (b_varargout_1 == localP->Comparetod_const ?
    (real32_T)localP->Gain3_Gain * 2.91038305E-11F : 0.0F) - (b_varargout_1 ==
    localP->Comparetoa_const ? (real32_T)localP->Gain2_Gain_l * 2.91038305E-11F :
    0.0F);

  /* Sum: '<S237>/Add2' incorporates:
   *  Constant: '<S242>/Constant'
   *  Constant: '<S247>/Constant'
   *  Delay: '<S237>/Delay2'
   *  Gain: '<S237>/Gain4'
   *  Gain: '<S237>/Gain5'
   *  MATLABSystem: '<S238>/TCP//IP Receive'
   *  RelationalOperator: '<S242>/Compare'
   *  RelationalOperator: '<S247>/Compare'
   */
  localDW->Delay2_DSTATE_o += (b_varargout_1 == localP->Comparetov_const ?
    (real32_T)localP->Gain4_Gain * 2.91038305E-11F : 0.0F) - (b_varargout_1 ==
    localP->Comparetob_const ? (real32_T)localP->Gain5_Gain * 2.91038305E-11F :
    0.0F);

  /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
   *  Constant: '<S237>/Constant'
   *  Constant: '<S240>/Landing look-ahead distance'
   *  DataTypeConversion: '<S251>/Data Type Conversion'
   *  Logic: '<S5>/NOT'
   *  Reshape: '<S255>/Reshapexhat'
   *  Sum: '<S237>/Add4'
   *  Sum: '<S240>/Add'
   */
  if (rtb_Compare_fl) {
    localB->rtb_DataTypeConversion_g_idx_0 =
      localB->BufferToMakeInportVirtual_InsertedFor_X_at_inport_0;
    localB->rtb_DataTypeConversion_g_idx_1 =
      localB->BufferToMakeInportVirtual_InsertedFor_Y_at_inport_0;
    localB->rtb_DataTypeConversion_g_idx_2 = (real32_T)localDW->Delay2_DSTATE +
      localP->Landinglookaheaddistance_Value;
  } else {
    localB->rtb_DataTypeConversion_g_idx_0 = localDW->Delay_DSTATE_j;
    localB->rtb_DataTypeConversion_g_idx_1 = localDW->Delay1_DSTATE_l;
    localB->rtb_DataTypeConversion_g_idx_2 = localP->Constant_Value_j +
      localDW->Delay2_DSTATE_o;
  }

  /* End of MultiPortSwitch: '<S5>/Multiport Switch' */

  /* Sum: '<S237>/Add3' incorporates:
   *  Constant: '<S244>/Constant'
   *  Constant: '<S245>/Constant'
   *  Delay: '<S237>/Delay3'
   *  Gain: '<S237>/Gain6'
   *  Gain: '<S237>/Gain7'
   *  MATLABSystem: '<S238>/TCP//IP Receive'
   *  RelationalOperator: '<S244>/Compare'
   *  RelationalOperator: '<S245>/Compare'
   */
  localDW->Delay3_DSTATE += (b_varargout_1 == localP->Comparetog_const ?
    (real32_T)localP->Gain6_Gain * 2.91038305E-11F : 0.0F) - (b_varargout_1 ==
    localP->Comparetoh_const ? (real32_T)localP->Gain7_Gain * 2.91038305E-11F :
    0.0F);

  /* Sum: '<S10>/Sum1' incorporates:
   *  BusAssignment: '<S5>/Bus  Assignment'
   *  DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity'
   */
  localB->rtb_DataTypeConversion_g_idx_0 -=
    localDW->SimplyIntegrateVelocity_DSTATE[0];
  localB->rtb_DataTypeConversion_g_idx_1 -=
    localDW->SimplyIntegrateVelocity_DSTATE[1];

  /* Saturate: '<S158>/Saturation' incorporates:
   *  Gain: '<S156>/Proportional Gain'
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   */
  localB->rtb_sincos_o2_idx_2_tmp = (localB->rtb_DataTypeConversion_g_idx_0_tmp *
    localB->rtb_DataTypeConversion_g_idx_0 + localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_DataTypeConversion_g_idx_1) * localP->Positioncontroller_P;
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
   *  Reshape: '<S441>/Reshapexhat'
   */
  localB->denAccum = localB->rtb_sincos_o2_idx_2_tmp - localB->Add_e[0];

  /* Sum: '<S210>/Sum' incorporates:
   *  DiscreteIntegrator: '<S201>/Integrator'
   *  Gain: '<S206>/Proportional Gain'
   */
  localB->rtb_DataTypeConversion_g_idx_1_tmp = localP->Velocitycontroller_P *
    localB->denAccum + localDW->Integrator_DSTATE[0];

  /* Saturate: '<S208>/Saturation' */
  if (localB->rtb_DataTypeConversion_g_idx_1_tmp >
      localP->Velocitycontroller_UpperSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_DataTypeConversion_g_idx_1_tmp <
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Velocitycontroller_LowerSaturationLimit;
  } else {
    localB->rtb_sincos_o2_idx_2_tmp = localB->rtb_DataTypeConversion_g_idx_1_tmp;
  }

  /* DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a[0] =
    (localB->rtb_sincos_o2_idx_2_tmp -
     localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0]
     * localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_g[1])
    / localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_g[0];

  /* Sum: '<S10>/Sum19' incorporates:
   *  Gain: '<S156>/Proportional Gain'
   */
  localB->Add_j[0] = localB->denAccum;

  /* Sum: '<S210>/Sum' */
  localB->SignPreSat[0] = localB->rtb_DataTypeConversion_g_idx_1_tmp;

  /* Saturate: '<S158>/Saturation' incorporates:
   *  Gain: '<S156>/Proportional Gain'
   *  MATLAB Function: '<S10>/Position error transformation (Earth to Body frame)'
   */
  localB->rtb_sincos_o2_idx_2_tmp = (-localB->rtb_sincos_o2_idx_0_tmp *
    localB->rtb_DataTypeConversion_g_idx_0 +
    localB->rtb_DataTypeConversion_g_idx_0_tmp *
    localB->rtb_DataTypeConversion_g_idx_1) * localP->Positioncontroller_P;
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
   *  Reshape: '<S441>/Reshapexhat'
   */
  localB->denAccum = localB->rtb_sincos_o2_idx_2_tmp - localB->Add_e[1];

  /* Sum: '<S210>/Sum' incorporates:
   *  DiscreteIntegrator: '<S201>/Integrator'
   *  Gain: '<S206>/Proportional Gain'
   */
  localB->rtb_DataTypeConversion_g_idx_1_tmp = localP->Velocitycontroller_P *
    localB->denAccum + localDW->Integrator_DSTATE[1];

  /* Saturate: '<S208>/Saturation' */
  if (localB->rtb_DataTypeConversion_g_idx_1_tmp >
      localP->Velocitycontroller_UpperSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_DataTypeConversion_g_idx_1_tmp <
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->rtb_sincos_o2_idx_2_tmp =
      localP->Velocitycontroller_LowerSaturationLimit;
  } else {
    localB->rtb_sincos_o2_idx_2_tmp = localB->rtb_DataTypeConversion_g_idx_1_tmp;
  }

  /* DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
  localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a[1] =
    (localB->rtb_sincos_o2_idx_2_tmp -
     localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_g[1] *
     localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1])
    / localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_g[0];

  /* Switch: '<S3>/Switch_refAtt' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   *  Constant: '<S5>/Roll and Pitch'
   *  DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller'
   *  Gain: '<S10>/Gain'
   */
  if (localP->controlModePosVsOrient_Value) {
    localB->Integrator_n[0] =
      (localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0]
       * localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a
       [0] +
       localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle
       [0] *
       localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1])
      * localP->Gain_Gain[0];
    localB->Integrator_n[1] =
      (localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[0]
       * localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a
       [1] +
       localP->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[1]
       * localDW->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle
       [1]) * localP->Gain_Gain[1];
  } else {
    localB->Integrator_n[0] = localP->RollandPitch_Value;
    localB->Integrator_n[1] = localP->RollandPitch_Value;
  }

  /* End of Switch: '<S3>/Switch_refAtt' */

  /* Gain: '<S55>/Proportional Gain' incorporates:
   *  Sum: '<S8>/Sum19'
   */
  localB->rtb_sincos_o2_idx_0_tmp = (localB->Integrator_n[0] -
    localB->rtb_DataTypeConversion3_idx_1) * localP->Anglecontrolloop_P;
  localB->Saturation_i = (localB->Integrator_n[1] - localB->Saturation_i) *
    localP->Anglecontrolloop_P;

  /* Sum: '<S8>/Sum1' */
  localB->Integrator_n[0] = localB->rtb_sincos_o2_idx_0_tmp -
    localB->rtb_Subtract_p_idx_1;
  localB->Integrator_n[1] = localB->Saturation_i - localB->rtb_Subtract_p_idx_0;

  /* Gain: '<S103>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S95>/Filter'
   *  Gain: '<S94>/Derivative Gain'
   *  Sum: '<S95>/SumD'
   */
  localB->Saturation_i = (localP->Angularvelocitycontrolloop_D[0] *
    localB->Integrator_n[0] - localDW->Filter_DSTATE[0]) *
    localP->Angularvelocitycontrolloop_N[0];

  /* Sum: '<S109>/Sum' incorporates:
   *  DiscreteIntegrator: '<S100>/Integrator'
   *  Gain: '<S105>/Proportional Gain'
   *  Gain: '<S94>/Derivative Gain'
   */
  localB->rtb_Subtract_p_idx_0 = (localP->Angularvelocitycontrolloop_P[0] *
    localB->Integrator_n[0] + localDW->Integrator_DSTATE_d[0]) +
    localB->Saturation_i;

  /* Saturate: '<S107>/Saturation' */
  if (localB->rtb_Subtract_p_idx_0 >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->rtb_DataTypeConversion_g_idx_0_tmp =
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Subtract_p_idx_0 <
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->rtb_DataTypeConversion_g_idx_0_tmp =
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  } else {
    localB->rtb_DataTypeConversion_g_idx_0_tmp = localB->rtb_Subtract_p_idx_0;
  }

  /* Gain: '<S103>/Filter Coefficient' */
  localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontr[0] =
    localB->Saturation_i;

  /* Sum: '<S109>/Sum' */
  localB->SignPreIntegrator[0] = localB->rtb_Subtract_p_idx_0;

  /* Gain: '<S103>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S95>/Filter'
   *  Gain: '<S94>/Derivative Gain'
   *  Sum: '<S95>/SumD'
   */
  localB->Saturation_i = (localP->Angularvelocitycontrolloop_D[1] *
    localB->Integrator_n[1] - localDW->Filter_DSTATE[1]) *
    localP->Angularvelocitycontrolloop_N[1];

  /* Sum: '<S109>/Sum' incorporates:
   *  DiscreteIntegrator: '<S100>/Integrator'
   *  Gain: '<S105>/Proportional Gain'
   *  Gain: '<S94>/Derivative Gain'
   */
  localB->rtb_Subtract_p_idx_0 = (localP->Angularvelocitycontrolloop_P[1] *
    localB->Integrator_n[1] + localDW->Integrator_DSTATE_d[1]) +
    localB->Saturation_i;

  /* Saturate: '<S107>/Saturation' */
  if (localB->rtb_Subtract_p_idx_0 >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->rtb_sincos_o2_idx_0_tmp =
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Subtract_p_idx_0 <
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->rtb_sincos_o2_idx_0_tmp =
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  } else {
    localB->rtb_sincos_o2_idx_0_tmp = localB->rtb_Subtract_p_idx_0;
  }

  /* Gain: '<S103>/Filter Coefficient' */
  localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontr[1] =
    localB->Saturation_i;

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   *  UnitDelay: '<S14>/Output'
   */
  rtb_Compare_ot = (localDW->Output_DSTATE_ar <
                    localP->CompareToConstant_const_dk);

  /* DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  if ((!rtb_Compare_ot) && (localDW->DiscreteTimeIntegrator_PrevResetState == 1))
  {
    localDW->DiscreteTimeIntegrator_DSTATE_o =
      localP->DiscreteTimeIntegrator_IC_g;
  }

  if (localDW->DiscreteTimeIntegrator_DSTATE_o >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_o =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE_o <=
             localP->DiscreteTimeIntegrator_LowerSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_o =
      localP->DiscreteTimeIntegrator_LowerSat;
  }

  /* Sum: '<S7>/Sum2' incorporates:
   *  BusAssignment: '<S5>/Bus  Assignment'
   *  DataTypeConversion: '<S251>/Data Type Conversion'
   *  Reshape: '<S255>/Reshapexhat'
   */
  localB->rtb_DataTypeConversion3_idx_1 = localB->rtb_DataTypeConversion_g_idx_2
    - (real32_T)localDW->Delay2_DSTATE;

  /* Sum: '<S11>/Sum1' incorporates:
   *  BusAssignment: '<S5>/Bus  Assignment'
   *  DiscreteIntegrator: '<S319>/Discrete-Time Integrator'
   */
  localB->Saturation_i = localDW->Delay3_DSTATE -
    localDW->DiscreteTimeIntegrator_DSTATE;

  /* Saturate: '<S11>/Saturation' */
  if (localB->Saturation_i > localP->Saturation_UpperSat) {
    localB->Saturation_i = localP->Saturation_UpperSat;
  } else if (localB->Saturation_i < localP->Saturation_LowerSat) {
    localB->Saturation_i = localP->Saturation_LowerSat;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Switch: '<S7>/TakeoffOrControl_Switch1' incorporates:
   *  Constant: '<S7>/w1'
   *  DataTypeConversion: '<S251>/Data Type Conversion2'
   *  DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
   *  Gain: '<S7>/D_z1'
   *  Gain: '<S7>/P_z1'
   *  Gain: '<S7>/takeoff_gain1'
   *  Sum: '<S7>/Sum1'
   */
  if (rtb_Compare_ot) {
    localB->rtb_Subtract_p_idx_1 = localP->takeoff_gain1_Gain * localP->w1_Value;
  } else {
    localB->rtb_Subtract_p_idx_1 = (localP->P_z1_Gain *
      localB->rtb_DataTypeConversion3_idx_1 +
      localDW->DiscreteTimeIntegrator_DSTATE_o) - localP->D_z1_Gain * (real32_T)
      localB->rtb_MathFunction_c[2];
  }

  /* End of Switch: '<S7>/TakeoffOrControl_Switch1' */

  /* Sum: '<S7>/Sum5' incorporates:
   *  Constant: '<S7>/w1'
   */
  localB->rtb_sincos_o2_idx_2_tmp = localP->w1_Value +
    localB->rtb_Subtract_p_idx_1;

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
  localB->rtb_Subtract_p_idx_2 = (localP->P_yaw_Gain * localB->Saturation_i +
    localDW->DiscreteTimeIntegrator_DSTATE_i) - localP->D_yaw_Gain *
    localB->rtb_Subtract_p_idx_2;

  /* Sum: '<S9>/Add' incorporates:
   *  Constant: '<S9>/Pitch correction'
   *  Constant: '<S9>/zero correction'
   *  ManualSwitch: '<S9>/Manual Switch'
   */
  if (localP->ManualSwitch_CurrentSetting == 1) {
    localB->rtb_Subtract_p_idx_1 = localP->Pitchcorrection_Value;
  } else {
    localB->rtb_Subtract_p_idx_1 = localP->zerocorrection_Value;
  }

  /* SignalConversion generated from: '<S9>/Product' incorporates:
   *  Saturate: '<S107>/Saturation'
   *  Sum: '<S9>/Add'
   */
  localB->rtb_Subtract_p_idx_1 += localB->rtb_DataTypeConversion_g_idx_0_tmp;

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/TorqueTotalThrustToThrustPerMotor'
   *  Saturate: '<S107>/Saturation'
   *  Saturate: '<S7>/SaturationThrust1'
   */
  for (localB->j = 0; localB->j < 4; localB->j++) {
    localB->fv[localB->j] = ((localP->
      TorqueTotalThrustToThrustPerMotor_Value[localB->j + 4] *
      localB->rtb_Subtract_p_idx_2 +
      localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j] *
      localB->rtb_sincos_o2_idx_2_tmp) +
      localP->TorqueTotalThrustToThrustPerMotor_Value[localB->j + 8] *
      localB->rtb_Subtract_p_idx_1) +
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
    /* Sum: '<S251>/Sum' incorporates:
     *  Constant: '<S251>/gravity'
     *  DiscreteFir: '<S253>/FIR_IMUaccel'
     *  Math: '<S251>/Math Function'
     *  Product: '<S251>/Product'
     */
    localB->Sum[localB->j] = ((localB->MathFunction[localB->j + 3] *
      localB->FIR_IMUaccel[1] + localB->MathFunction[localB->j] *
      localB->FIR_IMUaccel[0]) + localB->MathFunction[localB->j + 6] *
      localB->acc1) + localP->gravity_Value_p[localB->j];
  }

  /* DataTypeConversion: '<S252>/Data Type Conversion1' */
  localB->DataTypeConversion1[0] = localB->p;
  localB->DataTypeConversion1[1] = localB->q;
  localB->DataTypeConversion1[2] = localB->r;

  /* DataTypeConversion: '<S391>/Conversion' */
  localB->Conversion_d4[0] = localB->MemoryX_p[0];
  localB->Conversion_d4[1] = localB->MemoryX_p[1];

  /* Reshape: '<S375>/Reshapeu' */
  rtb_Reshapeu_c = localB->p;

  /* DataTypeConversion: '<S418>/Conversion' incorporates:
   *  Constant: '<S376>/KalmanGainL'
   */
  localB->Conversion_l[0] = (real32_T)localP->KalmanGainL_Value_l[0];
  localB->Conversion_l[1] = (real32_T)localP->KalmanGainL_Value_l[1];

  /* Outputs for Enabled SubSystem: '<S395>/MeasurementUpdate' */
  /* Constant: '<S375>/C' incorporates:
   *  Constant: '<S375>/D'
   */
  flightControlSystem_MeasurementUpdate(rtb_DataTypeConversionEnable_f,
    localB->Conversion_l, rtb_Reshapey_a, localP->C_Value_k,
    localB->Conversion_d4, localP->D_Value_m, rtb_Reshapeu_c,
    &localB->MeasurementUpdate_i, &localDW->MeasurementUpdate_i,
    &localP->MeasurementUpdate_i);

  /* End of Outputs for SubSystem: '<S395>/MeasurementUpdate' */

  /* DataTypeConversion: '<S337>/Conversion' */
  localB->Conversion_h[0] = localB->MemoryX_d[0];
  localB->Conversion_h[1] = localB->MemoryX_d[1];

  /* Reshape: '<S321>/Reshapeu' */
  rtb_Reshapeu_o = localB->q;

  /* DataTypeConversion: '<S364>/Conversion' incorporates:
   *  Constant: '<S322>/KalmanGainL'
   */
  localB->Conversion_k[0] = (real32_T)localP->KalmanGainL_Value_b[0];
  localB->Conversion_k[1] = (real32_T)localP->KalmanGainL_Value_b[1];

  /* Outputs for Enabled SubSystem: '<S341>/MeasurementUpdate' */
  /* Constant: '<S321>/C' incorporates:
   *  Constant: '<S321>/D'
   */
  flightControlSystem_MeasurementUpdate(rtb_DataTypeConversionEnable_c,
    localB->Conversion_k, rtb_Reshapey_g, localP->C_Value_d,
    localB->Conversion_h, localP->D_Value_c, rtb_Reshapeu_o,
    &localB->MeasurementUpdate_k, &localDW->MeasurementUpdate_k,
    &localP->MeasurementUpdate_k);

  /* End of Outputs for SubSystem: '<S341>/MeasurementUpdate' */

  /* Outputs for Enabled SubSystem: '<S277>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S307>/Enable'
   */
  /* DataTypeConversion: '<S255>/DataTypeConversionEnable' */
  if (localB->nicemeasurementornewupdateneeded) {
    localDW->MeasurementUpdate_MODE_n = true;

    /* Sum: '<S307>/Sum' incorporates:
     *  Constant: '<S255>/C'
     *  Constant: '<S255>/D'
     *  Delay: '<S255>/MemoryX'
     *  Product: '<S307>/C[k]*xhat[k|k-1]'
     *  Product: '<S307>/D[k]*u[k]'
     *  Reshape: '<S255>/Reshapeu'
     *  Reshape: '<S255>/Reshapey'
     *  Sum: '<S307>/Add1'
     */
    localB->Switch1 = localB->invertzaxisGain - ((localP->C_Value[0] *
      localDW->MemoryX_DSTATE[0] + localP->C_Value[1] * localDW->MemoryX_DSTATE
      [1]) + localP->D_Value * localB->Sum[2]);

    /* Product: '<S307>/Product3' incorporates:
     *  Constant: '<S259>/KalmanGainL'
     *  DataTypeConversion: '<S299>/Conversion'
     */
    localB->Product3[0] = localP->KalmanGainL_Value_d[0] * localB->Switch1;
    localB->Product3[1] = localP->KalmanGainL_Value_d[1] * localB->Switch1;
  } else if (localDW->MeasurementUpdate_MODE_n) {
    /* Disable for Product: '<S307>/Product3' incorporates:
     *  Outport: '<S307>/L*(y[k]-yhat[k|k-1])'
     */
    localB->Product3[0] = localP->Lykyhatkk1_Y0;
    localB->Product3[1] = localP->Lykyhatkk1_Y0;
    localDW->MeasurementUpdate_MODE_n = false;
  }

  /* End of Outputs for SubSystem: '<S277>/MeasurementUpdate' */

  /* Gain: '<S91>/ZeroGain' */
  localB->Akxhatkk1_b[0] = localP->ZeroGain_Gain * localB->SignPreIntegrator[0];

  /* Gain: '<S192>/ZeroGain' */
  localB->ZeroGain_e[0] = localP->ZeroGain_Gain_p * localB->SignPreSat[0];

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
  localB->Integrator_n[0] *= localP->Angularvelocitycontrolloop_I[0];

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
  localB->Add_j[0] *= localP->Velocitycontroller_I;

  /* Gain: '<S91>/ZeroGain' */
  localB->Akxhatkk1_b[1] = localP->ZeroGain_Gain * localB->rtb_Subtract_p_idx_0;

  /* Gain: '<S192>/ZeroGain' */
  localB->ZeroGain_e[1] = localP->ZeroGain_Gain_p *
    localB->rtb_DataTypeConversion_g_idx_1_tmp;

  /* DeadZone: '<S93>/DeadZone' */
  if (localB->rtb_Subtract_p_idx_0 >
      localP->Angularvelocitycontrolloop_UpperSaturationLimit) {
    localB->SignPreIntegrator[1] = localB->rtb_Subtract_p_idx_0 -
      localP->Angularvelocitycontrolloop_UpperSaturationLimit;
  } else if (localB->rtb_Subtract_p_idx_0 >=
             localP->Angularvelocitycontrolloop_LowerSaturationLimit) {
    localB->SignPreIntegrator[1] = 0.0F;
  } else {
    localB->SignPreIntegrator[1] = localB->rtb_Subtract_p_idx_0 -
      localP->Angularvelocitycontrolloop_LowerSaturationLimit;
  }

  /* Gain: '<S97>/Integral Gain' */
  localB->Integrator_n[1] *= localP->Angularvelocitycontrolloop_I[1];

  /* DeadZone: '<S194>/DeadZone' */
  if (localB->rtb_DataTypeConversion_g_idx_1_tmp >
      localP->Velocitycontroller_UpperSaturationLimit) {
    localB->SignPreSat[1] = localB->rtb_DataTypeConversion_g_idx_1_tmp -
      localP->Velocitycontroller_UpperSaturationLimit;
  } else if (localB->rtb_DataTypeConversion_g_idx_1_tmp >=
             localP->Velocitycontroller_LowerSaturationLimit) {
    localB->SignPreSat[1] = 0.0F;
  } else {
    localB->SignPreSat[1] = localB->rtb_DataTypeConversion_g_idx_1_tmp -
      localP->Velocitycontroller_LowerSaturationLimit;
  }

  /* Gain: '<S198>/Integral Gain' */
  localB->Add_j[1] = localP->Velocitycontroller_I * localB->denAccum;

  /* Sum: '<S15>/FixPt Sum1' incorporates:
   *  Constant: '<S15>/FixPt Constant'
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_ar = (uint16_T)((uint32_T)localDW->Output_DSTATE_ar +
    localP->FixPtConstant_Value_f);

  /* RelationalOperator: '<S4>/GreaterThan' incorporates:
   *  Constant: '<S4>/Wait  3 Seconds'
   *  UnitDelay: '<S225>/Output'
   */
  rtb_Compare_a = (localDW->Output_DSTATE_a > localP->Wait3Seconds_Value);

  /* Switch: '<S229>/Switch' incorporates:
   *  Constant: '<S229>/ '
   */
  if (rtb_Compare_a) {
    localB->Switch1 = rtu_Sensors->VisionSensors.opticalFlow_data[2];
    localB->unnamed_idx_0_tmp = rtu_Sensors->VisionSensors.opticalFlow_data[2];
  } else {
    localB->Switch1 = localP->_Value;
    localB->unnamed_idx_0_tmp = localP->_Value;
  }

  /* End of Switch: '<S229>/Switch' */

  /* Sum: '<S229>/Add' incorporates:
   *  Constant: '<S236>/Constant'
   *  DataTypeConversion: '<S229>/   '
   *  Delay: '<S229>/Delay One Step'
   *  Product: '<S229>/  '
   *  RelationalOperator: '<S236>/Compare'
   */
  localDW->DelayOneStep_DSTATE = (real_T)(localB->unnamed_idx_0_tmp ==
    localP->Checkerrorcondition_const) * localDW->DelayOneStep_DSTATE + (real_T)
    (localB->Switch1 == localP->Checkerrorcondition_const);

  /* Switch: '<S229>/Switch1' incorporates:
   *  Constant: '<S229>/ Disable OF check'
   *  Constant: '<S235>/Constant'
   *  RelationalOperator: '<S235>/Compare'
   */
  if (rtb_Compare_fl) {
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
   *  DataTypeConversion: '<S251>/Data Type Conversion'
   *  DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity'
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
   *  Reshape: '<S255>/Reshapexhat'
   *  Reshape: '<S441>/Reshapexhat'
   *  Sum: '<S4>/Subtract'
   *  Sum: '<S4>/Subtract1'
   *  Switch: '<S218>/         '
   *  Switch: '<S228>/Switch'
   */
  if (((real32_T)fabs(localDW->SimplyIntegrateVelocity_DSTATE[0]) >
       localP->CompareToConstant_const_m) || ((real32_T)fabs
       (localDW->SimplyIntegrateVelocity_DSTATE[1]) >
       localP->CompareToConstant1_const_g)) {
    /* Outputs for IfAction SubSystem: '<S4>/Geofencing error' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */
    flightControlSystem_Geofencingerror(&localB->Merge, &localP->Geofencingerror);

    /* End of Outputs for SubSystem: '<S4>/Geofencing error' */
  } else if ((((real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[0]) >
               localP->CompareToConstant4_const) && ((real32_T)fabs
               (localP->Gain_Gain_i *
                rtu_Sensors->VisionSensors.opticalFlow_data[0] - localB->Add_e[0])
    > localP->CompareToConstant2_const)) || (((real32_T)fabs
               (localP->Gain1_Gain_l *
                rtu_Sensors->VisionSensors.opticalFlow_data[1] - localB->Add_e[1])
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
    localB->unnamed_idx_0_tmp = fabs(localB->Switch1);
    if (localB->unnamed_idx_0_tmp < 4.503599627370496E+15) {
      if (localB->unnamed_idx_0_tmp >= 0.5) {
        localB->Switch1 = floor(localB->Switch1 + 0.5);
      } else {
        localB->Switch1 *= 0.0;
      }
    }

    if (rtIsNaN(localB->Switch1) || rtIsInf(localB->Switch1)) {
      localB->unnamed_idx_0_tmp = 0.0;
    } else {
      localB->unnamed_idx_0_tmp = fmod(localB->Switch1, 256.0);
    }

    if ((localB->unnamed_idx_0_tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
         -localB->unnamed_idx_0_tmp : (int32_T)(uint8_T)
         localB->unnamed_idx_0_tmp) > 0) {
      /* Outputs for IfAction SubSystem: '<S4>/No optical flow ' incorporates:
       *  ActionPort: '<S227>/Action Port'
       */
      flightControlSystem_Geofencingerror(&localB->Merge, &localP->Noopticalflow);

      /* End of Outputs for SubSystem: '<S4>/No optical flow ' */
    } else {
      if (rtb_Compare_a) {
        /* Switch: '<S218>/         ' incorporates:
         *  DataTypeConversion: '<S251>/Data Type Conversion'
         *  DiscreteFilter: '<S256>/pressureFilter_IIR'
         *  Reshape: '<S255>/Reshapexhat'
         *  Sum: '<S4>/Difference between  sonar and pressure'
         */
        localB->numAccum = (real32_T)localDW->Delay2_DSTATE - localB->numAccum;
      } else {
        /* Switch: '<S218>/         ' incorporates:
         *  Constant: '<S218>/    '
         */
        localB->numAccum = localP->_Value_p;
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
                 rtb_Compare_fl) {
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
  localDW->Output_DSTATE_a += localP->FixPtConstant_Value;

  /* Sum: '<S515>/FixPt Sum1' incorporates:
   *  Constant: '<S515>/FixPt Constant'
   *  UnitDelay: '<S514>/Output'
   */
  localDW->Output_DSTATE_o += localP->FixPtConstant_Value_c;

  /* Sum: '<S434>/FixPt Sum1' incorporates:
   *  Constant: '<S434>/FixPt Constant'
   *  UnitDelay: '<S432>/Output'
   */
  localDW->Output_DSTATE += localP->FixPtConstant_Value_i;

  /* DataTypeConversion: '<S505>/Conversion' incorporates:
   *  Constant: '<S460>/CovarianceZ'
   */
  for (localB->i = 0; localB->i < 16; localB->i++) {
    localB->Conversion_ls[localB->i] = (real32_T)localP->
      CovarianceZ_Value[localB->i];
  }

  /* End of DataTypeConversion: '<S505>/Conversion' */

  /* MATLAB Function: '<S508>/SqrtUsedFcn' incorporates:
   *  Constant: '<S508>/isSqrtUsed'
   *  DataTypeConversion: '<S505>/Conversion'
   */
  if (localP->isSqrtUsed_Value) {
    for (localB->j = 0; localB->j < 4; localB->j++) {
      for (localB->i = 0; localB->i < 4; localB->i++) {
        localB->P_c[localB->j + (localB->i << 2)] = ((localB->
          Conversion_ls[localB->j + 4] * localB->Conversion_ls[localB->i + 4] +
          localB->Conversion_ls[localB->j] * localB->Conversion_ls[localB->i]) +
          localB->Conversion_ls[localB->j + 8] * localB->Conversion_ls[localB->i
          + 8]) + localB->Conversion_ls[localB->j + 12] * localB->
          Conversion_ls[localB->i + 12];
      }
    }
  } else {
    for (localB->j = 0; localB->j < 4; localB->j++) {
      for (localB->i = 0; localB->i < 4; localB->i++) {
        localB->P_c[localB->j + (localB->i << 2)] = localB->Conversion_ls
          [(localB->i << 2) + localB->j];
      }
    }
  }

  /* End of MATLAB Function: '<S508>/SqrtUsedFcn' */

  /* MATLAB Function: '<S305>/SqrtUsedFcn' incorporates:
   *  Constant: '<S259>/CovarianceZ'
   *  Constant: '<S305>/isSqrtUsed'
   */
  if (localP->isSqrtUsed_Value_b) {
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->Switch1 = localP->CovarianceZ_Value_h[localB->j + 2];
      localB->P[localB->j] = localB->Switch1 * localP->CovarianceZ_Value_h[2] +
        localP->CovarianceZ_Value_h[localB->j] * localP->CovarianceZ_Value_h[0];
      localB->P[localB->j + 2] = localB->Switch1 * localP->CovarianceZ_Value_h[3]
        + localP->CovarianceZ_Value_h[localB->j] * localP->CovarianceZ_Value_h[1];
    }
  } else {
    for (localB->j = 0; localB->j < 2; localB->j++) {
      localB->P[localB->j] = localP->CovarianceZ_Value_h[localB->j];
      localB->P[localB->j + 2] = localP->CovarianceZ_Value_h[localB->j + 2];
    }
  }

  /* End of MATLAB Function: '<S305>/SqrtUsedFcn' */

  /* DataTypeConversion: '<S367>/Conversion' incorporates:
   *  Constant: '<S322>/CovarianceZ'
   */
  localB->Conversion_n[0] = (real32_T)localP->CovarianceZ_Value_j[0];
  localB->Conversion_n[1] = (real32_T)localP->CovarianceZ_Value_j[1];
  localB->Conversion_n[2] = (real32_T)localP->CovarianceZ_Value_j[2];
  localB->Conversion_n[3] = (real32_T)localP->CovarianceZ_Value_j[3];

  /* MATLAB Function: '<S370>/SqrtUsedFcn' incorporates:
   *  Constant: '<S370>/isSqrtUsed'
   */
  flightControlSystem_SqrtUsedFcn(localB->Conversion_n,
    localP->isSqrtUsed_Value_d);

  /* DataTypeConversion: '<S421>/Conversion' incorporates:
   *  Constant: '<S376>/CovarianceZ'
   */
  localB->Conversion_pu[0] = (real32_T)localP->CovarianceZ_Value_i[0];
  localB->Conversion_pu[1] = (real32_T)localP->CovarianceZ_Value_i[1];
  localB->Conversion_pu[2] = (real32_T)localP->CovarianceZ_Value_i[2];
  localB->Conversion_pu[3] = (real32_T)localP->CovarianceZ_Value_i[3];

  /* MATLAB Function: '<S424>/SqrtUsedFcn' incorporates:
   *  Constant: '<S424>/isSqrtUsed'
   */
  flightControlSystem_SqrtUsedFcn(localB->Conversion_pu,
    localP->isSqrtUsed_Value_a);

  /* SignalConversion generated from: '<S437>/Product' incorporates:
   *  Reshape: '<S441>/Reshapexhat'
   */
  localB->numAccum = localB->Add_e[0];
  localB->acc1 = localB->Add_e[1];

  /* Product: '<S437>/Product' incorporates:
   *  Math: '<S437>/Math Function'
   *  SignalConversion generated from: '<S437>/Product'
   */
  for (localB->j = 0; localB->j < 3; localB->j++) {
    localB->FIR_IMUaccel[localB->j] = (localB->MathFunction_f[localB->j + 3] *
      localB->acc1 + localB->MathFunction_f[localB->j] * localB->numAccum) +
      localB->MathFunction_f[localB->j + 6] * localB->Gain_b;
  }

  /* End of Product: '<S437>/Product' */

  /* Update for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  localDW->SimplyIntegrateVelocity_PrevResetState = (int8_T)
    localP->controlModePosVsOrient_Value;

  /* Update for Delay: '<S255>/MemoryX' */
  localDW->icLoad = false;

  /* Update for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] +=
    localP->SimplyIntegrateVelocity_gainval * localB->FIR_IMUaccel[0];

  /* Product: '<S277>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S255>/A'
   *  Delay: '<S255>/MemoryX'
   */
  localB->Switch1 = localP->A_Value[0] * localDW->MemoryX_DSTATE[0] +
    localDW->MemoryX_DSTATE[1] * localP->A_Value[2];

  /* Update for DiscreteIntegrator: '<S437>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[1] +=
    localP->SimplyIntegrateVelocity_gainval * localB->FIR_IMUaccel[1];

  /* Product: '<S277>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S255>/A'
   *  Delay: '<S255>/MemoryX'
   */
  localB->unnamed_idx_0_tmp = localDW->MemoryX_DSTATE[0] * localP->A_Value[1] +
    localDW->MemoryX_DSTATE[1] * localP->A_Value[3];

  /* Update for Delay: '<S255>/MemoryX' incorporates:
   *  Constant: '<S255>/B'
   *  Product: '<S277>/B[k]*u[k]'
   *  Product: '<S307>/Product3'
   *  Reshape: '<S255>/Reshapeu'
   *  Sum: '<S277>/Add'
   */
  localDW->MemoryX_DSTATE[0] = (localP->B_Value[0] * localB->Sum[2] +
    localB->Switch1) + localB->Product3[0];

  /* Update for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] = localDW->pressureFilter_IIR_states[1];

  /* Update for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[2] = localDW->sonarFilter_IIR_states[1];

  /* Update for Delay: '<S255>/MemoryX' incorporates:
   *  Constant: '<S255>/B'
   *  Product: '<S277>/B[k]*u[k]'
   *  Product: '<S307>/Product3'
   *  Reshape: '<S255>/Reshapeu'
   *  Sum: '<S277>/Add'
   */
  localDW->MemoryX_DSTATE[1] = (localP->B_Value[1] * localB->Sum[2] +
    localB->unnamed_idx_0_tmp) + localB->Product3[1];

  /* Update for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] = localDW->pressureFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[1] = localDW->sonarFilter_IIR_states[0];

  /* Update for DiscreteFilter: '<S256>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] = localDW->pressureFilter_IIR_tmp;

  /* Update for DiscreteFilter: '<S256>/sonarFilter_IIR' */
  localDW->sonarFilter_IIR_states[0] = localDW->sonarFilter_IIR_tmp;

  /* Update for DiscreteIntegrator: '<S319>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * localB->r;

  /* Update for Delay: '<S321>/MemoryX' incorporates:
   *  Constant: '<S321>/A'
   *  Constant: '<S321>/B'
   *  Product: '<S341>/A[k]*xhat[k|k-1]'
   *  Product: '<S341>/B[k]*u[k]'
   *  Product: '<S372>/Product3'
   *  Sum: '<S341>/Add'
   */
  localDW->icLoad_b = false;
  localDW->MemoryX_DSTATE_c[0] = ((localP->A_Value_d[0] * localB->Conversion_h[0]
    + localB->Conversion_h[1] * localP->A_Value_d[2]) + localP->B_Value_n[0] *
    rtb_Reshapeu_o) + localB->MeasurementUpdate_k.Product3[0];
  localDW->MemoryX_DSTATE_c[1] = ((localB->Conversion_h[0] * localP->A_Value_d[1]
    + localB->Conversion_h[1] * localP->A_Value_d[3]) + localP->B_Value_n[1] *
    rtb_Reshapeu_o) + localB->MeasurementUpdate_k.Product3[1];

  /* Update for DiscreteFir: '<S253>/FIR_IMUaccel' */
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

  /* End of Update for DiscreteFir: '<S253>/FIR_IMUaccel' */

  /* Update for Delay: '<S375>/MemoryX' incorporates:
   *  Constant: '<S375>/A'
   *  Constant: '<S375>/B'
   *  Product: '<S395>/A[k]*xhat[k|k-1]'
   *  Product: '<S395>/B[k]*u[k]'
   *  Product: '<S426>/Product3'
   *  Sum: '<S395>/Add'
   */
  localDW->icLoad_i = false;
  localDW->MemoryX_DSTATE_d[0] = ((localP->A_Value_f[0] * localB->Conversion_d4
    [0] + localB->Conversion_d4[1] * localP->A_Value_f[2]) + localP->B_Value_m[0]
    * rtb_Reshapeu_c) + localB->MeasurementUpdate_i.Product3[0];
  localDW->MemoryX_DSTATE_d[1] = ((localB->Conversion_d4[0] * localP->A_Value_f
    [1] + localB->Conversion_d4[1] * localP->A_Value_f[3]) + localP->B_Value_m[1]
    * rtb_Reshapeu_c) + localB->MeasurementUpdate_i.Product3[1];

  /* Update for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz1' */
  localDW->LPFFcutoff40Hz1_states = localDW->LPFFcutoff40Hz1_tmp;

  /* Update for DiscreteTransferFcn: '<S253>/LPF Fcutoff = 40Hz' */
  localDW->LPFFcutoff40Hz_states = localDW->LPFFcutoff40Hz_tmp;

  /* Update for DiscreteFilter: '<S253>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[4] = localDW->IIR_IMUgyro_r_states[3];
  localDW->IIR_IMUgyro_r_states[3] = localDW->IIR_IMUgyro_r_states[2];
  localDW->IIR_IMUgyro_r_states[2] = localDW->IIR_IMUgyro_r_states[1];
  localDW->IIR_IMUgyro_r_states[1] = localDW->IIR_IMUgyro_r_states[0];
  localDW->IIR_IMUgyro_r_states[0] = localDW->IIR_IMUgyro_r_tmp;

  /* Switch: '<S435>/FixPt Switch' */
  if (localDW->Output_DSTATE > localP->WrapToZero_Threshold_l) {
    /* Sum: '<S434>/FixPt Sum1' incorporates:
     *  Constant: '<S435>/Constant'
     *  UnitDelay: '<S432>/Output'
     */
    localDW->Output_DSTATE = localP->Constant_Value_c;
  }

  /* End of Switch: '<S435>/FixPt Switch' */

  /* Update for Delay: '<S441>/MemoryX' */
  localDW->icLoad_g = false;
  for (localB->j = 0; localB->j < 4; localB->j++) {
    /* Product: '<S479>/B[k]*u[k]' incorporates:
     *  Constant: '<S441>/B'
     *  Reshape: '<S441>/Reshapeu'
     */
    localB->fv[localB->j] = localP->B_Value_d[localB->j + 4] * localB->Product[1]
      + localP->B_Value_d[localB->j] * localB->Product[0];

    /* Product: '<S479>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S441>/A'
     *  Delay: '<S441>/MemoryX'
     */
    localB->fv1[localB->j] = ((localP->A_Value_l[localB->j + 4] *
      localDW->MemoryX_DSTATE_g[1] + localP->A_Value_l[localB->j] *
      localDW->MemoryX_DSTATE_g[0]) + localP->A_Value_l[localB->j + 8] *
      localDW->MemoryX_DSTATE_g[2]) + localP->A_Value_l[localB->j + 12] *
      localDW->MemoryX_DSTATE_g[3];
  }

  /* Update for Delay: '<S441>/MemoryX' incorporates:
   *  Sum: '<S479>/Add'
   */
  localDW->MemoryX_DSTATE_g[0] = (localB->fv[0] + localB->fv1[0]) +
    localB->Product3_c[0];
  localDW->MemoryX_DSTATE_g[1] = (localB->fv[1] + localB->fv1[1]) +
    localB->Product3_c[1];
  localDW->MemoryX_DSTATE_g[2] = (localB->fv[2] + localB->fv1[2]) +
    localB->Product3_c[2];
  localDW->MemoryX_DSTATE_g[3] = (localB->fv[3] + localB->fv1[3]) +
    localB->Product3_c[3];

  /* Switch: '<S516>/FixPt Switch' */
  if (localDW->Output_DSTATE_o > localP->WrapToZero_Threshold_c) {
    /* Sum: '<S515>/FixPt Sum1' incorporates:
     *  Constant: '<S516>/Constant'
     *  UnitDelay: '<S514>/Output'
     */
    localDW->Output_DSTATE_o = localP->Constant_Value_a;
  }

  /* End of Switch: '<S516>/FixPt Switch' */
  for (localB->j = 0; localB->j < 2; localB->j++) {
    /* Signum: '<S91>/SignPreIntegrator' incorporates:
     *  DiscreteIntegrator: '<S100>/Integrator'
     */
    localB->rtb_sincos_o2_idx_0_tmp = localB->Integrator_n[localB->j];

    /* RelationalOperator: '<S91>/NotEqual' incorporates:
     *  DiscreteIntegrator: '<S100>/Integrator'
     */
    localB->rtb_Subtract_p_idx_0 = localB->SignPreIntegrator[localB->j];

    /* Signum: '<S192>/SignPreIntegrator' incorporates:
     *  DiscreteIntegrator: '<S201>/Integrator'
     */
    localB->denAccum = localB->Add_j[localB->j];

    /* RelationalOperator: '<S192>/NotEqual' incorporates:
     *  DiscreteIntegrator: '<S201>/Integrator'
     */
    localB->rtb_DataTypeConversion_g_idx_1_tmp = localB->SignPreSat[localB->j];

    /* Reshape: '<S441>/Reshapexhat' */
    localB->numAccum = localB->Add_e[localB->j];

    /* Update for DiscreteFilter: '<S440>/IIRgyroz' */
    localB->memOffset = localB->j * 5;
    localDW->IIRgyroz_states[localB->memOffset + 4] = localDW->
      IIRgyroz_states[localB->memOffset + 3];
    localDW->IIRgyroz_states[localB->memOffset + 3] = localDW->
      IIRgyroz_states[localB->memOffset + 2];
    localDW->IIRgyroz_states[localB->memOffset + 2] = localDW->
      IIRgyroz_states[localB->memOffset + 1];
    localDW->IIRgyroz_states[localB->memOffset + 1] = localDW->
      IIRgyroz_states[localB->memOffset];
    localDW->IIRgyroz_states[localB->memOffset] = localDW->IIRgyroz_tmp
      [localB->j];

    /* Update for UnitDelay: '<S448>/UD' incorporates:
     *  Sum: '<S448>/Diff'
     */
    localDW->UD_DSTATE[localB->j] = localB->TSamp[localB->j];

    /* Update for Delay: '<S436>/Delay' */
    localDW->Delay_DSTATE[localB->j] = localB->numAccum;

    /* Update for Delay: '<S6>/Delay1' */
    localDW->Delay1_DSTATE[localB->j] = localB->numAccum;

    /* Signum: '<S192>/SignPreSat' */
    if (localB->rtb_DataTypeConversion_g_idx_1_tmp < 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = -1.0F;
    } else if (localB->rtb_DataTypeConversion_g_idx_1_tmp > 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = 1.0F;
    } else if (localB->rtb_DataTypeConversion_g_idx_1_tmp == 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = 0.0F;
    } else {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = (rtNaNF);
    }

    /* End of Signum: '<S192>/SignPreSat' */

    /* DataTypeConversion: '<S192>/DataTypeConv1' */
    if (rtIsNaNF(localB->rtb_DataTypeConversion_g_idx_0_tmp)) {
      localB->rtb_Subtract_p_idx_1 = 0.0F;
    } else {
      localB->rtb_Subtract_p_idx_1 = (real32_T)fmod
        (localB->rtb_DataTypeConversion_g_idx_0_tmp, 256.0);
    }

    /* Signum: '<S192>/SignPreIntegrator' */
    if (localB->denAccum < 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = -1.0F;
    } else if (localB->denAccum > 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = 1.0F;
    } else if (localB->denAccum == 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = 0.0F;
    } else {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = (rtNaNF);
    }

    /* DataTypeConversion: '<S192>/DataTypeConv2' */
    if (rtIsNaNF(localB->rtb_DataTypeConversion_g_idx_0_tmp)) {
      localB->numAccum = 0.0F;
    } else {
      localB->numAccum = (real32_T)fmod
        (localB->rtb_DataTypeConversion_g_idx_0_tmp, 256.0);
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
    if ((localB->ZeroGain_e[localB->j] !=
         localB->rtb_DataTypeConversion_g_idx_1_tmp) &&
        ((localB->rtb_Subtract_p_idx_1 < 0.0F ? (int32_T)(int8_T)-(int8_T)
          (uint8_T)-localB->rtb_Subtract_p_idx_1 : (int32_T)(int8_T)(uint8_T)
          localB->rtb_Subtract_p_idx_1) == (localB->numAccum < 0.0F ? (int32_T)
          (int8_T)-(int8_T)(uint8_T)-localB->numAccum : (int32_T)(int8_T)
          (uint8_T)localB->numAccum))) {
      localB->denAccum = localP->Constant1_Value_b;
    }

    /* End of Switch: '<S192>/Switch' */

    /* Update for DiscreteIntegrator: '<S201>/Integrator' */
    localDW->Integrator_DSTATE[localB->j] += localP->Integrator_gainval *
      localB->denAccum;

    /* Update for DiscreteTransferFcn: '<S10>/LPF 8Hz Cutoff Filter to avoid oscillations  induced by position controller' */
    localDW->
      LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle[localB->j]
      = localDW->
      LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrol_a[localB->j];

    /* Signum: '<S91>/SignPreSat' */
    if (localB->rtb_Subtract_p_idx_0 < 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = -1.0F;
    } else if (localB->rtb_Subtract_p_idx_0 > 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = 1.0F;
    } else if (localB->rtb_Subtract_p_idx_0 == 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = 0.0F;
    } else {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = (rtNaNF);
    }

    /* End of Signum: '<S91>/SignPreSat' */

    /* DataTypeConversion: '<S91>/DataTypeConv1' */
    if (rtIsNaNF(localB->rtb_DataTypeConversion_g_idx_0_tmp)) {
      localB->rtb_Subtract_p_idx_1 = 0.0F;
    } else {
      localB->rtb_Subtract_p_idx_1 = (real32_T)fmod
        (localB->rtb_DataTypeConversion_g_idx_0_tmp, 256.0);
    }

    /* Signum: '<S91>/SignPreIntegrator' */
    if (localB->rtb_sincos_o2_idx_0_tmp < 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = -1.0F;
    } else if (localB->rtb_sincos_o2_idx_0_tmp > 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = 1.0F;
    } else if (localB->rtb_sincos_o2_idx_0_tmp == 0.0F) {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = 0.0F;
    } else {
      localB->rtb_DataTypeConversion_g_idx_0_tmp = (rtNaNF);
    }

    /* DataTypeConversion: '<S91>/DataTypeConv2' */
    if (rtIsNaNF(localB->rtb_DataTypeConversion_g_idx_0_tmp)) {
      localB->numAccum = 0.0F;
    } else {
      localB->numAccum = (real32_T)fmod
        (localB->rtb_DataTypeConversion_g_idx_0_tmp, 256.0);
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
    if ((localB->Akxhatkk1_b[localB->j] != localB->rtb_Subtract_p_idx_0) &&
        ((localB->rtb_Subtract_p_idx_1 < 0.0F ? (int32_T)(int8_T)-(int8_T)
          (uint8_T)-localB->rtb_Subtract_p_idx_1 : (int32_T)(int8_T)(uint8_T)
          localB->rtb_Subtract_p_idx_1) == (localB->numAccum < 0.0F ? (int32_T)
          (int8_T)-(int8_T)(uint8_T)-localB->numAccum : (int32_T)(int8_T)
          (uint8_T)localB->numAccum))) {
      localB->rtb_sincos_o2_idx_0_tmp = localP->Constant1_Value;
    }

    /* End of Switch: '<S91>/Switch' */

    /* Update for DiscreteIntegrator: '<S100>/Integrator' */
    localDW->Integrator_DSTATE_d[localB->j] += localP->Integrator_gainval_h *
      localB->rtb_sincos_o2_idx_0_tmp;

    /* Update for DiscreteIntegrator: '<S95>/Filter' */
    localDW->Filter_DSTATE[localB->j] += localP->Filter_gainval *
      localB->LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontr
      [localB->j];
  }

  /* Switch: '<S16>/FixPt Switch' */
  if (localDW->Output_DSTATE_ar > localP->WrapToZero_Threshold_cj) {
    /* Sum: '<S15>/FixPt Sum1' incorporates:
     *  Constant: '<S16>/Constant'
     *  UnitDelay: '<S14>/Output'
     */
    localDW->Output_DSTATE_ar = localP->Constant_Value_ld;
  }

  /* End of Switch: '<S16>/FixPt Switch' */

  /* Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S7>/I_pr'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_o += localP->I_pr_Gain *
    localB->rtb_DataTypeConversion3_idx_1 *
    localP->DiscreteTimeIntegrator_gainval_e;
  if (localDW->DiscreteTimeIntegrator_DSTATE_o >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_o =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE_o <=
             localP->DiscreteTimeIntegrator_LowerSat) {
    localDW->DiscreteTimeIntegrator_DSTATE_o =
      localP->DiscreteTimeIntegrator_LowerSat;
  }

  localDW->DiscreteTimeIntegrator_PrevResetState = (int8_T)rtb_Compare_ot;

  /* End of Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S11>/I_yaw'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_i += localP->I_yaw_Gain *
    localB->Saturation_i * localP->DiscreteTimeIntegrator_gainval_h;

  /* Switch: '<S233>/FixPt Switch' */
  if (localDW->Output_DSTATE_a > localP->WrapToZero_Threshold) {
    /* Sum: '<S232>/FixPt Sum1' incorporates:
     *  Constant: '<S233>/Constant'
     *  UnitDelay: '<S225>/Output'
     */
    localDW->Output_DSTATE_a = localP->Constant_Value_l;
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
  flightControlSystem_PrevZCX.FlightControlSystem.TriggeredSubsystem_Trig_ZCE =
    UNINITIALIZED_ZCSIG;
}
