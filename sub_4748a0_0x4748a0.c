// 函数名称: sub_4748a0
// 虚拟地址: 0x4748a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4748a0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7 = fconvert.t(0.52359879016876221)
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    void* eax = data_27e7fd0
    data_307ccd0 = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    data_307cd00 = 0
    data_307ccd8 = fconvert.s(fconvert.t(0.5f))
    data_307ccdc = fconvert.s(fconvert.t(1000f))
    data_307cd04 = fconvert.s(float.t(0))
    data_307ccd4 = fconvert.s(float.t(*(eax + 0x18)) / float.t(*(eax + 0x14)))
    __builtin_memcpy(0x307cce0, &data_be4c5c, 0x20)
    sub_40c520(&data_307cd0c)
    sub_4bb100(&data_307d094)
    sub_416a30(&data_307d594)
    sub_4070b0(&data_307d8b8)
    sub_4b4f80(&data_307d8cc)
    int32_t eax_1
    int80_t st0_4
    st0_4, eax_1 = sub_4f6f00(data_307c748)
    data_307c74c
    data_307d974 = eax_1
    sub_505790(0x307d980, 0x8782fc, 2)
    sub_413e30()
    int32_t eax_2
    int80_t st0_6
    st0_6, eax_2 = sub_4f6f00(data_307c1a4)
    int32_t* ecx_3 = data_307c1a0
    data_307dafc = eax_2
    int32_t eax_3
    int80_t st0_7
    st0_7, eax_3 = sub_4f6f00(ecx_3)
    int32_t* ecx_4 = data_307c184
    data_307db10 = eax_3
    int32_t eax_4
    int80_t st0_8
    st0_8, eax_4 = sub_4f6f00(ecx_4)
    int32_t* ecx_5 = data_307c76c
    data_307db24 = eax_4
    int32_t eax_5
    int80_t result
    result, eax_5 = sub_4f6f00(ecx_5)
    data_307cccc = eax_5
    *(sub_4fc3d0(&data_be1cb8, eax_5) + 0x2c) = sub_474560
    return result
}
