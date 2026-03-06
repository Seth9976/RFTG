// 函数名称: sub_53f4e0
// 虚拟地址: 0x53f4e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_53f4e0(float* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ecx_1 = *arg2
    long double x87_r6 = fconvert.t(255.0)
    *arg1 = fconvert.s(float.t(zx.d(ecx_1.b)) / x87_r6)
    arg1[1] = fconvert.s(float.t(zx.d((ecx_1 u>> 8).b)) / x87_r6)
    long double x87_r6_4 = float.t(zx.d((ecx_1 u>> 0x10).b))
    arg1[2] = fconvert.s(x87_r6_4 / x87_r6_4)
    uint32_t result = sub_53f260(arg1)
    *arg2 = result
    return result
}
