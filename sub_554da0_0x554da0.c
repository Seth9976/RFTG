// 函数名称: sub_554da0
// 虚拟地址: 0x554da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_554da0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c6ad
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t eax_3 = *arg1
    
    if (eax_3 != 0)
        _aligned_free_base(eax_3)
    
    sub_567fd0(&arg1[0x47])
    *arg1 = 0
    int32_t var_8_2 = 0xffffffff
    int32_t* result = sub_567fd0(&arg1[0x47])
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
