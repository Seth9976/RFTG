// 函数名称: sub_518230
// 虚拟地址: 0x518230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_518230(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d6a7
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[3] += 1
    
    if (*arg1 == 0)
        sub_518500(arg1)
    
    int32_t* result = *arg1
    int32_t* result_2 = result
    *arg1 = *result
    int32_t* result_1 = result
    int32_t var_8_1 = 0
    
    if (result != 0)
        __builtin_memset(&result[1], 0, 0x18)
        void (__fastcall* var_30_1)(int32_t* arg1) = sub_518400
        var_8_1.b = 2
        sub_5a7116(&result[7], 0xc, 8, sub_5183f0)
        result[0x1f] = 0
        result[0x20] = 0
        result[0x21] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
