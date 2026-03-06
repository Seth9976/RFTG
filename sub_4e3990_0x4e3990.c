// 函数名称: sub_4e3990
// 虚拟地址: 0x4e3990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4e3990(float arg1, float arg2, float arg3, float arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_10 = ecx
    char eax
    int16_t x87control
    int16_t x87control_1
    eax, x87control_1 = sub_4e3930(x87control, fconvert.s(fconvert.t(arg1)))
    int32_t ebx
    ebx.b = eax
    var_8.b = ebx.b
    char eax_1
    int16_t x87control_2
    eax_1, x87control_2 = sub_4e3930(x87control_1, fconvert.s(fconvert.t(arg2)))
    var_8:1.b = eax_1
    char eax_2
    int16_t x87control_3
    eax_2, x87control_3 = sub_4e3930(x87control_2, fconvert.s(fconvert.t(arg3)))
    var_8:2.b = eax_2
    var_8:3.b = sub_4e3930(x87control_3, fconvert.s(fconvert.t(arg4)))
    return (((((var_8 u>> 0x18 << 8) + zx.d(ebx.b)) << 8) + zx.d((var_8 u>> 8).b)) << 8)
        + zx.d((var_8 u>> 0x10).b)
}
