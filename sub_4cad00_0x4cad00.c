// 函数名称: sub_4cad00
// 虚拟地址: 0x4cad00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4cad00(void* arg1, float arg2, float arg3, int32_t arg4, float arg5)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg5)
    long double x87_r7 = fconvert.t(arg5)
    float var_28 = fconvert.s(x87_r7)
    long double x87_r6 = float.t(0)
    float var_1c = fconvert.s(x87_r6)
    float var_10 = fconvert.s(x87_r6)
    float var_24 = fconvert.s(x87_r6)
    float var_c = fconvert.s(x87_r6)
    float var_18 = fconvert.s(x87_r7)
    float var_20 = fconvert.s(fconvert.t(arg2))
    float var_14 = fconvert.s(fconvert.t(arg3))
    float var_8 = fconvert.s(float.t(1))
    float var_4c[0x9]
    sub_413350(&var_28, &var_4c, 0x840974)
    int32_t edi
    return sub_4caaf0(edi, arg1, &var_4c, arg4, 0xffffffff)
}
