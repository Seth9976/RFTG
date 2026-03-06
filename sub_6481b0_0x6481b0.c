// 函数名称: sub_6481b0
// 虚拟地址: 0x6481b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6481b0(void* arg1, double arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2)
    long double x87_r7 = fconvert.t(arg2)
    int32_t eax = sub_685f40(x87_r7)
    arg2:4.d = eax
    long double x87_r7_1 = x87_r7 - float.t(arg2:4.d)
    int32_t* eax_1 = arg4 i+ (eax << 2)
    int32_t result = *(arg1 + 0x1c)
    *(*(result + (arg3 << 2) + 0xb24) + 0x20) = fconvert.s(fconvert.t(fconvert.s(
        x87_r7_1 * float.t(eax_1[1]) + (float.t(1) - x87_r7_1) * float.t(*eax_1))))
    return result
}
