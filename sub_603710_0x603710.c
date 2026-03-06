// 函数名称: sub_603710
// 虚拟地址: 0x603710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_603710(BOOL arg1)
{
    // 第一条实际指令: BOOL ho = arg1
    BOOL ho = arg1
    void* esi = *(ho + 0x74)
    
    if (esi != 0)
        HDC hdc = *(esi + 0xc)
        
        if (hdc != 0)
            DeleteDC(hdc)
            *(esi + 0xc) = 0
        
        ho = *(esi + 0x10)
        
        if (ho != 0)
            ho = DeleteObject(ho)
            *(esi + 0x10) = 0
    
    return ho
}
