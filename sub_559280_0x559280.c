// 函数名称: sub_559280
// 虚拟地址: 0x559280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_559280()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690038
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* edi_1 = arg_4
    int32_t* eax_3 = edi_1[2]
    int32_t __saved_ebp
    
    if ((*(*eax_3 + 0x10))(eax_3, &arg_4, 0, __security_cookie ^ &__saved_ebp) != 0)
        sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x1d5, 
            "WindowsSoundInterface::SoundInterfaceGetCurrentPosition")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(edi_1 + 0x55) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg_4
    
    char** esi_2 = *edi_1
    
    if (esi_2 == 0)
        esi_2 = sub_50a390(esi_2 + 0x15)
    else if (esi_2[1] != 0x15)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_14_1 = esi_2
    
    if (*esi_2 == 0)
        sub_5094d0(esi_2, 0, 1)
    
    char* eax_9 = *esi_2
    esi_2[7] = &esi_2[7][1]
    int32_t var_8_1 = 0
    int32_t ebx_2 = *(*eax_9 + 0x1c)
    
    if (ebx_2 == 0)
        sub_4c5870("pSoundData", &data_83f3d3, "Windows\WindowsSound.cpp", 0x1e0, 
            "WindowsSoundInterface::SoundInterfaceGetCurrentPosition")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_12 = edi_1[7]
    int32_t* edx = arg_4
    void* ecx_7
    
    if (edx s< eax_12)
        ecx_7 = eax_12 - edx
    else
        ecx_7 = edi_1[5] - edx + eax_12
    
    int32_t eax_14 = edi_1[6]
    void* eax_15 = eax_14 - ecx_7
    
    if (eax_14 - ecx_7 s< 0)
        eax_15 += *(ebx_2 + 0xc)
    
    esi_2[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_15
}
