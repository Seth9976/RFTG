// 函数名称: sub_5349c0
// 虚拟地址: 0x5349c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_5349c0(int32_t arg1, int32_t arg2, int32_t arg3, char** arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fe18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** eax_3 = arg4
    char** esi
    
    if (eax_3 != 0)
        if (eax_3[1] != 5)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        arg4 = eax_3
        esi = eax_3
    else
        esi = sub_50a390(eax_3 + 5)
        arg4 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    esi[7] = &esi[7][1]
    int32_t* eax_5 = **esi
    int32_t var_8_1 = 0
    
    if (*eax_5 != 1)
        sub_4c5870("pDefMaterial->passCount == 1", &data_83f3d3, "Material.cpp", 0x2d4, 
            "MaterialSimpleStateBind")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_7 = eax_5[1]
    
    if (*eax_7 == 1)
        int32_t esi_2 = eax_7[1]
        int32_t var_14 = esi_2 + 4
        sub_534540(&var_14)
        __builtin_memcpy(arg3 + 0xebc, esi_2 + 0xc, 0x80)
        __builtin_memcpy(arg3 + 0xf3c, esi_2 + 0x8c, 0x40)
        arg4[7] -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg4
    
    sub_4c5870("materialPass.variationCount == 1", &data_83f3d3, "Material.cpp", 0x2d9, 
        "MaterialSimpleStateBind")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
