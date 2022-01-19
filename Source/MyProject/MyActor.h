// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY()
	int32 IntVariable;

	int8 i8; // 127 ~ -128
	int16 i16; // 32,767 ~ -32,768
	int32 i32; // 214,648,647 ~ -214,648,648
	int64 i64; // 9,223,372,036,854,775,807 ~ -9,223,372,036,854,775,808

	uint8 ui8; // 0 ~255
	uint16 ui16; // 0 ~ 65,535
	uint32 ui32; // 0 ~ 4,294,967,295
	uint64 ui64; // 0 ~ 18,446,744,073,709,551,615
 
	float f; // 보통
	double d; // 정밀한 표현을 할때만 사용

	FString str;
	
	bool b;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
