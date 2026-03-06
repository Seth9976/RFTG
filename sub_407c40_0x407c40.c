// 函数名称: sub_407c40
// 虚拟地址: 0x407c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_407c40(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c8a9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char** var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_14_1 = arg1
    *arg1 = &data_83f3d3
    int32_t var_8_1 = 0
    arg1[1] = &data_83f3d3
    int32_t* (__fastcall* var_20)(int32_t* arg1) = sub_4c43d0
    var_8_1.b = 1
    sub_5a7116(&arg1[2], 4, 8, sub_4c42f0)
    int32_t* (__fastcall* var_20_1)(int32_t* arg1) = sub_4c43d0
    var_8_1.b = 2
    sub_5a7116(&arg1[0xa], 4, 8, sub_4c42f0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
