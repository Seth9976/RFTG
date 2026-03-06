// 函数名称: sub_505b50
// 虚拟地址: 0x505b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_505b50(int32_t* arg1 @ esi, float arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    *(arg1 + 0x52) = 1
    int32_t result
    int80_t st0
    st0, result = sub_505940(arg1, arg2)
    arg1[2] = fconvert.s(float.t(0))
    arg1[1] = result
    arg1[3] = result
    return result
}
