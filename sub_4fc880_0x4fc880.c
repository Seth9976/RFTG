// 函数名称: sub_4fc880
// 虚拟地址: 0x4fc880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4fc880(float* arg1, float* arg2, float* arg3, float* arg4 @ esi)
{
    // 第一条实际指令: *arg1 = fconvert.s((fconvert.t(*arg4) - fconvert.t(*arg3)) * fconvert.t(*arg2) + fconvert.t(*arg3))
    *arg1 = fconvert.s((fconvert.t(*arg4) - fconvert.t(*arg3)) * fconvert.t(*arg2) + fconvert.t(*arg3))
    arg1[2] =
        fconvert.s((fconvert.t(arg4[2]) - fconvert.t(*arg3)) * fconvert.t(*arg2) + fconvert.t(*arg3))
    arg1[1] = fconvert.s((fconvert.t(arg4[1]) - fconvert.t(arg3[1])) * fconvert.t(arg2[1])
        + fconvert.t(arg3[1]))
    arg1[3] = fconvert.s((fconvert.t(arg4[3]) - fconvert.t(arg3[1])) * fconvert.t(arg2[1])
        + fconvert.t(arg3[1]))
}
