// 函数名称: sub_53f260
// 虚拟地址: 0x53f260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_53f260(int32_t* arg1)
{
    // 第一条实际指令: float edx = arg1[1]
    float edx = arg1[1]
    float ecx_1 = arg1[2]
    float edx_1 = arg1[3]
    float var_24 = ecx_1
    char eax
    int16_t x87control
    int16_t x87control_1
    eax, x87control_1 = sub_4e3930(x87control, fconvert.s(fconvert.t(*arg1)))
    int32_t ebx
    ebx.b = eax
    char eax_1
    int16_t x87control_2
    eax_1, x87control_2 = sub_4e3930(x87control_1, fconvert.s(fconvert.t(edx)))
    char var_7 = eax_1
    char eax_2
    int16_t x87control_3
    eax_2, x87control_3 = sub_4e3930(x87control_2, fconvert.s(fconvert.t(ecx_1)))
    char var_6 = eax_2
    char var_5 = sub_4e3930(x87control_3, fconvert.s(fconvert.t(edx_1)))
    int32_t esi = ebx.b.d
    return (zx.d((esi u>> 0x10).b) << 8 | zx.d((esi u>> 8).b)) << 8 | zx.d(ebx.b)
}
