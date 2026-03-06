// 函数名称: sub_527340
// 虚拟地址: 0x527340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_527340(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c978
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14_1 = arg1
    int32_t var_8_1 = 0
    char* ecx = arg1[3]
    
    if (ecx != 0 && *ecx != 0)
        void* eax_4 = sub_4c4060(&arg1[3])
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_4 + 0xc) + 0x10
            sub_4f4430(eax_4, sub_4f4380(esi_2), esi_2)
    
    int32_t var_8_2 = 0xffffffff
    void* result = *arg1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(arg1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
