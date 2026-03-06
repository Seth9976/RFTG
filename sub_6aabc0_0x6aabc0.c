// 函数名称: sub_6aabc0
// 虚拟地址: 0x6aabc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_6aabc0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_1c = ecx
    int16_t x87control
    long double st0
    st0, x87control = sub_406680(fconvert.s(fconvert.t(1.57079637f)))
    float result = fconvert.s(st0)
    int32_t mxcsr
    float var_c = fconvert.s(fconvert.t(fconvert.s(sub_686860(mxcsr, x87control, 
        fconvert.t(1.5707963705062866)))))
    data_30d74a0 = result
    data_30d74a4 = var_c
    return result
}
