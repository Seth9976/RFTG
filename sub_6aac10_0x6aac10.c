// 函数名称: sub_6aac10
// 虚拟地址: 0x6aac10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_6aac10()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_1c = ecx
    int16_t x87control
    long double st0
    st0, x87control = sub_406680(fconvert.s(fconvert.t(4.71238899f)))
    float result = fconvert.s(st0)
    int32_t mxcsr
    float var_c = fconvert.s(fconvert.t(fconvert.s(sub_686860(mxcsr, x87control, 
        fconvert.t(4.7123889923095703)))))
    data_30d74a8 = result
    data_30d74ac = var_c
    return result
}
