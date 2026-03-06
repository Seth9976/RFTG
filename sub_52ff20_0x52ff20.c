// 函数名称: sub_52ff20
// 虚拟地址: 0x52ff20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_52ff20(int32_t arg1)
{
    // 第一条实际指令: sub_52fdf0()
    sub_52fdf0()
    DragAcceptFiles(data_30785e0, 1)
    data_30d950c = fconvert.s(fconvert.t(0.5f))
    data_30d74e8 = arg1
    data_30da51c = 0
    data_30da524 = 0
    data_30da525 = 0
    data_30d9518 = 0x3e8
    void var_14
    int32_t* eax_1 = sub_524d70(&var_14)
    int32_t edx = eax_1[1]
    float var_24 = *eax_1
    int32_t var_20 = edx
    int32_t var_1c = eax_1[2]
    int32_t var_18 = eax_1[3]
    float eax_2
    float edx_2
    eax_2, edx_2 = sub_40af40(&var_24)
    long double x87_r6 = fconvert.t(100.0)
    data_30d9510 = fconvert.s(fconvert.t(eax_2) - x87_r6)
    data_30da528 = 0xffffffff
    data_30da52c = 0xffffffff
    data_30d9514 = fconvert.s(fconvert.t(edx_2) - x87_r6)
    return sub_528280(0)
}
