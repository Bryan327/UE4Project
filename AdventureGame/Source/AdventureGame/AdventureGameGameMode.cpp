// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AdventureGame.h"
#include "AdventureGameGameMode.h"
#include "AdventureGameCharacter.h"

AAdventureGameGameMode::AAdventureGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
