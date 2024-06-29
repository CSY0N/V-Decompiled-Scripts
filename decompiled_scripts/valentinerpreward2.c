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
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	BOOL bLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	Object obLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	Hash hLocal_40 = 0;
	Object obLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

	sLocal_0 = "1.69.02c";
	iLocal_19 = -1;
	iLocal_20 = -1;
	uLocal_33 = { 5022.5645f, -5738f, 16.0937f };
	uLocal_36 = { 5033.8535f, -5747.7485f, 20.4291f };
	fLocal_39 = 2f;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_1578030 = MISC::GET_HASH_KEY(sLocal_0);

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_90();
	
		func_66();
		func_62();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693440.f_3)
		{
			func_61();
			func_57();
			func_54();
			func_52();
			func_41();
			func_35();
			func_26();
			func_13();
		}
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_12();
			func_5();
			func_2();
		}
		else
		{
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xDE
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_30))
		OBJECT::DELETE_OBJECT(&obLocal_30);

	return;
}

void func_2() // Position - 0xF5
{
	if (!Global_2684504.f_24)
		return;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_33, uLocal_36, fLocal_39, false, true, 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_30))
	{
		obLocal_30 = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, false, false, false);
		ENTITY::SET_ENTITY_HEADING(obLocal_30, -42.2f);
		ENTITY::SET_ENTITY_ALPHA(obLocal_30, 0, false);
		ENTITY::SET_ENTITY_NOWEAPONDECALS(obLocal_30, true);
	}

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		if (func_4(uLocal_31, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_31, false, false);

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

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x338
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

BOOL func_4(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x375
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

void func_5() // Position - 0x3C8
{
	Ped ped;
	int i;
	Entity entityIndexOfCutsceneEntity;

	if (func_11(3) != *Global_4718592.f_127178)
	{
		uLocal_25 = { func_10() };
		_STOPWATCH_DESTROY(&uLocal_28);
		return;
	}

	i = 0;

	for (i = 0; i <= 79; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_152[i]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058116.f_152[i]) != -372985740)
		{
		}
		else
		{
			ped = Global_1058116.f_152[i];
		}
	}

	MISC::SET_BIT(&(Global_4718592.f_174795[0 /*596*/].f_148[1 /*11*/].f_10), 3);

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		entityIndexOfCutsceneEntity = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("HVB_TARGET_01", 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(entityIndexOfCutsceneEntity))
			uLocal_25 = { ENTITY::GET_ENTITY_COORDS(entityIndexOfCutsceneEntity, false) };
	}
	else if (!_IS_NULL_VECTOR(uLocal_25))
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_28))
			_STOPWATCH_INITIALIZE(&uLocal_28, false, false);
	
		if (func_4(uLocal_28, 5000, false))
		{
			uLocal_25 = { func_10() };
			_STOPWATCH_DESTROY(&uLocal_28);
		}
	
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ped))
		{
			ENTITY::SET_ENTITY_COORDS(ped, uLocal_25, true, false, false, true);
			uLocal_25 = { func_10() };
			_STOPWATCH_DESTROY(&uLocal_28);
		}
	}

	return;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x4E7
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x52C
{
	return uParam0->f_1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x538
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x562
{
	uParam0->f_1 = 0;
	return;
}

Vector3 func_10() // Position - 0x56F
{
	return 0f, 0f, 0f;
}

int func_11(int iParam0) // Position - 0x57A
{
	if (iParam0 != -1)
		return Global_262145.f_35481[iParam0];

	return -1;
}

void func_12() // Position - 0x599
{
	if (Global_1956949)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 366, false);
		bLocal_24 = true;
	}
	else
	{
		if (bLocal_24)
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 366, true);
	
		bLocal_24 = false;
	}

	return;
}

