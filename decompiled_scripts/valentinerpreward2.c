#region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	BOOL bLocal_3 = 0;
	Object obLocal_4 = 0;
	BOOL bLocal_5 = 0;
	BOOL bLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	Object obLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	BOOL bLocal_33 = 0;
	Object obLocal_34 = 0;
	BOOL bLocal_35 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xB608DC9B ^0x4696866E
{
	int num;

	sLocal_0 = "1.68.01";
	iLocal_19 = -1;
	iLocal_20 = -1;
	uLocal_26 = { 5022.5645f, -5738f, 16.0937f };
	uLocal_29 = { 5033.8535f, -5747.7485f, 20.4291f };
	fLocal_32 = 2f;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_1578026 = MISC::GET_HASH_KEY(sLocal_0);

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_76();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693219.f_3)
		{
			func_75();
			func_71();
			func_68();
			func_58();
			func_44();
			func_27();
			func_16();
			func_14();
		
			if (MISC::IS_PC_VERSION())
				func_13();
		}
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_10();
			func_9();
			func_6();
		}
		else
		{
			func_5();
		}
	
		func_1();
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xE5 Hash - 0x582DA283 ^0xBDEC5C07
{
	Vector3 vector;
	Hash modelHash;
	Vector3 vector2;
	Vector3 vector3;

	if (!bLocal_33)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			vector = { -878.0269f, -359.4522f, 36.2491f };
			modelHash = joaat("hei_prop_bh1_08_mp_gar2");
			vector2 = { -878.5042f, -358.2391f, 34.6839f };
			vector3 = { -858.5212f, -400.1935f, 53.7559f };
		
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector2, vector3, 20f, false, true, 0))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vector, 3f, modelHash, false))
				{
					bLocal_33 = true;
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(obLocal_34))
				{
					if (func_2(modelHash))
					{
						obLocal_34 = OBJECT::CREATE_OBJECT_NO_OFFSET(modelHash, vector, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(obLocal_34, 0f, 0f, 27f, 2, true);
						ENTITY::SET_ENTITY_INVINCIBLE(obLocal_34, true);
						ENTITY::SET_ENTITY_COLLISION(obLocal_34, true, false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(obLocal_34, false);
						ENTITY::FREEZE_ENTITY_POSITION(obLocal_34, true);
						bLocal_33 = true;
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(modelHash);
					}
				}
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_34))
			OBJECT::DELETE_OBJECT(&obLocal_34);
	
		bLocal_33 = false;
	}

	return;
}

BOOL func_2(Hash hParam0) // Position - 0x1FA Hash - 0x350793CC ^0x47697FA4
{
	if (hParam0 == 0)
		return true;

	STREAMING::REQUEST_MODEL(hParam0);
	return STREAMING::HAS_MODEL_LOADED(hParam0);
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x218 Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x239 Hash - 0x3FF6E4CA ^0xE6B59972
{
	ePedComponentType type;

	type = player;

	if (type != PV_COMP_INVALID)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (type == Global_2672741.f_3)
					return Global_2672741.f_2;
				else if (Global_2657921[type /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_5() // Position - 0x299 Hash - 0x13AAE849 ^0xFECDD313
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_23))
		OBJECT::DELETE_OBJECT(&obLocal_23);

	return;
}

void func_6() // Position - 0x2B0 Hash - 0x4C6D28F8 ^0xACF10597
{
	if (!Global_2684312.f_24)
		return;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_26, uLocal_29, fLocal_32, false, true, 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_23))
	{
		obLocal_23 = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, false, false, false);
		ENTITY::SET_ENTITY_HEADING(obLocal_23, -42.2f);
		ENTITY::SET_ENTITY_ALPHA(obLocal_23, 0, false);
		ENTITY::SET_ENTITY_NOWEAPONDECALS(obLocal_23, true);
	}

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		if (func_8(uLocal_24, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_24, false, false);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RLEFT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RUP, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RDOWN, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_UP, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_BEHIND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_LS, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_RS, true);
	return;
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x4F3 Hash - 0x6A4AB354 ^0xD9372BF4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

BOOL func_8(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x530 Hash - 0x932F3142 ^0x2480F5A5
{
	if (iParam2 == -1)
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
		return true;

	return false;
}

void func_9() // Position - 0x583 Hash - 0x1904D06C ^0x1B7ECB65
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_race_controler")) <= 0)
		return;

	if (*Global_4718592.f_126144 != 2093401330)
		return;

	Global_4980736.f_46530[110 /*162*/].f_27 = 4;
	Global_4980736.f_46530[111 /*162*/].f_27 = 6;
	Global_4980736.f_46530[112 /*162*/].f_27 = 4;
	Global_4980736.f_46530[113 /*162*/].f_27 = 6;
	return;
}

