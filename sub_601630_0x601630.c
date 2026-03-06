// 函数名称: sub_601630
// 虚拟地址: 0x601630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_601630()
{
    // 第一条实际指令: int32_t var_804[0x200]
    int32_t var_804[0x200]
    sub_5d0b20(&var_804)
    
    for (uint32_t uCode_1 = 0; uCode_1 u< 0x80; uCode_1 += 1)
        int32_t eax_1 = *((uCode_1 << 2) + &data_6b8d78)
        
        if (eax_1 != 0 && (var_804[eax_1] & 0x40000000) == 0 && eax_1 != 0x35
                && (eax_1 s< 0x1e || eax_1 s> 0x27))
            uint32_t uCode = MapVirtualKeyW(uCode_1, MAPVK_VSC_TO_VK)
            
            if (uCode != 0)
                int32_t eax_3 = MapVirtualKeyW(uCode, MAPVK_VK_TO_CHAR) & 0x7fff
                
                if (eax_3 != 0)
                    if (eax_3 - 0x41 u<= 0x19)
                        eax_3 += 0x20
                    
                    int32_t __saved_ebp
                    (&__saved_ebp)[eax_1 - 0x200] = eax_3
    
    return sub_5d0b40(0, &var_804, 0x200)
}
