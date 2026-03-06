// 函数名称: sub_5566c0
// 虚拟地址: 0x5566c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5566c0(int32_t arg1, int32_t arg2, char* arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f888
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_28 = 1
    char* result_2 = arg3
    int32_t var_8_1 = 0
    char* result_1
    result_2 = result_1
    char* result_3 = result_1
    int32_t* var_14_1 = &result_2
    
    if (result_3 != 0 && *result_3 != 0)
        void* eax_4 = sub_4c4060(&result_2)
        *(eax_4 + 4) += 1
    
    int32_t ebx
    ebx.b = sub_5561f0(arg4)
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
