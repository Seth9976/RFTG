// 函数名称: sub_5191a0
// 虚拟地址: 0x5191a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5191a0(char* arg1 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint8_t filename[0x104]
    GetModuleFileNameA(nullptr, &filename, 0x104)
    char var_410
    void var_40c
    void var_30c
    char var_20c[0x100]
    sub_5aa460(&filename, &var_410, &var_20c, &var_40c, &var_30c)
    int32_t result = __makepath(arg1, &var_410, &var_20c, nullptr, nullptr)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