void func_10() // Position - 0x5F0 Hash - 0x3DF2D8F1 ^0xD4AA86CB
{
	if (func_12())
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			func_11();

	return;
}

void func_11() // Position - 0x60E Hash - 0x513B253C ^0x15118DBD
{
	Vector3 vector;
	Vector3 vector2;
	float width;
	Vector3 vector3;
	float heading;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		vector = { -107.8173f, -1776.9594f, 26.566977f };
		vector2 = { -126.121506f, -1800.2476f, 33.20278f };
		width = 16.8125f;
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector, vector2, width, false, true, 0))
		{
			switch (PLAYER::PLAYER_ID())
			{
				case 0:
					vector3 = { -120.1654f, -1767.0294f, 28.8029f };
					heading = 23.1325f;
					break;
			
				case 1:
					vector3 = { -119.1693f, -1766.6864f, 28.8168f };
					heading = 25.9911f;
					break;
			
				case 2:
					vector3 = { -118.305f, -1766.2928f, 28.8525f };
					heading = 16.56f;
					break;
			
				case 3:
					vector3 = { -117.2579f, -1765.974f, 28.8528f };
					heading = 19.0543f;
					break;
			}
		
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vector3, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), heading);
		}
	}

	return;
}

BOOL func_12() // Position - 0x71B Hash - 0x4228A1C2 ^0xE93D75E0
{
	return Global_2684312.f_21;
}

void func_13() // Position - 0x729 Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1683531.f_325 = 1;
	return;
}

void func_14() // Position - 0x739 Hash - 0xFB347FED ^0x1063AFD8
{
	Vehicle vehiclePedIsIn;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_15())
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, -768044142) && Global_101444.f_502 == 2)
			{
				if (!bLocal_35)
				{
					MISC::SET_BIT(&Global_103554[1], 4);
					bLocal_35 = true;
				}
			}
			else if (bLocal_35)
			{
				MISC::CLEAR_BIT(&Global_103554[1], 4);
				bLocal_35 = false;
			}
		}
		else if (bLocal_35)
		{
			MISC::CLEAR_BIT(&Global_103554[1], 4);
			bLocal_35 = false;
		}
	}
	else if (bLocal_35)
	{
		MISC::CLEAR_BIT(&Global_103554[1], 4);
		bLocal_35 = false;
	}

	return;
}

BOOL func_15() // Position - 0x7ED Hash - 0x4C17DBA0 ^0x4C17DBA0
{
	return IS_BIT_SET(Global_79497, 8);
}

void func_16() // Position - 0x7FC Hash - 0x5F76544B ^0xE9CB2E82
{
	BOOL flag;
	Vehicle vehiclePedIsIn;

	flag = true;

	if (func_22(PLAYER::PLAYER_ID()) != 0)
		flag = false;

	if (Global_2738587.f_6815 != 9)
		flag = false;

	if (!CAM::IS_SCREEN_FADED_OUT())
		flag = false;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		flag = false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		flag = false;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
		if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn))
			flag = false;
		else if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) != joaat("toreador"))
			flag = false;
		else if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(vehiclePedIsIn))
			flag = false;
	else
		flag = false;

	if (_GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == -1)
		flag = false;

	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1115.654f, -2273.433f, 28.898413f, 1115.2473f, -2278.1094f, 30.927465f, 3f, false, true, 0))
		flag = false;

	if (flag)
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_21))
			_STOPWATCH_INITIALIZE(&uLocal_21, false, false);
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_21, 10000, false))
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
	else if (_STOPWATCH_IS_INITIALIZED(&uLocal_21))
		_STOPWATCH_DESTROY(&uLocal_21);

	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x91F Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x92C Hash - 0x154EA353 ^0xBFA672B0
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return true;

	return false;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x98A Hash - 0x6F79B86B ^0x7B76DD66
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x9CF Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x9DB Hash - 0x4E1330D6 ^0x886EF094
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

int func_22(Player plParam0) // Position - 0xA60 Hash - 0xE3A3D5D5 ^0xB1AD1CE4
{
	if (func_26(plParam0) == 317)
		return func_23(plParam0, 317);

	return -1;
}

