// 函数名称: sub_535280
// 虚拟地址: 0x535280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_535280(int128_t* arg1 @ edi, char** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ccb9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    *arg2 = &data_83f3d3
    int32_t var_8_1 = 0
    int32_t var_14_2 = 1
    
    if (sub_5a8f10(arg1, 0x2e) != 0)
        sub_4c4690(arg2, arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2
}
