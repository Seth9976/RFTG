// 函数名称: sub_408210
// 虚拟地址: 0x408210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_408210(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_2 = arg2
    int32_t* var_1c
    int32_t* var_34 = &var_1c
    sub_4080b0(var_34, result_2)
    int32_t var_8_1 = 0
    var_34 = var_1c
    int32_t* eax_4 = &result_2
    char* result_1
    result_2 = result_1
    char* result_3 = result_1
    int32_t** var_14 = &var_34
    
    if (result_3 != 0 && *result_3 != 0)
        eax_4 = sub_4c4060(eax_4)
        eax_4[1] += 1
    
    int32_t ebx
    ebx.b = sub_4cd7b0(eax_4, arg1 + 0x164, data_307b6ac, arg1 + 0x164)
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            char* result_4 = *(result + 0xc) + 0x10
            int32_t* eax_7 = sub_4f4380(result_4)
            result_2 = result_4
            sub_4f4430(result, eax_7, result_2)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
