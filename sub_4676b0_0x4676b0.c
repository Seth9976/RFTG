// 函数名称: sub_4676b0
// 虚拟地址: 0x4676b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4676b0(float* arg1, float* arg2 @ esi, float* arg3 @ edi)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1]))) / fconvert.t(arg2[1])))
    long double x87_r6 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1]))) / fconvert.t(arg2[1])))
    long double x87_r7_7 = fconvert.t(*arg3) * x87_r6
    long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1)))
    int32_t result = sub_685f40(fconvert.t(fconvert.s((x87_r5_1 + x87_r7_7)
        / fconvert.t(fconvert.s(x87_r7_7 + fconvert.t(*arg2) * x87_r6)))))
    
    if (result s> 1)
        *arg3 =
            fconvert.s((x87_r5_1 - x87_r6 * float.t(result) * fconvert.t(*arg2)) / float.t(result - 1))
        return result
    
    *arg3 = fconvert.s(float.t(0))
    return result
}
