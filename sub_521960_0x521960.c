// 函数名称: sub_521960
// 虚拟地址: 0x521960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_521960(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ce49
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    arg1[1] = &data_83f3d3
    int32_t var_8_1 = 0
    int32_t var_14_1 = 1
    *arg1 = 0xa
    sub_4c4510(arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
