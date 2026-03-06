// 函数名称: sub_55b480
// 虚拟地址: 0x55b480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_55b480(float* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: float var_10 = fconvert.s(fconvert.t(arg3[1]))
    float var_10 = fconvert.s(fconvert.t(arg3[1]))
    float var_c = fconvert.s(fconvert.t(arg3[2]))
    *arg1 = fconvert.s(fconvert.t(*arg3))
    arg1[1] = var_10
    arg1[2] = var_c
    arg1[3] = fconvert.s(float.t(0))
}
