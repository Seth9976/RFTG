// 函数名称: sub_407cd0
// 虚拟地址: 0x407cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_407cd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c859
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14_1 = arg1
    int32_t var_8_1 = 2
    sub_5a71d9(&arg1[0xa], 4, 8, sub_4c43d0)
    var_8_1.b = 1
    sub_5a71d9(&arg1[2], 4, 8, sub_4c43d0)
    var_8_1.b = 0
    char* ecx_1 = arg1[1]
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        void* eax_5 = sub_4c4060(&arg1[1])
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_5 + 0xc) + 0x10
            sub_4f4430(eax_5, sub_4f4380(esi_2), esi_2)
    
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
