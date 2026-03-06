// 函数名称: sub_60c300
// 虚拟地址: 0x60c300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60c300(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x134)
    void* esi = *(arg1 + 0x134)
    void* edi = *(arg2 + 0x44)
    sub_609b10(arg1)
    
    if (*(edi + 0x30) != 0)
        (*(esi + 0xe4))(0x84c2)
        (*(esi + 0x54))(*(edi + 4))
        (*(esi + 0xe4))(0x84c1)
        (*(esi + 0x54))(*(edi + 4))
        (*(esi + 0xe4))(0x84c0)
    
    (*(esi + 0x54))(*(edi + 4))
    return 0
}
