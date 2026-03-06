// 函数名称: sub_4bb000
// 虚拟地址: 0x4bb000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4bb000(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4, float arg5)
{
    // 第一条实际指令: void* eax
    void* eax
    int32_t edx
    eax, edx = sub_4f4900(arg1)
    int32_t* eax_3 = sub_4f5350(arg1, edx, arg3, arg5)
    float edx_1 = eax_3[1]
    float var_24 = *eax_3
    float ecx_2 = eax_3[2]
    float edx_2 = eax_3[3]
    *(arg4 + 0x30) = *(eax + 0xb4)
    float eax_5
    int32_t edx_3
    eax_5, edx_3 = sub_40af40(&var_24)
    long double x87_r7_1 = fconvert.t(ecx_2) - fconvert.t(var_24)
    *(arg4 + 0x14) = edx_3
    *(arg4 + 0x10) = eax_5
    *(arg4 + 0x18) = fconvert.s(x87_r7_1)
    *(arg4 + 0x1c) = fconvert.s(fconvert.t(edx_2) - fconvert.t(edx_1))
    *(arg4 + 0x34) = *(eax + 0xb8)
    *(arg4 + 0x3c) = *(eax + 0xbc)
    *(arg4 + 0x40) = 0xff787260
    *(arg4 + 0x44) = 0xffdfd6b8
    *(arg4 + 0x20) = 0
    *(arg4 + 0x24) = 0
    long double x87_r7_5 = fconvert.t(*(eax + 0xc0)) * fconvert.t(*(arg5 i+ 0xc))
    *(arg4 + 0x48) = 0xa
    *(arg4 + 0x54) = 2
    *(arg4 + 0x38) = fconvert.s(x87_r7_5)
    *(arg4 + 0x4c) = fconvert.s(fconvert.t(*(arg4 + 0x18)) - fconvert.t(25.0))
    return arg5
}
