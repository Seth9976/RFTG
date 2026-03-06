// 函数名称: sub_4d4ce0
// 虚拟地址: 0x4d4ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4d4ce0(int32_t arg1, void* arg2, float* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char** eax_3 = *(arg2 + 4)
    int32_t ecx
    int32_t var_6c = ecx
    int32_t var_80
    char** var_64
    char** edi
    
    if (eax_3 != 0)
        if (eax_3[1] != 2)
            char const* const var_7c_2 = "DefAutoLock::DefAutoLock"
            var_80 = 0x19
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", var_80, var_7c_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_64 = eax_3
        edi = eax_3
    else
        edi = sub_50a390(eax_3 + 2)
        var_64 = edi
    
    if (*edi == 0)
        char var_7c_1 = 1
        var_80 = 0
        sub_5094d0(edi, var_80, var_7c_1)
    
    char* edx = *edi
    int32_t ecx_3 = &edi[7][1]
    edi[7] = ecx_3
    void* eax_6 = **edx
    
    if (eax_6 == 0)
        edi[7] = ecx_3 - 1
        eax_6.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    int32_t ecx_7 = *(arg2 + 8)
    int32_t edx_1 = *(arg2 + 0xc)
    float var_38 = fconvert.s(fconvert.t(*(arg2 + 0x24)))
    int32_t var_24 = ecx_7
    int32_t var_1c = *(arg2 + 0x10)
    int32_t var_20 = edx_1
    int32_t var_30 = *(arg2 + 0x18)
    int32_t var_34 = *(arg2 + 0x14)
    int32_t var_28 = *(arg2 + 0x20)
    int32_t var_2c = *(arg2 + 0x1c)
    void var_60
    __builtin_memcpy(&var_60, &var_38, 0x20)
    void var_40
    sub_4d5bb0(&var_40, eax_6 + 0x20)
    int32_t eax_7 = sub_4d4c00(&var_40, arg3)
    var_64[7] -= 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_7
}
