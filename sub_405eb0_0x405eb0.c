// 函数名称: sub_405eb0
// 虚拟地址: 0x405eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_405eb0(float* arg1)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(0.5)
    long double x87_r6 = fconvert.t(0.5)
    float var_8 = fconvert.s(x87_r6 * (fconvert.t(arg1[3]) + fconvert.t(arg1[1])))
    return fconvert.s((fconvert.t(arg1[2]) + fconvert.t(*arg1)) * x87_r6)
}
