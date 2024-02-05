// Fill out your copyright notice in the Description page of Project Settings.


#include "npc1.h"

// Sets default values
Anpc1::Anpc1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Anpc1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Anpc1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Anpc1::SpawnNPC(){
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	GetWorld()->SpawnActor<AActor>(ActorBPToSpawn, GetActorTransform(), spawnParams);
}