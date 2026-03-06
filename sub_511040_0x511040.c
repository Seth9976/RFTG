// 函数名称: sub_511040
// 虚拟地址: 0x511040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_511040(int32_t arg1, char** arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691a69
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_830 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** esi = arg2
    
    if (esi == 0)
        esi = sub_50a390(arg2 + 0x1d)
    else if (esi[1] != 0x1d)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_81c = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_4 = *esi
    esi[7] = &esi[7][1]
    int32_t* ebx = *eax_4
    int32_t var_8_1 = 0
    void var_818
    char* result
    int80_t st0
    st0, result = sub_510f60(ebx, &var_818)
    
    if (arg3 s>= result)
        sub_4c5870("item < numLayers", &data_83f3d3, "MaterialFnDef.cpp", 0x133, 
            "MaterialFn_ItemClicked")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((data_3165638 & 1) == 0)
        data_3165638.d |= 1
        var_8_1.b = 1
        result = sub_4f5220(data_30d7498, "imgVisible")
        data_3165634 = result
    
    if (arg4 == data_3165634 && (&__saved_ebp)[arg3 * 4 - 0x205] == 0)
        int32_t ecx_2 = *ebx
        int32_t eax_7 = (&__saved_ebp)[arg3 * 4 - 0x204] * 9
        result = ecx_2 + (eax_7 << 3) + 4
        int32_t edx
        edx.b = *(ecx_2 + (eax_7 << 3) + 4) == 0
        *result = edx.b
    
    ebx[3] = 0
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
