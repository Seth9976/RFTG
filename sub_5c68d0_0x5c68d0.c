// 函数名称: sub_5c68d0
// 虚拟地址: 0x5c68d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5c68d0(int32_t arg1)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    
    if ((ebx & 0x2000) != 0)
        ebx |= 0x200
        
        if (sub_5c66c0(0x2000) != 0)
            sub_5c8760()
        
        sub_5c6600(0x2000)
    
    if ((ebx & 0x200) != 0)
        ebx |= 0x4000
        
        if (sub_5c66c0(0x200) != 0)
            sub_5c6be0()
        
        sub_5c6600(0x200)
    
    if ((ebx & 0x1000) != 0)
        if (sub_5c66c0(0x1000) != 0)
            sub_5c7a40()
        
        sub_5c6600(0x1000)
    
    if ((ebx.b & 0x10) != 0)
        if (sub_5c66c0(0x10) != 0)
            sub_5c8a50()
        
        sub_5c6600(0x10)
    
    if ((ebx.b & 0x20) != 0)
        ebx |= 0x4000
        
        if (sub_5c66c0(0x20) != 0)
            sub_5cb7e0()
        
        sub_5c6600(0x20)
    
    if ((ebx.b & 1) != 0)
        if (sub_5c66c0(1) != 0)
            sub_5cbdc0()
        
        sub_5c6600(1)
    
    if ((ebx & 0x4000) == 0)
        return 
    
    if (sub_5c66c0(0x4000) != 0)
        sub_5cbfb0()
        sub_5c7200()
    
    return sub_5c6600(0x4000) __tailcall
}
