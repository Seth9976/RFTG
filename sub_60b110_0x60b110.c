// 函数名称: sub_60b110
// 虚拟地址: 0x60b110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60b110(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x134)
    void* esi = *(arg1 + 0x134)
    sub_60b010(arg1)
    long double x87_r7_1 = fconvert.t(0.5f)
    (*(esi + 0xd0))(fconvert.s(x87_r7_1), fconvert.s(x87_r7_1), fconvert.s(float.t(0)))
    (*(esi + 0xd8))(2, 0x1406, 0, arg2)
    (*(esi + 0x68))(0x8074)
    (*(esi + 0x5c))(0, 0, arg3)
    (*(esi + 0x58))(0x8074)
    long double x87_r7_3 = fconvert.t(-0.5f)
    (*(esi + 0xd0))(fconvert.s(x87_r7_3), fconvert.s(x87_r7_3), fconvert.s(float.t(0)))
    return 0
}