int func_23(Player plParam0, ePedComponentType epctParam1) // Position - 0xA81 Hash - 0xE22E8209 ^0xE22E8209
{
	if (func_26(plParam0) == epctParam1)
		return func_24(plParam0);

	return -1;
}

int func_24(Player plParam0) // Position - 0xA9E Hash - 0x48014DA ^0xC49B9410
{
	if (func_25(plParam0, false))
		return Global_1886967[plParam0 /*609*/].f_10.f_182;

	return -1;
}

BOOL func_25(Player plParam0, BOOL bParam1) // Position - 0xAC1 Hash - 0x8B0CDA01 ^0x4664171D
{
	if (Global_1886967[plParam0 /*609*/].f_10.f_33 != PV_COMP_INVALID || bParam1 && Global_1886967[plParam0 /*609*/].f_10.f_32 != PV_COMP_INVALID)
		return true;

	return false;
}

ePedComponentType func_26(Player plParam0) // Position - 0xAFC Hash - 0x48014DA ^0x68F6350
{
	if (func_25(plParam0, false))
		return Global_1886967[plParam0 /*609*/].f_10.f_33;

	return PV_COMP_INVALID;
}

void func_27() // Position - 0xB1F Hash - 0xDDF07D69 ^0x24CFC1A0
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_13))
	{
		MISC::SET_BIT(&Global_8684, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_13, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_13, false, false);
			_STOPWATCH_DESTROY(&uLocal_13);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_11) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_11, 1000, false))
	{
		if (iLocal_20 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_20 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_20, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_11, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
				AUDIO::STOP_SOUND(iLocal_20);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_20);
			iLocal_20 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_11, false, false);
			_STOPWATCH_DESTROY(&uLocal_11);
		}
	}

	if (!bLocal_5 && !func_39())
		return;

	bLocal_5 = true;
	MISC::SET_BIT(&Global_8684, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_4))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_4, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_4, 8000);
			num = func_38(7869, -1);
			func_34(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_15 = { ENTITY::GET_ENTITY_COORDS(obLocal_4, false) };
			iLocal_18 = 0;
		}
	}
	else
	{
		func_33();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_19 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_19 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_19, "07", obLocal_4, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_6)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_7, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_4, false);
					_STOPWATCH_RESET(&uLocal_7, false, false);
					_STOPWATCH_DESTROY(&uLocal_7);
					_STOPWATCH_INITIALIZE(&uLocal_9, false, false);
					bLocal_6 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_9, false, false)) / SYSTEM::TO_FLOAT(func_31());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_7, false, false)) / SYSTEM::TO_FLOAT(func_30());
				num3 = num3 * num2;
				vector = { func_28(uLocal_15, func_29(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_4, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_18 = iLocal_18 + 1;
					uLocal_15 = { ENTITY::GET_ENTITY_COORDS(obLocal_4, false) };
					_STOPWATCH_RESET(&uLocal_7, false, false);
					_STOPWATCH_DESTROY(&uLocal_7);
				
					if (func_30() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_4);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_19))
							AUDIO::STOP_SOUND(iLocal_19);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_19);
						iLocal_19 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_11, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_13, false, false);
						_STOPWATCH_RESET(&uLocal_9, false, false);
						_STOPWATCH_DESTROY(&uLocal_9);
						uLocal_15 = { 0f, 0f, 0f };
						iLocal_18 = 0;
						bLocal_5 = false;
						bLocal_6 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 func_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0xDC3 Hash - 0x4C194BC9 ^0x4C194BC9
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 func_29() // Position - 0xDDE Hash - 0x18519857 ^0x18519857
{
	switch (iLocal_18)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
	
		case 1:
			return -1082.8652f, 6390.5195f, 924.2493f;
	
		case 2:
			return -2542.874f, 7217.5137f, 1051.3335f;
	
		case 3:
			return -4139.1064f, 8143.3022f, 1412.694f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_30() // Position - 0xE50 Hash - 0x6629FE61 ^0x1A9C302A
{
	switch (iLocal_18)
	{
		case 0:
			return 2000;
	
		case 1:
			return 1000;
	
		case 2:
			return 100;
	
		case 3:
			return 50;
	
		default:
		
	}

	return -1;
}

int func_31() // Position - 0xE8E Hash - 0x729E933 ^0xB1968CD9
{
	return 3150;
}

int _STOPWATCH_GET_TIME_PASSED(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0xE99 Hash - 0xAB71C5AE ^0x10186D95
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *pStopwatch);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch);
}

void func_33() // Position - 0xEE0 Hash - 0x51837861 ^0xD443485E
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_4, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_4, entityRotation, 2, true);
	return;
}

