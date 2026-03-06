// 函数名称: sub_524580
// 虚拟地址: 0x524580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_524580(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cd9b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    sub_5a71d9(arg1 + 0x10, 0xc, 4, sub_5224b0)
    int32_t* result = arg1 + 0xc
    int32_t var_8_2 = 0xffffffff
    char* ecx = *result
    
    if (ecx != 0 && *ecx != 0)
        result = sub_4c4060(result)
        int32_t temp1_1 = result[1]
        result[1] -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = result[3] + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