void func_13() // Position - 0x5CE
{
	if (func_25())
	{
		if (func_22() && !IS_BIT_SET(func_21(12035, -1), 0) && !_STAT_GET_PACKED_BOOL(51259, -1))
		{
			func_16(true);
			_STAT_SET_PACKED_BOOL(51259, true, -1);
		}
	}
	else if (_STAT_GET_PACKED_BOOL(51259, -1))
	{
		func_16(false);
		_STAT_SET_PACKED_BOOL(51259, false, -1);
	}

	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x630
{
	if (iParam2 == -1)
		iParam2 = func_15();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_15() // Position - 0x64E
{
	return Global_1574926;
}

void func_16(BOOL bParam0) // Position - 0x65A
{
	int address;

	address = func_21(12035, -1);

	if (bParam0)
		MISC::SET_BIT(&address, 0);
	else
		MISC::CLEAR_BIT(&address, 0);

	func_17(12035, address, -1, true);
	return;
}

void func_17(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x68D
{
	Hash statName;

	statName = func_18(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

Hash func_18(int iParam0, int iParam1) // Position - 0x6B0
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_19(iParam1));
}

int func_19(int iParam0) // Position - 0x6C5
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_15();
	
		if (num2 > -1)
		{
			Global_2750949 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750949 = 1;
		}
	}

	return num;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x6F9
{
	if (iParam1 == -1)
		iParam1 = func_15();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_21(int iParam0, int iParam1) // Position - 0x715
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_18(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_22() // Position - 0x744
{
	if (func_23(166, -1))
		return true;

	if (_STAT_GET_PACKED_BOOL(28287, -1))
		return true;

	return false;
}

BOOL func_23(int iParam0, int iParam1) // Position - 0x76A
{
	Hash statHash;
	BOOL outValue;

	statHash = func_24(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_24(int iParam0, int iParam1) // Position - 0x78E
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_19(iParam1));
}

BOOL func_25() // Position - 0x7A4
{
	if (Global_76498 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return true;

	return false;
}

void func_26() // Position - 0x7C8
{
	BOOL flag;
	Vehicle vehiclePedIsIn;

	flag = true;

	if (func_30(PLAYER::PLAYER_ID()) != 0)
		flag = false;

	if (Global_2738934.f_6841 != 9)
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
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_42))
			_STOPWATCH_INITIALIZE(&uLocal_42, false, false);
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_42, 10000, false))
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
	else if (_STOPWATCH_IS_INITIALIZED(&uLocal_42))
		_STOPWATCH_DESTROY(&uLocal_42);

	return;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x8EB
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

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x949
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

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x9CE
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

int func_30(Player plParam0) // Position - 0x9EF
{
	if (func_34(plParam0) == 317)
		return func_31(plParam0, 317);

	return -1;
}

int func_31(Player plParam0, ePedComponentType epctParam1) // Position - 0xA10
{
	if (func_34(plParam0) == epctParam1)
		return func_32(plParam0);

	return -1;
}

int func_32(Player plParam0) // Position - 0xA2D
{
	if (func_33(plParam0, false))
		return Global_1887305[plParam0 /*610*/].f_10.f_182;

	return -1;
}

BOOL func_33(Player plParam0, BOOL bParam1) // Position - 0xA50
{
	if (Global_1887305[plParam0 /*610*/].f_10.f_33 != PV_COMP_INVALID || bParam1 && Global_1887305[plParam0 /*610*/].f_10.f_32 != PV_COMP_INVALID)
		return true;

	return false;
}

ePedComponentType func_34(Player plParam0) // Position - 0xA8B
{
	if (func_33(plParam0, false))
		return Global_1887305[plParam0 /*610*/].f_10.f_33;

	return PV_COMP_INVALID;
}

void func_35() // Position - 0xAAE
{
	if (!IS_BIT_SET(Global_1943520.f_13, 11))
		return;

	if (!func_39(PLAYER::PLAYER_ID()) && !func_36(PLAYER::PLAYER_ID()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("GB_DELIVERY")) == 0)
		MISC::CLEAR_BIT(&(Global_1943520.f_13), 11);

	return;
}

BOOL func_36(ePedComponentType epctParam0) // Position - 0xAFC
{
	if (epctParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
		return IS_BIT_SET(Global_2657971[epctParam0 /*465*/].f_322, 3);

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xB2D
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
				if (type == Global_2672855.f_3)
					return Global_2672855.f_2;
				else if (Global_2657971[type /*465*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0xB8D
{
	return -1;
}

BOOL func_39(ePedComponentType epctParam0) // Position - 0xB96
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
				return func_40(Global_2657971[epctParam0 /*465*/].f_322.f_8) == 29;

	return false;
}

int func_40(ePedComponentType epctParam0) // Position - 0xBDD
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
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
	}

	return -1;
}

void func_41() // Position - 0x10DD
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_13))
	{
		MISC::SET_BIT(&Global_8801, 2);
	
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

	if (!bLocal_5 && !func_48())
		return;

	bLocal_5 = true;
	MISC::SET_BIT(&Global_8801, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_4))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_4, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_4, 8000);
			num = func_21(7869, -1);
			func_17(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_15 = { ENTITY::GET_ENTITY_COORDS(obLocal_4, false) };
			iLocal_18 = 0;
		}
	}
	else
	{
		func_47();
	
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
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_9, false, false)) / SYSTEM::TO_FLOAT(func_45());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_7, false, false)) / SYSTEM::TO_FLOAT(func_44());
				num3 = num3 * num2;
				vector = { func_42(uLocal_15, func_43(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_4, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_18 = iLocal_18 + 1;
					uLocal_15 = { ENTITY::GET_ENTITY_COORDS(obLocal_4, false) };
					_STOPWATCH_RESET(&uLocal_7, false, false);
					_STOPWATCH_DESTROY(&uLocal_7);
				
					if (func_44() == -1)
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

Vector3 func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x1382
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 func_43() // Position - 0x139D
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

int func_44() // Position - 0x140F
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

int func_45() // Position - 0x144D
{
	return 3150;
}

int _STOPWATCH_GET_TIME_PASSED(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1458
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *pStopwatch);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch);
}

void func_47() // Position - 0x149F
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_4, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_4, entityRotation, 2, true);
	return;
}