void func_34(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF11 Hash - 0xC00D48A9 ^0xD79DE681
{
	Hash statName;

	statName = func_35(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

Hash func_35(int iParam0, int iParam1) // Position - 0xF34 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_36(iParam1));
}

int func_36(int iParam0) // Position - 0xF49 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_37();
	
		if (num2 > -1)
		{
			Global_2750546 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750546 = 1;
		}
	}

	return num;
}

int func_37() // Position - 0xF7D Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574925;
}

int func_38(int iParam0, int iParam1) // Position - 0xF89 Hash - 0x744E461C ^0x94D7C845
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14626)
	{
		statHash = func_35(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_39() // Position - 0xFB8 Hash - 0x48656DF7 ^0x9B01211A
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2640095 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_42(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2685249.f_3077.f_178 >= 1 && Global_2685249.f_3077.f_178 < 4 && func_41() && func_40())
		return true;

	return false;
}

BOOL func_40() // Position - 0x1039 Hash - 0x97C9EE39 ^0xC5425FC4
{
	if (_STAT_GET_PACKED_BOOL(15476, -1) && func_38(5453, func_37()) > 577)
		return true;

	return false;
}

BOOL func_41() // Position - 0x1065 Hash - 0xC61AA4B9 ^0x5D673268
{
	int weatherType1;
	int weatherType2;
	float percentWeather2;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.5f)
		if (weatherType1 == joaat("rain") || weatherType1 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
			return true;
	else if (weatherType2 == joaat("rain") || weatherType2 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
		return true;

	return false;
}

BOOL func_42(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x10DC Hash - 0x52131E1C ^0x27D7D87A
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x10F9 Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_37();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_44() // Position - 0x1115 Hash - 0xDB4D8C01 ^0x33E4F23D
{
	Vector3 vector;
	BOOL isPointInAngledArea;
	int num;
	int num2;
	int num3;
	int num4;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_262145.f_34045[0] == *Global_4718592.f_126144 && Global_1058104.f_14[0] >= 4 || Global_1058104.f_14[0] <= 6)
	{
		vector = { func_47(101) };
		isPointInAngledArea = OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 2961.0774f, 2743.2803f, 40.742603f, 2957.4968f, 2756.6743f, 45.117565f, 15f, false, true);
	
		if (!func_46())
		{
			if (isPointInAngledArea || Global_1058104.f_14[0] == 5)
			{
				num2 = func_45(&num);
			
				if (num >= 0 && num < 4 && num2 >= 0 && num2 < 17)
					MISC::SET_BIT(&Global_4718592.f_3318[num /*25763*/].f_8604[num2], 12);
			}
		}
		else if (!isPointInAngledArea && Global_1058104.f_14[0] < 5 || Global_1058104.f_14[0] > 5)
		{
			num4 = func_45(&num3);
		
			if (num3 >= 0 && num3 < 4 && num4 >= 0 && num4 < 17)
				MISC::CLEAR_BIT(&Global_4718592.f_3318[num3 /*25763*/].f_8604[num4], 12);
		}
	}

	return;
}

int func_45(var uParam0) // Position - 0x126A Hash - 0xC81BA1E4 ^0x1AE5257E
{
	*uParam0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	if (*uParam0 < 4 && *uParam0 > -1)
	{
	}
	else
	{
		*uParam0 = 0;
	}

	return Global_1058104.f_14[*uParam0];
}

BOOL func_46() // Position - 0x12A1 Hash - 0x8085412B ^0xE55991C3
{
	int num;
	int num2;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	num2 = func_45(&num);

	if (num < 0 || num >= 4)
		return false;

	if (num2 < 0 || num2 >= 17)
		return false;

	return IS_BIT_SET(Global_4718592.f_3318[num /*25763*/].f_8604[num2], 12);
}

Vector3 func_47(int iParam0) // Position - 0x12FE Hash - 0x67CAA152 ^0x67CAA152
{
	switch (iParam0)
	{
		case 101:
			return func_48();
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_48() // Position - 0x131D Hash - 0xA29497D3 ^0xEB7AFB9D
{
	Vector3 offsetFromEntityInWorldCoords;
	Vehicle vehicle;
	var groundZ;

	offsetFromEntityInWorldCoords = { 0f, 0f, 0f };
	vehicle = func_49();

	if (ENTITY::DOES_ENTITY_EXIST(vehicle) && !ENTITY::IS_ENTITY_DEAD(vehicle, false))
	{
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(vehicle, 0f, -8f, -0.6f) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromEntityInWorldCoords, &groundZ, false, false) && !ENTITY::IS_ENTITY_IN_AIR(vehicle))
			offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, groundZ };
		else
			offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, offsetFromEntityInWorldCoords.f_2 - 1.5f };
	}

	return offsetFromEntityInWorldCoords;
}

