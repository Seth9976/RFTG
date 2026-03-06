// 函数名称: sub_534c60
// 虚拟地址: 0x534c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_534c60(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f6d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* eax_4 = *arg1
    
    if (*eax_4 != 1)
        sub_4c5870("pMaterial->passCount == 1", &data_83f3d3, "Material.cpp", 0x38e, "MaterialReimport")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_6 = eax_4[1]
    
    if (*eax_6 != 1)
        sub_4c5870("pMaterial->pPassArray[0].variationCount == 1", &data_83f3d3, "Material.cpp", 0x38f, 
            "MaterialReimport")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    eax_4[2].b = sub_530ef0(eax_6[1] + 4, 1)
    *(eax_4 + 9) = sub_530ef0(*(eax_4[1] + 4) + 4, 0)
    int32_t var_8_2 = 0xffffffff
    char* result_1
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_5 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_5), esi_5)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
