// 函数名称: sub_53f1a0
// 虚拟地址: 0x53f1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_53f1a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c948
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    char*** result_3 = result_1
    sub_51ee80(&result_1, arg2, *arg2, &result_1)
    int32_t var_8_1 = 0
    char* result_2 = result_1
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    char** eax_4 = sub_543700(result_2)
    
    if (eax_4 != 0)
        *result_3 = eax_4
    
    sub_4c4510(&(*result_3)[8])
    char* const eax_5 = *arg1
    
    if (eax_5 == 0)
        eax_5 = &data_83f3d3
    
    *arg2 = eax_5
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