Vehicle func_49() // Position - 0x139F Hash - 0x503B7065 ^0xD6785B2
{
	int i;
	var sizeAndVehs;
	int pedNearbyVehicles;
	int j;
	var sizeAndVehs2;
	int pedNearbyVehicles2;

	if (func_55(PLAYER::PLAYER_ID(), false))
	{
		if (PLAYER::PLAYER_ID() != _GET_BOSS_OF_LOCAL_PLAYER())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2738587.f_310))
			{
				sizeAndVehs = 25;
				pedNearbyVehicles = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &sizeAndVehs);
			
				for (i = 0; i < pedNearbyVehicles; i = i + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(sizeAndVehs[i]) && ENTITY::IS_ENTITY_A_VEHICLE(sizeAndVehs[i]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(sizeAndVehs[i], false))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", INT))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(sizeAndVehs[i], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(sizeAndVehs[i], func_53(true)))
								{
									if (func_50(sizeAndVehs[i]) == _GET_BOSS_OF_LOCAL_PLAYER())
									{
										Global_2738587.f_310 = sizeAndVehs[i];
										return sizeAndVehs[i];
									}
								}
							}
						}
					}
				}
			}
			else
			{
				return Global_2738587.f_310;
			}
		}
	}
	else if (PLAYER::PLAYER_ID() == _GET_BOSS_OF_LOCAL_PLAYER() && !ENTITY::DOES_ENTITY_EXIST(Global_2738587.f_310))
	{
		sizeAndVehs2 = 25;
		pedNearbyVehicles2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &sizeAndVehs2);
	
		for (j = 0; j < pedNearbyVehicles2; j = j + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(sizeAndVehs2[j]) && ENTITY::IS_ENTITY_A_VEHICLE(sizeAndVehs2[j]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(sizeAndVehs2[j], false))
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", INT))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(sizeAndVehs2[j], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(sizeAndVehs2[j], func_53(true)))
						{
							if (func_50(sizeAndVehs2[j]) == PLAYER::PLAYER_ID())
							{
								Global_2738587.f_310 = sizeAndVehs2[j];
								return sizeAndVehs2[j];
							}
						}
					}
				}
			}
		}
	}

	return Global_2738587.f_310;
}

ePedComponentType func_50(Vehicle veParam0) // Position - 0x1553 Hash - 0xB21019CF ^0xF9972B93
{
	Hash _int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, func_53(true)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "Creator_Trailer"))
				{
					_int = DECORATOR::DECOR_GET_INT(veParam0, "Creator_Trailer");
					return func_52(_int, false, true, PV_COMP_HEAD);
				}
			}
		}
	}

	return _INVALID_PLAYER_INDEX();
}

Player _INVALID_PLAYER_INDEX() // Position - 0x15C2 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

ePedComponentType func_52(Hash hParam0, BOOL bParam1, BOOL bParam2, ePedComponentType epctParam3) // Position - 0x15CB Hash - 0xF94387FF ^0x72C4C5AA
{
	ePedComponentType type;
	int i;

	if (bParam2)
	{
		for (i = 0; i < 32; i = i + 1)
		{
			type = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (_NETWORK_IS_PLAYER_VALID(type, false, true) || bParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(type))
				if (hParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(type))
					return type;
		}
	}
	else if (_NETWORK_IS_PLAYER_VALID(epctParam3, false, true) || bParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(epctParam3))
	{
		if (hParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(epctParam3))
			return epctParam3;
	}

	return _INVALID_PLAYER_INDEX();
}

Hash func_53(BOOL bParam0) // Position - 0x1656 Hash - 0x9AA99395 ^0x67DFE72D
{
	if (bParam0)
		return -426933872;

	return joaat("avenger");
}

ePedComponentType _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x1670 Hash - 0xFD2601BF ^0xA8AA969
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
}

