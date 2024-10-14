// Fill out your copyright notice in the Description page of Project Settings.
//Copyright Epic Games, Inc. All Rights Reserved
//Authored by: Mubashir Osmani

#include "MyActor.h"
#include "MyProject2/DebugMacros.h"


#define THIRTY 30


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
    RootComponent = ItemMesh;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

}

float AMyActor::TransformedSin()
{
    return Amplitude = FMath::Sin(RunningTime * TimeConstant);
}

float AMyActor::TransformedCos()
{
    return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}


// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    RunningTime += DeltaTime;
}
