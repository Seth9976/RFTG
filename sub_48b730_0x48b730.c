// 函数名称: sub_48b730
// 虚拟地址: 0x48b730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_48b730()
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(0.52359879016876221)
    long double x87_r7 = fconvert.t(0.52359879016876221)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    void* eax = data_27e7fd0
    data_30929a4 = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    data_30929d4 = 0
    data_30929ac = fconvert.s(fconvert.t(0.150000006f))
    data_30929b0 = fconvert.s(fconvert.t(200f))
    data_30929d8 = fconvert.s(float.t(0))
    int32_t eax_1 = data_307c76c
    data_30929a8 = fconvert.s(float.t(*(eax + 0x18)) / float.t(*(eax + 0x14)))
    __builtin_memcpy(0x30929b4, &data_be4c5c, 0x20)
    __builtin_memset(0x30929e8, &data_840614, 0x1c)
    data_30d6f38 = eax_1
    data_3092a04 = *(sub_510a30() + 0x4cc)
    return sub_5abfc0(&data_30d6f0c, 0, 0x2b)
}
