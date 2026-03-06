// 函数名称: sub_60b070
// 虚拟地址: 0x60b070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60b070(uint32_t arg1)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x134)
    void* edi = *(arg1 + 0x134)
    sub_609b10(arg1)
    long double x87_r6 = fconvert.t(0.0039215688593685627)
    (*(edi + 0x48))(fconvert.s(fconvert.t(fconvert.s(x87_r6 * float.t(zx.d(*(arg1 + 0x12c)))))), 
        fconvert.s(fconvert.t(fconvert.s(float.t(zx.d(*(arg1 + 0x12d))) * x87_r6))), 
        fconvert.s(fconvert.t(fconvert.s(float.t(zx.d(*(arg1 + 0x12e))) * x87_r6))), 
        fconvert.s(fconvert.t(fconvert.s(float.t(zx.d(*(arg1 + 0x12f))) * x87_r6))))
    (*(edi + 0x44))(0x4000)
    return 0
}
