// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGOnlineSessionClient.h"

#if !UE_BUILD_SHIPPING
FString FPendingInvite::ToDebugString() const{ return FString(); }
#endif 
void FSessionInformation::Init(const FString& InMapName, const FString& InOptions, const FString& InSessionName, ESessionVisibility InVisibility){ }
void FSessionInformation::MarkAsOffline(){ }
void FSessionInformation::SetState(ECreateSessionState newState, FOnCreateSessionStateChanged& createSessionChanged){ }
UFGOnlineSessionClient::UFGOnlineSessionClient() : Super() {

}
void UFGOnlineSessionClient::RegisterOnlineDelegates(){ }
void UFGOnlineSessionClient::ClearOnlineDelegates(){ }
void UFGOnlineSessionClient::HandleDisconnect(UWorld* world, UNetDriver* netDriver){ }
void UFGOnlineSessionClient::GetPendingInvites(TArray<FPendingInvite>& out_invites){ }
void UFGOnlineSessionClient::AcceptInvite(const FPendingInvite& invite){ }
void UFGOnlineSessionClient::JoinGameSession(const FOnlineSessionSearchResult& gameSession){ }
void UFGOnlineSessionClient::DiscardInvite(const FPendingInvite& invite){ }
void UFGOnlineSessionClient::OnSessionInviteAccepted(bool bWasSuccess, int32 controllerId, TSharedPtr<const FUniqueNetId> userId, const FOnlineSessionSearchResult& inviteResult){ }
void UFGOnlineSessionClient::EndCurrentSession_SetupServer(FName sessionName){ }
void UFGOnlineSessionClient::DestroyCurrentSession_SetupServer(FName sessionName){ }
void UFGOnlineSessionClient::OnPreviousSessionCleanedup_SetupServer(FName sessionName, bool wasSuccessful){ }
void UFGOnlineSessionClient::OnSessionCreated_SetupServer(FName sessionName, bool wasSuccessful){ }
void UFGOnlineSessionClient::CreateOfflineSession_SetupServer(bool startOffline){ }
void UFGOnlineSessionClient::OpenMap_WaitForPresence(){ }
void UFGOnlineSessionClient::OpenMap_WaitForProductUserId(){ }
ECreateSessionState UFGOnlineSessionClient::GetCurrentCreateSessionState() const{ return ECreateSessionState(); }
void UFGOnlineSessionClient::FailedToSetupServer(){ }
void UFGOnlineSessionClient::OpenMap(){ }
void UFGOnlineSessionClient::BroadcastInviteReceived(int32 localUserNum, const FPendingInvite& invite){ }
int32 UFGOnlineSessionClient::GetLocalUserId() const{ return int32(); }
void UFGOnlineSessionClient::OnQueryUserInfoComplete(int32 localUserNum, bool wasSuccessful, const TArray< TSharedRef<const FUniqueNetId> >& userIds, const FString& errorStr){ }
void UFGOnlineSessionClient::OnSessionInviteReceived(const FUniqueNetId& userId, const FUniqueNetId& fromId, const FString& appId, const FOnlineSessionSearchResult& inviteResult){ }
void UFGOnlineSessionClient::OnJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type joinResult){ }
UFGLocalPlayer* UFGOnlineSessionClient::GetLocalPlayer(){ return nullptr; }
void UFGOnlineSessionClient::ClearPresenceKeys(){ }
