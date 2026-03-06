// 函数名称: sub_57a310
// 虚拟地址: 0x57a310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_57a310()
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = data_3160098 == 0
    data_3160098 = eax.b
    int32_t ecx
    long double x87_r7_1
    
    if (eax.b == 0)
        x87_r7_1 = float.t(0)
    else
        eax, ecx = sub_4fa9a0(data_273ac24)
        long double x87_r7 = float.t(eax)
        eax.b = data_3160098
        x87_r7_1 = x87_r7 / fconvert.t(1000.0)
    
    int32_t var_10 = ecx
    return sub_4fa8a0(data_273ac24, zx.d(eax.b), fconvert.s(fconvert.t(fconvert.s(x87_r7_1))))
}
