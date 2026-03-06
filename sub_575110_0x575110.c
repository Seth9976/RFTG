// 函数名称: sub_575110
// 虚拟地址: 0x575110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_575110()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char const* const var_60 = "camera"
    char* edx
    int32_t eax_3 = sub_510710(data_26a6760, edx)
    void var_4c
    int32_t eax_4 = sub_5107b0(eax_3, eax_3, data_26a6760, &var_4c)
    void* eax_5 = data_27e7fd0
    int32_t ebx
    ebx.b = *(eax_5 + 0x35)
    void var_28
    __builtin_memcpy(&var_28, eax_4, 0x20)
    *(eax_5 + 0x35) = 0
    void var_14
    sub_573b60(&var_14)
    void* result = data_27e7fd0
    *(result + 0x35) = ebx.b
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
