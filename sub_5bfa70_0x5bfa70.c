// 函数名称: sub_5bfa70
// 虚拟地址: 0x5bfa70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bfa70(int16_t arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_2c
    __builtin_memset(&var_2c, 0, 0x24)
    uint32_t eax_2 = zx.d(arg2)
    int32_t var_20 = eax_2 & 0x1f
    uint32_t eax_4 = zx.d(arg1)
    int32_t var_1c = (eax_2 u>> 5 & 0xf) - 1
    int32_t var_18 = (eax_2 u>> 9) + 0x50
    var_2c = (eax_4 & 0x1f) * 2
    int32_t var_c = 0xffffffff
    uint32_t var_24 = eax_4 u>> 0xb
    int32_t var_28 = eax_4 u>> 5 & 0x3f
    int32_t result = sub_685dae(&var_2c)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
