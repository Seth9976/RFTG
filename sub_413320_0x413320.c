// 函数名称: sub_413320
// 虚拟地址: 0x413320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_413320(float* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: *arg1 = fconvert.s(fconvert.t(arg2[1]) * fconvert.t(arg3[2]) - fconvert.t(arg2[2]) * fconvert.t(arg3[1]))
    *arg1 = fconvert.s(fconvert.t(arg2[1]) * fconvert.t(arg3[2])
        - fconvert.t(arg2[2]) * fconvert.t(arg3[1]))
    arg1[1] =
        fconvert.s(fconvert.t(arg2[2]) * fconvert.t(*arg3) - fconvert.t(*arg2) * fconvert.t(arg3[2]))
    arg1[2] =
        fconvert.s(fconvert.t(*arg2) * fconvert.t(arg3[1]) - fconvert.t(*arg3) * fconvert.t(arg2[1]))
}
