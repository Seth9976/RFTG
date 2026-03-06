// 函数名称: sub_5c9fc0
// 虚拟地址: 0x5c9fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5c9fc0(void* arg1)
{
    // 第一条实际指令: void* esi = data_bed820
    void* esi = data_bed820
    int32_t ecx = *(esi + 0x60)
    
    if (ecx == 0)
        return 
    
    int32_t eax_1 = *(arg1 + 0x30)
    
    if ((eax_1 & 0x100) != 0 && (eax_1 & 0x200) != 0)
        ecx(esi, arg1, 1)
        return 
    
    ecx(esi, arg1, 0)
}
