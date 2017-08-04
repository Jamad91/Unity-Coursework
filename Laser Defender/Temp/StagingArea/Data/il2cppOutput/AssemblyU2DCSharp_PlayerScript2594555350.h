#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t2594555350  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerScript::speed
	float ___speed_2;
	// System.Single PlayerScript::padding
	float ___padding_3;
	// UnityEngine.GameObject PlayerScript::projectile
	GameObject_t1756533147 * ___projectile_4;
	// System.Single PlayerScript::projectileSpeed
	float ___projectileSpeed_5;
	// System.Single PlayerScript::firingRate
	float ___firingRate_6;
	// System.Single PlayerScript::health
	float ___health_7;
	// UnityEngine.AudioClip PlayerScript::fireSound
	AudioClip_t1932558630 * ___fireSound_8;
	// System.Single PlayerScript::xMin
	float ___xMin_9;
	// System.Single PlayerScript::xMax
	float ___xMax_10;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_padding_3() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___padding_3)); }
	inline float get_padding_3() const { return ___padding_3; }
	inline float* get_address_of_padding_3() { return &___padding_3; }
	inline void set_padding_3(float value)
	{
		___padding_3 = value;
	}

	inline static int32_t get_offset_of_projectile_4() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___projectile_4)); }
	inline GameObject_t1756533147 * get_projectile_4() const { return ___projectile_4; }
	inline GameObject_t1756533147 ** get_address_of_projectile_4() { return &___projectile_4; }
	inline void set_projectile_4(GameObject_t1756533147 * value)
	{
		___projectile_4 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_4, value);
	}

	inline static int32_t get_offset_of_projectileSpeed_5() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___projectileSpeed_5)); }
	inline float get_projectileSpeed_5() const { return ___projectileSpeed_5; }
	inline float* get_address_of_projectileSpeed_5() { return &___projectileSpeed_5; }
	inline void set_projectileSpeed_5(float value)
	{
		___projectileSpeed_5 = value;
	}

	inline static int32_t get_offset_of_firingRate_6() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___firingRate_6)); }
	inline float get_firingRate_6() const { return ___firingRate_6; }
	inline float* get_address_of_firingRate_6() { return &___firingRate_6; }
	inline void set_firingRate_6(float value)
	{
		___firingRate_6 = value;
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___health_7)); }
	inline float get_health_7() const { return ___health_7; }
	inline float* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(float value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_fireSound_8() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___fireSound_8)); }
	inline AudioClip_t1932558630 * get_fireSound_8() const { return ___fireSound_8; }
	inline AudioClip_t1932558630 ** get_address_of_fireSound_8() { return &___fireSound_8; }
	inline void set_fireSound_8(AudioClip_t1932558630 * value)
	{
		___fireSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___fireSound_8, value);
	}

	inline static int32_t get_offset_of_xMin_9() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___xMin_9)); }
	inline float get_xMin_9() const { return ___xMin_9; }
	inline float* get_address_of_xMin_9() { return &___xMin_9; }
	inline void set_xMin_9(float value)
	{
		___xMin_9 = value;
	}

	inline static int32_t get_offset_of_xMax_10() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___xMax_10)); }
	inline float get_xMax_10() const { return ___xMax_10; }
	inline float* get_address_of_xMax_10() { return &___xMax_10; }
	inline void set_xMax_10(float value)
	{
		___xMax_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
