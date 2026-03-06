// 函数名称: sub_530960
// 虚拟地址: 0x530960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __fastcallsub_530960(float* arg1, float* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg1)
    long double x87_r7 = fconvert.t(*arg1)
    long double x87_r6 = fconvert.t(arg1[2])
    x87_r6 - x87_r7
    long double x87_r7_2
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        *arg2 = fconvert.s(fconvert.t(arg1[2]))
        x87_r7_2 = fconvert.t(*arg1)
    else
        *arg2 = fconvert.s(fconvert.t(*arg1))
        x87_r7_2 = fconvert.t(arg1[2])
    
    arg2[2] = fconvert.s(x87_r7_2)
    long double x87_r7_4 = fconvert.t(arg1[1])
    long double x87_r6_1 = fconvert.t(arg1[3])
    x87_r6_1 - x87_r7_4
    
    if ((((x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        arg2[1] = fconvert.s(fconvert.t(arg1[3]))
        arg2[3] = fconvert.s(fconvert.t(arg1[1]))
        return arg2
    
    arg2[1] = fconvert.s(fconvert.t(arg1[1]))
    arg2[3] = fconvert.s(fconvert.t(arg1[3]))
    return arg2
}
