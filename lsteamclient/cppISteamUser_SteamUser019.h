#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser019_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser019_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser019_GetSteamID(void *);
extern int cppISteamUser_SteamUser019_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser019_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser019_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser019_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser019_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser019_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser019_GetAvailableVoice(void *, uint32 *, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser019_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser019_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *, uint32);
extern uint32 cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate(void *);
extern HAuthTicket cppISteamUser_SteamUser019_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser019_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser019_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser019_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser019_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamUser_SteamUser019_BIsBehindNAT(void *);
extern void cppISteamUser_SteamUser019_AdvertiseGame(void *, CSteamID, uint32, uint16);
extern SteamAPICall_t cppISteamUser_SteamUser019_RequestEncryptedAppTicket(void *, void *, int);
extern bool cppISteamUser_SteamUser019_GetEncryptedAppTicket(void *, void *, int, uint32 *);
extern int cppISteamUser_SteamUser019_GetGameBadgeLevel(void *, int, bool);
extern int cppISteamUser_SteamUser019_GetPlayerSteamLevel(void *);
extern SteamAPICall_t cppISteamUser_SteamUser019_RequestStoreAuthURL(void *, const char *);
extern bool cppISteamUser_SteamUser019_BIsPhoneVerified(void *);
extern bool cppISteamUser_SteamUser019_BIsTwoFactorEnabled(void *);
extern bool cppISteamUser_SteamUser019_BIsPhoneIdentifying(void *);
extern bool cppISteamUser_SteamUser019_BIsPhoneRequiringVerification(void *);
#ifdef __cplusplus
}
#endif