BOOL func_48() // Position - 0x14D0
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2640096 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_51(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2685444.f_3078.f_178 >= 1 && Global_2685444.f_3078.f_178 < 4 && func_50() && func_49())
		return true;

	return false;
}

BOOL func_49() // Position - 0x1551
{
	if (_STAT_GET_PACKED_BOOL(15476, -1) && func_21(5453, func_15()) > 577)
		return true;

	return false;
}

BOOL func_50() // Position - 0x157D
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

BOOL func_51(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x15F4
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

void func_52() // Position - 0x1611
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;
	int vehicleMod;

	if (!MISC::IS_PC_VERSION())
		return;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehiclePedIsIn))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID() || VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, -1, false))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
						vehicleMod = VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 48);
					
						if (func_53(entityModel, vehicleMod))
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn))
								VEHICLE::SET_VEHICLE_MOD(vehiclePedIsIn, 48, -1, false);
					}
				}
			}
		}
	}

	return;
}

BOOL func_53(Hash hParam0, int iParam1) // Position - 0x16C8
{
	switch (hParam0)
	{
		case -223461503:
			if (iParam1 == 10)
				return true;
			break;
	
		case joaat("banshee"):
			if (iParam1 == 14)
				return true;
			break;
	
		case -143587026:
			if (iParam1 == 10)
				return true;
			break;
	
		case joaat("previon"):
			if (iParam1 == 14)
				return true;
			break;
	
		case joaat("growler"):
			if (iParam1 == 12)
				return true;
			break;
	
		case joaat("kuruma"):
			if (iParam1 == 11)
				return true;
			break;
	
		case joaat("insurgent3"):
			if (iParam1 == 34)
				return true;
			break;
	
		case joaat("avenger"):
		case -426933872:
			if (iParam1 == 32)
				return true;
			break;
	
		case joaat("patriot2"):
			if (iParam1 == 29)
				return true;
			break;
	
		case joaat("khanjali"):
			if (iParam1 == 24)
				return true;
			break;
	}

	return false;
}

