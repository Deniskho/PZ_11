// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "ItemFound_Generator.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,meta = (DisplayName = "EQS Equals to Value"))
class EQSTEST_API UItemFound_Generator : public UEnvQueryGenerator
{
	GENERATED_BODY()
	
protected:
	/*context*/
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	TSubclassOf<UEnvQueryContext> QueryContext;

public:

	UItemFound_Generator(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere)
	int32 ValueToCompare;

	virtual void GenerateItems(FEnvQueryInstance& QueryInstance) const override;
	
	
};
