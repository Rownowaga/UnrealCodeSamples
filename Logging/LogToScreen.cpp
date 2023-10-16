// Copyright Epic Games, Inc. All Rights Reserved.

//GEngine is a Global Engine pointer, Can be 0 so don't use without checking

if (GEngine)
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));

//AddOnScreenDebugMessage
//Add a FString to the On-screen debug message syste. bNewerOnTop only works with Key == INDEX_NONE