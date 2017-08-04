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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FormationController
struct  FormationController_t144982969  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FormationController::enemyPrefab
	GameObject_t1756533147 * ___enemyPrefab_2;
	// System.Single FormationController::width
	float ___width_3;
	// System.Single FormationController::height
	float ___height_4;
	// System.Single FormationController::speed
	float ___speed_5;
	// System.Single FormationController::spawnDelay
	float ___spawnDelay_6;
	// System.Boolean FormationController::movingRight
	bool ___movingRight_7;
	// System.Single FormationController::xMax
	float ___xMax_8;
	// System.Single FormationController::xMin
	float ___xMin_9;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(FormationController_t144982969, ___enemyPrefab_2)); }
	inline GameObject_t1756533147 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(GameObject_t1756533147 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_2, value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(FormationController_t144982969, ___width_3)); }
	inline float get_width_3() const { return ___width_3; }
	inline float* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(float value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(FormationController_t144982969, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(FormationController_t144982969, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_6() { return static_cast<int32_t>(offsetof(FormationController_t144982969, ___spawnDelay_6)); }
	inline float get_spawnDelay_6() const { return ___spawnDelay_6; }
	inline float* get_address_of_spawnDelay_6() { return &___spawnDelay_6; }
	inline void set_spawnDelay_6(float value)
	{
		___spawnDelay_6 = value;
	}

	inline static int32_t get_offset_of_movingRight_7() { return static_cast<int32_t>(offsetof(FormationController_t144982969, ___movingRight_7)); }
	inline bool get_movingRight_7() const { return ___movingRight_7; }
	inline bool* get_address_of_movingRight_7() { return &___movingRight_7; }
	inline void set_movingRight_7(bool value)
	{
		___movingRight_7 = value;
	}

	inline static int32_t get_offset_of_xMax_8() { return static_cast<int32_t>(offsetof(FormationController_t144982969, ___xMax_8)); }
	inline float get_xMax_8() const { return ___xMax_8; }
	inline float* get_address_of_xMax_8() { return &___xMax_8; }
	inline void set_xMax_8(float value)
	{
		___xMax_8 = value;
	}

	inline static int32_t get_offset_of_xMin_9() { return static_cast<int32_t>(offsetof(FormationController_t144982969, ___xMin_9)); }
	inline float get_xMin_9() const { return ___xMin_9; }
	inline float* get_address_of_xMin_9() { return &___xMin_9; }
	inline void set_xMin_9(float value)
	{
		___xMin_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
