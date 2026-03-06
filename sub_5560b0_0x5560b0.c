// 函数名称: sub_5560b0
// 虚拟地址: 0x5560b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5560b0(int32_t** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68ccea
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t var_2c = __security_cookie ^ &__saved_ebx
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_20 = &data_83f3d3
    char* const var_1c = &data_83f3d3
    int32_t var_c_1 = 0
    int32_t var_30 = 1
    void* const var_34 = &data_85f660
    sub_4c49b0(&var_1c, sub_4c4590(arg2))
    sub_556780(arg1, &var_20)
    int32_t var_c_2 = 0xffffffff
    void* result = sub_556140(&var_20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
