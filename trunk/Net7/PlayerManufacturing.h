#ifndef _PLAYER_MANUFACTURING_H_INCLUDED_
#define _PLAYER_MANUFACTURING_H_INCLUDED_

typedef enum
{
    ACTION_LEAVE_TERMINAL,
    ACTION_UNKNOWN1,
    ACTION_REFINE,
    ACTION_REFINE_STACK
} Manufacture_Action;

typedef enum
{
    MODE_NONE,
    MODE_MANUFACTURE,
    MODE_ANALIZE,
    MODE_DISMANTLE,
    MODE_REFINE
} Manufacture_Mode;

typedef enum
{
    VALIDITY_NO_TARGET,
    VALIDITY_NOT_MANUFACTURABLE,
    VALIDITY_NOT_DISMANTABLE,
    VALIDITY_RECEPIE_NOT_KNOWN,
    VALIDITY_INSUFFICIENT_CREDITS,
    VALIDITY_MISSING_COMPONENTS,
    VALIDITY_INSUFFICIENT_CARGO,
    VALIDITY_NOT_QUALIFIED,
    VALIDITY_TOO_DIFFICULT,
    VALIDITY_LOW_QUALITY,
    VALIDITY_BACK_STACKSIZE,
    VALIDITY_PLAYERMADE,
    VALIDITY_DUPLICATE_UNIQUE_ITEM,
    VALIDITY_VALID,
    VALIDITY_ATTEMPT_TOTAL_FAILURE,
    VALIDITY_ATTEMPT_NEAR_SUCCESS,
    VALIDITY_ATTEMPT_NORMAL_SUCCESS,
    VALIDITY_ATTEMPT_CRITICAL_SUCCESS
} Manufacture_Validity;

typedef enum
{
    DIFFICULTY_INVALID,
    DIFFICULTY_AUTOMATIC,
    DIFFICULTY_EASY,
    DIFFICULTY_MODERATE,
    DIFFICULTY_HARD,
    DIFFICULTY_VERY_HARD,
    DIFFICULTY_IMPOSSIBLE
} Manufacture_Difficulty;

#endif