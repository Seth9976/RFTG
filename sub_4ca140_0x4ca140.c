// 函数名称: sub_4ca140
// 虚拟地址: 0x4ca140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4ca140(float* arg1, int32_t, float* arg3)
{
    // 第一条实际指令: *arg1 = fconvert.s(fconvert.t(*arg3))
    *arg1 = fconvert.s(fconvert.t(*arg3))
    arg1[1] = fconvert.s(fconvert.t(arg3[1]))
    arg1[2] = fconvert.s(fconvert.t(arg3[2]))
    arg1[3] = fconvert.s(fconvert.t(arg3[1]))
    arg1[4] = fconvert.s(fconvert.t(*arg3))
    arg1[5] = fconvert.s(fconvert.t(arg3[3]))
    arg1[6] = fconvert.s(fconvert.t(arg3[2]))
    arg1[7] = fconvert.s(fconvert.t(arg3[3]))
}
