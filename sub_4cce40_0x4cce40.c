// 函数名称: sub_4cce40
// 虚拟地址: 0x4cce40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4cce40(float* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: float var_8 = fconvert.s(fconvert.t(arg1[3]) * fconvert.t(*arg3) + fconvert.t(arg1[4]) * fconvert.t(arg3[1]) + fconvert.t(arg1[5]))
    float var_8 = fconvert.s(fconvert.t(arg1[3]) * fconvert.t(*arg3)
        + fconvert.t(arg1[4]) * fconvert.t(arg3[1]) + fconvert.t(arg1[5]))
    return fconvert.s(fconvert.t(arg1[1]) * fconvert.t(arg3[1]) + fconvert.t(*arg1) * fconvert.t(*arg3)
        + fconvert.t(arg1[2]))
}
