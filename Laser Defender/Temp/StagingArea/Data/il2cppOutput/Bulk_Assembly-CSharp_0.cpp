#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_EnemyBehavior122890614.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_ScoreKeeper1955354816.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharp_Projectile4036506763.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "AssemblyU2DCSharp_FormationController144982969.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_LevelManager3355282079.h"
#include "AssemblyU2DCSharp_MusicPlayer3223126890.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "AssemblyU2DCSharp_PlayerScript2594555350.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_Position1661510619.h"
#include "AssemblyU2DCSharp_ScoreDisplay164935196.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "AssemblyU2DCSharp_Shredder2348995045.h"

// EnemyBehavior
struct EnemyBehavior_t122890614;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// ScoreKeeper
struct ScoreKeeper_t1955354816;
// System.Object
struct Il2CppObject;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// Projectile
struct Projectile_t4036506763;
// UnityEngine.Object
struct Object_t1021602117;
// FormationController
struct FormationController_t144982969;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// LevelManager
struct LevelManager_t3355282079;
// MusicPlayer
struct MusicPlayer_t3223126890;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// PlayerScript
struct PlayerScript_t2594555350;
// Position
struct Position_t1661510619;
// ScoreDisplay
struct ScoreDisplay_t164935196;
// UnityEngine.UI.Text
struct Text_t356221433;
// Shredder
struct Shredder_t2348995045;
extern const MethodInfo* GameObject_GetComponent_TisScoreKeeper_t1955354816_m3883054323_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2247053792;
extern const uint32_t EnemyBehavior_Start_m832191633_MetadataUsageId;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var;
extern const uint32_t EnemyBehavior_Fire_m3652275745_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisProjectile_t4036506763_m2682440950_MethodInfo_var;
extern const uint32_t EnemyBehavior_OnTriggerEnter2D_m2628935465_MetadataUsageId;
extern const uint32_t EnemyBehavior_Die_m2833878977_MetadataUsageId;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* Transform_t3275118058_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t FormationController_SpawnEnemies_m1640274539_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4258467394;
extern const uint32_t FormationController_SpawnUntilFull_m3332448836_MetadataUsageId;
extern const uint32_t FormationController_NextFreePosition_m3815507322_MetadataUsageId;
extern const uint32_t FormationController_AllMembersDead_m938121146_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral332901588;
extern const uint32_t LevelManager_LoadLevel_m3771066388_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4082968917;
extern const uint32_t LevelManager_QuitRequest_m3014183236_MetadataUsageId;
extern Il2CppClass* MusicPlayer_t3223126890_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3116614031;
extern const uint32_t MusicPlayer_Start_m704446533_MetadataUsageId;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral277586275;
extern const uint32_t MusicPlayer_OnLevelWasLoaded_m3465262809_MetadataUsageId;
extern const uint32_t PlayerScript_Fire_m2495288027_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3457519710;
extern const uint32_t PlayerScript_Update_m3394982276_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral30423452;
extern const uint32_t PlayerScript_OnTriggerEnter2D_m3958018079_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisLevelManager_t3355282079_m4214666828_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4083360597;
extern Il2CppCodeGenString* _stringLiteral1932225602;
extern const uint32_t PlayerScript_Die_m1037868091_MetadataUsageId;
extern const uint32_t Projectile_Hit_m3675573207_MetadataUsageId;
extern Il2CppClass* ScoreKeeper_t1955354816_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var;
extern const uint32_t ScoreDisplay_Start_m944214185_MetadataUsageId;
extern const uint32_t ScoreKeeper_Start_m4165573063_MetadataUsageId;
extern const uint32_t ScoreKeeper_Score_m3693250700_MetadataUsageId;
extern const uint32_t ScoreKeeper_Reset_m1609613736_MetadataUsageId;
extern const uint32_t Shredder_OnTriggerEnter2D_m2981370104_MetadataUsageId;



// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<ScoreKeeper>()
#define GameObject_GetComponent_TisScoreKeeper_t1955354816_m3883054323(__this, method) ((  ScoreKeeper_t1955354816 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m976649312 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBehavior::Fire()
extern "C"  void EnemyBehavior_Fire_m3652275745 (EnemyBehavior_t122890614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m1561886418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(__this, method) ((  Rigidbody2D_t502193897 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m3592751374 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  void AudioSource_PlayClipAtPoint_m1469997862 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * p0, Vector3_t2243707580  p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Projectile>()
#define GameObject_GetComponent_TisProjectile_t4036506763_m2682440950(__this, method) ((  Projectile_t4036506763 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2856731593 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Projectile::GetDamage()
extern "C"  float Projectile_GetDamage_m1205682293 (Projectile_t4036506763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::Hit()
extern "C"  void Projectile_Hit_m3675573207 (Projectile_t4036506763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBehavior::Die()
extern "C"  void EnemyBehavior_Die_m2833878977 (EnemyBehavior_t122890614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreKeeper::Score(System.Int32)
extern "C"  void ScoreKeeper_Score_m3693250700 (ScoreKeeper_t1955354816 * __this, int32_t ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t189460977 * Camera_get_main_m475173995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_ViewportToWorldPoint_m3841010930 (Camera_t189460977 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FormationController::SpawnUntilFull()
extern "C"  void FormationController_SpawnUntilFull_m3332448836 (FormationController_t144982969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  Il2CppObject * Transform_GetEnumerator_m3479720613 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m3281327839 (Transform_t3275118058 * __this, Transform_t3275118058 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform FormationController::NextFreePosition()
extern "C"  Transform_t3275118058 * FormationController_NextFreePosition_m3815507322 (FormationController_t144982969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m666563676 (MonoBehaviour_t1158329972 * __this, String_t* p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m2720820983 (Vector3_t2243707580 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawWireCube_m2061545338 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t2243707580  Vector3_get_right_m1884123822 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t2243707580  Vector3_get_left_m2429378123 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FormationController::AllMembersDead()
extern "C"  bool FormationController_AllMembersDead_m938121146 (FormationController_t144982969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m881385315 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m3885595876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3437620292 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m2330762974 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m738814682 (AudioSource_t1135106623 * __this, AudioClip_t1932558630 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C"  void AudioSource_set_loop_m313035616 (AudioSource_t1135106623 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m3452679614 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m3468262484 (MonoBehaviour_t1158329972 * __this, String_t* p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m1008512962 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C"  void MonoBehaviour_CancelInvoke_m2508161963 (MonoBehaviour_t1158329972 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3849524999 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m2354025655 (Il2CppObject * __this /* static, unused */, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerScript::Die()
extern "C"  void PlayerScript_Die_m1037868091 (PlayerScript_t2594555350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<LevelManager>()
#define GameObject_GetComponent_TisLevelManager_t3355282079_m4214666828(__this, method) ((  LevelManager_t3355282079 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
extern "C"  void Gizmos_DrawWireSphere_m3395547818 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t356221433_m1342661039(__this, method) ((  Text_t356221433 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreKeeper::Reset()
extern "C"  void ScoreKeeper_Reset_m1609613736 (ScoreKeeper_t1955354816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyBehavior::.ctor()
extern "C"  void EnemyBehavior__ctor_m1693986049 (EnemyBehavior_t122890614 * __this, const MethodInfo* method)
{
	{
		__this->set_health_3((150.0f));
		__this->set_projectileSpeed_4((10.0f));
		__this->set_firingRate_5((0.5f));
		__this->set_scoreValue_6(((int32_t)150));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyBehavior::Start()
extern "C"  void EnemyBehavior_Start_m832191633 (EnemyBehavior_t122890614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyBehavior_Start_m832191633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral2247053792, /*hidden argument*/NULL);
		ScoreKeeper_t1955354816 * L_1 = GameObject_GetComponent_TisScoreKeeper_t1955354816_m3883054323(L_0, /*hidden argument*/GameObject_GetComponent_TisScoreKeeper_t1955354816_m3883054323_MethodInfo_var);
		__this->set_scoreKeeper_9(L_1);
		return;
	}
}
// System.Void EnemyBehavior::Update()
extern "C"  void EnemyBehavior_Update_m40697844 (EnemyBehavior_t122890614 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_firingRate_5();
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = Random_get_value_m976649312(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = V_1;
		float L_4 = V_0;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0020;
		}
	}
	{
		EnemyBehavior_Fire_m3652275745(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void EnemyBehavior::Fire()
extern "C"  void EnemyBehavior_Fire_m3652275745 (EnemyBehavior_t122890614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyBehavior_Fire_m3652275745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	GameObject_t1756533147 * V_1 = NULL;
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m2638739322(&L_2, (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1756533147 * L_4 = __this->get_projectile_2();
		Vector3_t2243707580  L_5 = V_0;
		Quaternion_t4030073918  L_6 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_7 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_1 = L_7;
		GameObject_t1756533147 * L_8 = V_1;
		Rigidbody2D_t502193897 * L_9 = GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var);
		float L_10 = __this->get_projectileSpeed_4();
		Vector3_t2243707580  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m2638739322(&L_11, (0.0f), ((-L_10)), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_12 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_9, L_12, /*hidden argument*/NULL);
		AudioClip_t1932558630 * L_13 = __this->get_fireSound_7();
		Vector3_t2243707580  L_14 = V_0;
		AudioSource_PlayClipAtPoint_m1469997862(NULL /*static, unused*/, L_13, L_14, (0.3f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyBehavior::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void EnemyBehavior_OnTriggerEnter2D_m2628935465 (EnemyBehavior_t122890614 * __this, Collider2D_t646061738 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyBehavior_OnTriggerEnter2D_m2628935465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_t4036506763 * V_0 = NULL;
	{
		Collider2D_t646061738 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		Projectile_t4036506763 * L_2 = GameObject_GetComponent_TisProjectile_t4036506763_m2682440950(L_1, /*hidden argument*/GameObject_GetComponent_TisProjectile_t4036506763_m2682440950_MethodInfo_var);
		V_0 = L_2;
		Projectile_t4036506763 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		float L_5 = __this->get_health_3();
		Projectile_t4036506763 * L_6 = V_0;
		float L_7 = Projectile_GetDamage_m1205682293(L_6, /*hidden argument*/NULL);
		__this->set_health_3(((float)((float)L_5-(float)L_7)));
		Projectile_t4036506763 * L_8 = V_0;
		Projectile_Hit_m3675573207(L_8, /*hidden argument*/NULL);
		float L_9 = __this->get_health_3();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		EnemyBehavior_Die_m2833878977(__this, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void EnemyBehavior::Die()
extern "C"  void EnemyBehavior_Die_m2833878977 (EnemyBehavior_t122890614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyBehavior_Die_m2833878977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioClip_t1932558630 * L_0 = __this->get_deathSound_8();
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1469997862(NULL /*static, unused*/, L_0, L_3, (3.5f), /*hidden argument*/NULL);
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		ScoreKeeper_t1955354816 * L_5 = __this->get_scoreKeeper_9();
		int32_t L_6 = __this->get_scoreValue_6();
		ScoreKeeper_Score_m3693250700(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FormationController::.ctor()
extern "C"  void FormationController__ctor_m3105335162 (FormationController_t144982969 * __this, const MethodInfo* method)
{
	{
		__this->set_width_3((10.0f));
		__this->set_height_4((5.0f));
		__this->set_speed_5((5.0f));
		__this->set_spawnDelay_6((0.5f));
		__this->set_movingRight_7((bool)1);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FormationController::Start()
extern "C"  void FormationController_Start_m2599546346 (FormationController_t144982969 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_z_3();
		Camera_t189460977 * L_3 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_z_3();
		V_0 = ((float)((float)L_2-(float)L_6));
		Camera_t189460977 * L_7 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		Vector3_t2243707580  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2638739322(&L_9, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Camera_ViewportToWorldPoint_m3841010930(L_7, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Camera_t189460977 * L_11 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector3_t2243707580  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2638739322(&L_13, (1.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Camera_ViewportToWorldPoint_m3841010930(L_11, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_4)->get_x_1();
		__this->set_xMax_8(L_15);
		float L_16 = (&V_3)->get_x_1();
		__this->set_xMin_9(L_16);
		FormationController_SpawnUntilFull_m3332448836(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FormationController::SpawnEnemies()
extern "C"  void FormationController_SpawnEnemies_m1640274539 (FormationController_t144982969 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FormationController_SpawnEnemies_m1640274539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3275118058 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	GameObject_t1756533147 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m3479720613(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3275118058 *)CastclassClass(L_3, Transform_t3275118058_il2cpp_TypeInfo_var));
			GameObject_t1756533147 * L_4 = __this->get_enemyPrefab_2();
			Transform_t3275118058 * L_5 = V_0;
			Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(L_5, /*hidden argument*/NULL);
			Vector3_t2243707580  L_7 = Transform_get_position_m1104419803(L_6, /*hidden argument*/NULL);
			Quaternion_t4030073918  L_8 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
			GameObject_t1756533147 * L_9 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_4, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
			V_2 = L_9;
			GameObject_t1756533147 * L_10 = V_2;
			Transform_t3275118058 * L_11 = GameObject_get_transform_m909382139(L_10, /*hidden argument*/NULL);
			Transform_t3275118058 * L_12 = V_0;
			Transform_set_parent_m3281327839(L_11, L_12, /*hidden argument*/NULL);
		}

IL_0045:
		{
			Il2CppObject * L_13 = V_1;
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0011;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_15 = V_1;
			Il2CppObject * L_16 = ((Il2CppObject *)IsInst(L_15, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			V_3 = L_16;
			if (!L_16)
			{
				goto IL_0068;
			}
		}

IL_0062:
		{
			Il2CppObject * L_17 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_17);
		}

IL_0068:
		{
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0069:
	{
		return;
	}
}
// System.Void FormationController::SpawnUntilFull()
extern "C"  void FormationController_SpawnUntilFull_m3332448836 (FormationController_t144982969 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FormationController_SpawnUntilFull_m3332448836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3275118058 * V_0 = NULL;
	GameObject_t1756533147 * V_1 = NULL;
	{
		Transform_t3275118058 * L_0 = FormationController_NextFreePosition_m3815507322(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t3275118058 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t1756533147 * L_3 = __this->get_enemyPrefab_2();
		Transform_t3275118058 * L_4 = V_0;
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_7 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_8 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_3, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_1 = L_8;
		GameObject_t1756533147 * L_9 = V_1;
		Transform_t3275118058 * L_10 = GameObject_get_transform_m909382139(L_9, /*hidden argument*/NULL);
		Transform_t3275118058 * L_11 = V_0;
		Transform_set_parent_m3281327839(L_10, L_11, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Transform_t3275118058 * L_12 = FormationController_NextFreePosition_m3815507322(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		float L_14 = __this->get_spawnDelay_6();
		MonoBehaviour_Invoke_m666563676(__this, _stringLiteral4258467394, L_14, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void FormationController::OnDrawGizmos()
extern "C"  void FormationController_OnDrawGizmos_m3252407540 (FormationController_t144982969 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_width_3();
		float L_3 = __this->get_height_4();
		Vector3_t2243707580  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m2720820983(&L_4, L_2, L_3, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m2061545338(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FormationController::Update()
extern "C"  void FormationController_Update_m3776267909 (FormationController_t144982969 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		bool L_0 = __this->get_movingRight_7();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = L_1;
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = __this->get_speed_5();
		Vector3_t2243707580  L_6 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_2, L_9, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0040:
	{
		Transform_t3275118058 * L_10 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_11 = L_10;
		Vector3_t2243707580  L_12 = Transform_get_position_m1104419803(L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Vector3_get_left_m2429378123(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_speed_5();
		Vector3_t2243707580  L_15 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		float L_16 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		Vector3_t2243707580  L_18 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_11, L_18, /*hidden argument*/NULL);
	}

IL_0070:
	{
		Transform_t3275118058 * L_19 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_20 = Transform_get_position_m1104419803(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		float L_21 = (&V_1)->get_x_1();
		float L_22 = __this->get_width_3();
		V_0 = ((float)((float)L_21+(float)((float)((float)(0.5f)*(float)L_22))));
		Transform_t3275118058 * L_23 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_24 = Transform_get_position_m1104419803(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = (&V_3)->get_x_1();
		float L_26 = __this->get_width_3();
		V_2 = ((float)((float)L_25-(float)((float)((float)(0.5f)*(float)L_26))));
		float L_27 = V_2;
		float L_28 = __this->get_xMin_9();
		if ((((float)L_27) < ((float)L_28)))
		{
			goto IL_00ca;
		}
	}
	{
		float L_29 = V_0;
		float L_30 = __this->get_xMax_8();
		if ((!(((float)L_29) > ((float)L_30))))
		{
			goto IL_00d9;
		}
	}

IL_00ca:
	{
		bool L_31 = __this->get_movingRight_7();
		__this->set_movingRight_7((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
	}

IL_00d9:
	{
		bool L_32 = FormationController_AllMembersDead_m938121146(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		FormationController_SpawnUntilFull_m3332448836(__this, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		return;
	}
}
// UnityEngine.Transform FormationController::NextFreePosition()
extern "C"  Transform_t3275118058 * FormationController_NextFreePosition_m3815507322 (FormationController_t144982969 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FormationController_NextFreePosition_m3815507322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3275118058 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Transform_t3275118058 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m3479720613(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3275118058 *)CastclassClass(L_3, Transform_t3275118058_il2cpp_TypeInfo_var));
			Transform_t3275118058 * L_4 = V_0;
			int32_t L_5 = Transform_get_childCount_m881385315(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			Transform_t3275118058 * L_6 = V_0;
			V_2 = L_6;
			IL2CPP_LEAVE(0x55, FINALLY_003f);
		}

IL_002f:
		{
			Il2CppObject * L_7 = V_1;
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x53, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_9 = V_1;
			Il2CppObject * L_10 = ((Il2CppObject *)IsInst(L_9, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			V_3 = L_10;
			if (!L_10)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			Il2CppObject * L_11 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_11);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0053:
	{
		return (Transform_t3275118058 *)NULL;
	}

IL_0055:
	{
		Transform_t3275118058 * L_12 = V_2;
		return L_12;
	}
}
// System.Boolean FormationController::AllMembersDead()
extern "C"  bool FormationController_AllMembersDead_m938121146 (FormationController_t144982969 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FormationController_AllMembersDead_m938121146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3275118058 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	bool V_2 = false;
	Il2CppObject * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m3479720613(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3275118058 *)CastclassClass(L_3, Transform_t3275118058_il2cpp_TypeInfo_var));
			Transform_t3275118058 * L_4 = V_0;
			int32_t L_5 = Transform_get_childCount_m881385315(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0x56, FINALLY_0040);
		}

IL_0030:
		{
			Il2CppObject * L_6 = V_1;
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_8 = V_1;
			Il2CppObject * L_9 = ((Il2CppObject *)IsInst(L_8, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			V_3 = L_9;
			if (!L_9)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			Il2CppObject * L_10 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_10);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0054:
	{
		return (bool)1;
	}

IL_0056:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m3771066388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral332901588, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m3014183236 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_QuitRequest_m3014183236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral4082968917, /*hidden argument*/NULL);
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.ctor()
extern "C"  void MusicPlayer__ctor_m3135785557 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C"  void MusicPlayer_Start_m704446533 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_Start_m704446533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		MusicPlayer_t3223126890 * L_0 = ((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		MusicPlayer_t3223126890 * L_2 = ((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral3116614031, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_6 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_music_6(L_6);
	}

IL_0057:
	{
		AudioSource_t1135106623 * L_7 = __this->get_music_6();
		AudioClip_t1932558630 * L_8 = __this->get_startClip_3();
		AudioSource_set_clip_m738814682(L_7, L_8, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_9 = __this->get_music_6();
		AudioSource_set_loop_m313035616(L_9, (bool)1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_10 = __this->get_music_6();
		AudioSource_Play_m353744792(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnLevelWasLoaded(System.Int32)
extern "C"  void MusicPlayer_OnLevelWasLoaded_m3465262809 (MusicPlayer_t3223126890 * __this, int32_t ___level0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_OnLevelWasLoaded_m3465262809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___level0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral277586275, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_4 = __this->get_music_6();
		AudioSource_Stop_m3452679614(L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___level0;
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		AudioSource_t1135106623 * L_6 = __this->get_music_6();
		AudioClip_t1932558630 * L_7 = __this->get_startClip_3();
		AudioSource_set_clip_m738814682(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0037:
	{
		int32_t L_8 = ___level0;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}
	{
		AudioSource_t1135106623 * L_9 = __this->get_music_6();
		AudioClip_t1932558630 * L_10 = __this->get_gameClip_4();
		AudioSource_set_clip_m738814682(L_9, L_10, /*hidden argument*/NULL);
	}

IL_004f:
	{
		int32_t L_11 = ___level0;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0067;
		}
	}
	{
		AudioSource_t1135106623 * L_12 = __this->get_music_6();
		AudioClip_t1932558630 * L_13 = __this->get_endClip_5();
		AudioSource_set_clip_m738814682(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0067:
	{
		AudioSource_t1135106623 * L_14 = __this->get_music_6();
		AudioSource_set_loop_m313035616(L_14, (bool)1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_15 = __this->get_music_6();
		AudioSource_Play_m353744792(L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C"  void MusicPlayer__cctor_m1372585940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerScript::.ctor()
extern "C"  void PlayerScript__ctor_m2337956147 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((15.0f));
		__this->set_padding_3((1.0f));
		__this->set_health_7((250.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Start()
extern "C"  void PlayerScript_Start_m2738359927 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_z_3();
		Camera_t189460977 * L_3 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_z_3();
		V_0 = ((float)((float)L_2-(float)L_6));
		Camera_t189460977 * L_7 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		Vector3_t2243707580  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2638739322(&L_9, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Camera_ViewportToWorldPoint_m3841010930(L_7, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Camera_t189460977 * L_11 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector3_t2243707580  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2638739322(&L_13, (1.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Camera_ViewportToWorldPoint_m3841010930(L_11, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_3)->get_x_1();
		float L_16 = __this->get_padding_3();
		__this->set_xMin_9(((float)((float)L_15+(float)L_16)));
		float L_17 = (&V_4)->get_x_1();
		float L_18 = __this->get_padding_3();
		__this->set_xMax_10(((float)((float)L_17-(float)L_18)));
		return;
	}
}
// System.Void PlayerScript::Fire()
extern "C"  void PlayerScript_Fire_m2495288027 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Fire_m2495288027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1756533147 * V_0 = NULL;
	{
		GameObject_t1756533147 * L_0 = __this->get_projectile_4();
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_3 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_4 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_0 = L_4;
		GameObject_t1756533147 * L_5 = V_0;
		Rigidbody2D_t502193897 * L_6 = GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(L_5, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var);
		float L_7 = __this->get_projectileSpeed_5();
		Vector3_t2243707580  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m2638739322(&L_8, (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_9 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_6, L_9, /*hidden argument*/NULL);
		AudioClip_t1932558630 * L_10 = __this->get_fireSound_8();
		Transform_t3275118058 * L_11 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Transform_get_position_m1104419803(L_11, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1469997862(NULL /*static, unused*/, L_10, L_12, (0.3f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Update()
extern "C"  void PlayerScript_Update_m3394982276 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Update_m3394982276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->get_firingRate_6();
		MonoBehaviour_InvokeRepeating_m3468262484(__this, _stringLiteral3457519710, (1.0E-06f), L_1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyUp_m1008512962(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		MonoBehaviour_CancelInvoke_m2508161963(__this, _stringLiteral3457519710, /*hidden argument*/NULL);
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = L_4;
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = Vector3_get_left_m2429378123(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_2();
		Vector3_t2243707580  L_9 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_11 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_5, L_12, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00bc;
		}
	}
	{
		Transform_t3275118058 * L_14 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_15 = L_14;
		Vector3_t2243707580  L_16 = Transform_get_position_m1104419803(L_15, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = __this->get_speed_2();
		Vector3_t2243707580  L_19 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		float L_20 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_21 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		Vector3_t2243707580  L_22 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_16, L_21, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_15, L_22, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		Transform_t3275118058 * L_23 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_24 = Transform_get_position_m1104419803(L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		float L_25 = (&V_1)->get_x_1();
		float L_26 = __this->get_xMin_9();
		float L_27 = __this->get_xMax_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		Transform_t3275118058 * L_29 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_30 = V_0;
		Transform_t3275118058 * L_31 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_32 = Transform_get_position_m1104419803(L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		float L_33 = (&V_2)->get_y_2();
		Transform_t3275118058 * L_34 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_35 = Transform_get_position_m1104419803(L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		float L_36 = (&V_3)->get_z_3();
		Vector3_t2243707580  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector3__ctor_m2638739322(&L_37, L_30, L_33, L_36, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_29, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerScript_OnTriggerEnter2D_m3958018079 (PlayerScript_t2594555350 * __this, Collider2D_t646061738 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_OnTriggerEnter2D_m3958018079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_t4036506763 * V_0 = NULL;
	{
		Collider2D_t646061738 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		Projectile_t4036506763 * L_2 = GameObject_GetComponent_TisProjectile_t4036506763_m2682440950(L_1, /*hidden argument*/GameObject_GetComponent_TisProjectile_t4036506763_m2682440950_MethodInfo_var);
		V_0 = L_2;
		Projectile_t4036506763 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral30423452, /*hidden argument*/NULL);
		float L_5 = __this->get_health_7();
		Projectile_t4036506763 * L_6 = V_0;
		float L_7 = Projectile_GetDamage_m1205682293(L_6, /*hidden argument*/NULL);
		__this->set_health_7(((float)((float)L_5-(float)L_7)));
		Projectile_t4036506763 * L_8 = V_0;
		Projectile_Hit_m3675573207(L_8, /*hidden argument*/NULL);
		float L_9 = __this->get_health_7();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		PlayerScript_Die_m1037868091(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void PlayerScript::Die()
extern "C"  void PlayerScript_Die_m1037868091 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Die_m1037868091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LevelManager_t3355282079 * V_0 = NULL;
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral4083360597, /*hidden argument*/NULL);
		LevelManager_t3355282079 * L_1 = GameObject_GetComponent_TisLevelManager_t3355282079_m4214666828(L_0, /*hidden argument*/GameObject_GetComponent_TisLevelManager_t3355282079_m4214666828_MethodInfo_var);
		V_0 = L_1;
		LevelManager_t3355282079 * L_2 = V_0;
		LevelManager_LoadLevel_m3771066388(L_2, _stringLiteral1932225602, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Position::.ctor()
extern "C"  void Position__ctor_m1652562254 (Position_t1661510619 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Position::OnDrawGizmos()
extern "C"  void Position_OnDrawGizmos_m731341812 (Position_t1661510619 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m3395547818(NULL /*static, unused*/, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Projectile::.ctor()
extern "C"  void Projectile__ctor_m2042814794 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	{
		__this->set_damage_2((100.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Projectile::GetDamage()
extern "C"  float Projectile_GetDamage_m1205682293 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_damage_2();
		return L_0;
	}
}
// System.Void Projectile::Hit()
extern "C"  void Projectile_Hit_m3675573207 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_Hit_m3675573207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::.ctor()
extern "C"  void ScoreDisplay__ctor_m3717173057 (ScoreDisplay_t164935196 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreDisplay::Start()
extern "C"  void ScoreDisplay_Start_m944214185 (ScoreDisplay_t164935196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreDisplay_Start_m944214185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t356221433 * V_0 = NULL;
	{
		Text_t356221433 * L_0 = Component_GetComponent_TisText_t356221433_m1342661039(__this, /*hidden argument*/Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var);
		V_0 = L_0;
		Text_t356221433 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t1955354816_il2cpp_TypeInfo_var);
		String_t* L_2 = Int32_ToString_m2960866144((((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_2()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void ScoreDisplay::Update()
extern "C"  void ScoreDisplay_Update_m2957269962 (ScoreDisplay_t164935196 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ScoreKeeper::.ctor()
extern "C"  void ScoreKeeper__ctor_m3627398059 (ScoreKeeper_t1955354816 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreKeeper::Start()
extern "C"  void ScoreKeeper_Start_m4165573063 (ScoreKeeper_t1955354816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Start_m4165573063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = Component_GetComponent_TisText_t356221433_m1342661039(__this, /*hidden argument*/Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var);
		__this->set_text_3(L_0);
		ScoreKeeper_Reset_m1609613736(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreKeeper::Score(System.Int32)
extern "C"  void ScoreKeeper_Score_m3693250700 (ScoreKeeper_t1955354816 * __this, int32_t ___points0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Score_m3693250700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t1955354816_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->get_score_2();
		int32_t L_1 = ___points0;
		((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->set_score_2(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		Text_t356221433 * L_2 = __this->get_text_3();
		String_t* L_3 = Int32_ToString_m2960866144((((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_2()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}
}
// System.Void ScoreKeeper::Reset()
extern "C"  void ScoreKeeper_Reset_m1609613736 (ScoreKeeper_t1955354816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Reset_m1609613736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t1955354816_il2cpp_TypeInfo_var);
		((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->set_score_2(0);
		Text_t356221433 * L_0 = __this->get_text_3();
		String_t* L_1 = Int32_ToString_m2960866144((((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_2()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void ScoreKeeper::.cctor()
extern "C"  void ScoreKeeper__cctor_m3476028118 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Shredder::.ctor()
extern "C"  void Shredder__ctor_m1925123928 (Shredder_t2348995045 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shredder::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Shredder_OnTriggerEnter2D_m2981370104 (Shredder_t2348995045 * __this, Collider2D_t646061738 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shredder_OnTriggerEnter2D_m2981370104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
