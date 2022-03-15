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
typedef struct { real32_T lp52snsqzi [ _gN74BbsU5wqNjkJbC9b672 ] ; }
kjcgcmvbua ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { boolean_T mwopkvxf0v ; } ow05js5wc1 ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T gcjxrwmiy1 [ _gN74BbsU5wqNjkJbC9b672 ] ; }
fcfjuz3pyr ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { boolean_T lj3a1wpw4f ; } ht5scyowv2 ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T dy00ccez0d_mbvzarwird [ _GL1cfYXlov7alqvUlVUDz0 ] ;
real32_T kznsyrd1fn_cl54gopm0x [ _GL1cfYXlov7alqvUlVUDz0 ] ; real32_T
ots0p1x4xa_kkiq3xxxve [ _t0CSRdt0cj28FWcY3kSLw_ ] ; real32_T
acsu5olaoo_cxarnvbvui [ _aoel664zPcTjzpXADn7l40 ] ; real32_T
a04d1nwcnn_bhxxfovxdy [ _aoel664zPcTjzpXADn7l40 ] ; real32_T
fbzwarxe0e_pbm3vprmfu [ _aoel664zPcTjzpXADn7l40 ] ; real32_T
acsu5olaoo_cv5hdgrwft [ _aoel664zPcTjzpXADn7l40 ] ; real_T
djuknktonc_fqdqrf4qbc [ _g7WFphbd05O6bEjctOzUc1 ] ; real_T mnizl5bzdc [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T fzhmesvhoi_g2mlkqadfk [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T acsu5olaoo_g1smspu5ke [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T i5g3ahiujs [ _RAQgyWVtpyqfEVcLRZFTL_ ] ;
real32_T frylz5tpka_merlcviukg [ _RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T
kc3mfb1gzr_nz4o0shxby [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T fv [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T fv1 [ _g7WFphbd05O6bEjctOzUc1 ] ;
real32_T d3x234uhnh_ppxrqq0gsf [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T
cl3zjfswqx_llw0u2ae0v [ _g7WFphbd05O6bEjctOzUc1 ] ; real_T nyjkglx5x0 [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T okzpmngyzd [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T pmaaqsdefy_jwzvbuczlb [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T
fe4q4iunul_dhmrxtyqop [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T
hhjvl1rreq_guugdwf2m3 [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T
hbko5d1lvo_ldqodwenvz [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T akpwjk5hs5 ;
real_T d53ilzpwxs_dhamdvybc1 ; real_T unnamed_idx_0_tmp ; real_T
unnamed_idx_1_tmp ; real_T fzhmesvhoi_tmp ; real32_T xyLookaheadPoint [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T eqe1c2w4qx_dypejvacrn [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T gwtvo5rm20_lxo5edjg3c [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T al1ebvfcze_owjr1h1vqy [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T mltrqrvd5t_bjbgfqrolh [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T e0yz1m0aet_nuebgmauvi [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T gwwggrwfjn_bsqwvugooi [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T bodqq05a1z_lnjdk5wtww [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T gy0gtl1g23_hv2ho1zopz [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T n52s0512yg_bnlywzniup [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T b4q1gyy2f3_dapv3jlyq5 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T gonr3zwymh_ezqlmfzvpq [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T iqb1uwblsr_bjvjhhzy4i [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T psllizsv1z_jzx3amusab [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T kg3wy0s54g_fdinthrxmb [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T kxgwt5do4d_al00mdgrv4 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T ovjjyim0d4 ; real32_T mpzs441qs3 ;
real32_T a4tattkchx ; real32_T nzvbwdir4p ; real32_T ofwitppfrf [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T puz450vkza [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T o24ldzb041 [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T n3rjnpglb0 [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T cnpkstejxb [ _g7WFphbd05O6bEjctOzUc1 ] ;
real32_T akh3j3uxi2 ; real32_T h5tbartmsj ; real32_T gtyvn4ksou ; real32_T
acc1 ; real32_T distToCenter ; real32_T a ; real32_T x2 ; real32_T y2 ;
real32_T h ; real32_T gjwpminalf_ju13rw2h0m ; real32_T cohxcxvsce_jz50ptvnrg
; real32_T mqwjgixd3l_tmp ; real32_T fe4q4iunul_o4f35lbcvx ; real32_T
fvkk4ttbl5_idx_2 ; real32_T oyzn0lxpmn_idx_1 ; real32_T oyzn0lxpmn_idx_2 ;
real32_T fvkk4ttbl5_idx_0 ; real32_T fvkk4ttbl5_idx_1 ; real32_T numAccum ;
real32_T hhjvl1rreq_tmp ; real32_T hhjvl1rreq_tmp_nyxm0bsxsn ; real32_T
hhjvl1rreq_tmp_icdfyazkhu ; real32_T acsu5olaoo_tmp ; real32_T
acsu5olaoo_tmp_oyypvi4boh ; real32_T acsu5olaoo_tmp_nvsvtgkap4 ; real32_T
acsu5olaoo_tmp_m3yhjduhi1 ; real32_T gyogbhlzpa_czkfpwuzm5 ; int32_T j ;
int32_T denIdx ; int32_T memOffset ; int32_T b_exponent ; int32_T
b_exponent_mdoasc5av4 ; int32_T i ; int16_T ipkbnv5mpe ; uint8_T auisfdn3ed ;
boolean_T ot5sayxthk ; boolean_T peidgrfxm0 ; boolean_T mqwjgixd3l ;
boolean_T dz0wvqzd2j ; fcfjuz3pyr hkxw1mid3f ; kjcgcmvbua nk3cqqxqrs ;
fcfjuz3pyr evjguxsfkot ; kjcgcmvbua grfvd5gvh0b ; } ko3mo3zjmw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { bn35yrilyl airwtxvcny ; real_T hku3yburpf ; real_T
nt153ec4r4 [ _gN74BbsU5wqNjkJbC9b672 ] ; real_T kyyfzvi50o [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T cvxuknbkzp ; real_T c1xbyc3gzh ; struct {
void * LoggedData ; } ik0dc5olop ; real32_T era0a4xrpg [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T h4tdfzj0p3 [ _nfvdmbxYkVXzXnpHyWwmg2 ] ;
real32_T elk5a2ab5u ; real32_T elwbcndjky [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T pe14f5ekea [ _7TQ7rYk8WkCvursSu7_Dc_ ] ; real32_T che22zzerw [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T hpwb4vpdu3 ; real32_T f5onh3mpcn ;
real32_T mbmesz1haa [ _KYlcoOk9rSSGYswizhYqZ2 ] ; real32_T pbg0owmefk [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T euazz4cnml [ _IjHdoOm5hGk4VAbwwsvcL1 ] ;
real32_T lbh3nnlsuv [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T dsongffom0 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T lh4aiutnrp [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T fnvs01saxw [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T l3edksqv0o [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T jttqvjvnpi [ _gN74BbsU5wqNjkJbC9b672 ] ;
real32_T k1qgcogiyq [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T dzwopklw3c ;
real32_T cg3wcqg3eu ; int32_T oiqwryk0wu ; uint32_T a55p1cggzw ; uint32_T
godf0k5eim ; uint32_T owtbv3y5hm ; uint32_T f5n4ecbh2v ; real32_T piiuroz1wl
; real32_T jr1k5mxaen ; real32_T a1ir5iy4kb ; real32_T akgzjuvoiy ; real32_T
cdifq5lncf [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T iwho1rmm4y [
_gN74BbsU5wqNjkJbC9b672 ] ; uint16_T kog2pxiyze ; int8_T oynst1si3n ; int8_T
bbgqh4yezf ; boolean_T ktyosunw2c ; boolean_T e5rqdzurlb ; boolean_T
m4y2fie4sw ; boolean_T ct44pz31t3 ; boolean_T fzlmrbqd5w ; boolean_T
ly23bextiu ; boolean_T piox1o25ac ; boolean_T pnerzmzuh3 ; boolean_T
knnu444hva ; ht5scyowv2 hkxw1mid3f ; ow05js5wc1 nk3cqqxqrs ; ht5scyowv2
evjguxsfkot ; ow05js5wc1 grfvd5gvh0b ; } ltddvlul1g ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ZCSigState pl0olruxrx ; ZCSigState enq3cuenvx ; ZCSigState
gjkojdwznp ; } a5weciwehw ;
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
struct goi4ln3snr_ { uint8_T Constant_Value ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct d3vgvbwpcn_ { real32_T Lykyhatkk1_Y0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct hqhhtltocy_ { real32_T deltax_Y0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ezhog2cu2d_ { real_T outlierBelowFloor_const ; real_T
outlierJump_const ; real_T currentEstimateVeryOffFromPressure_const ; real_T
currentStateVeryOffsonarflt_const ; real_T ComparewithStoptime_const ; real_T
Completefourcircles_const ; real_T Checkerrorcondition_const ; real_T
u0continuousOFerrors_const ; real32_T Angularvelocitycontrolloop_D [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T Angularvelocitycontrolloop_I [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T Velocitycontroller_I ; real32_T
DiscreteDerivative_ICPrevScaledInput ; real32_T
Angularvelocitycontrolloop_InitialConditionForFilter ; real32_T
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
CompareToConstant_const_jlrcnegolx ; real32_T
CompareToConstant1_const_i0jkzt53gw ; real32_T CompareToConstant2_const ;
real32_T CompareToConstant4_const ; real32_T CompareToConstant3_const ;
real32_T CompareToConstant5_const ; uint32_T WrapToZero_Threshold ; uint32_T
WrapToZero_Threshold_d4tg4o0tes ; uint32_T WrapToZero_Threshold_eywnsjjash ;
uint32_T WrapToZero_Threshold_k0xbnyaev3 ; uint32_T
CompareToConstant_const_ntxgam0pak ; uint32_T
CompareToConstant_const_mc5neogeir ; uint16_T WrapToZero_Threshold_lveo35gzhn
; uint16_T CompareToConstant_const_i3lcyzhajv ; real_T DisableOFcheck_Value ;
real_T _Value ; real_T Lykyhatkk1_Y0 ; real_T deltax_Y0 ; real_T
Constant_Value ; real_T Delay2_InitialCondition ; real_T X0_Value [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T SaturationSonar_LowerSat ; real_T
sonarFilter_IIR_NumCoef [ _g7WFphbd05O6bEjctOzUc1 ] ; real_T
sonarFilter_IIR_DenCoef [ _g7WFphbd05O6bEjctOzUc1 ] ; real_T
sonarFilter_IIR_InitialStates ; real_T KalmanGainM_Value [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T C_Value [ _gN74BbsU5wqNjkJbC9b672 ] ;
real_T KalmanGainM_Value_bku0gljvnn [ _gN74BbsU5wqNjkJbC9b672 ] ; real_T
KalmanGainM_Value_pdsd0oxb5i [ _gN74BbsU5wqNjkJbC9b672 ] ; real_T
KalmanGainM_Value_e2e531vqkc [ _hCXUd_x6pbKZfXtyKXEw82 ] ; real_T
KalmanGainL_Value [ _hCXUd_x6pbKZfXtyKXEw82 ] ; real_T gravity_Value [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T gainaccinput1_Gain ; real_T A_Value [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T gravity_Value_e12fzhyg0p [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; real_T KalmanGainL_Value_dkq4aencna [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T KalmanGainL_Value_mjqr3bivog [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T B_Value [ _gN74BbsU5wqNjkJbC9b672 ] ;
real_T D_Value ; real_T KalmanGainL_Value_c2cywmjvtf [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T Wait3Seconds_Value ; real_T
DelayOneStep_InitialCondition ; real_T u5meters_Value ; real_T
CovarianceZ_Value [ _GL1cfYXlov7alqvUlVUDz0 ] ; real_T
CovarianceZ_Value_dekxzvnpxt [ _g7WFphbd05O6bEjctOzUc1 ] ; real_T P0_Value [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T CovarianceZ_Value_beadvwzdk3 [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T CovarianceZ_Value_b0bjwcprhc [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T G_Value [ _gN74BbsU5wqNjkJbC9b672 ] ;
real_T H_Value ; real_T N_Value ; real_T Q_Value ; real_T R_Value ; real32_T
takeoff_gain1_Gain ; real32_T P_z1_Gain ; real32_T D_z1_Gain ; real32_T
Pitchcorrection_Value ; real32_T zerocorrection_Value ; real32_T Gain_Gain [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T _Value_mz025leomu ; real32_T X_Y0 ;
real32_T Y_Y0 ; real32_T Landinglookaheaddistance_Value ; real32_T
InitialX_Value ; real32_T InitialY_Value ; real32_T InitialZ_Value ; real32_T
Gain_Gain_cbevmwobpi ; real32_T Out1_Y0 ; real32_T Lykyhatkk1_Y0_gs5beb53lt ;
real32_T deltax_Y0_hwyhcagccy ; real32_T Gain_Gain_ffwho0fyi0 ; real32_T
opticalFlowErrorCorrect_Gain ; real32_T
TorqueTotalThrustToThrustPerMotor_Value [ _GL1cfYXlov7alqvUlVUDz0 ] ;
real32_T A_Value_kouwvt24hx [ _GL1cfYXlov7alqvUlVUDz0 ] ; real32_T
SimplyIntegrateVelocity_gainval ; real32_T SimplyIntegrateVelocity_IC ;
real32_T invertzaxisGain_Gain ; real32_T prsToAltGain_Gain ; real32_T
pressureFilter_IIR_NumCoef [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T
pressureFilter_IIR_DenCoef [ _g7WFphbd05O6bEjctOzUc1 ] ; real32_T
pressureFilter_IIR_InitialStates ; real32_T DiscreteTimeIntegrator_gainval ;
real32_T DiscreteTimeIntegrator_IC ; real32_T X0_Value_mci5epme4d [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T
Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bi [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T inverseIMU_gain_Gain [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T FIR_IMUaccel_InitialStates ; real32_T
FIR_IMUaccel_Coefficients [ _RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T Gain2_Gain ;
real32_T Constant_Value_omlyl2vzh5 ; real32_T C_Value_b10hxbcmj4 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T X0_Value_fhwminqb1p [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T C_Value_mfvxvmjax1 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T LPFFcutoff40Hz1_NumCoef [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T LPFFcutoff40Hz1_DenCoef [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T LPFFcutoff40Hz1_InitialStates ; real32_T
LPFFcutoff40Hz_NumCoef [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
LPFFcutoff40Hz_DenCoef [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T
LPFFcutoff40Hz_InitialStates ; real32_T IIR_IMUgyro_r_NumCoef [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T IIR_IMUgyro_r_DenCoef [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T IIR_IMUgyro_r_InitialStates ; real32_T
Constant_Value_ljkjrqhbv5 ; real32_T X0_Value_afepps5f55 [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T C_Value_dfbrhb1sxy [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real32_T Gain1_Gain ; real32_T IIRgyroz_NumCoef [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T IIRgyroz_DenCoef [
_RAQgyWVtpyqfEVcLRZFTL_ ] ; real32_T IIRgyroz_InitialStates ; real32_T
TSamp_WtEt ; real32_T Delay_InitialCondition ; real32_T
Delay1_InitialCondition ; real32_T B_Value_hxthnxrqfs [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real32_T D_Value_lcjnhsrgkh [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T OrbitRadius_Value ; real32_T
ClockwiseOrbit_Value ; real32_T LookaheadDistance_Value ; real32_T
RequiredCenter_Value [ _nfvdmbxYkVXzXnpHyWwmg2 ] ; real32_T
Integrator_gainval ; real32_T
LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T
LPF8HzCutoffFiltertoavoidoscillationsinducedbypositi_p22y1zp01m [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T
LPF8HzCutoffFiltertoavoidoscillationsinducedbypositi_fa2soo5pqd ; real32_T
Integrator_gainval_oxdwv1tqqu ; real32_T Filter_gainval ; real32_T w1_Value ;
real32_T DiscreteTimeIntegrator_gainval_ht4nu3dmv2 ; real32_T
DiscreteTimeIntegrator_IC_df3d2rofiy ; real32_T
DiscreteTimeIntegrator_UpperSat ; real32_T DiscreteTimeIntegrator_LowerSat ;
real32_T SaturationThrust1_UpperSat ; real32_T SaturationThrust1_LowerSat ;
real32_T Saturation_UpperSat ; real32_T Saturation_LowerSat ; real32_T
P_yaw_Gain ; real32_T DiscreteTimeIntegrator_gainval_m4iqgst2ds ; real32_T
DiscreteTimeIntegrator_IC_ngsu1y3s5j ; real32_T D_yaw_Gain ; real32_T
ThrustToMotorCommand_Gain ; real32_T Saturation5_UpperSat ; real32_T
Saturation5_LowerSat ; real32_T MotorDirections_Gain [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T A_Value_ovrslhgu0x [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T A_Value_pi0httppbf [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T B_Value_hf3conme15 [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T D_Value_c21la5nr1p ; real32_T
B_Value_estq3bs31x [ _gN74BbsU5wqNjkJbC9b672 ] ; real32_T D_Value_f31uwcsoe0
; real32_T ZeroGain_Gain ; real32_T Constant1_Value ; real32_T
ZeroGain_Gain_n05eaxwhci ; real32_T Constant1_Value_etfgubzmmr ; real32_T
I_yaw_Gain ; real32_T I_pr_Gain ; real32_T Gain_Gain_i4ltw10ry2 ; real32_T
Gain1_Gain_j20volvifs ; real32_T P0_Value_dg5zzvqmdu [
_GL1cfYXlov7alqvUlVUDz0 ] ; real32_T G_Value_h54fwxqk2r [
_GL1cfYXlov7alqvUlVUDz0 ] ; real32_T Q_Value_ighaymyezs [
_GL1cfYXlov7alqvUlVUDz0 ] ; real32_T H_Value_n4xdvuzdxm [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real32_T N_Value_p2a4n0aslo [
_hCXUd_x6pbKZfXtyKXEw82 ] ; real32_T P0_Value_n5v05tnxyv [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T G_Value_epfcekh0h4 [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T Q_Value_pxes2gudtt [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T P0_Value_itlomefdhn [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T G_Value_efg4i500eg [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T Q_Value_knmb5skprx [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T R_Value_cex1z21uud [
_g7WFphbd05O6bEjctOzUc1 ] ; real32_T H_Value_inur11s3bh [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T N_Value_ghw4vgpt1c [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T H_Value_ow4gwfo1jy [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T N_Value_brvvzrhhyz [
_gN74BbsU5wqNjkJbC9b672 ] ; real32_T R_Value_mcn22nnnal ; real32_T
R_Value_l4vcqltyx0 ; uint32_T Switch_Threshold ; uint32_T
Output_InitialCondition ; uint32_T Output_InitialCondition_hoknxkqn0c ;
uint32_T Output_InitialCondition_kg2iqxfu20 ; uint32_T FixPtConstant_Value ;
uint32_T Constant_Value_fxhutiynki ; uint32_T
Output_InitialCondition_hw0xix4ifl ; uint32_T FixPtConstant_Value_pqufoe40yj
; uint32_T Constant_Value_iltqwvau4g ; uint32_T
FixPtConstant_Value_kxrn1tapwi ; uint32_T Constant_Value_ca0q145mwv ;
uint32_T FixPtConstant_Value_mvdl41yrp2 ; uint32_T Constant_Value_psvj0uvm4d
; uint16_T Output_InitialCondition_d3u0iqobe5 ; uint16_T
FixPtConstant_Value_lsr1fms2dk ; uint16_T Constant_Value_b4fz2a4uem ;
boolean_T Out1_Y0_n021zqjhol ; boolean_T controlModePosVsOrient_Value ;
boolean_T isSqrtUsed_Value ; boolean_T isSqrtUsed_Value_ixf0mhq3mk ;
boolean_T isSqrtUsed_Value_eyrc454x2s ; boolean_T isSqrtUsed_Value_kgknmblgiw
; uint8_T Landed_Value ; uint8_T No_error_Value ; uint8_T
Disabletemperaturecompensation_CurrentSetting ; uint8_T
ManualSwitch_CurrentSetting ; uint8_T Merge_InitialOutput ; hqhhtltocy
hkxw1mid3f ; d3vgvbwpcn nk3cqqxqrs ; hqhhtltocy evjguxsfkot ; d3vgvbwpcn
grfvd5gvh0b ; goi4ln3snr crmqi1ajhq ; goi4ln3snr k5wpq5kznd ; goi4ln3snr
cxe2ys04dc ; goi4ln3snr dnbdwmewkne ; } ;
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
extern struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors ; extern CommandBus
cmd_inport ; extern SensorsBus sensor_inport ; extern real32_T motors_outport
[ _g7WFphbd05O6bEjctOzUc1 ] ; extern uint8_T flag_outport ; extern void
ha1ipjbq54 ( void ) ; extern void gwlyno50ln ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
flightControlSystemTID0 ( void ) ; extern void flightControlSystemTID1 ( void
) ; extern void f4qzdbbxmw ( const char_T * * rt_errorStatus ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void dnbdwmewkn ( uint8_T * b32dxupcp5 , goi4ln3snr * localP ) ;
extern void bqpmrsycfz ( const real32_T ckktbes14j [ _g7WFphbd05O6bEjctOzUc1
] , boolean_T inskfwsatj ) ; extern void oeliakur3x ( kjcgcmvbua * localB ,
d3vgvbwpcn * localP ) ; extern void d5tojzzjc3 ( ow05js5wc1 * localDW ) ;
extern void fvreuo35vl ( kjcgcmvbua * localB , ow05js5wc1 * localDW ,
d3vgvbwpcn * localP ) ; extern void grfvd5gvh0 ( boolean_T cyb3qnqaew , const
real32_T fpiaut104y [ _gN74BbsU5wqNjkJbC9b672 ] , real32_T penjobq41k , const
real32_T fk4vbnxgeq [ _gN74BbsU5wqNjkJbC9b672 ] , const real32_T ff0smj5rkp [
_gN74BbsU5wqNjkJbC9b672 ] , real32_T fuquy5vcz2 , real32_T gd3sipgqn1 ,
kjcgcmvbua * localB , ow05js5wc1 * localDW , d3vgvbwpcn * localP ) ; extern
void ph1ug4jhvw ( fcfjuz3pyr * localB , hqhhtltocy * localP ) ; extern void
nkyfzhd0j3 ( ht5scyowv2 * localDW ) ; extern void csmbkxzcp2 ( fcfjuz3pyr *
localB , ht5scyowv2 * localDW , hqhhtltocy * localP ) ; extern void
evjguxsfko ( boolean_T lusbek32ax , const real32_T jqb34r4d1o [
_gN74BbsU5wqNjkJbC9b672 ] , const real32_T i1pmcueicx [
_gN74BbsU5wqNjkJbC9b672 ] , real32_T ejhfwo3btu , const real32_T cfipd5rgpl [
_gN74BbsU5wqNjkJbC9b672 ] , fcfjuz3pyr * localB , ht5scyowv2 * localDW ,
hqhhtltocy * localP ) ; extern void ataovhs4tu ( ko3mo3zjmw * localB ,
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
