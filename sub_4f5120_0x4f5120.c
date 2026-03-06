// 函数名称: sub_4f5120
// 虚拟地址: 0x4f5120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_4f5120(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6978fb
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_b4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    char** eax_4
    int32_t ecx
    int32_t edx
    eax_4, ecx, edx = sub_4c4ab0(&result_1)
    int32_t var_c_1 = 0
    char* eax_5 = *eax_4
    char* var_9c = &data_83f3d3
    
    if (eax_5 != 0)
        var_9c = eax_5
    
    int32_t var_b8 = arg3
    int32_t var_bc = ecx
    void var_98
    __builtin_memcpy(&var_98, sub_4f62d0(arg2, fconvert.s(float.t(1)), edx), 0x40)
    sub_4f5010(&var_98, arg2 * 0x118 + *sub_4f4890(arg1), var_9c, 0)
    int32_t var_c_2 = 0xffffffff
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_5 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_5), esi_5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
