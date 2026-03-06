// 函数名称: sub_4e63d0
// 虚拟地址: 0x4e63d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_4e63d0(char* arg1)
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
    char* edx
    sub_509d90(&var_14, edx, 3, &var_14)
    int32_t var_8_1 = 0
    char* const eax_4 = var_14
    
    if (eax_4 == 0)
        eax_4 = &data_83f3d3
    
    char* const var_28_1 = eax_4
    sub_4c5680("Creating %s")
    char** result = sub_5098c0(sub_4e62c0(3))
    int32_t var_8_2 = 0xffffffff
    bool cond:0 = sub_509bf0(result) != 0
    char* eax_7 = var_14
    
    if (cond:0)
        if (eax_7 != 0 && *eax_7 != 0)
            void* eax_14 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_4 = *(eax_14 + 0xc) + 0x10
                sub_4f4430(eax_14, sub_4f4380(esi_4), esi_4)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (eax_7 != 0 && *eax_7 != 0)
        void* eax_9 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = *(eax_9 + 0xc) + 0x10
            sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
