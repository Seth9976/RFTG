// 函数名称: sub_569920
// 虚拟地址: 0x569920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_569920(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cc53
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 1
    sub_5041e0(&arg1[0xd])
    var_8_1.b = 0
    int32_t* result = sub_5041e0(&arg1[3])
    int32_t var_8_2 = 0xffffffff
    
    if (*arg1 != 0)
        sub_56be40(arg1)
        void* esi_2 = (arg1[1] << 2) + 4
        result = sub_4f4430(*arg1, sub_4f4380(esi_2), esi_2)
        *arg1 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
