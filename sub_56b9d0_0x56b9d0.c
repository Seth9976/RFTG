// 函数名称: sub_56b9d0
// 虚拟地址: 0x56b9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_56b9d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void** result_1 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_5 = data_3079208
    
    if (result_5 != 0)
        int32_t eax_3 = *(result_5 + 4)
        
        if (eax_3 == 0x22 || eax_3 == 0x1d || eax_3 == 0x19 || eax_3 == 0x1b || eax_3 == 0x1e
                || eax_3 == 0x20)
            *(result_5 + 0x1c) -= 1
    
    char* result_4 = result_5
    char* result_6 = arg1[8]
    result_1 = &result_4
    data_3079208 = arg1
    result_4 = result_6
    
    if (result_6 != 0 && *result_6 != 0)
        void* eax_5 = sub_4c4060(&result_4)
        *(eax_5 + 4) += 1
    
    sub_51fd90(&result_1)
    int32_t var_8_1 = 0
    void** result_3 = result_1
    
    if (result_3 == 0)
        result_3 = &data_83f3d3
    
    result_4 = result_3
    sub_5aa4cc(result_4)
    sub_51c1a0()
    int32_t eax_6 = arg1[1]
    
    if (eax_6 == 0x22 || eax_6 == 0x1d || eax_6 == 0x19 || eax_6 == 0x1b || eax_6 == 0x1e
            || eax_6 == 0x20)
        if (*arg1 == 0)
            result_4 = 1
            sub_5094d0(arg1, 0, result_4.b)
        
        arg1[7] += 1
    
    if (data_3079210 != 0)
        result_4 = arg1
        sub_56efe0(result_4)
    
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t* result_2 = result
        int32_t temp0_1 = result_2[1]
        result_2[1] -= 1
        
        if (temp0_1 == 1)
            char* result_7 = result_2[3] + 0x10
            int32_t* eax_8 = sub_4f4380(result_7)
            result_4 = result_7
            result = sub_4f4430(result_2, eax_8, result_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