void func_54() // Position - 0x17A6
{
	if (Global_112912 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_55())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

BOOL func_55() // Position - 0x17D2
{
	if (func_56() == 0)
		return true;

	return false;
}

int func_56() // Position - 0x17E7
{
	return Global_1574633.f_18;
}

void func_57() // Position - 0x17F5
{
	if (!bLocal_3)
	{
		if (Global_1836472)
		{
			if (func_60() || func_58())
				Global_262145.f_19912 = 1;
			else
				Global_262145.f_19912 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!Global_1836472)
	{
		bLocal_3 = false;
	}

	return;
}

int func_58() // Position - 0x183F
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10716)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10712 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10716)
			return 0;
	}

	return 1;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x18CE
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_60() // Position - 0x18EC
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10715)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10711 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10715)
			return 0;
	}

	return 1;
}

void func_61() // Position - 0x197B
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < 32; i = i + 1)
		{
			MISC::SET_BIT(&(Global_1845281[i /*883*/].f_826), 1);
		}
	}

	return;
}

void func_62() // Position - 0x19AE
{
	if (func_64())
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_41))
		{
			ENTITY::SET_ENTITY_VISIBLE(obLocal_41, false, false);
		}
		else
		{
			hLocal_40 = joaat("apa_heist_apart2_door");
		
			if (func_63(hLocal_40))
			{
				obLocal_41 = OBJECT::CREATE_OBJECT(hLocal_40, 122.271f, 12.916f, 67.282f, false, false, true);
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_41))
				{
					ENTITY::SET_ENTITY_COORDS(obLocal_41, 122.271f, 12.916f, 67.282f, false, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(obLocal_41, 0f, 90.525f, 70.35f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_41, true);
					ENTITY::SET_ENTITY_VISIBLE(obLocal_41, false, false);
					ENTITY::SET_ENTITY_PROOFS(obLocal_41, true, true, true, true, true, true, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_40);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_41))
	{
		OBJECT::DELETE_OBJECT(&obLocal_41);
	}

	return;
}

BOOL func_63(Hash hParam0) // Position - 0x1A65
{
	if (hParam0 == 0)
		return true;

	STREAMING::REQUEST_MODEL(hParam0);
	return STREAMING::HAS_MODEL_LOADED(hParam0);
}

BOOL func_64() // Position - 0x1A83
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (!Global_2693440.f_3)
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	if (!func_55())
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
		return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	return true;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x1ADA
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193 != 0;
}

void func_66() // Position - 0x1AF1
{
	if (MISC::IS_PC_VERSION())
		return;

	switch (iLocal_21)
	{
		case 0:
			if (func_89())
				if (func_69())
					if (Global_2359296[func_68() /*5570*/].f_681.f_1275 == PV_COMP_HEAD)
						func_67(1);
					else
						func_67(5);
				else
					func_67(5);
			break;
	
		case 1:
			if (func_89())
			{
				if (Global_2359296[func_68() /*5570*/].f_681.f_1275 != PV_COMP_HEAD)
				{
					_STOPWATCH_RESET(&uLocal_22, true, false);
					func_67(2);
				}
			}
			else
			{
				func_67(0);
			}
			break;
	
		case 2:
			if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_22, 60000, true))
			{
				func_67(5);
			}
			else
			{
				if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					if (HUD::GET_WARNING_SCREEN_MESSAGE_HASH() == joaat("HUD_NOCONNECT"))
						func_67(3);
			
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					func_67(3);
			
				if (!NETWORK::NETWORK_IS_CABLE_CONNECTED())
					func_67(3);
			}
			break;
	
		case 3:
			Global_33226 = true;
			func_67(4);
			break;
	
		case 4:
			break;
	
		case 5:
			if (!func_89())
				func_67(0);
			break;
	}

	return;
}

void func_67(int iParam0) // Position - 0x1C07
{
	iLocal_21 = iParam0;
	return;
}

int func_68() // Position - 0x1C13
{
	int num;

	num = 0;
	return num;
}

