// 函数名称: sub_54b8d0
// 虚拟地址: 0x54b8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_54b8d0(float* arg1, int32_t arg2)
{
    // 第一条实际指令: float var_28 = fconvert.s(fconvert.t(*arg1))
    float var_28 = fconvert.s(fconvert.t(*arg1))
    float var_24 = fconvert.s(fconvert.t(arg1[3]))
    float var_20 = fconvert.s(fconvert.t(arg1[6]))
    float var_1c = fconvert.s(fconvert.t(arg1[1]))
    float var_18 = fconvert.s(fconvert.t(arg1[4]))
    float var_14 = fconvert.s(fconvert.t(arg1[7]))
    float var_10 = fconvert.s(fconvert.t(arg1[2]))
    float var_c = fconvert.s(fconvert.t(arg1[5]))
    float var_8 = fconvert.s(fconvert.t(arg1[8]))
    __builtin_memcpy(arg2, &var_28, 0x24)
}
