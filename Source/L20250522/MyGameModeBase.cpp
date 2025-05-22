// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayerController.h"
#include "MyPawn.h"


AMyGameModeBase::AMyGameModeBase()
{

	UE_LOG(LogTemp, Warning, TEXT("Hello"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 0, FColor::Red, TEXT("Hello Wordl"));
	}

	PlayerControllerClass = AMyPlayerController::StaticClass();
	DefaultPawnClass = AMyPawn::StaticClass();

}
