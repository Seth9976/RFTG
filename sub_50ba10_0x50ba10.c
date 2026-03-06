// 函数名称: sub_50ba10
// 虚拟地址: 0x50ba10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_50ba10(char** arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_691aa8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t eax_2 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** esi
    
    if (arg1 != 0)
        if (arg1[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi = arg1
    else
        esi = sub_50a390(arg1 + 3)
    
    char** var_1c = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_4 = *esi
    esi[7] = &esi[7][1]
    int32_t* edi = *eax_4
    int32_t var_c_1 = 0
    void* eax_5 = *edi
    
    if (eax_5 == 0)
        esi[7] -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    int32_t eax_6 = *(eax_5 + 0x24)
    int32_t eax_7
    
    if (eax_6 == 0)
        if (edi[1] == 0)
            edi[1] = sub_50b580(arg1)
        
        eax_7 = edi[1]
    else
        eax_7 = sub_50ba10(eax_6, eax_2)
    
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7
}
