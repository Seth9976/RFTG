// 函数名称: sub_4c4a50
// 虚拟地址: 0x4c4a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4c4a50(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cf19
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    *arg1 = &data_83f3d3
    int32_t var_8_1 = 0
    int32_t var_14_2 = 1
    void arg_c
    sub_4c49d0(&arg_c, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
