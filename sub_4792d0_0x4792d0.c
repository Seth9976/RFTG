// 函数名称: sub_4792d0
// 虚拟地址: 0x4792d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4792d0(void* arg1, void* arg2)
{
    // 第一条实际指令: void var_50
    void var_50
    int32_t eax_1 = __security_cookie ^ &var_50
    int32_t edx
    void* eax_4 = sub_50ce70(&var_50, edx, arg2, &var_50, arg1)
    float var_2c[0x6]
    __builtin_memcpy(&var_2c, eax_4, 0x20)
    float var_14
    long double x87_r7 = fconvert.t(var_14)
    long double x87_r7_1
    
    if (*(data_27e7a54 + 0x18) != 0xc)
        x87_r7_1 = x87_r7 - fconvert.t(0.10000000149011612)
    else
        x87_r7_1 = x87_r7 - fconvert.t(0.20000000298023224)
    
    float var_14_1 = fconvert.s(x87_r7_1)
    sub_4075c0()
    sub_478b90(eax_4, 0x30d6f44, &var_2c, data_27e7a40 + 0xa8)
    sub_407670()
    sub_5a6aba(eax_1 ^ &var_50)
    return 0
}
