// 函数名称: sub_5340c0
// 虚拟地址: 0x5340c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5340c0(int32_t arg1, char** arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fe48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg4 = arg2
    char** var_18
    char** esi
    
    if (arg2 != 0)
        if (arg2[1] != 4)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_18 = arg2
        esi = arg2
    else
        esi = sub_50a390(&arg2[1])
        var_18 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_5 = *esi
    esi[7] = &esi[7][1]
    int32_t ecx_1 = *eax_5
    int32_t var_8_1 = 0
    sub_54c6a0(arg2)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(ecx_1 + arg3 * 0x14 + 0xc) s> 0)
        int32_t var_14_1 = 0
        
        do
            int32_t eax_7 = arg4[1]
            int32_t* esi_2 = *(ecx_1 + arg3 * 0x14 + 0x10) + var_14_1
            arg4[1] = eax_7 + 1
            arg4[eax_7 * 5 + 2] = esi_2[2]
            arg4[eax_7 * 5 + 3] = *esi_2
            int32_t edx_2 = esi_2[1]
            arg4[eax_7 * 5 + 4] = edx_2
            sub_533d90(arg5, edx_2, esi_2[2], &arg4[eax_7 * 5 + 2])
            
            if (*(arg4[eax_7 * 5 + 5] + 0x10) == 0x21 && esi_2[1] == 3)
                arg4[eax_7 * 5 + 5] = data_315f6b4
            
            var_14_1 += 0xc
            i = i_1 + 1
            i_1 = i
        while (i s< *(ecx_1 + arg3 * 0x14 + 0xc))
        
        esi = var_18
    
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
