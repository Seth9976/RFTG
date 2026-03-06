// 函数名称: sub_4eb780
// 虚拟地址: 0x4eb780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4eb780(void* arg1, int32_t, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax_2 = (*(arg1 + 0x2c) + arg3) * arg3
    int32_t ecx_2 = (eax_2 << 0xf) + not.d(eax_2)
    int32_t ecx_3 = (ecx_2 u>> 0xc ^ ecx_2) * 5
    int32_t eax_10 = (ecx_3 u>> 4 ^ ecx_3) * 0x809
    return fconvert.t(fconvert.s(fconvert.t(((eax_10 u>> 0x10 ^ eax_10) & 0x7fffff) | 0x3f800000)
        - fconvert.t(1.0)))
}
