// 函数名称: sub_67e820
// 虚拟地址: 0x67e820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_67e820(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1ac)
    void* esi = *(arg1 + 0x1ac)
    
    if (*(esi + 0x10) != 0)
        if (*(arg1 + 0x50) != 0 && sub_67dfd0(arg1) != 0)
            *(esi + 0xc) = sub_67e130
            *(arg1 + 0x9c) = 0
            return 
        
        *(esi + 0xc) = sub_67de50
    
    *(arg1 + 0x9c) = 0
}
