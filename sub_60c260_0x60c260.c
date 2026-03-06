// 函数名称: sub_60c260
// 虚拟地址: 0x60c260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60c260(int32_t arg1, void* arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: int32_t* esi = *(arg2 + 0x44)
    int32_t* esi = *(arg2 + 0x44)
    void* edi = *(arg1 + 0x134)
    sub_609b10(arg1)
    (*(edi + 0x64))(esi[1])
    
    if (esi[0xc] != 0)
        (*(edi + 0xe4))(0x84c2)
        (*(edi + 0x38))(esi[1], esi[0xe])
        (*(edi + 0xe4))(0x84c1)
        (*(edi + 0x38))(esi[1], esi[0xd])
        (*(edi + 0xe4))(0x84c0)
    
    (*(edi + 0x38))(esi[1], *esi)
    
    if (arg3 != 0)
        *arg3 = fconvert.s(fconvert.t(esi[2]))
    
    if (arg4 != 0)
        *arg4 = fconvert.s(fconvert.t(esi[3]))
    
    return 0
}
