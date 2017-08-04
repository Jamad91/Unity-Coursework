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
// ScoreKeeper
struct ScoreKeeper_t1955354816;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyBehavior
struct  EnemyBehavior_t122890614  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemyBehavior::projectile
	GameObject_t1756533147 * ___projectile_2;
	// System.Single EnemyBehavior::health
	float ___health_3;
	// System.Single EnemyBehavior::projectileSpeed
	float ___projectileSpeed_4;
	// System.Single EnemyBehavior::firingRate
	float ___firingRate_5;
	// System.Int32 EnemyBehavior::scoreValue
	int32_t ___scoreValue_6;
	// UnityEngine.AudioClip EnemyBehavior::fireSound
	AudioClip_t1932558630 * ___fireSound_7;
	// UnityEngine.AudioClip EnemyBehavior::deathSound
	AudioClip_t1932558630 * ___deathSound_8;
	// ScoreKeeper EnemyBehavior::scoreKeeper
	ScoreKeeper_t1955354816 * ___scoreKeeper_9;

public:
	inline static int32_t get_offset_of_projectile_2() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___projectile_2)); }
	inline GameObject_t1756533147 * get_projectile_2() const { return ___projectile_2; }
	inline GameObject_t1756533147 ** get_address_of_projectile_2() { return &___projectile_2; }
	inline void set_projectile_2(GameObject_t1756533147 * value)
	{
		___projectile_2 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_2, value);
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___health_3)); }
	inline float get_health_3() const { return ___health_3; }
	inline float* get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(float value)
	{
		___health_3 = value;
	}

	inline static int32_t get_offset_of_projectileSpeed_4() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___projectileSpeed_4)); }
	inline float get_projectileSpeed_4() const { return ___projectileSpeed_4; }
	inline float* get_address_of_projectileSpeed_4() { return &___projectileSpeed_4; }
	inline void set_projectileSpeed_4(float value)
	{
		___projectileSpeed_4 = value;
	}

	inline static int32_t get_offset_of_firingRate_5() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___firingRate_5)); }
	inline float get_firingRate_5() const { return ___firingRate_5; }
	inline float* get_address_of_firingRate_5() { return &___firingRate_5; }
	inline void set_firingRate_5(float value)
	{
		___firingRate_5 = value;
	}

	inline static int32_t get_offset_of_scoreValue_6() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___scoreValue_6)); }
	inline int32_t get_scoreValue_6() const { return ___scoreValue_6; }
	inline int32_t* get_address_of_scoreValue_6() { return &___scoreValue_6; }
	inline void set_scoreValue_6(int32_t value)
	{
		___scoreValue_6 = value;
	}

	inline static int32_t get_offset_of_fireSound_7() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___fireSound_7)); }
	inline AudioClip_t1932558630 * get_fireSound_7() const { return ___fireSound_7; }
	inline AudioClip_t1932558630 ** get_address_of_fireSound_7() { return &___fireSound_7; }
	inline void set_fireSound_7(AudioClip_t1932558630 * value)
	{
		___fireSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___fireSound_7, value);
	}

	inline static int32_t get_offset_of_deathSound_8() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___deathSound_8)); }
	inline AudioClip_t1932558630 * get_deathSound_8() const { return ___deathSound_8; }
	inline AudioClip_t1932558630 ** get_address_of_deathSound_8() { return &___deathSound_8; }
	inline void set_deathSound_8(AudioClip_t1932558630 * value)
	{
		___deathSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___deathSound_8, value);
	}

	inline static int32_t get_offset_of_scoreKeeper_9() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___scoreKeeper_9)); }
	inline ScoreKeeper_t1955354816 * get_scoreKeeper_9() const { return ___scoreKeeper_9; }
	inline ScoreKeeper_t1955354816 ** get_address_of_scoreKeeper_9() { return &___scoreKeeper_9; }
	inline void set_scoreKeeper_9(ScoreKeeper_t1955354816 * value)
	{
		___scoreKeeper_9 = value;
		Il2CppCodeGenWriteBarrier(&___scoreKeeper_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
