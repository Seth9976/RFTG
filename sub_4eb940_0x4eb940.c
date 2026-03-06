// 函数名称: sub_4eb940
// 虚拟地址: 0x4eb940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4eb940(void* arg1, void* arg2 @ esi, long double arg3 @ st2, long double arg4 @ st5)
{
    // 第一条实际指令: int32_t* edi = *(arg1 + 4)
    int32_t* edi = *(arg1 + 4)
    int32_t ecx
    int32_t var_18 = ecx
    float ecx_1 = *(arg2 + 0x2f4)
    float var_18_1 = fconvert.s(float.t(0))
    float var_20 = ecx_1
    int32_t edx
    long double x87_r0
    long double x87_r1
    int32_t ecx_2 = sub_553af0(edi, x87_r0, x87_r1, fconvert.s(fconvert.t(*(arg2 + 0x2e8))), edx, ecx_1)
    float edx_1 = *(arg2 + 0x2f4)
    float var_18_2 = fconvert.s(float.t(1))
    int32_t var_20_2 = ecx_2
    long double x87_r3
    long double x87_r4
    sub_553af0(edi, x87_r3, x87_r4, fconvert.s(fconvert.t(*(arg2 + 0x2e8))), edx_1, edx_1)
    float var_8 = fconvert.s(arg4)
    return fconvert.s(arg3)
}
