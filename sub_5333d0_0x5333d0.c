// 函数名称: sub_5333d0
// 虚拟地址: 0x5333d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_5333d0(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fe78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7fcc
    
    if (eax_3 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_5 = sub_5338d0(*(eax_3 + 0xc))
    
    if (eax_5 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    int32_t eax_6 = *(eax_5 + 0x2c)
    char** eax_7 = arg1
    *eax_5 = eax_7
    __builtin_memcpy(eax_5 + 0xc, arg2, 0x20)
    
    if (eax_7 == 0)
        eax_7 = sub_50a390(eax_7 + 6)
    else if (eax_7[1] != 6)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_14 = eax_7
    
    if (*eax_7 == 0)
        sub_5094d0(eax_7, 0, 1)
    
    eax_7[7] = &eax_7[7][1]
    int32_t var_8_1 = 0
    sub_533390(**eax_7)
    eax_7[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6
}
