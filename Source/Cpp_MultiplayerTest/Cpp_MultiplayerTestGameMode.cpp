// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cpp_MultiplayerTestGameMode.h"
#include "Cpp_MultiplayerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACpp_MultiplayerTestGameMode::ACpp_MultiplayerTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
