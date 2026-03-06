// 函数名称: sub_5b447c
// 虚拟地址: 0x5b447c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5b447c(double arg1, int32_t arg2) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    var_c.q = fconvert.d(fconvert.t(arg1))
    var_8:2.w = ((arg2 + 0x3fe) << 4).w | (arg1:6.w & 0x800f)
    return fconvert.t(var_c.q)
}
