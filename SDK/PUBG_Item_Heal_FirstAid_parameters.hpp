#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
	//---------------------------------------------------------------------------
	//Parameters
	//---------------------------------------------------------------------------

	// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.IsCastable
	struct UItem_Heal_FirstAid_C_IsCastable_Params
	{
		class ATslCharacter**                              Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
	};

	// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.PrintCastingTime
	struct UItem_Heal_FirstAid_C_PrintCastingTime_Params
	{
	};

	// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.Heal
	struct UItem_Heal_FirstAid_C_Heal_Params
	{
	};

	// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.UseBy
	struct UItem_Heal_FirstAid_C_UseBy_Params
	{
		class ATslCharacter**                              Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
