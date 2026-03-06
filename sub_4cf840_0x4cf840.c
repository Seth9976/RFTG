// 函数名称: sub_4cf840
// 虚拟地址: 0x4cf840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4cf840()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f990
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* esi = arg_4
    int32_t* var_20 = nullptr
    int32_t var_1c = 0
    int32_t var_18 = 0
    int32_t var_8_1 = 0
    int32_t edx = sub_518190(&var_20, &arg_4)
    char* const eax_3 = esi[8]
    
    if (eax_3 == 0)
        eax_3 = &data_83f3d3
    
    char* var_14
    sub_51f490(eax_3, edx, eax_3, &var_14)
    var_8_1.b = 1
    
    if (*esi == 0 || (*(*esi + 8) & 1) != 0)
        sub_4c5870(
            "assetPtr->pAssetData && !TEST_BIT(assetPtr->pAssetData->defFlags, DEF_FLAGS_CONTIGUOUS)", 
            &data_83f3d3, "DefBin.cpp", 0x535, "DefBinWriteXbinFile")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* eax_4 = var_14
    
    if (eax_4 == 0)
        eax_4 = &data_83f3d3
    
    char eax_5 = sub_4cf510(eax_4, &var_20, 0)
    
    if (eax_5 == 0)
        char* eax_6 = var_14
        
        if (eax_6 == 0)
            eax_6 = &data_83f3d3
        
        char* var_34_2 = eax_6
        sub_4c5680("Failed to write xbin file: '%s'")
    
    var_8_1.b = 0
    char* eax_7 = var_14
    
    if (eax_7 != 0 && *eax_7 != 0)
        void* eax_9 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_9 + 0xc) + 0x10
            sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
    
    int32_t var_8_2 = 0xffffffff
    sub_5041e0(&var_20)
    int32_t* result
    result.b = eax_5
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
