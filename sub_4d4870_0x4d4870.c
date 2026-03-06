// 函数名称: sub_4d4870
// 虚拟地址: 0x4d4870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4d4870(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6903b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 == 0 || arg1[1] != 2)
        sub_4c5870("assetStructure && assetStructure->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, 
            "Structure.cpp", 0x31d, "StructureCreate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** result = sub_4d5800(sub_4d39e0())
    
    if (arg1[1] != 2)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* var_18 = arg1
    
    if (*arg1 == 0)
        sub_5094d0(arg1, 0, 1)
    
    int32_t* eax_4 = *arg1
    arg1[7] += 1
    void* eax_5 = *eax_4
    int32_t var_8_1 = 0
    __builtin_memset(&result[2], 0, 0x18)
    result[8] = 0x3f800000
    result[9] = fconvert.s(fconvert.t(*(eax_5 + 0x1c)))
    result[1] = arg1
    char* edi_1 = arg1[8]
    char* ecx = &data_83f3d3
    
    if (edi_1 != 0)
        ecx = edi_1
    
    var_8_1.b = 1
    char* var_14
    sub_4c4510(sub_509f10(eax_5, &var_14, ecx, &var_14))
    var_8_1.b = 0
    char* eax_7 = var_14
    
    if (eax_7 != 0 && *eax_7 != 0)
        void* eax_9 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_9 + 0xc) + 0x10
            sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
    
    __builtin_memcpy(&result[0x14], 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01\x00\x00\x00", 0x14)
    result[0xc] = 0
    result[0xd] = 0
    sub_4d47c0(result)
    result[0xb] = sub_515240(arg1)
    arg1[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
