// 函数名称: sub_4e3690
// 虚拟地址: 0x4e3690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4e3690(float* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: uint8_t edx_1 = (arg3 u>> 0x10).b
    uint8_t edx_1 = (arg3 u>> 0x10).b
    char var_6 = arg3.b
    uint8_t var_5 = (arg3 u>> 0x18).b
    uint8_t var_7 = (arg3 u>> 8).b
    long double x87_r6 = fconvert.t(255.0)
    int32_t ecx_2 = edx_1.d
    *arg1 = fconvert.s(float.t(zx.d(edx_1)) / x87_r6)
    arg1[1] = fconvert.s(float.t(zx.d((ecx_2 u>> 8).b)) / x87_r6)
    long double x87_r6_6 = float.t(ecx_2 u>> 0x18)
    arg1[2] = fconvert.s(float.t(zx.d((ecx_2 u>> 0x10).b)) / x87_r6)
    arg1[3] = fconvert.s(x87_r6_6 / x87_r6_6)
}
