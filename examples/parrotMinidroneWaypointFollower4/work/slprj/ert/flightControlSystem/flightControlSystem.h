#include "__cf_flightControlSystem.h"
#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <math.h>
#include <string.h>
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rsedu_image.h"
#endif
#include "flightControlSystem_types.h"
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T dgu5owvsdz [ _gN74BbsU5wqNjkJbC9b672 ] ; }
pwyrqeh13p ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { boolean_T kgqemy5kmn ; } iggvseuktg ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T ngsok1gmkx [ _gN74BbsU5wqNjkJbC9b672 ] ; }
ppzqfnv5oz ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { boolean_T eytpfqqdte ; } kdmjirgcui ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T waypoints_data [ _S7jOy2WqKYdJfeq_c2tim_ ] ; real_T
b_waypointsIn_data [ _S7jOy2WqKYdJfeq_c2tim_ ] ; real32_T
pkhvftgryf_mbvzarwird [ _GL1cfYXlov7alqvUlVUDz0 ] ; real32_T
h5liyfws4d_cl54gopm0x [ _GL1cfYXlov7alqvUlVUDz0 ] ; real_T
appendedWaypoints_data [ _RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T
ots0p1x4xa_kkiq3xxxve [ _t0CSRdt0cj28FWcY3kSLw_ ] ; real32_T
ijrli2ycge_cxarnvbvui [ _aoel664zPcTjzpXADn7l40 ] ; real32_T
omfr2gcveg_bhxxfovxdy [ _aoel664zPcTjzpXADn7l40 ] ; real32_T
ipg34hueyp_pbm3vprmfu [ _aoel664zPcTjzpXADn7l40 ] ; real32_T
ijrli2ycge_cv5hdgrwft [ _aoel664zPcTjzpXADn7l40 ] ; real_T
cewl0li00g_fqdqrf4qbc [ _g7WFphbd05O6bEjctOzUc1 ] ; boolean_T x [
_S7jOy2WqKYdJfeq_c2tim_ ] ; real_T kd2m003wgn_g2mlkqadfk [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T ijrli2ycge_g1smspu5ke [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T myd4lnwbc4_merlcviukg [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T cbxkkethzx_nz4o0shxby [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T gvpdkr5yov [ _g7WFphbd05O6bEjctOzUc1 ] ;
real32_T ct4linxs5f_ppxrqq0gsf [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T fv [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T fv1 [ _g7WFphbd05O6bEjctOzUc1 ] ;
real32_T k4dfjicviz_llw0u2ae0v [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T
lq0rsm3q3w_jwzvbuczlb [ _g7WFphbd05O6bEjctOzUc1 ] ; real_T imoolhuci3 [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T hnc44zhq11 [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T luc1p3ojdm [ _RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T
myd4lnwbc4_dhmrxtyqop [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T
ca5hvqq5rx_guugdwf2m3 [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T
fqcjylf0lg_ldqodwenvz [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; boolean_T b [
_aoel664zPcTjzpXADn7l40 ] ; int8_T c_data [ _aoel664zPcTjzpXADn7l40 ] ;
real_T kqosiqzxyh ; real_T ktfnkmtxlp [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T
dist ; real_T lambda ; real_T b_dhamdvybc1 ; real_T ltnvmpgsoz_dypejvacrn ;
real_T r_idx_1 ; real_T r_idx_2 ; real_T waypoints_tmp ; real_T
frnh05ofgy_tmp ; real_T kd2m003wgn_tmp ; real_T waypoints_tmp_tmp ; real_T
g4b0d0zimg_lxo5edjg3c ; real_T mzw2tt3k2l_owjr1h1vqy ; real_T scale ; real_T
absxk ; real_T t ; real32_T iwh2fsnpbn_bjbgfqrolh [ _gN74BbsU5wqNjkJbC9b672 ]
; real32_T exuo1h4rkq_nuebgmauvi [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
pxi04akxva_bsqwvugooi [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
e22whypexe_lnjdk5wtww [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
p0tdg4nvnn_hv2ho1zopz [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
mojcxpk43r_bnlywzniup [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
kpuldwt5ng_dapv3jlyq5 [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
gtxq1y3lh0_ezqlmfzvpq [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
ogwngqp0c5_bjvjhhzy4i [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
pcz1dpjqcn_jzx3amusab [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
egwcvvr0tz_fdinthrxmb [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
ovlpnzrfxc_al00mdgrv4 [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
ozj2rzog3y_ju13rw2h0m [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
crztxkz3vf_jz50ptvnrg [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
jkeygdfagh_o4f35lbcvx [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
a3n5zaty4p_nyxm0bsxsn [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T gjpxvtycka ;
real32_T iaqbkoo4a2 ; real32_T be3rrlgx5h ; real32_T pf4hateu5v ; real32_T
btqhqofpxd [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T ntmd4iojbn [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T lzg1sd0ve4 [ _g7WFphbd05O6bEjctOzUc1 ] ;
real32_T bykcnaer0n [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T dmiosyqhuf ;
real32_T cif4duc0kj [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T h5tbartmsj ;
real32_T gtyvn4ksou ; real32_T acc1 ; real32_T denAccum ; real32_T
aa1j1e0zct_icdfyazkhu ; real32_T firiutnann_oyypvi4boh ; real32_T
okipfyrljb_idx_2 ; real32_T evo1gehkyj_idx_1 ; real32_T evo1gehkyj_idx_2 ;
real32_T okipfyrljb_idx_0 ; real32_T okipfyrljb_idx_1 ; real32_T numAccum ;
real32_T e03eyhovs3_idx_0_tmp ; real32_T pro4z12krd_idx_0_tmp ; real32_T
pro4z12krd_idx_1_tmp ; real32_T e03eyhovs3_idx_2_tmp ; real32_T
pro4z12krd_idx_2_tmp ; real32_T ijrli2ycge_tmp ; real32_T firiutnann_tmp ;
real32_T ijrli2ycge_tmp_nvsvtgkap4 ; real32_T ijrli2ycge_tmp_tmp ; real32_T
ijrli2ycge_tmp_m3yhjduhi1 ; real32_T ijrli2ycge_tmp_czkfpwuzm5 ; int32_T j ;
int32_T denIdx ; int32_T i2 ; int32_T ix ; int32_T b_exponent ; int32_T
b_exponent_mdoasc5av4 ; int32_T i ; int16_T n2g3ota2qq ; uint8_T cb4u5vnu3z ;
uint8_T f1qqcbrnby ; boolean_T nfu4zs2hv0 ; boolean_T pg34p2hdza ; boolean_T
oectf2xb3x ; ppzqfnv5oz es3jg330l4 ; pwyrqeh13p mwennlv0ep ; ppzqfnv5oz
gfdoapmebrz ; pwyrqeh13p fgbgjpfbpiz ; } ko3mo3zjmw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { fhgcsffear ilf0p1ou4h ; real_T hpghxesfxf ; real_T
awmxfnptld [ _gN74BbsU5wqNjkJbC9b672 ] ; real_T hh3hoopygu [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T fbyxz4ek3t ; real_T iq3jlndmhb ; struct {
void * LoggedData ; } ik0dc5olop ; real32_T niiafwi1lh [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T csjtl1dobh [ _nfvdmbxYkVXzXnpHyWwmg2 ] ;
real32_T nkkdp2vci2 ; real32_T armfi0voxg [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T olkz55hiau [ _7TQ7rYk8WkCvursSu7_Dc_ ] ; real32_T jmygcelpik [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T lnprrh21ol ; real32_T ktayfsp2zt ;
real32_T pnfrbwk23p [ _KYlcoOk9rSSGYswizhYqZ2 ] ; real32_T kbx0nafw0l [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T gh5z51offr [ _IjHdoOm5hGk4VAbwwsvcL1 ] ;
real32_T c3luq0qzy3 [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T djzxhf5a0x [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T amfpyop4h3 [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T o1f1x5oplq [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T ht01rd5iuh [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T eafkewbyoa [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T jcxmva0z4p [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T b5xhao055x ;
real32_T a0yguhjcl4 ; int32_T b34aihga0w ; uint32_T cywln2oh4h ; uint32_T
dgvktra20y ; uint32_T kcfk4o5lnq ; uint32_T ktj5jasgh3 ; real32_T flvswd4lxs
; real32_T o5sdnjl4mv ; real32_T con1cvwasr ; real32_T judefupyjc ; real32_T
djuavcle4c [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T dwf3oxrmrr [
_gN74BbsU5wqNjkJbC9b672 ] ; uint16_T bntecoh5ow ; int8_T psmfsiyyc1 ; int8_T
fop2nazrpx ; boolean_T mg3trvpojc ; boolean_T fmpic04b4e ; boolean_T
mwjeanwsep ; boolean_T nbjytmbkt5 ; boolean_T gbzwt4fwkn ; boolean_T
c3th2rjyik ; boolean_T dvx033i3wu ; boolean_T oj2fey5our ; boolean_T
l3bgejmztu ; kdmjirgcui es3jg330l4 ; iggvseuktg mwennlv0ep ; kdmjirgcui
gfdoapmebrz ; iggvseuktg fgbgjpfbpiz ; } ltddvlul1g ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ZCSigState oklqakk4az ; ZCSigState mbk1qd2v3l ; ZCSigState
n325ezpove ; } a5weciwehw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { uint8_T oqfkl1bzr2_mbvzarwird [ _Vn2_qIHoUSNg7kzn9tUiG2 ] ;
uint8_T ffrbnjtdbs_cl54gopm0x [ _Vn2_qIHoUSNg7kzn9tUiG2 ] ; uint8_T
ofgsygc1ol_kkiq3xxxve [ _Vn2_qIHoUSNg7kzn9tUiG2 ] ; uint8_T imageBuff_1 [
_Vn2_qIHoUSNg7kzn9tUiG2 ] ; uint8_T imageBuff_2 [ _Vn2_qIHoUSNg7kzn9tUiG2 ] ;
uint8_T imageBuff_3 [ _Vn2_qIHoUSNg7kzn9tUiG2 ] ; real_T
o5ws0ni5p0_cxarnvbvui ; ko3mo3zjmw etdp2kg3ftb ; } ircitwx3zdm ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { bjqsgn0csy l152eirbdu ; volatile real_T oq44mkeutp [
_gN74BbsU5wqNjkJbC9b672 ] ; volatile int8_T fb0f52aifb ; boolean_T jjrfotind4
; ltddvlul1g etdp2kg3ftb ; } nllkaxiwhzw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { a5weciwehw etdp2kg3ftb ; } cspyln32yuv ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct eolxfdqn1d_ { uint8_T Constant_Value ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct nky1inzkgw_ { real32_T Lykyhatkk1_Y0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct nkcqldbdpt_ { real32_T deltax_Y0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ezhog2cu2d_ { real_T outlierBelowFloor_const ; real_T
outlierJump_const ; real_T currentEstimateVeryOffFromPressure_const ; real_T
currentStateVeryOffsonarflt_const ; real_T ComparewithStoptime_const ; real_T
Checkerrorcondition_const ; real_T u0continuousOFerrors_const ; real32_T
Angularvelocitycontrolloop_D [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
Angularvelocitycontrolloop_I [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
Velocitycontroller_I ; real32_T DiscreteDerivative_ICPrevScaledInput ;
real32_T Angularvelocitycontrolloop_InitialConditionForFilter ; real32_T
Velocitycontroller_InitialConditionForIntegrator ; real32_T
Angularvelocitycontrolloop_InitialConditionForIntegrator ; real32_T
Positioncontroller_LowerSaturationLimit ; real32_T
Velocitycontroller_LowerSaturationLimit ; real32_T
Angularvelocitycontrolloop_LowerSaturationLimit ; real32_T
Angularvelocitycontrolloop_N [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
Positioncontroller_P ; real32_T Velocitycontroller_P ; real32_T
Anglecontrolloop_P ; real32_T Angularvelocitycontrolloop_P [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T Positioncontroller_UpperSaturationLimit
; real32_T Velocitycontroller_UpperSaturationLimit ; real32_T
Angularvelocitycontrolloop_UpperSaturationLimit ; real32_T
Checkifthedroneis03maboveground_const ; real32_T CompareToConstant_const ;
real32_T CompareToConstant1_const ; real32_T maxp_const ; real32_T maxq_const
; real32_T maxw1_const ; real32_T maxw2_const ; real32_T maxdw1_const ;
real32_T maxdw2_const ; real32_T maxp2_const ; real32_T maxq2_const ;
real32_T maxw3_const ; real32_T maxw4_const ; real32_T minHeightforOF_const ;
real32_T DeactivateAccelerationIfOFisnotusedduetolowaltitude_const ; real32_T
donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con ; real32_T
donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co ; real32_T
CompareToConstant_const_n0jiv0mrr2 ; real32_T
CompareToConstant1_const_n5vyzm2n3m ; real32_T CompareToConstant2_const ;
real32_T CompareToConstant4_const ; real32_T CompareToConstant3_const ;
real32_T CompareToConstant5_const ; uint32_T WrapToZero_Threshold ; uint32_T
WrapToZero_Threshold_fjdj5j5yxb ; uint32_T WrapToZero_Threshold_mu1gkr3sqy ;
uint32_T WrapToZero_Threshold_e2jac0q10w ; uint32_T
CompareToConstant_const_n5sjucdmso ; uint32_T
CompareToConstant_const_irr5s05oma ; uint32_T Wait5seconds_const ; uint16_T
WrapToZero_Threshold_cgy1ididt3 ; uint16_T CompareToConstant_const_ak1bo5fk1k
; real_T DisableOFcheck_Value ; real_T _Value ; real_T StartupWaypoints_Value
[ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T Waypoints_Value [
_S7jOy2WqKYdJfeq_c2tim_ ] ; real_T Lookaheaddistance_Value ; real_T
Lykyhatkk1_Y0 ; real_T deltax_Y0 ; real_T Constant_Value ; real_T
Delay2_InitialCondition ; real_T X0_Value [ _gN74BbsU5wqNjkJbC9b672 ] ;
real_T SaturationSonar_LowerSat ; real_T sonarFilter_IIR_NumCoef [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T sonarFilter_IIR_DenCoef [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T sonarFilter_IIR_InitialStates ; real_T
KalmanGainM_Value [ _gN74BbsU5wqNjkJbC9b672 ] ; real_T C_Value [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T KalmanGainM_Value_hwagif2kvo [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T KalmanGainM_Value_epenbrxqbi [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T KalmanGainM_Value_g2n05j33sy [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real_T KalmanGainL_Value [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real_T gravity_Value [ _nfvdmbxYkVXzXnpHyWwmg2 ]
; real_T gainaccinput1_Gain ; real_T A_Value [ _g7WFphbd05O6bEjctOzUc1 ] ;
real_T gravity_Value_kchj2jvnzn [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T
KalmanGainL_Value_e052vh2hvb [ _gN74BbsU5wqNjkJbC9b672 ] ; real_T
KalmanGainL_Value_k3cecj5ziz [ _gN74BbsU5wqNjkJbC9b672 ] ; real_T B_Value [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T D_Value ; real_T
KalmanGainL_Value_hyzbhnl4pi [ _gN74BbsU5wqNjkJbC9b672 ] ; real_T
Wait3Seconds_Value ; real_T DelayOneStep_InitialCondition ; real_T
u5meters_Value ; real_T CovarianceZ_Value [ _GL1cfYXlov7alqvUlVUDz0 ] ;
real_T CovarianceZ_Value_mfeunzczqm [ _g7WFphbd05O6bEjctOzUc1 ] ; real_T
P0_Value [ _g7WFphbd05O6bEjctOzUc1 ] ; real_T CovarianceZ_Value_kdkxrg0e04 [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T CovarianceZ_Value_nvzg4cy3al [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T G_Value [ _gN74BbsU5wqNjkJbC9b672 ] ;
real_T H_Value ; real_T N_Value ; real_T Q_Value ; real_T R_Value ; real32_T
takeoff_gain1_Gain ; real32_T P_z1_Gain ; real32_T D_z1_Gain ; real32_T
Pitchcorrection_Value ; real32_T zerocorrection_Value ; real32_T Gain_Gain [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T _Value_otfjgfilod ; real32_T X_Y0 ;
real32_T Y_Y0 ; real32_T LandingLookaheaddistance_Value ; real32_T
Tocontroller_Y0 ; real32_T Gain_Gain_kgej35myc2 ; real32_T Out1_Y0 ; real32_T
Lykyhatkk1_Y0_fx4yxbma3t ; real32_T deltax_Y0_fyfwrxfyts ; real32_T
Gain_Gain_oyce4tk23l ; real32_T opticalFlowErrorCorrect_Gain ; real32_T
TorqueTotalThrustToThrustPerMotor_Value [ _GL1cfYXlov7alqvUlVUDz0 ] ;
real32_T A_Value_hgyfwt4u1p [ _GL1cfYXlov7alqvUlVUDz0 ] ; real32_T
SimplyIntegrateVelocity_gainval ; real32_T SimplyIntegrateVelocity_IC ;
real32_T invertzaxisGain_Gain ; real32_T prsToAltGain_Gain ; real32_T
pressureFilter_IIR_NumCoef [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T
pressureFilter_IIR_DenCoef [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T
pressureFilter_IIR_InitialStates ; real32_T DiscreteTimeIntegrator_gainval ;
real32_T DiscreteTimeIntegrator_IC ; real32_T X0_Value_khko0uuq2x [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T
Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bi [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T inverseIMU_gain_Gain [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T FIR_IMUaccel_InitialStates ; real32_T
FIR_IMUaccel_Coefficients [ _RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T Gain2_Gain ;
real32_T Constant_Value_af123j3lbz ; real32_T C_Value_jjv25p1d4u [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T X0_Value_lubqgbvex0 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T C_Value_okwhfuqg2v [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T LPFFcutoff40Hz1_NumCoef [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T LPFFcutoff40Hz1_DenCoef [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T LPFFcutoff40Hz1_InitialStates ; real32_T
LPFFcutoff40Hz_NumCoef [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
LPFFcutoff40Hz_DenCoef [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
LPFFcutoff40Hz_InitialStates ; real32_T IIR_IMUgyro_r_NumCoef [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T IIR_IMUgyro_r_DenCoef [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T IIR_IMUgyro_r_InitialStates ; real32_T
Constant_Value_pgcpugs0n0 ; real32_T X0_Value_frfugplneg [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T C_Value_havlk0wzgu [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real32_T Gain1_Gain ; real32_T IIRgyroz_NumCoef [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T IIRgyroz_DenCoef [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T IIRgyroz_InitialStates ; real32_T
TSamp_WtEt ; real32_T Delay_InitialCondition ; real32_T
Delay1_InitialCondition ; real32_T B_Value_mdiuchn1bk [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real32_T D_Value_px2udzggus [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T Integrator_gainval ; real32_T
LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T
LPF8HzCutoffFiltertoavoidoscillationsinducedbypositi_h0maunm1d2 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T
LPF8HzCutoffFiltertoavoidoscillationsinducedbypositi_nqudwuyg4d ; real32_T
Integrator_gainval_b22yojr0c5 ; real32_T Filter_gainval ; real32_T w1_Value ;
real32_T DiscreteTimeIntegrator_gainval_nbmk3si34q ; real32_T
DiscreteTimeIntegrator_IC_lr2uyhzpcl ; real32_T
DiscreteTimeIntegrator_UpperSat ; real32_T DiscreteTimeIntegrator_LowerSat ;
real32_T SaturationThrust1_UpperSat ; real32_T SaturationThrust1_LowerSat ;
real32_T Saturation_UpperSat ; real32_T Saturation_LowerSat ; real32_T
P_yaw_Gain ; real32_T DiscreteTimeIntegrator_gainval_luhkk2ssae ; real32_T
DiscreteTimeIntegrator_IC_echqri4zis ; real32_T D_yaw_Gain ; real32_T
ThrustToMotorCommand_Gain ; real32_T Saturation5_UpperSat ; real32_T
Saturation5_LowerSat ; real32_T MotorDirections_Gain [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T A_Value_e3w10rbxn0 [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T A_Value_f5510fdypl [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T B_Value_o01ht0vsur [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T D_Value_atcfdu2oo5 ; real32_T
B_Value_asv3yhjruf [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T D_Value_dldz4w02si
; real32_T ZeroGain_Gain ; real32_T Constant1_Value ; real32_T
ZeroGain_Gain_das40lvaju ; real32_T Constant1_Value_dl0vsgs5u2 ; real32_T
I_yaw_Gain ; real32_T I_pr_Gain ; real32_T Gain_Gain_olryptzwj4 ; real32_T
Gain1_Gain_jh2zx4uorz ; real32_T P0_Value_dyimdquaqa [
_GL1cfYXlov7alqvUlVUDz0 ] ; real32_T G_Value_jbqfitn4is [
_GL1cfYXlov7alqvUlVUDz0 ] ; real32_T Q_Value_gokl0ck4cw [
_GL1cfYXlov7alqvUlVUDz0 ] ; real32_T H_Value_gw4s3slawl [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real32_T N_Value_olbezfswyj [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real32_T P0_Value_a2gejyu53c [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T G_Value_k3lusosrn4 [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T Q_Value_lddlhfsse3 [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T P0_Value_dsnt1i112p [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T G_Value_be1aor4hxh [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T Q_Value_fetudksceh [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T R_Value_osxiqulzv5 [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T H_Value_jc2hlgjzci [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T N_Value_nhykerhbwn [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T H_Value_dz2z0uqkh0 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T N_Value_h3mqhnxist [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T R_Value_ahn1gjrciv ; real32_T
R_Value_clpgxhztrs ; uint32_T Output_InitialCondition ; uint32_T
Output_InitialCondition_msfnpsvtjf ; uint32_T
Output_InitialCondition_ndzvvl34s1 ; uint32_T
Output_InitialCondition_osscroh2yb ; uint32_T FixPtConstant_Value ; uint32_T
Constant_Value_di3fsbickv ; uint32_T FixPtConstant_Value_hdfe1m2mcc ;
uint32_T Constant_Value_kbrepdc5cc ; uint32_T FixPtConstant_Value_koypno4npm
; uint32_T Constant_Value_deveggf55y ; uint32_T
FixPtConstant_Value_dov1s0gfna ; uint32_T Constant_Value_jwkaosi33g ;
uint16_T Output_InitialCondition_hpp0bwe1mt ; uint16_T
FixPtConstant_Value_ecbev4exbx ; uint16_T Constant_Value_evkepash2k ;
boolean_T controlModePosVsOrient_Value ; boolean_T isSqrtUsed_Value ;
boolean_T isSqrtUsed_Value_oqwfowwymm ; boolean_T isSqrtUsed_Value_gqdlj43bi3
; boolean_T isSqrtUsed_Value_agalqbdwoj ; uint8_T Landed_Value ; uint8_T
No_error_Value ; uint8_T Out1_Y0_drohdf4gng ; uint8_T
Disabletemperaturecompensation_CurrentSetting ; uint8_T
ManualSwitch_CurrentSetting ; uint8_T Merge_InitialOutput ; nkcqldbdpt
es3jg330l4 ; nky1inzkgw mwennlv0ep ; nkcqldbdpt gfdoapmebrz ; nky1inzkgw
fgbgjpfbpiz ; eolxfdqn1d kzanoxdm0s ; eolxfdqn1d dr1vx2sxkd ; eolxfdqn1d
k5ep4x2ksk ; eolxfdqn1d oo5s2vyezhz ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ileg2v2ld1r_ { real_T Constant_Value ; real_T
RateTransition_InitialCondition ; ezhog2cu2d etdp2kg3ftb ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct diqjpw4041 { const char_T * * errorStatus ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ;
#endif
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern CommandBus
cmd_inport ; extern SensorsBus sensor_inport ; extern real32_T motors_outport
[ _g7WFphbd05O6bEjctOzUc1 ] ; extern uint8_T flag_outport ; extern void
ha1ipjbq54 ( void ) ; extern void gwlyno50ln ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
flightControlSystemTID0 ( void ) ; extern void flightControlSystemTID1 ( void
) ; extern void f4qzdbbxmw ( const char_T * * rt_errorStatus ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void oo5s2vyezh ( uint8_T * mkdsucxie5 , eolxfdqn1d * localP ) ;
extern void cibx5opdb3 ( const real32_T dgbz4pvt2o [ _g7WFphbd05O6bEjctOzUc1
] , boolean_T hyllhnbmhm ) ; extern void oyainu520m ( pwyrqeh13p * localB ,
nky1inzkgw * localP ) ; extern void pawrg5xuab ( iggvseuktg * localDW ) ;
extern void mv3y1bwhu3 ( pwyrqeh13p * localB , iggvseuktg * localDW ,
nky1inzkgw * localP ) ; extern void fgbgjpfbpi ( boolean_T cqvk3mqrgn , const
real32_T fc2b5an3d1 [ _gN74BbsU5wqNjkJbC9b672 ] , real32_T d1n0blysol , const
real32_T noshpzprwy [ _gN74BbsU5wqNjkJbC9b672 ] , const real32_T kymd3njtdo [
_gN74BbsU5wqNjkJbC9b672 ] , real32_T nbiaygs1y3 , real32_T kpzqqmqeao ,
pwyrqeh13p * localB , iggvseuktg * localDW , nky1inzkgw * localP ) ; extern
void f12mlr2pkx ( ppzqfnv5oz * localB , nkcqldbdpt * localP ) ; extern void
hxk4cawzrh ( kdmjirgcui * localDW ) ; extern void pgr2auu51d ( ppzqfnv5oz *
localB , kdmjirgcui * localDW , nkcqldbdpt * localP ) ; extern void
gfdoapmebr ( boolean_T jqge3hjpay , const real32_T mmiqxfyqph [
_gN74BbsU5wqNjkJbC9b672 ] , const real32_T ponyairzfx [
_gN74BbsU5wqNjkJbC9b672 ] , real32_T frov4wyxa3 , const real32_T mso1g2u35p [
_gN74BbsU5wqNjkJbC9b672 ] , ppzqfnv5oz * localB , kdmjirgcui * localDW ,
nkcqldbdpt * localP ) ; extern void ataovhs4tu ( ko3mo3zjmw * localB ,
ltddvlul1g * localDW , ezhog2cu2d * localP , a5weciwehw * localZCE ) ; extern
void lbmszyd3u3 ( ltddvlul1g * localDW , ezhog2cu2d * localP , a5weciwehw *
localZCE ) ; extern void o4bxmfqajb ( ltddvlul1g * localDW ) ; extern void
l55rcvzysb ( ko3mo3zjmw * localB , ltddvlul1g * localDW , ezhog2cu2d * localP
) ; extern void etdp2kg3ft ( const CommandBus * ipxpc4eli1 , const SensorsBus
* fp0u5nlpgw , ko3mo3zjmw * localB , ltddvlul1g * localDW , ezhog2cu2d *
localP , a5weciwehw * localZCE ) ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern lhjbdsj2rjg lhjbdsj2rj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern ircitwx3zdm ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ; extern
cspyln32yuv f51itwtzkqf ;
#endif
#endif
