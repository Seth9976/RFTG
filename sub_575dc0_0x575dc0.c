// 函数名称: sub_575dc0
// 虚拟地址: 0x575dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_575dc0(int32_t arg1, int32_t arg2, int32_t arg3, float arg4, void* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    var_c.b = 0xff
    var_c:1.w = 0xffff
    var_c:3.b = 0x32
    int32_t eax = var_c
    var_c = eax
    int32_t eax_1
    int80_t st0
    st0, eax_1 = sub_4f67d0(eax, &var_c, nullptr, arg5, arg6, arg4, nullptr, &data_84076c)
    int32_t result
    int80_t st0_1
    st0_1, result = sub_4f67d0(eax_1, nullptr, nullptr, arg5, arg6, arg4, nullptr, nullptr)
    return result
}