BOOL func_55(Player plParam0, BOOL bParam1) // Position - 0x1685 Hash - 0x457616A2 ^0x94603D69
{
	if (!func_57(plParam0))
		return false;

	if (!bParam1)
		if (func_56(plParam0))
			return false;

	return Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL func_56(ePedComponentType epctParam0) // Position - 0x16BE Hash - 0x9C5A1EA2 ^0x797F6215
{
	if (func_57(epctParam0))
		if (Global_1886967[epctParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1886967[epctParam0 /*609*/].f_10 == epctParam0;

	return false;
}

BOOL func_57(Player plParam0) // Position - 0x16F3 Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void func_58() // Position - 0x1715 Hash - 0x3ECBB987 ^0x92906370
{
	if (func_65(PLAYER::PLAYER_ID()))
		if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
			func_59(0);

	return;
}

void func_59(int iParam0) // Position - 0x1747 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_64())
		return;

	if (Global_21025)
		if (func_63())
			func_61(true, true);
		else
			func_61(false, false);

	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		MISC::SET_BIT(&Global_8684, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22166 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8683, 30);
	else
		MISC::CLEAR_BIT(&Global_8683, 30);

	if (!func_60())
		Global_20813.f_1 = 3;

	return;
}

BOOL func_60() // Position - 0x17D1 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_61(BOOL bParam0, BOOL bParam1) // Position - 0x17F8 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_62(0))
		{
			Global_21025 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
		
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == true)
	{
		Global_21025 = false;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
	}

	return;
}

BOOL func_62(int iParam0) // Position - 0x186C Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20813.f_1 > 3)
			if (IS_BIT_SET(Global_8683, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20813.f_1 > 3)
		return true;

	return false;
}

BOOL func_63() // Position - 0x18C3 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_64() // Position - 0x18D1 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1956030, 19);
}

BOOL func_65(ePedComponentType epctParam0) // Position - 0x18E0 Hash - 0x440D1C81 ^0x15AA607B
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (func_66(epctParam0) && Global_2657921[epctParam0 /*463*/].f_321.f_10 == epctParam0)
			return true;

	return false;
}

BOOL func_66(Player plParam0) // Position - 0x1915 Hash - 0xA4C8B8D7 ^0xE5015FA1
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657921[plParam0 /*463*/].f_321.f_7 != PV_COMP_INVALID)
				return func_67(Global_2657921[plParam0 /*463*/].f_321.f_7) == 22;

	return false;
}

int func_67(ePedComponentType epctParam0) // Position - 0x195C Hash - 0xEE599357 ^0xEE599357
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
		case PV_COMP_BERD:
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
		case PV_COMP_LOWR:
		case PV_COMP_HAND:
		case PV_COMP_FEET:
		case PV_COMP_TEEF:
		case PV_COMP_ACCS:
		case PV_COMP_TASK:
		case PV_COMP_DECL:
		case PV_COMP_JBIB:
		case PV_COMP_MAX:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	}

	return -1;
}

void func_68() // Position - 0x1E36 Hash - 0x32C9A6B ^0x9E9693DC
{
	if (Global_113315 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_69())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

BOOL func_69() // Position - 0x1E62 Hash - 0xDBD936D3 ^0xDBD936D3
{
	if (func_70() == 0)
		return true;

	return false;
}

int func_70() // Position - 0x1E77 Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_1574632.f_18;
}

void func_71() // Position - 0x1E85 Hash - 0xCA052B25 ^0xCA052B25
{
	if (!bLocal_3)
	{
		if (Global_1836467)
		{
			if (func_74() || func_72())
				Global_262145.f_20379 = 1;
			else
				Global_262145.f_20379 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!Global_1836467)
	{
		bLocal_3 = false;
	}

	return;
}

int func_72() // Position - 0x1ECF Hash - 0xDC27281 ^0x48319680
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10888)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10884 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10888)
			return 0;
	}

	return 1;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x1F5E Hash - 0x4F1C0EC ^0xC7D84231
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_74() // Position - 0x1F7C Hash - 0xDC27281 ^0x48319680
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10887)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10883 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10887)
			return 0;
	}

	return 1;
}

void func_75() // Position - 0x200B Hash - 0xD9E482D6 ^0x4EDB2B8F
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < 32; i = i + 1)
		{
			MISC::SET_BIT(&(Global_1845263[i /*877*/].f_810), 1);
		}
	}

	return;
}

void func_76() // Position - 0x203E Hash - 0x106F122B ^0xF9AF75B9
{
	if (bLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_77(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_1 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_1 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		}
	}

	return;
}

void func_77(float fParam0, float fParam1, char* sParam2, char* sParam3) // Position - 0x223D Hash - 0x7486FC59 ^0x9B504711
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x225A Hash - 0x11DC3931 ^0x820FC5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