BOOL func_69() // Position - 0x1C20
{
	int num;
	int num2;
	var unk;
	var unk2;
	var unk3;
	int num3;
	var unk4;
	var unk5;
	int num4;

	num = func_21(1499, -1);
	num2 = func_82();
	func_70(num, num2, &unk, &unk2, &unk3, &num3, &unk4, &unk5);
	num4 = num3 + unk4 + unk5;
	return num4 == 0;
}

void func_70(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x1C5A
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_80(iParam0, iParam1))
	{
		num = func_79(iParam1);
		num2 = func_77(iParam0);
		num3 = func_77(iParam0) - func_77(iParam1);
		num4 = func_79(iParam0) - func_79(iParam1);
		num5 = func_76(iParam0) - func_76(iParam1);
		num6 = func_75(iParam0) - func_75(iParam1);
		num7 = func_74(iParam0) - func_74(iParam1);
		num8 = func_73(iParam0) - func_73(iParam1);
	}
	else
	{
		num = func_79(iParam0);
		num2 = func_77(iParam1);
		num3 = func_77(iParam1) - func_77(iParam0);
		num4 = func_79(iParam1) - func_79(iParam0);
		num5 = func_76(iParam1) - func_76(iParam0);
		num6 = func_75(iParam1) - func_75(iParam0);
		num7 = func_74(iParam1) - func_74(iParam0);
		num8 = func_73(iParam1) - func_73(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_72(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_71(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_71(float fParam0, float fParam1, float fParam2) // Position - 0x1E5B
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_72(int iParam0, int iParam1) // Position - 0x1E9D
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_73(int iParam0) // Position - 0x1F3F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_74(int iParam0) // Position - 0x1F52
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_75(int iParam0) // Position - 0x1F65
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_76(int iParam0) // Position - 0x1F78
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_77(int iParam0) // Position - 0x1F8A
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_78(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1FAC
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_79(int iParam0) // Position - 0x1FC3
{
	return iParam0 & 15;
}

BOOL func_80(int iParam0, int iParam1) // Position - 0x1FD0
{
	int num;
	int num2;

	if (!func_81(iParam1) || !func_81(iParam0))
		return true;

	num = func_77(iParam0);
	num2 = func_77(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_79(iParam0);
	num2 = func_79(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_76(iParam0);
	num2 = func_76(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_75(iParam0);
	num2 = func_75(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_74(iParam0);
	num2 = func_74(iParam1);

	if (num > num2)
		return true;
	else if (num < num2)
		return false;

	num = func_73(iParam0);
	num2 = func_73(iParam1);

	if (num > num2)
		return true;

	return false;
}

BOOL func_81(int iParam0) // Position - 0x20DC
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_73(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_74(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_75(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_77(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_79(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_76(iParam0);

	if (num6 < 1 || num6 > func_72(num5, num4))
		return false;

	return true;
}

int func_82() // Position - 0x21B8
{
	var unk;
	int year;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	func_88(&unk, year.f_5);
	func_87(&unk, year.f_4);
	func_86(&unk, year.f_3);
	func_85(&unk, year.f_2);
	func_84(&unk, year.f_1 - 1);
	func_83(&unk, year);
	return unk;
}

void func_83(var uParam0, int iParam1) // Position - 0x2218
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_84(var uParam0, int iParam1) // Position - 0x229E
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_85(var uParam0, int iParam1) // Position - 0x22D1
{
	int num;
	int num2;

	num = func_79(*uParam0);
	num2 = func_77(*uParam0);

	if (iParam1 < 1 || iParam1 > func_72(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_86(var uParam0, int iParam1) // Position - 0x2322
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_87(var uParam0, int iParam1) // Position - 0x235C
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_88(var uParam0, int iParam1) // Position - 0x2397
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_89() // Position - 0x23D3
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("freemode")) == 0)
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
		return false;

	return true;
}

void func_90() // Position - 0x240B
{
	if (bLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_91(0.69f, 0.06f, "STRING", sLocal_0);
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

void func_91(float fParam0, float fParam1, char* sParam2, char* sParam3) // Position - 0x260A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x2627
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

