// 函数名称: sub_4d5e80
// 虚拟地址: 0x4d5e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d5e80(float* arg1, int32_t, float* arg3)
{
    // 第一条实际指令: *arg3 = fconvert.s(fconvert.t(*arg1))
    *arg3 = fconvert.s(fconvert.t(*arg1))
    arg3[1] = fconvert.s(fconvert.t(arg1[1]))
    arg3[2] = fconvert.s(fconvert.t(arg1[2]))
    arg3[3] = fconvert.s(fconvert.t(arg1[4]))
    arg3[4] = fconvert.s(fconvert.t(arg1[5]))
    arg3[5] = fconvert.s(fconvert.t(arg1[6]))
    arg3[6] = fconvert.s(fconvert.t(arg1[8]))
    arg3[7] = fconvert.s(fconvert.t(arg1[9]))
    arg3[8] = fconvert.s(fconvert.t(arg1[0xa]))
}
