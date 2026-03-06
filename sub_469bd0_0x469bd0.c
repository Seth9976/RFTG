// 函数名称: sub_469bd0
// 虚拟地址: 0x469bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_469bd0(int32_t arg1 @ esi, int128_t* arg2)
{
    // 第一条实际指令: void* ecx
    void* ecx
    int32_t edx
    ecx, edx = __chkstk(0x4e40)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    void* ecx_1 = data_27e7a40
    int32_t eax_3 = *(ecx_1 + 0x2c4960)
    
    if (eax_3 == 0)
        sub_4c5870("gCClient->activeGame.gameType != GAME_NONE", &data_83f3d3, 
            "..\code\RFTGShared.cpp", 0x38, "SyncPlayerLog")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    struct _EXCEPTION_REGISTRATION_RECORD** result
    
    if (eax_3 != 2)
        if (eax_3 != 1)
            sub_4c5870("gCClient->activeGame.gameType == GAME_LOCAL", &data_83f3d3, 
                "..\code\RFTGShared.cpp", 0x51, "SyncPlayerLog")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_14 = sub_4637c0(eax_3, edx, ecx_1 + 0x2c495c, 0)
        sub_5ab990(*eax_14 + eax_14 + 8, arg2, ecx)
        *eax_14 += ecx
        *(eax_14 + 4) = *eax_14
        
        if (*(data_27e7a40 + 0x2c4960) == 4)
            sub_4c5870("gCClient->activeGame.gameType != GAME_REPLAY", &data_83f3d3, 
                "..\code\RFTGShared.cpp", 0x59, "SyncPlayerLog")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = sub_408470(*(data_27e7a54 + 0x20c), 0x27c0610)
        
        if (edx == *(data_27e7a40 + 0x74))
            result = Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection("
                single-player-choice")
    else
        void* eax_5 = sub_46b2b0(edx)
        *(eax_5 + 0xc) += 1
        int32_t* ecx_3 = data_27e7a40 + 0x2c495c
        int32_t var_4e40 = *(eax_5 + 0xc)
        void* eax_7
        void* edx_1
        eax_7, edx_1 = sub_404690(ecx_3)
        void* eax_8 = data_27e7a40
        int32_t var_4e3c_1 = *(eax_7 + 0x1d4)
        
        if (edx != *(eax_8 + 0x74))
            sub_4c5870("who == gCClient->localPlayerWho", &data_83f3d3, "..\code\RFTGShared.cpp", 0x40, 
                "SyncPlayerLog")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_5
        
        if (*(eax_8 + 0x38) == 0)
            ecx_5 = *(data_27e7a54 + 0x10)
        else
            edx_1 = data_27e7a54
            ecx_5 = *(edx_1 + 0x14)
        
        int32_t var_4e38_1 = ecx_5
        void* var_4e34_1 = ecx
        void* eax_10 = sub_4637c0(eax_8, edx_1, eax_8 + 0x2c495c, 0)
        sub_5ab990(eax_10 + *eax_10 + 8, arg2, ecx)
        *eax_10 += ecx
        uint32_t eax_12 = *eax_10
        void* edx_3 = data_27e7a40
        int32_t** var_14_4 = arg2
        void* var_18_3 = &var_4e40
        *(eax_10 + 4) = eax_12
        sub_4c7620(eax_12, edx_3, *(edx_3 + 0x28), ecx, 0xf425a, var_18_3, var_14_4)
        result = Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection("
            multiplayer-choice")
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
