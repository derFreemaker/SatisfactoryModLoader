// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FGOptionsSettings.h"
#include "Settings/FGUserSetting.h"
#include "FGDynamicOptionsRow.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API UFGDynamicOptionsRow : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativePreConstruct() override;

	void InitOptionRow( FOptionRowData optionRowData, TSubclassOf<class UFGOptionsValueController> widgetOptionClass, TScriptInterface< class IFGOptionInterface > optionInterface );
	void InitOptionRow( class UFGUserSetting* userSetting, TScriptInterface< class IFGOptionInterface > optionInterface );
	
	UFUNCTION( Blueprintpure, Category = "Option" )
	FORCEINLINE EOptionCategory GetOptionCategory() const { return EOptionCategory::OC_Gameplay; }

	UFUNCTION( BlueprintCallable, Category = "Option" )
	void AddSubOption( UFGDynamicOptionsRow* dynamicOptionsRow );

protected:
	UFUNCTION( Blueprintpure, Category = "Option" )
	FORCEINLINE FOptionRowData GetOptionRowData() const { return mUserSetting ? mUserSetting->ToOptionRowData() : mOptionRowData; }

	UFUNCTION( Blueprintpure, Category = "Option" )
	FORCEINLINE UFGOptionsValueController* GetValueControllerWidget() const { return mValueControllerWidget; }

	UFUNCTION( BlueprintPure, Category = "Option" )
	bool IsPendingApply();

	UFUNCTION( BlueprintPure, Category = "Option" )
	bool IsPendingRestart();

	UFUNCTION( BlueprintImplementableEvent, Category = "Option" )
	void OnOptionRowInit();

	UFUNCTION( BlueprintImplementableEvent, BlueprintCallable, Category = "Option" )
	void OnOptionValueUpdated();

	UFUNCTION( BlueprintCallable, Category = "Option" )
	void OnOptionApplied();

	UFUNCTION( BlueprintCallable, Category = "Option" )
	void OnOptionReverted();

	UFUNCTION( BlueprintImplementableEvent, BlueprintCallable, Category = "Option" )
	void UpdatePendingIconsVisibilty();

	UFUNCTION( BlueprintImplementableEvent, Category = "Option" )
	void OnSubOptionsUpdated();

	UFUNCTION( BlueprintCallable, Category = "Option" )
	FORCEINLINE TArray< UFGDynamicOptionsRow* > GetSubOptions() { return mSubOptions; }

	UFUNCTION( BlueprintPure, Category = "Option" )
	FORCEINLINE bool GetSubOptionsVisibility() { return mSubOptionsVisibility; }
	
	UFUNCTION( BlueprintCallable, Category = "Option" )
	void SetSubOptionsVisibility( bool newVisibilty ) { mSubOptionsVisibility = newVisibilty; }
	
private:

	FOptionRowData mOptionRowData;

	UPROPERTY( Transient )
	UFGUserSetting* mUserSetting;

	EOptionType mOptionType;

	UPROPERTY( Transient )
	TScriptInterface< class IFGOptionInterface > mOptionInterface;
	
	UPROPERTY( Transient )
	TSubclassOf<class UFGOptionsValueController> mWidgetOptionClass;

	UPROPERTY( Transient )
	UFGOptionsValueController* mValueControllerWidget;

	UPROPERTY( Transient )
	TArray< UFGDynamicOptionsRow* > mSubOptions;

	bool mSubOptionsVisibility;
	
};
