// 函数名称: sub_509320
// 虚拟地址: 0x509320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_509320(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_509d90(&var_14, "sys/FailureAsset", *(arg1 + 4), &var_14)
    int32_t var_8_1 = 0
    char* const edx = var_14
    
    if (edx == 0)
        edx = &data_83f3d3
    
    char** result = sub_509140(*(arg1 + 4), edx)
    int32_t var_8_2 = 0xffffffff
    char* eax_4 = var_14
    
    if (eax_4 != 0 && *eax_4 != 0)
        void* eax_6 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_6 + 0xc) + 0x10
            sub_4f4430(eax_6, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
